%{
#include "y.tab.h"
extern int yylval;
%}
%%
"="     { return EQ; }
"!="    { return NE; }
"<"     { return LT; }
"<="    { return LE; }
">"     { return GT; }
">="    { return GE; }
"+"     { return PLUS; }
"-"     { return MINUS; }
"*"     { return MULT; }
"/"     { return DIVIDE; }
")"     { return RPAREN; }
"("     { return LPAREN; }
":="    { return ASSIGN; }
";"     { return SEMICOLON; }
"IF"    { return IF; }
"THEN"  { return THEN; }
"ELSE"  { return ELSE; }
"FI"    { return FI; }
"WHILE" { return WHILE; }
"DO"    { return DO; }
"OD"    { return OD; }
"PRINT" { return PRINT; }
[0-9]+  { yylval = atoi(yytext); return NUMBER; }
[a-z]   { yylval = yytext[0] - 'a'; return NAME; }
\       { ; }
\n      { nextline(); }
\t      { ; }
"//".*\n { nextline(); }
.       { yyerror("illegal token"); }
%%
#ifndef yywrap
yywrap() { return 1; }
#endif
