int linenumber = 1;

yyerror(msg)
   char * msg;
{
   printf("line %d: %s\n", linenumber, msg);
   exit(1);
}

nextline()
{
   linenumber++;
}
