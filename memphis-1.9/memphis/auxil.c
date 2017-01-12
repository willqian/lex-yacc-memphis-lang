typedef long * yy;
#define yyu (-2147483647L)
static yy yynull;
extern yy yyh;
extern yy yyhx;
static yyErr(n,l)
{
yyAbort(n,"auxil", l);
}
extern yy yyglov_FirstWithPos;
yyeq_IDLIST(t1, t2) yy t1, t2;
{
switch(t1[0]) {
case 1: return (t2[0] == 1)
&& yyeq_IDENT((yy)t1[1], (yy)t2[1])
&& yyeq_IDLIST((yy)t1[2], (yy)t2[2])
;
case 2: return (t2[0] == 2)
;
}
}
yyPrint_IDLIST(t) yy t;
{
switch(t[0]) {
case 1: 
yyTerm("list");
yyFirstArg();
yyPrint_IDENT((yy)t[1]);
yyNextArg();
yyPrint_IDLIST((yy)t[2]);
yyEndArgs();
break;
case 2: 
yyTerm("nil");
yyNoArgs();
break;
}
}
yybroadcast_IDLIST(t,In,Out,Handler)
yy t, In, *Out; int (*Handler) ();
{
yy A, B;
A = In;
if (! Handler(yybroadcast_IDLIST, t, In, Out)) {
switch(t[0]) {
case 1: 
yybroadcast_IDENT((yy)t[1], A, &B, Handler);
yybroadcast_IDLIST((yy)t[2], B, &A, Handler);
*Out = A;
break;
case 2: 
*Out = A;
break;
}
}
}
yyeq_IDENT(t1, t2) yy t1, t2;
{
return t1 == t2;
}
yyPrint_IDENT(t) yy t;
{
yyPrintOpaque(t);
}
yybroadcast_IDENT(t,In,Out,Handler)
yy t, In, *Out; int (*Handler) ();
{
yy A, B;
A = In;
if (! Handler(yybroadcast_IDENT, t, In, Out)) {
*Out = In;}
}
PutId(yyin_1)
yy yyin_1;
{
{
yy yyb;
yy yyv_Id;
yy yy_0_1;
yy yy_1_1;
yy yyv_Str;
yy yy_1_2;
yy yy_2_1;
yy_0_1 = yyin_1;
yyv_Id = yy_0_1;
yy_1_1 = yyv_Id;
id_to_string(yy_1_1, &yy_1_2);
yyv_Str = yy_1_2;
yy_2_1 = yyv_Str;
Put(yy_2_1);
return;
}
}
