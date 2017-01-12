typedef long * yy;
#define yyu (-2147483647L)
static yy yynull;
extern yy yyh;
extern yy yyhx;
static yyErr(n,l)
{
yyAbort(n,"grammar", l);
}
yyeq_DECLLIST(t1, t2) yy t1, t2;
{
switch(t1[0]) {
case 1: return (t2[0] == 1)
&& yyeq_DECL((yy)t1[1], (yy)t2[1])
&& yyeq_DECLLIST((yy)t1[2], (yy)t2[2])
;
case 2: return (t2[0] == 2)
;
}
}
yyPrint_DECLLIST(t) yy t;
{
switch(t[0]) {
case 1: 
yyTerm("list");
yyFirstArg();
yyPrint_DECL((yy)t[1]);
yyNextArg();
yyPrint_DECLLIST((yy)t[2]);
yyEndArgs();
break;
case 2: 
yyTerm("nil");
yyNoArgs();
break;
}
}
yybroadcast_DECLLIST(t,In,Out,Handler)
yy t, In, *Out; int (*Handler) ();
{
yy A, B;
A = In;
if (! Handler(yybroadcast_DECLLIST, t, In, Out)) {
switch(t[0]) {
case 1: 
yybroadcast_DECL((yy)t[1], A, &B, Handler);
yybroadcast_DECLLIST((yy)t[2], B, &A, Handler);
*Out = A;
break;
case 2: 
*Out = A;
break;
}
}
}
yyeq_DECL(t1, t2) yy t1, t2;
{
switch(t1[0]) {
case 1: return (t2[0] == 1)
;
case 2: return (t2[0] == 2)
&& yyeq_IDENT((yy)t1[1], (yy)t2[1])
&& (t1[2] == t2[2])
&& (t1[3] == t2[3])
&& (t1[4] == t2[4])
;
case 3: return (t2[0] == 3)
&& yyeq_BLOCK((yy)t1[1], (yy)t2[1])
;
case 4: return (t2[0] == 4)
&& yyeq_DOMAINDEF((yy)t1[1], (yy)t2[1])
&& (t1[2] == t2[2])
&& (t1[3] == t2[3])
&& (t1[4] == t2[4])
;
}
}
yyPrint_DECL(t) yy t;
{
switch(t[0]) {
case 1: 
yyTerm("tkndecl");
yyNoArgs();
break;
case 2: 
yyTerm("withdecl");
yyFirstArg();
yyPrint_IDENT((yy)t[1]);
yyNextArg();
yyPrint_INT((yy)t[2]);
yyNextArg();
yyPrint_INT((yy)t[3]);
yyNextArg();
yyPrint_POS((yy)t[4]);
yyEndArgs();
break;
case 3: 
yyTerm("blockdecl");
yyFirstArg();
yyPrint_BLOCK((yy)t[1]);
yyEndArgs();
break;
case 4: 
yyTerm("domaindecl");
yyFirstArg();
yyPrint_DOMAINDEF((yy)t[1]);
yyNextArg();
yyPrint_INT((yy)t[2]);
yyNextArg();
yyPrint_INT((yy)t[3]);
yyNextArg();
yyPrint_POS((yy)t[4]);
yyEndArgs();
break;
}
}
yybroadcast_DECL(t,In,Out,Handler)
yy t, In, *Out; int (*Handler) ();
{
yy A, B;
A = In;
if (! Handler(yybroadcast_DECL, t, In, Out)) {
switch(t[0]) {
case 1: 
*Out = A;
break;
case 2: 
yybroadcast_IDENT((yy)t[1], A, &B, Handler);
*Out = B;
break;
case 3: 
yybroadcast_BLOCK((yy)t[1], A, &B, Handler);
*Out = B;
break;
case 4: 
yybroadcast_DOMAINDEF((yy)t[1], A, &B, Handler);
*Out = B;
break;
}
}
}
yyeq_DOMAINDEF(t1, t2) yy t1, t2;
{
switch(t1[0]) {
case 1: return (t2[0] == 1)
&& yyeq_IDENT((yy)t1[1], (yy)t2[1])
&& yyeq_FUNCTORDEFLIST((yy)t1[2], (yy)t2[2])
&& (t1[3] == t2[3])
;
}
}
yyPrint_DOMAINDEF(t) yy t;
{
switch(t[0]) {
case 1: 
yyTerm("domain");
yyFirstArg();
yyPrint_IDENT((yy)t[1]);
yyNextArg();
yyPrint_FUNCTORDEFLIST((yy)t[2]);
yyNextArg();
yyPrint_POS((yy)t[3]);
yyEndArgs();
break;
}
}
yybroadcast_DOMAINDEF(t,In,Out,Handler)
yy t, In, *Out; int (*Handler) ();
{
yy A, B;
A = In;
if (! Handler(yybroadcast_DOMAINDEF, t, In, Out)) {
switch(t[0]) {
case 1: 
yybroadcast_IDENT((yy)t[1], A, &B, Handler);
yybroadcast_FUNCTORDEFLIST((yy)t[2], B, &A, Handler);
*Out = A;
break;
}
}
}
yyeq_FUNCTORDEF(t1, t2) yy t1, t2;
{
switch(t1[0]) {
case 1: return (t2[0] == 1)
&& yyeq_IDENT((yy)t1[1], (yy)t2[1])
&& yyeq_ARGDEFLIST((yy)t1[2], (yy)t2[2])
&& (t1[3] == t2[3])
;
}
}
yyPrint_FUNCTORDEF(t) yy t;
{
switch(t[0]) {
case 1: 
yyTerm("functor");
yyFirstArg();
yyPrint_IDENT((yy)t[1]);
yyNextArg();
yyPrint_ARGDEFLIST((yy)t[2]);
yyNextArg();
yyPrint_POS((yy)t[3]);
yyEndArgs();
break;
}
}
yybroadcast_FUNCTORDEF(t,In,Out,Handler)
yy t, In, *Out; int (*Handler) ();
{
yy A, B;
A = In;
if (! Handler(yybroadcast_FUNCTORDEF, t, In, Out)) {
switch(t[0]) {
case 1: 
yybroadcast_IDENT((yy)t[1], A, &B, Handler);
yybroadcast_ARGDEFLIST((yy)t[2], B, &A, Handler);
*Out = A;
break;
}
}
}
yyeq_ARGDEF(t1, t2) yy t1, t2;
{
switch(t1[0]) {
case 1: return (t2[0] == 1)
&& yyeq_IDENT((yy)t1[1], (yy)t2[1])
&& yyeq_IDENT((yy)t1[2], (yy)t2[2])
&& (t1[3] == t2[3])
;
}
}
yyPrint_ARGDEF(t) yy t;
{
switch(t[0]) {
case 1: 
yyTerm("argdef");
yyFirstArg();
yyPrint_IDENT((yy)t[1]);
yyNextArg();
yyPrint_IDENT((yy)t[2]);
yyNextArg();
yyPrint_POS((yy)t[3]);
yyEndArgs();
break;
}
}
yybroadcast_ARGDEF(t,In,Out,Handler)
yy t, In, *Out; int (*Handler) ();
{
yy A, B;
A = In;
if (! Handler(yybroadcast_ARGDEF, t, In, Out)) {
switch(t[0]) {
case 1: 
yybroadcast_IDENT((yy)t[1], A, &B, Handler);
yybroadcast_IDENT((yy)t[2], B, &A, Handler);
*Out = A;
break;
}
}
}
yyeq_ARGDEFLIST(t1, t2) yy t1, t2;
{
switch(t1[0]) {
case 1: return (t2[0] == 1)
&& yyeq_ARGDEF((yy)t1[1], (yy)t2[1])
&& yyeq_ARGDEFLIST((yy)t1[2], (yy)t2[2])
;
case 2: return (t2[0] == 2)
;
}
}
yyPrint_ARGDEFLIST(t) yy t;
{
switch(t[0]) {
case 1: 
yyTerm("list");
yyFirstArg();
yyPrint_ARGDEF((yy)t[1]);
yyNextArg();
yyPrint_ARGDEFLIST((yy)t[2]);
yyEndArgs();
break;
case 2: 
yyTerm("nil");
yyNoArgs();
break;
}
}
yybroadcast_ARGDEFLIST(t,In,Out,Handler)
yy t, In, *Out; int (*Handler) ();
{
yy A, B;
A = In;
if (! Handler(yybroadcast_ARGDEFLIST, t, In, Out)) {
switch(t[0]) {
case 1: 
yybroadcast_ARGDEF((yy)t[1], A, &B, Handler);
yybroadcast_ARGDEFLIST((yy)t[2], B, &A, Handler);
*Out = A;
break;
case 2: 
*Out = A;
break;
}
}
}
yyeq_FUNCTORDEFLIST(t1, t2) yy t1, t2;
{
switch(t1[0]) {
case 1: return (t2[0] == 1)
&& yyeq_FUNCTORDEF((yy)t1[1], (yy)t2[1])
&& yyeq_FUNCTORDEFLIST((yy)t1[2], (yy)t2[2])
;
case 2: return (t2[0] == 2)
;
}
}
yyPrint_FUNCTORDEFLIST(t) yy t;
{
switch(t[0]) {
case 1: 
yyTerm("list");
yyFirstArg();
yyPrint_FUNCTORDEF((yy)t[1]);
yyNextArg();
yyPrint_FUNCTORDEFLIST((yy)t[2]);
yyEndArgs();
break;
case 2: 
yyTerm("nil");
yyNoArgs();
break;
}
}
yybroadcast_FUNCTORDEFLIST(t,In,Out,Handler)
yy t, In, *Out; int (*Handler) ();
{
yy A, B;
A = In;
if (! Handler(yybroadcast_FUNCTORDEFLIST, t, In, Out)) {
switch(t[0]) {
case 1: 
yybroadcast_FUNCTORDEF((yy)t[1], A, &B, Handler);
yybroadcast_FUNCTORDEFLIST((yy)t[2], B, &A, Handler);
*Out = A;
break;
case 2: 
*Out = A;
break;
}
}
}
yyeq_BLOCK(t1, t2) yy t1, t2;
{
switch(t1[0]) {
case 1: return (t2[0] == 1)
&& yyeq_BLOCKITEMLIST((yy)t1[1], (yy)t2[1])
&& (t1[2] == t2[2])
&& (t1[3] == t2[3])
;
}
}
yyPrint_BLOCK(t) yy t;
{
switch(t[0]) {
case 1: 
yyTerm("block");
yyFirstArg();
yyPrint_BLOCKITEMLIST((yy)t[1]);
yyNextArg();
yyPrint_INT((yy)t[2]);
yyNextArg();
yyPrint_INT((yy)t[3]);
yyEndArgs();
break;
}
}
yybroadcast_BLOCK(t,In,Out,Handler)
yy t, In, *Out; int (*Handler) ();
{
yy A, B;
A = In;
if (! Handler(yybroadcast_BLOCK, t, In, Out)) {
switch(t[0]) {
case 1: 
yybroadcast_BLOCKITEMLIST((yy)t[1], A, &B, Handler);
*Out = B;
break;
}
}
}
yyeq_BLOCKITEMLIST(t1, t2) yy t1, t2;
{
switch(t1[0]) {
case 1: return (t2[0] == 1)
&& yyeq_BLOCKITEM((yy)t1[1], (yy)t2[1])
&& yyeq_BLOCKITEMLIST((yy)t1[2], (yy)t2[2])
;
case 2: return (t2[0] == 2)
;
}
}
yyPrint_BLOCKITEMLIST(t) yy t;
{
switch(t[0]) {
case 1: 
yyTerm("list");
yyFirstArg();
yyPrint_BLOCKITEM((yy)t[1]);
yyNextArg();
yyPrint_BLOCKITEMLIST((yy)t[2]);
yyEndArgs();
break;
case 2: 
yyTerm("nil");
yyNoArgs();
break;
}
}
yybroadcast_BLOCKITEMLIST(t,In,Out,Handler)
yy t, In, *Out; int (*Handler) ();
{
yy A, B;
A = In;
if (! Handler(yybroadcast_BLOCKITEMLIST, t, In, Out)) {
switch(t[0]) {
case 1: 
yybroadcast_BLOCKITEM((yy)t[1], A, &B, Handler);
yybroadcast_BLOCKITEMLIST((yy)t[2], B, &A, Handler);
*Out = A;
break;
case 2: 
*Out = A;
break;
}
}
}
yyeq_BLOCKITEM(t1, t2) yy t1, t2;
{
switch(t1[0]) {
case 1: return (t2[0] == 1)
&& yyeq_MATCHSTMNT((yy)t1[1], (yy)t2[1])
;
case 2: return (t2[0] == 2)
;
case 3: return (t2[0] == 3)
&& yyeq_BLOCK((yy)t1[1], (yy)t2[1])
;
}
}
yyPrint_BLOCKITEM(t) yy t;
{
switch(t[0]) {
case 1: 
yyTerm("matchitem");
yyFirstArg();
yyPrint_MATCHSTMNT((yy)t[1]);
yyEndArgs();
break;
case 2: 
yyTerm("tknitem");
yyNoArgs();
break;
case 3: 
yyTerm("blockitem");
yyFirstArg();
yyPrint_BLOCK((yy)t[1]);
yyEndArgs();
break;
}
}
yybroadcast_BLOCKITEM(t,In,Out,Handler)
yy t, In, *Out; int (*Handler) ();
{
yy A, B;
A = In;
if (! Handler(yybroadcast_BLOCKITEM, t, In, Out)) {
switch(t[0]) {
case 1: 
yybroadcast_MATCHSTMNT((yy)t[1], A, &B, Handler);
*Out = B;
break;
case 2: 
*Out = A;
break;
case 3: 
yybroadcast_BLOCK((yy)t[1], A, &B, Handler);
*Out = B;
break;
}
}
}
yyeq_MATCHSTMNT(t1, t2) yy t1, t2;
{
switch(t1[0]) {
case 1: return (t2[0] == 1)
&& yyeq_MATCHEXPRLIST((yy)t1[1], (yy)t2[1])
&& yyeq_RULELIST((yy)t1[2], (yy)t2[2])
&& (t1[3] == t2[3])
&& (t1[4] == t2[4])
&& (t1[5] == t2[5])
&& (t1[6] == t2[6])
;
}
}
yyPrint_MATCHSTMNT(t) yy t;
{
switch(t[0]) {
case 1: 
yyTerm("match");
yyFirstArg();
yyPrint_MATCHEXPRLIST((yy)t[1]);
yyNextArg();
yyPrint_RULELIST((yy)t[2]);
yyNextArg();
yyPrint_INT((yy)t[3]);
yyNextArg();
yyPrint_INT((yy)t[4]);
yyNextArg();
yyPrint_INT((yy)t[5]);
yyNextArg();
yyPrint_POS((yy)t[6]);
yyEndArgs();
break;
}
}
yybroadcast_MATCHSTMNT(t,In,Out,Handler)
yy t, In, *Out; int (*Handler) ();
{
yy A, B;
A = In;
if (! Handler(yybroadcast_MATCHSTMNT, t, In, Out)) {
switch(t[0]) {
case 1: 
yybroadcast_MATCHEXPRLIST((yy)t[1], A, &B, Handler);
yybroadcast_RULELIST((yy)t[2], B, &A, Handler);
*Out = A;
break;
}
}
}
yyeq_MATCHEXPRLIST(t1, t2) yy t1, t2;
{
switch(t1[0]) {
case 1: return (t2[0] == 1)
&& yyeq_MATCHEXPR((yy)t1[1], (yy)t2[1])
&& yyeq_MATCHEXPRLIST((yy)t1[2], (yy)t2[2])
;
case 2: return (t2[0] == 2)
;
}
}
yyPrint_MATCHEXPRLIST(t) yy t;
{
switch(t[0]) {
case 1: 
yyTerm("list");
yyFirstArg();
yyPrint_MATCHEXPR((yy)t[1]);
yyNextArg();
yyPrint_MATCHEXPRLIST((yy)t[2]);
yyEndArgs();
break;
case 2: 
yyTerm("nil");
yyNoArgs();
break;
}
}
yybroadcast_MATCHEXPRLIST(t,In,Out,Handler)
yy t, In, *Out; int (*Handler) ();
{
yy A, B;
A = In;
if (! Handler(yybroadcast_MATCHEXPRLIST, t, In, Out)) {
switch(t[0]) {
case 1: 
yybroadcast_MATCHEXPR((yy)t[1], A, &B, Handler);
yybroadcast_MATCHEXPRLIST((yy)t[2], B, &A, Handler);
*Out = A;
break;
case 2: 
*Out = A;
break;
}
}
}
yyeq_MATCHEXPR(t1, t2) yy t1, t2;
{
switch(t1[0]) {
case 1: return (t2[0] == 1)
&& yyeq_IDENT((yy)t1[1], (yy)t2[1])
&& (t1[2] == t2[2])
&& (t1[3] == t2[3])
;
}
}
yyPrint_MATCHEXPR(t) yy t;
{
switch(t[0]) {
case 1: 
yyTerm("matchexpr");
yyFirstArg();
yyPrint_IDENT((yy)t[1]);
yyNextArg();
yyPrint_INT((yy)t[2]);
yyNextArg();
yyPrint_POS((yy)t[3]);
yyEndArgs();
break;
}
}
yybroadcast_MATCHEXPR(t,In,Out,Handler)
yy t, In, *Out; int (*Handler) ();
{
yy A, B;
A = In;
if (! Handler(yybroadcast_MATCHEXPR, t, In, Out)) {
switch(t[0]) {
case 1: 
yybroadcast_IDENT((yy)t[1], A, &B, Handler);
*Out = B;
break;
}
}
}
yyeq_RULE(t1, t2) yy t1, t2;
{
switch(t1[0]) {
case 1: return (t2[0] == 1)
&& yyeq_PATTERNLIST((yy)t1[1], (yy)t2[1])
&& yyeq_BLOCKITEMLIST((yy)t1[2], (yy)t2[2])
&& (t1[3] == t2[3])
&& (t1[4] == t2[4])
&& (t1[5] == t2[5])
&& (t1[6] == t2[6])
;
}
}
yyPrint_RULE(t) yy t;
{
switch(t[0]) {
case 1: 
yyTerm("rule");
yyFirstArg();
yyPrint_PATTERNLIST((yy)t[1]);
yyNextArg();
yyPrint_BLOCKITEMLIST((yy)t[2]);
yyNextArg();
yyPrint_INT((yy)t[3]);
yyNextArg();
yyPrint_INT((yy)t[4]);
yyNextArg();
yyPrint_INT((yy)t[5]);
yyNextArg();
yyPrint_POS((yy)t[6]);
yyEndArgs();
break;
}
}
yybroadcast_RULE(t,In,Out,Handler)
yy t, In, *Out; int (*Handler) ();
{
yy A, B;
A = In;
if (! Handler(yybroadcast_RULE, t, In, Out)) {
switch(t[0]) {
case 1: 
yybroadcast_PATTERNLIST((yy)t[1], A, &B, Handler);
yybroadcast_BLOCKITEMLIST((yy)t[2], B, &A, Handler);
*Out = A;
break;
}
}
}
yyeq_PATTERN(t1, t2) yy t1, t2;
{
switch(t1[0]) {
case 1: return (t2[0] == 1)
&& yyeq_IDENT((yy)t1[1], (yy)t2[1])
&& (t1[2] == t2[2])
&& (t1[3] == t2[3])
;
case 2: return (t2[0] == 2)
&& yyeq_IDENT((yy)t1[1], (yy)t2[1])
&& yyeq_PATTERNLIST((yy)t1[2], (yy)t2[2])
&& (t1[3] == t2[3])
&& (t1[4] == t2[4])
;
case 3: return (t2[0] == 3)
&& yyeq_IDENT((yy)t1[1], (yy)t2[1])
&& yyeq_PATTERN((yy)t1[2], (yy)t2[2])
&& (t1[3] == t2[3])
;
case 4: return (t2[0] == 4)
;
}
}
yyPrint_PATTERN(t) yy t;
{
switch(t[0]) {
case 1: 
yyTerm("id");
yyFirstArg();
yyPrint_IDENT((yy)t[1]);
yyNextArg();
yyPrint_INT((yy)t[2]);
yyNextArg();
yyPrint_POS((yy)t[3]);
yyEndArgs();
break;
case 2: 
yyTerm("term");
yyFirstArg();
yyPrint_IDENT((yy)t[1]);
yyNextArg();
yyPrint_PATTERNLIST((yy)t[2]);
yyNextArg();
yyPrint_INT((yy)t[3]);
yyNextArg();
yyPrint_POS((yy)t[4]);
yyEndArgs();
break;
case 3: 
yyTerm("named");
yyFirstArg();
yyPrint_IDENT((yy)t[1]);
yyNextArg();
yyPrint_PATTERN((yy)t[2]);
yyNextArg();
yyPrint_POS((yy)t[3]);
yyEndArgs();
break;
case 4: 
yyTerm("error");
yyNoArgs();
break;
}
}
yybroadcast_PATTERN(t,In,Out,Handler)
yy t, In, *Out; int (*Handler) ();
{
yy A, B;
A = In;
if (! Handler(yybroadcast_PATTERN, t, In, Out)) {
switch(t[0]) {
case 1: 
yybroadcast_IDENT((yy)t[1], A, &B, Handler);
*Out = B;
break;
case 2: 
yybroadcast_IDENT((yy)t[1], A, &B, Handler);
yybroadcast_PATTERNLIST((yy)t[2], B, &A, Handler);
*Out = A;
break;
case 3: 
yybroadcast_IDENT((yy)t[1], A, &B, Handler);
yybroadcast_PATTERN((yy)t[2], B, &A, Handler);
*Out = A;
break;
case 4: 
*Out = A;
break;
}
}
}
yyeq_PATTERNLIST(t1, t2) yy t1, t2;
{
switch(t1[0]) {
case 1: return (t2[0] == 1)
&& yyeq_PATTERN((yy)t1[1], (yy)t2[1])
&& yyeq_PATTERNLIST((yy)t1[2], (yy)t2[2])
;
case 2: return (t2[0] == 2)
&& (t1[1] == t2[1])
;
}
}
yyPrint_PATTERNLIST(t) yy t;
{
switch(t[0]) {
case 1: 
yyTerm("list");
yyFirstArg();
yyPrint_PATTERN((yy)t[1]);
yyNextArg();
yyPrint_PATTERNLIST((yy)t[2]);
yyEndArgs();
break;
case 2: 
yyTerm("nil");
yyFirstArg();
yyPrint_POS((yy)t[1]);
yyEndArgs();
break;
}
}
yybroadcast_PATTERNLIST(t,In,Out,Handler)
yy t, In, *Out; int (*Handler) ();
{
yy A, B;
A = In;
if (! Handler(yybroadcast_PATTERNLIST, t, In, Out)) {
switch(t[0]) {
case 1: 
yybroadcast_PATTERN((yy)t[1], A, &B, Handler);
yybroadcast_PATTERNLIST((yy)t[2], B, &A, Handler);
*Out = A;
break;
case 2: 
*Out = A;
break;
}
}
}
yyeq_RULELIST(t1, t2) yy t1, t2;
{
switch(t1[0]) {
case 1: return (t2[0] == 1)
&& yyeq_RULE((yy)t1[1], (yy)t2[1])
&& yyeq_RULELIST((yy)t1[2], (yy)t2[2])
;
case 2: return (t2[0] == 2)
;
}
}
yyPrint_RULELIST(t) yy t;
{
switch(t[0]) {
case 1: 
yyTerm("list");
yyFirstArg();
yyPrint_RULE((yy)t[1]);
yyNextArg();
yyPrint_RULELIST((yy)t[2]);
yyEndArgs();
break;
case 2: 
yyTerm("nil");
yyNoArgs();
break;
}
}
yybroadcast_RULELIST(t,In,Out,Handler)
yy t, In, *Out; int (*Handler) ();
{
yy A, B;
A = In;
if (! Handler(yybroadcast_RULELIST, t, In, Out)) {
switch(t[0]) {
case 1: 
yybroadcast_RULE((yy)t[1], A, &B, Handler);
yybroadcast_RULELIST((yy)t[2], B, &A, Handler);
*Out = A;
break;
case 2: 
*Out = A;
break;
}
}
}
yyeq_MODULELIST(t1, t2) yy t1, t2;
{
switch(t1[0]) {
case 1: return (t2[0] == 1)
&& yyeq_MODULE((yy)t1[1], (yy)t2[1])
&& yyeq_MODULELIST((yy)t1[2], (yy)t2[2])
;
case 2: return (t2[0] == 2)
;
}
}
yyPrint_MODULELIST(t) yy t;
{
switch(t[0]) {
case 1: 
yyTerm("list");
yyFirstArg();
yyPrint_MODULE((yy)t[1]);
yyNextArg();
yyPrint_MODULELIST((yy)t[2]);
yyEndArgs();
break;
case 2: 
yyTerm("nil");
yyNoArgs();
break;
}
}
yybroadcast_MODULELIST(t,In,Out,Handler)
yy t, In, *Out; int (*Handler) ();
{
yy A, B;
A = In;
if (! Handler(yybroadcast_MODULELIST, t, In, Out)) {
switch(t[0]) {
case 1: 
yybroadcast_MODULE((yy)t[1], A, &B, Handler);
yybroadcast_MODULELIST((yy)t[2], B, &A, Handler);
*Out = A;
break;
case 2: 
*Out = A;
break;
}
}
}
yyeq_MODULE(t1, t2) yy t1, t2;
{
switch(t1[0]) {
case 1: return (t2[0] == 1)
&& yyeq_DECLLIST((yy)t1[1], (yy)t2[1])
;
}
}
yyPrint_MODULE(t) yy t;
{
switch(t[0]) {
case 1: 
yyTerm("module");
yyFirstArg();
yyPrint_DECLLIST((yy)t[1]);
yyEndArgs();
break;
}
}
yybroadcast_MODULE(t,In,Out,Handler)
yy t, In, *Out; int (*Handler) ();
{
yy A, B;
A = In;
if (! Handler(yybroadcast_MODULE, t, In, Out)) {
switch(t[0]) {
case 1: 
yybroadcast_DECLLIST((yy)t[1], A, &B, Handler);
*Out = B;
break;
}
}
}
yyeq_IDENTLIST(t1, t2) yy t1, t2;
{
switch(t1[0]) {
case 1: return (t2[0] == 1)
&& yyeq_IDENT((yy)t1[1], (yy)t2[1])
&& yyeq_IDENTLIST((yy)t1[2], (yy)t2[2])
;
case 2: return (t2[0] == 2)
;
}
}
yyPrint_IDENTLIST(t) yy t;
{
switch(t[0]) {
case 1: 
yyTerm("list");
yyFirstArg();
yyPrint_IDENT((yy)t[1]);
yyNextArg();
yyPrint_IDENTLIST((yy)t[2]);
yyEndArgs();
break;
case 2: 
yyTerm("nil");
yyNoArgs();
break;
}
}
yybroadcast_IDENTLIST(t,In,Out,Handler)
yy t, In, *Out; int (*Handler) ();
{
yy A, B;
A = In;
if (! Handler(yybroadcast_IDENTLIST, t, In, Out)) {
switch(t[0]) {
case 1: 
yybroadcast_IDENT((yy)t[1], A, &B, Handler);
yybroadcast_IDENTLIST((yy)t[2], B, &A, Handler);
*Out = A;
break;
case 2: 
*Out = A;
break;
}
}
}
yyeq_INTLIST(t1, t2) yy t1, t2;
{
switch(t1[0]) {
case 1: return (t2[0] == 1)
&& (t1[1] == t2[1])
&& yyeq_INTLIST((yy)t1[2], (yy)t2[2])
;
case 2: return (t2[0] == 2)
;
}
}
yyPrint_INTLIST(t) yy t;
{
switch(t[0]) {
case 1: 
yyTerm("list");
yyFirstArg();
yyPrint_INT((yy)t[1]);
yyNextArg();
yyPrint_INTLIST((yy)t[2]);
yyEndArgs();
break;
case 2: 
yyTerm("nil");
yyNoArgs();
break;
}
}
yybroadcast_INTLIST(t,In,Out,Handler)
yy t, In, *Out; int (*Handler) ();
{
yy A, B;
A = In;
if (! Handler(yybroadcast_INTLIST, t, In, Out)) {
switch(t[0]) {
case 1: 
yybroadcast_INTLIST((yy)t[2], A, &B, Handler);
*Out = B;
break;
case 2: 
*Out = A;
break;
}
}
}
yyeq_OBJECT(t1, t2) yy t1, t2;
{
switch(t1[0]) {
case 1: return (t2[0] == 1)
&& yyeq_DOMAINDEF((yy)t1[1], (yy)t2[1])
;
case 2: return (t2[0] == 2)
&& yyeq_IDENT((yy)t1[1], (yy)t2[1])
&& yyeq_FUNCTORDEF((yy)t1[2], (yy)t2[2])
;
}
}
yyPrint_OBJECT(t) yy t;
{
switch(t[0]) {
case 1: 
yyTerm("domainobj");
yyFirstArg();
yyPrint_DOMAINDEF((yy)t[1]);
yyEndArgs();
break;
case 2: 
yyTerm("functorobj");
yyFirstArg();
yyPrint_IDENT((yy)t[1]);
yyNextArg();
yyPrint_FUNCTORDEF((yy)t[2]);
yyEndArgs();
break;
}
}
yybroadcast_OBJECT(t,In,Out,Handler)
yy t, In, *Out; int (*Handler) ();
{
yy A, B;
A = In;
if (! Handler(yybroadcast_OBJECT, t, In, Out)) {
switch(t[0]) {
case 1: 
yybroadcast_DOMAINDEF((yy)t[1], A, &B, Handler);
*Out = B;
break;
case 2: 
yybroadcast_IDENT((yy)t[1], A, &B, Handler);
yybroadcast_FUNCTORDEF((yy)t[2], B, &A, Handler);
*Out = A;
break;
}
}
}
yy yyglov_NextUniqueNumber = (yy) yyu;
yyeq_PosDef(t1, t2) yy t1, t2;
{
switch(t1[0]) {
case 1: return (t2[0] == 1)
;
case 2: return (t2[0] == 2)
&& (t1[1] == t2[1])
;
}
}
yyPrint_PosDef(t) yy t;
{
switch(t[0]) {
case 1: 
yyTerm("none");
yyNoArgs();
break;
case 2: 
yyTerm("pos");
yyFirstArg();
yyPrint_POS((yy)t[1]);
yyEndArgs();
break;
}
}
yybroadcast_PosDef(t,In,Out,Handler)
yy t, In, *Out; int (*Handler) ();
{
yy A, B;
A = In;
if (! Handler(yybroadcast_PosDef, t, In, Out)) {
switch(t[0]) {
case 1: 
*Out = A;
break;
case 2: 
*Out = A;
break;
}
}
}
yy yyglov_FirstWithPos = (yy) yyu;
int yyparse_rc = 0;
ROOT()
{
extern char *THIS_RUNTIME_SYSTEM;
char *GENTLE = "Gentle 3.0 01100401 (C) 1992, 1997";
if (strcmp(THIS_RUNTIME_SYSTEM, GENTLE))
{ printf("INCONSISTENT GENTLE RUNTIME SYSTEM\n"); exit(1); }
yyExtend();
yyparse_rc = yyparse();
}
UniqueNumber(yyout_1)
yy *yyout_1;
{
{
yy yyb;
yy yy_0_1;
yy yyv_N;
yy yy_1;
yy yy_2;
yy yy_2_1;
yy yy_2_2;
yy_1 = yyglov_NextUniqueNumber;
if (yy_1 == (yy) yyu) yyErr(1,412);
yyv_N = yy_1;
yy_2_1 = yyv_N;
yy_2_2 = ((yy)1);
yy_2 = (yy)(((long)yy_2_1)+((long)yy_2_2));
yyglov_NextUniqueNumber = yy_2;
yy_0_1 = yyv_N;
*yyout_1 = yy_0_1;
return;
}
}
