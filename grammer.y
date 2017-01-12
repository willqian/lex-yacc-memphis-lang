%start ROOT

%token EQ NE LT LE GT GE
%token PLUS MINUS MULT DIVIDE 
%token RP LP ASSIGN SEMICOLON
%token IF THEN ELSE FI
%token WHILE DO OD
%token PRINT
%token NUMBER
%token NAME

%%

ROOT:
  stmtseq {execute($1);}
;

statement:
  designator ASSIGN expression {$$ = assignment($1, $3);}
| PRINT expression {$$ = print($2);}
| IF expression THEN stmtseq ELSE stmtseq FI 
    {$$ = ifstmt($2, $4, $6);}
| IF expression THEN stmtseq FI
    {$$ = ifstmt($2, $4, empty());}
| WHILE expression DO stmtseq OD 
    {$$ = whilestmt($2, $4);}
;

stmtseq:
  stmtseq SEMICOLON statement {$$ = seq($1, $3);}
| statement {$$ = $1;}
;

expression:
  expr2 {$$ = $1;}
| expr2 EQ expr2 {$$ = eq($1, $3);}
| expr2 NE expr2 {$$ = ne($1, $3);}
| expr2 LT expr2 {$$ = lt($1, $3);}
| expr2 LE expr2 {$$ = le($1, $3);}
| expr2 GT expr2 {$$ = gt($1, $3);}
| expr2 GE expr2 {$$ = ge($1, $3);}
;

expr2:
  expr3 {$$ = $1;}
| expr2 PLUS expr3 {$$ = plus($1, $3);}
| expr2 MINUS expr3 {$$ = minus($1, $3);}
;

expr3:
  expr4 {$$ = $1;}
| expr3 MULT expr4 {$$ = mult($1, $3);}
| expr3 DIVIDE expr4 {$$ = divide($1, $3);}
;

expr4:
  PLUS expr4 {$$ = $2;}
| MINUS expr4 {$$ = neg($2);}
| LP expression RP {$$ = $2;}
| NUMBER {$$ = number($1);}
| designator {$$ = $1;}
;

designator:
  NAME {$$ = name($1);}
;
%%
int main()
{
    return yyparse();
}
int linenumber = 1;
yyerror(char *msg)
{
    printf("line %d: %s\n", linenumber, msg);
    exit(1);
}
nextline()
{
    linenumber++;
}
