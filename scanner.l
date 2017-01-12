%{
#include <stdlib.h>
#include "y.tab.h"
extern void nextline();
extern int yylval;
%}
%%
"="     {return EQ;}
"!="    {return NE;}
"<"     {return LT;}
"<="    {return LE;}
">"     {return GT;}
">="    {return GE;}
"+"     {return PLUS;}
"-"     {return MINUS;}
"*"     {return MULT;}
"/"     {return DIVIDE;}
")"     {return RP;}
"("     {return LP;}
":="    {return ASSIGN;}
";"     {return SEMICOLON;}
"if"    {return IF;}
"then"  {return THEN;}
"else"  {return ELSE;}
"fi"    {return FI;}
"while" {return WHILE;}
"do"    {return DO;}
"od"    {return OD;}
"print" {return PRINT;}
[0-9]+  {yylval = atoi(yytext); return NUMBER;}
[a-z]   {yylval = yytext[0] - 'a'; return NAME;}
\       {;}
\n      {nextline();}
\t      {;}
"//".*\n {nextline();}
.       {yyerror("illegal token");}
%%
#ifndef yywrap
yywrap() { return 1; }
#endif
