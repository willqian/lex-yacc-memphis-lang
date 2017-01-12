#include <stdio.h>

/*----------------------------------------------------------------------------*/

main (argc, argv)
   int argc;
   char **argv;

{
   Arguments (argc, argv);
   StoreBegin();
   ROOT();
   exit(0);
}

/*----------------------------------------------------------------------------*/

int sigmode;
char basename[100];
extern FILE *yyin;

Arguments (argc, argv)
   int argc;
   char **argv;
{
   int arg;

   if (argc == 1)
      usage();

   arg = 1;

   sigmode = 0;

   if (argv[arg][0] == '-') {
      if (strcmp(argv[arg], "-h") == 0) {
	 sigmode = 1;
	 arg++;
      }
      else {
	 printf("invalid option '%s'\n", argv[arg]);
	 exit(1);
      }
   }

   if (arg < (argc-1)) {
      printf("missing filename\n");
      exit(1);
   }
   else {
      int len = strlen(argv[arg]);
      int i;
      
      if (len < 3) {
         printf("invalid file name\n");
         exit(1);
      }
      if ((argv[arg][len-2] != '.') && (argv[arg][len-1] != 'm')) {
         printf("file name must end with '.m'\n");
	 exit(1);
      }

      for( i = 0; i <= len-3; i++) basename[i] = argv[arg][i];

      yyin = fopen (argv[arg], "r");

      if (yyin == NULL) {
	 printf("cannot open '%s'\n", argv[arg]);
	 exit(1);
      }

      arg++;
   }

   if (arg != argc) {
      printf("too many arguments\n");
      exit(1);
   }

}

/*----------------------------------------------------------------------------*/

usage ()
{
   printf("usage:  memphis [ -h ] sourcefile\n");
   exit(1);
}

/*----------------------------------------------------------------------------*/

int is_sigmode()
{
   return sigmode;
}

/*----------------------------------------------------------------------------*/

get_basename(ref_str)
   char **ref_str;
{
   *ref_str = &basename[0];
}

/*----------------------------------------------------------------------------*/

struct FILEENTRY {
   struct FILEENTRY *next;
   char *name;
};

struct FILEENTRY *actfileentry = 0;

struct FILEENTRY *lastfileentry;

/*----------------------------------------------------------------------------*/

opennextfile()
{
   yyin = fopen(actfileentry->name, "r");

   if (yyin != NULL) {
      actfileentry = actfileentry-> next;
   }
   else {
      /* error */
      printf("Cannot open imported module: '%s'\n", actfileentry->name);
      exit(1);
   }
}

/*----------------------------------------------------------------------------*/

int nomorefiles() {
   return actfileentry == 0;
}

/*----------------------------------------------------------------------------*/

enterfilename(Str)
   char *Str;
{
   struct FILEENTRY *newone;

   newone = (struct FILEENTRY *) malloc (sizeof (struct FILEENTRY));
   newone->name = (char *) malloc (strlen(Str) + 5);
   sprintf(newone->name, "%s.sig\0", Str);
   newone->next = 0;

   if (lastfileentry == 0)
      lastfileentry = newone;
   else
      lastfileentry->next = newone;

   lastfileentry = newone;
   if (actfileentry == 0) actfileentry = newone;
}
