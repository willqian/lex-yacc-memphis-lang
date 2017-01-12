// domrts.cpp

#include <stdlib.h>
#include <stdio.h>

void MatchError(char *filename, int line)
{
   printf("\n");
   printf("No rule applicable in match statement at line %d of file '%s'\n",
      line, filename);
   exit(1);
}
