/* text.c */

#define PRIVATE static
#define PUBLIC

#include <stdio.h>


/*==============================================================================
 *
 * FILL TEXT BUFFER
 *
 */


PRIVATE char *text;
   /* pointer to input buffer (dynamically allocated and resized */

PRIVATE textsize;
   /* current size of input buffer */

PRIVATE int textpos = 0;
   /* next free position in input buffer */

PUBLIC int startpos;
   /* start index of last item added to input buffer */
   /* defined by StoreText, used in token descriptions */

PRIVATE int do_store = 1;
   /* StoreText and StoreChar have no effect if 'do_storing' is false */


/*------------------------------------------------------------------------------
 *
 * StoreBegin()
 *
 * Initialize input to text buffer
 *
 */

#define PIECE 10000

PUBLIC StoreBegin()
{
   text = (char *) malloc(PIECE);
   textsize = PIECE;
}

/*------------------------------------------------------------------------------
 *
 * StoreChar(ch)
 *
 * store the character 'ch' into text buffer
 * (if 'do_store')
 *
 */

StoreChar(ch)
   char ch;
{
   if (do_store) {
      if (textpos == textsize) {
	 char *newtext;

	 textsize = textsize+PIECE;
	 newtext = (char *) realloc(text, textsize);

	 if (! newtext) {
	    printf("cannot allocate source buffer\n");
	    exit(1);
	 }

	 text = newtext;
      }
      text[textpos] = ch;
      textpos++;
   }
}

/*------------------------------------------------------------------------------
 *
 * StoreText(txt)
 *
 * store the text to which 'txt' points into text buffer
 * (if 'do_store')
 * 'startpos' will point to the start of the entry
 *
 */

StoreText(txt)
   char *txt;
{
   long pos;

   startpos = textpos;

   while(*txt) {
      StoreChar(*txt);
      txt++;
   }
}

/*------------------------------------------------------------------------------
 *
 * StoreEnd()
 *
 * switch off 'do_store',
 * further additions to text buffer will have no effect
 * (used to suppress storing imported files)
 *
 */

StoreEnd() {
   do_store = 0;
}

/*==============================================================================
 *
 * PROCESS TEXT BUFFER
 *
 */

PRIVATE int linecount = 1;
   /* number of input lines already processed for output */

PRIVATE int outputlines = 0;
   /* number of lines already written to output */

PRIVATE int TxtPtr = 0;
   /* index of next character in input buffer */
   /* that has to be written to output */

PRIVATE PutRange();


/*------------------------------------------------------------------------------
 *
 * SkipTo(stop)
 *
 * Skip text[TextPtr .. stop], set TxtPtr to stop+1
 *
 */

PUBLIC SkipTo(stop)
   int stop;
{
   int pos;

   for (pos = TxtPtr; pos <= stop; pos++) {
      if (text[pos] == '\n') linecount++;
   }

   TxtPtr = stop+1;
}

/*------------------------------------------------------------------------------
 *
 * EmitText(stop)
 *
 * Emit text[TxtPtr..stop], set TxtPtr to stop+1
 *
 * Output text is preceeded and followed by by line pragmas
 *
 */

PUBLIC EmitText(stop)
   int stop;
{
   char *name;

   get_basename(&name);
   Put("# line "); PutI(linecount); Put(" \""); Put(name); Put(".m\""); Nl();
   PutRange(text+TxtPtr, text+stop);
   TxtPtr = stop+1;
   Nl();
   Put("# line "); PutI(outputlines+2);
   Put(" \""); Put(name); Put(".cpp\""); Nl();
}

/*------------------------------------------------------------------------------
 *
 * EmitFinalText()
 *
 * Emit text[TxPtr..<final pos>]
 *
 */

EmitFinalText()
{
   char *name;
   get_basename(&name);
   Put("# line "); PutI(linecount); Put(" \""); Put(name); Put(".m\""); Nl();
   PutRange(text+TxtPtr, text+textpos-1);
}

/*==============================================================================
 *
 * BASIC OUTPUT
 *
 */


#define OutBufSize 6000
#define FlushPos 5000

PRIVATE char OutBuf[OutBufSize];
PRIVATE char *OutBufPtr;
PRIVATE FILE *OutFile;


/*------------------------------------------------------------------------------
 *
 * OpenOutputWithExtension(Name, Extension)
 * 
 * open 'OutFile' with name 'Name' and extension 'Extension' for output
 *
 */

OpenOutputWithExtension(Name, Extension)
   char *Name;
   char *Extension;
{
   char fullname[100];
   sprintf(fullname, "%s.%s", Name, Extension);
   OutFile = fopen(fullname, "w");

   if (OutFile == NULL) {
      printf("cannot open %s\n", Name); exit(1);
   }
   OutBufPtr = &OutBuf[0];
}

/*------------------------------------------------------------------------------
 *
 * CloseOutput()
 * 
 * flush and close 'OutFile'
 *
 */

CloseOutput ()
{
   fwrite(OutBuf, 1, OutBufPtr - &OutBuf[0], OutFile);
   fclose(OutFile);
}

/*------------------------------------------------------------------------------
 *
 * Put(Str)
 * 
 * Emit string 'Str'
 *
 */

Put(Str)
   char *Str;
{
   if (OutBufPtr > &OutBuf[FlushPos]) {
      fwrite(OutBuf, 1, OutBufPtr - &OutBuf[0], OutFile);
      OutBufPtr = &OutBuf[0];
   }

   while(*Str) *OutBufPtr++ = *Str++; 
}

/*------------------------------------------------------------------------------
 *
 * PutI(N)
 *
 * Emit integer 'N'
 *
 */

PutI (N)
   long N;
{
   if (OutBufPtr > &OutBuf[FlushPos]) {
      fwrite(OutBuf, 1, OutBufPtr - &OutBuf[0], OutFile);
      OutBufPtr = &OutBuf[0];
   }

   if (N < 0) {
      *OutBufPtr++ = '-';
      N = -N;
   }
   if (N < 10) {
      *OutBufPtr++ = N + '0';
   }
   else if (N < 100) {
      *OutBufPtr++ = N/10 + '0';
      *OutBufPtr++ = N%10 + '0';
   }
   else {
      char buf[50];
      register i;
      register n = N;

      i = 0;

      do {
	 buf[++i] = (n % 10) + '0';
	 n = n / 10;
      } while (n);

      while (i)
	 *OutBufPtr++ = buf[i--];
   }
}

/*------------------------------------------------------------------------------
 *
 * Nl()
 *
 * Emit newline
 *
 */

Nl ()
{
   if (OutBufPtr > &OutBuf[FlushPos]) {
      fwrite(OutBuf, 1, OutBufPtr - &OutBuf[0], OutFile);
      OutBufPtr = &OutBuf[0];

   }

   *OutBufPtr++ = '\n';
   outputlines++;
}

/*------------------------------------------------------------------------------
 *
 * PutRange(start, stop)
 *
 * Emit the string ranging from pointer 'start' to pointer 'stop'
 *
 */

PRIVATE PutRange(start, stop)
   char *start, *stop;
{
   char *pos;

   for (pos = start; pos <= stop; pos++) {
      if (OutBufPtr > &OutBuf[FlushPos]) {
	 fwrite(OutBuf, 1, OutBufPtr - &OutBuf[0], OutFile);
	 OutBufPtr = &OutBuf[0];
      }

      if (*pos == '\n') {
	 linecount++;
	 outputlines++;
      }

      *OutBufPtr++ = *pos; 
   }
}

/*==============================================================================
 *
 * SOURCE COORDINATES
 *
 */


#define FILECODE 1000000000
#define LINECODE 1000

/*------------------------------------------------------------------------------
 *
 * SourceReference(pos)
 *
 */

SourceReference(pos)
   long pos;
{
   long file, line;

   file = pos / FILECODE;
   pos  = pos % FILECODE;
   line = pos / LINECODE;

   Nl();
   Put("// GENERATED FROM SOURCE LINE "); PutI(line); Nl();
}

/*------------------------------------------------------------------------------
 *
 * PutPos(pos)
 *
 */

PutPos(pos)
   long pos;
{
   long file, line;

   file = pos / FILECODE;
   pos  = pos % FILECODE;
   line = pos / LINECODE;

   PutI(line);
}

/*----------------------------------------------------------------------------*/
