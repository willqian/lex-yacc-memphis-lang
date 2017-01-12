typedef long * yy;
#define yyu (-2147483647L)
static yy yynull;
extern yy yyh;
extern yy yyhx;
static yyErr(n,l)
{
yyAbort(n,"cpp", l);
}
extern yy yyglov_FirstWithPos;
yy yyglov_InsideMODULELIST = (yy) yyu;
yyeq_FLAG(t1, t2) yy t1, t2;
{
switch(t1[0]) {
case 1: return (t2[0] == 1)
;
case 2: return (t2[0] == 2)
;
}
}
yyPrint_FLAG(t) yy t;
{
switch(t[0]) {
case 1: 
yyTerm("yes");
yyNoArgs();
break;
case 2: 
yyTerm("no");
yyNoArgs();
break;
}
}
yybroadcast_FLAG(t,In,Out,Handler)
yy t, In, *Out; int (*Handler) ();
{
yy A, B;
A = In;
if (! Handler(yybroadcast_FLAG, t, In, Out)) {
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
yyeq_Flag(t1, t2) yy t1, t2;
{
switch(t1[0]) {
case 1: return (t2[0] == 1)
;
case 2: return (t2[0] == 2)
;
}
}
yyPrint_Flag(t) yy t;
{
switch(t[0]) {
case 1: 
yyTerm("yes");
yyNoArgs();
break;
case 2: 
yyTerm("no");
yyNoArgs();
break;
}
}
yybroadcast_Flag(t,In,Out,Handler)
yy t, In, *Out; int (*Handler) ();
{
yy A, B;
A = In;
if (! Handler(yybroadcast_Flag, t, In, Out)) {
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
yy yyglov_HeaderAndConstructorsEmitted = (yy) yyu;
yy yyglov_DeclList = (yy) yyu;
yy yyglov_CurMatchNumber = (yy) yyu;
yy yyglov_CurRuleNumber = (yy) yyu;
yy yyglov_CurTmpList = (yy) yyu;
yy yyglov_ListOfLocalVars = (yy) yyu;
cppwalker(yyin_1, yyin_2)
yy yyin_1;
yy yyin_2;
{
{
yy yyb;
yy yyv_L;
yy yy_0_1;
yy yyv_M;
yy yy_0_2;
yy yy_1;
yy yy_2_1;
yy yy_3;
yy yy_4_1;
yy yy_5;
yy yyv_Name;
yy yy_7_1;
yy yy_8_1;
yy yy_8_2;
yy yy_9;
yy yy_10;
yy yy_11_1;
yy yy_12_1;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yyv_L = yy_0_1;
yyv_M = yy_0_2;
yyb = yyh;
yyh += 4; if (yyh > yyhx) yyExtend();
yy_1 = yyb + 0;
yy_1[0] = 2;
yyglov_InsideMODULELIST = yy_1;
yy_2_1 = yyv_L;
ProcessDomains_DECLLIST(yy_2_1);
yy_3 = yyb + 1;
yy_3[0] = 1;
yyglov_InsideMODULELIST = yy_3;
yy_4_1 = yyv_M;
ProcessDomains_MODULELIST(yy_4_1);
yy_5 = yyb + 2;
yy_5[0] = 2;
yyglov_InsideMODULELIST = yy_5;
InitVisits();
get_basename(&yy_7_1);
yyv_Name = yy_7_1;
yy_8_1 = yyv_Name;
yy_8_2 = ((yy)"cpp");
OpenOutputWithExtension(yy_8_1, yy_8_2);
yy_9 = yyb + 3;
yy_9[0] = 2;
yyglov_HeaderAndConstructorsEmitted = yy_9;
yy_10 = yyv_L;
yyglov_DeclList = yy_10;
yy_11_1 = yyv_L;
EmitDomainForwardDecls(yy_11_1);
yy_12_1 = yyv_L;
VisitDECLLIST(yy_12_1);
EmitFinalText();
CloseOutput();
return;
}
}
HeaderAndConstructors()
{
{
yy yyb;
yy yy_1_1_1;
yy yyv_L;
yy yy_1_1_2;
yy yy_1_1_3_1;
yy yy_1_1_4;
{
yy yysb = yyb;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_1_1_1 = yyglov_HeaderAndConstructorsEmitted;
if (yy_1_1_1 == (yy) yyu) yyErr(1,52);
if (yy_1_1_1[0] != 2) goto yyfl_4_1_1_1;
yy_1_1_2 = yyglov_DeclList;
if (yy_1_1_2 == (yy) yyu) yyErr(1,53);
yyv_L = yy_1_1_2;
yy_1_1_3_1 = yyv_L;
CppFileHeader(yy_1_1_3_1);
yy_1_1_4 = yyb + 0;
yy_1_1_4[0] = 1;
yyglov_HeaderAndConstructorsEmitted = yy_1_1_4;
goto yysl_4_1_1;
yyfl_4_1_1_1 : ;
goto yysl_4_1_1;
yysl_4_1_1 : ;
yyb = yysb;
}
return;
}
}
ProcessDomains_DECLLIST(yyin_1)
yy yyin_1;
{
{
yy yyb;
yy yy_0_1;
yy yyv_H;
yy yy_0_1_1;
yy yyv_T;
yy yy_0_1_2;
yy yy_1_1;
yy yy_2_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 1) goto yyfl_8_1;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yyv_H = yy_0_1_1;
yyv_T = yy_0_1_2;
yy_1_1 = yyv_H;
ProcessDomains_DECL(yy_1_1);
yy_2_1 = yyv_T;
ProcessDomains_DECLLIST(yy_2_1);
return;
yyfl_8_1 : ;
}
{
yy yyb;
yy yy_0_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 2) goto yyfl_8_2;
return;
yyfl_8_2 : ;
}
yyErr(2,73);
}
ProcessDomains_DECL(yyin_1)
yy yyin_1;
{
{
yy yyb;
yy yy_0_1;
yy yyv_Def;
yy yy_0_1_1;
yy yyv_Start;
yy yy_0_1_2;
yy yyv_Stop;
yy yy_0_1_3;
yy yyv_Pos;
yy yy_0_1_4;
yy yy_1_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 4) goto yyfl_9_1;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yy_0_1_4 = ((yy)yy_0_1[4]);
yyv_Def = yy_0_1_1;
yyv_Start = yy_0_1_2;
yyv_Stop = yy_0_1_3;
yyv_Pos = yy_0_1_4;
yy_1_1 = yyv_Def;
DeclareDomain(yy_1_1);
return;
yyfl_9_1 : ;
}
{
yy yyb;
yy yy_0_1;
yy_0_1 = yyin_1;
return;
yyfl_9_2 : ;
}
yyErr(2,83);
}
DeclareDomain(yyin_1)
yy yyin_1;
{
{
yy yyb;
yy yyv_D;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Id;
yy yy_0_1_1_1;
yy yyv_FunctorDefs;
yy yy_0_1_1_2;
yy yyv_Pos;
yy yy_0_1_1_3;
yy yy_1_1_1_1;
yy yyv_Meaning;
yy yy_1_1_1_2;
yy yy_1_1_2_1_1;
yy yy_1_1_2_1_2_1;
yy yy_1_1_2_1_2_2;
yy yy_1_1_2_1_2_3;
yy yy_1_1_2_1_2_4;
yy yy_1_1_2_2_1;
yy yyv_WithPos;
yy yy_1_1_2_2_1_1;
yy yy_1_1_2_2_2_1;
yy yy_1_1_2_2_2_2;
yy yy_1_1_2_2_2_3;
yy yy_1_1_2_2_2_4;
yy yy_2_1;
yy yy_2_2;
yy yy_2_2_1;
yy yy_3_1;
yy yy_3_2;
yy_0_1 = yyin_1;
yy_0_1_1 = yy_0_1;
yyv_D = yy_0_1;
if (yy_0_1_1[0] != 1) goto yyfl_10_1;
yy_0_1_1_1 = ((yy)yy_0_1_1[1]);
yy_0_1_1_2 = ((yy)yy_0_1_1[2]);
yy_0_1_1_3 = ((yy)yy_0_1_1[3]);
yyv_Id = yy_0_1_1_1;
yyv_FunctorDefs = yy_0_1_1_2;
yyv_Pos = yy_0_1_1_3;
yyb = yyh;
yyh += 2; if (yyh > yyhx) yyExtend();
{
yy yysb = yyb;
yy_1_1_1_1 = yyv_Id;
if (! HasMeaning(yy_1_1_1_1, &yy_1_1_1_2)) goto yyfl_10_1_1_1;
yyv_Meaning = yy_1_1_1_2;
{
yy yysb = yyb;
yy_1_1_2_1_1 = yyglov_InsideMODULELIST;
if (yy_1_1_2_1_1 == (yy) yyu) yyErr(1,93);
if (yy_1_1_2_1_1[0] != 2) goto yyfl_10_1_1_1_2_1;
yy_1_1_2_1_2_1 = ((yy)"multiple declaration of '");
yy_1_1_2_1_2_2 = yyv_Id;
yy_1_1_2_1_2_3 = ((yy)"'");
yy_1_1_2_1_2_4 = yyv_Pos;
ErrorI(yy_1_1_2_1_2_1, yy_1_1_2_1_2_2, yy_1_1_2_1_2_3, yy_1_1_2_1_2_4);
goto yysl_10_1_1_1_2;
yyfl_10_1_1_1_2_1 : ;
yy_1_1_2_2_1 = yyglov_FirstWithPos;
if (yy_1_1_2_2_1 == (yy) yyu) yyErr(1,96);
if (yy_1_1_2_2_1[0] != 2) goto yyfl_10_1_1_1_2_2;
yy_1_1_2_2_1_1 = ((yy)yy_1_1_2_2_1[1]);
yyv_WithPos = yy_1_1_2_2_1_1;
yy_1_1_2_2_2_1 = ((yy)"multiple declaration of '");
yy_1_1_2_2_2_2 = yyv_Id;
yy_1_1_2_2_2_3 = ((yy)"' in imported modules");
yy_1_1_2_2_2_4 = yyv_WithPos;
ErrorI(yy_1_1_2_2_2_1, yy_1_1_2_2_2_2, yy_1_1_2_2_2_3, yy_1_1_2_2_2_4);
goto yysl_10_1_1_1_2;
yyfl_10_1_1_1_2_2 : ;
goto yyfl_10_1_1_1;
yysl_10_1_1_1_2 : ;
yyb = yysb;
}
goto yysl_10_1_1;
yyfl_10_1_1_1 : ;
goto yysl_10_1_1;
yysl_10_1_1 : ;
yyb = yysb;
}
yy_2_1 = yyv_Id;
yy_2_2_1 = yyv_D;
yy_2_2 = yyb + 0;
yy_2_2[0] = 1;
yy_2_2[1] = ((long)yy_2_2_1);
DefMeaning(yy_2_1, yy_2_2);
yy_3_1 = yyv_FunctorDefs;
yy_3_2 = yyv_Id;
DeclareFunctors(yy_3_1, yy_3_2);
return;
yyfl_10_1 : ;
}
yyErr(2,88);
}
DeclareFunctors(yyin_1, yyin_2)
yy yyin_1;
yy yyin_2;
{
{
yy yyb;
yy yy_0_1;
yy yyv_H;
yy yy_0_1_1;
yy yyv_T;
yy yy_0_1_2;
yy yyv_Id;
yy yy_0_2;
yy yy_1_1;
yy yy_1_2;
yy yy_2_1;
yy yy_2_2;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
if (yy_0_1[0] != 1) goto yyfl_11_1;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yyv_H = yy_0_1_1;
yyv_T = yy_0_1_2;
yyv_Id = yy_0_2;
yy_1_1 = yyv_H;
yy_1_2 = yyv_Id;
DeclareFunctor(yy_1_1, yy_1_2);
yy_2_1 = yyv_T;
yy_2_2 = yyv_Id;
DeclareFunctors(yy_2_1, yy_2_2);
return;
yyfl_11_1 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_2;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
if (yy_0_1[0] != 2) goto yyfl_11_2;
return;
yyfl_11_2 : ;
}
yyErr(2,104);
}
DeclareFunctor(yyin_1, yyin_2)
yy yyin_1;
yy yyin_2;
{
{
yy yyb;
yy yyv_Def;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Functor;
yy yy_0_1_1_1;
yy yyv_Args;
yy yy_0_1_1_2;
yy yyv_Pos;
yy yy_0_1_1_3;
yy yyv_Type;
yy yy_0_2;
yy yy_1_1_1_1;
yy yyv_Meaning;
yy yy_1_1_1_2;
yy yy_1_1_2_1_1;
yy yy_1_1_2_1_2_1;
yy yy_1_1_2_1_2_2;
yy yy_1_1_2_1_2_3;
yy yy_1_1_2_1_2_4;
yy yy_1_1_2_2_1;
yy yyv_WithPos;
yy yy_1_1_2_2_1_1;
yy yy_1_1_2_2_2_1;
yy yy_1_1_2_2_2_2;
yy yy_1_1_2_2_2_3;
yy yy_1_1_2_2_2_4;
yy yy_2_1_1;
yy yy_2_1_2_1;
yy yy_3_1;
yy yy_3_2;
yy yy_3_2_1;
yy yy_3_2_2;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yy_0_1_1 = yy_0_1;
yyv_Def = yy_0_1;
if (yy_0_1_1[0] != 1) goto yyfl_12_1;
yy_0_1_1_1 = ((yy)yy_0_1_1[1]);
yy_0_1_1_2 = ((yy)yy_0_1_1[2]);
yy_0_1_1_3 = ((yy)yy_0_1_1[3]);
yyv_Functor = yy_0_1_1_1;
yyv_Args = yy_0_1_1_2;
yyv_Pos = yy_0_1_1_3;
yyv_Type = yy_0_2;
yyb = yyh;
yyh += 3; if (yyh > yyhx) yyExtend();
{
yy yysb = yyb;
yy_1_1_1_1 = yyv_Functor;
if (! HasMeaning(yy_1_1_1_1, &yy_1_1_1_2)) goto yyfl_12_1_1_1;
yyv_Meaning = yy_1_1_1_2;
{
yy yysb = yyb;
yy_1_1_2_1_1 = yyglov_InsideMODULELIST;
if (yy_1_1_2_1_1 == (yy) yyu) yyErr(1,115);
if (yy_1_1_2_1_1[0] != 2) goto yyfl_12_1_1_1_2_1;
yy_1_1_2_1_2_1 = ((yy)"multiple declaration of '");
yy_1_1_2_1_2_2 = yyv_Functor;
yy_1_1_2_1_2_3 = ((yy)"'");
yy_1_1_2_1_2_4 = yyv_Pos;
ErrorI(yy_1_1_2_1_2_1, yy_1_1_2_1_2_2, yy_1_1_2_1_2_3, yy_1_1_2_1_2_4);
goto yysl_12_1_1_1_2;
yyfl_12_1_1_1_2_1 : ;
yy_1_1_2_2_1 = yyglov_FirstWithPos;
if (yy_1_1_2_2_1 == (yy) yyu) yyErr(1,118);
if (yy_1_1_2_2_1[0] != 2) goto yyfl_12_1_1_1_2_2;
yy_1_1_2_2_1_1 = ((yy)yy_1_1_2_2_1[1]);
yyv_WithPos = yy_1_1_2_2_1_1;
yy_1_1_2_2_2_1 = ((yy)"multiple declaration of '");
yy_1_1_2_2_2_2 = yyv_Functor;
yy_1_1_2_2_2_3 = ((yy)"' in imported modules");
yy_1_1_2_2_2_4 = yyv_WithPos;
ErrorI(yy_1_1_2_2_2_1, yy_1_1_2_2_2_2, yy_1_1_2_2_2_3, yy_1_1_2_2_2_4);
goto yysl_12_1_1_1_2;
yyfl_12_1_1_1_2_2 : ;
goto yyfl_12_1_1_1;
yysl_12_1_1_1_2 : ;
yyb = yysb;
}
goto yysl_12_1_1;
yyfl_12_1_1_1 : ;
goto yysl_12_1_1;
yysl_12_1_1 : ;
yyb = yysb;
}
{
yy yysb = yyb;
yy_2_1_1 = yyglov_InsideMODULELIST;
if (yy_2_1_1 == (yy) yyu) yyErr(1,124);
if (yy_2_1_1[0] != 2) goto yyfl_12_1_2_1;
yy_2_1_2_1 = yyv_Args;
CheckFunctorArgs(yy_2_1_2_1);
goto yysl_12_1_2;
yyfl_12_1_2_1 : ;
goto yysl_12_1_2;
yysl_12_1_2 : ;
yyb = yysb;
}
yy_3_1 = yyv_Functor;
yy_3_2_1 = yyv_Type;
yy_3_2_2 = yyv_Def;
yy_3_2 = yyb + 0;
yy_3_2[0] = 2;
yy_3_2[1] = ((long)yy_3_2_1);
yy_3_2[2] = ((long)yy_3_2_2);
DefMeaning(yy_3_1, yy_3_2);
return;
yyfl_12_1 : ;
}
yyErr(2,110);
}
CheckFunctorArgs(yyin_1)
yy yyin_1;
{
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Type;
yy yy_0_1_1_1;
yy yyv_Selector;
yy yy_0_1_1_2;
yy yyv_Pos;
yy yy_0_1_1_3;
yy yyv_Tl;
yy yy_0_1_2;
yy yy_1_1_1_1;
yy yy_1_1_1_2;
yy yy_1_1_2_1;
yy yy_1_1_2_2;
yy yy_1_1_2_3;
yy yy_1_1_2_4;
yy yy_2_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 1) goto yyfl_13_1;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
if (yy_0_1_1[0] != 1) goto yyfl_13_1;
yy_0_1_1_1 = ((yy)yy_0_1_1[1]);
yy_0_1_1_2 = ((yy)yy_0_1_1[2]);
yy_0_1_1_3 = ((yy)yy_0_1_1[3]);
yyv_Type = yy_0_1_1_1;
yyv_Selector = yy_0_1_1_2;
yyv_Pos = yy_0_1_1_3;
yyv_Tl = yy_0_1_2;
{
yy yysb = yyb;
yy_1_1_1_1 = yyv_Selector;
yy_1_1_1_2 = yyv_Tl;
if (! IsSelectorInArglist(yy_1_1_1_1, yy_1_1_1_2)) goto yyfl_13_1_1_1;
yy_1_1_2_1 = ((yy)"multiple occurence of field name '");
yy_1_1_2_2 = yyv_Selector;
yy_1_1_2_3 = ((yy)"'");
yy_1_1_2_4 = yyv_Pos;
ErrorI(yy_1_1_2_1, yy_1_1_2_2, yy_1_1_2_3, yy_1_1_2_4);
goto yysl_13_1_1;
yyfl_13_1_1_1 : ;
goto yysl_13_1_1;
yysl_13_1_1 : ;
yyb = yysb;
}
yy_2_1 = yyv_Tl;
CheckFunctorArgs(yy_2_1);
return;
yyfl_13_1 : ;
}
{
yy yyb;
yy yy_0_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 2) goto yyfl_13_2;
return;
yyfl_13_2 : ;
}
yyErr(2,129);
}
int IsSelectorInArglist(yyin_1, yyin_2)
yy yyin_1;
yy yyin_2;
{
{
yy yyb;
yy yyv_Id;
yy yy_0_1;
yy yy_0_2;
yy yy_0_2_1;
yy yy_0_2_1_1;
yy yyv_Selector;
yy yy_0_2_1_2;
yy yy_0_2_1_3;
yy yyv_Tl;
yy yy_0_2_2;
yy yy_1_1_1_1;
yy yy_1_1_1_2;
yy yy_1_2_1_1;
yy yy_1_2_1_2;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yyv_Id = yy_0_1;
if (yy_0_2[0] != 1) goto yyfl_14_1;
yy_0_2_1 = ((yy)yy_0_2[1]);
yy_0_2_2 = ((yy)yy_0_2[2]);
if (yy_0_2_1[0] != 1) goto yyfl_14_1;
yy_0_2_1_1 = ((yy)yy_0_2_1[1]);
yy_0_2_1_2 = ((yy)yy_0_2_1[2]);
yy_0_2_1_3 = ((yy)yy_0_2_1[3]);
yyv_Selector = yy_0_2_1_2;
yyv_Tl = yy_0_2_2;
{
yy yysb = yyb;
yy_1_1_1_1 = yyv_Selector;
yy_1_1_1_2 = yyv_Tl;
if (! IsSelectorInArglist(yy_1_1_1_1, yy_1_1_1_2)) goto yyfl_14_1_1_1;
goto yysl_14_1_1;
yyfl_14_1_1_1 : ;
yy_1_2_1_1 = yyv_Id;
yy_1_2_1_2 = yyv_Selector;
if (! yyeq_IDENT(yy_1_2_1_1, yy_1_2_1_2)) goto yyfl_14_1_1_2;
goto yysl_14_1_1;
yyfl_14_1_1_2 : ;
goto yyfl_14_1;
yysl_14_1_1 : ;
yyb = yysb;
}
return 1;
yyfl_14_1 : ;
}
return 0;
}
ProcessDomains_MODULELIST(yyin_1)
yy yyin_1;
{
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_DECLLIST;
yy yy_0_1_1_1;
yy yyv_T;
yy yy_0_1_2;
yy yy_1_1;
yy yy_2_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 1) goto yyfl_15_1;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
if (yy_0_1_1[0] != 1) goto yyfl_15_1;
yy_0_1_1_1 = ((yy)yy_0_1_1[1]);
yyv_DECLLIST = yy_0_1_1_1;
yyv_T = yy_0_1_2;
yy_1_1 = yyv_DECLLIST;
ProcessDomains_DECLLIST(yy_1_1);
yy_2_1 = yyv_T;
ProcessDomains_MODULELIST(yy_2_1);
return;
yyfl_15_1 : ;
}
{
yy yyb;
yy yy_0_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 2) goto yyfl_15_2;
return;
yyfl_15_2 : ;
}
yyErr(2,149);
}
InitVisits()
{
{
yy yyb;
yy yy_1;
yy yy_1_1;
yy yy_2;
yy yy_2_1;
yy yy_3;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_1_1 = ((yy)1);
yy_1 = (yy)(-((long)yy_1_1));
yyglov_CurMatchNumber = yy_1;
yy_2_1 = ((yy)1);
yy_2 = (yy)(-((long)yy_2_1));
yyglov_CurRuleNumber = yy_2;
yy_3 = yyb + 0;
yy_3[0] = 2;
yyglov_CurTmpList = yy_3;
return;
}
}
CppFileHeader(yyin_1)
yy yyin_1;
{
{
yy yyb;
yy yyv_DList;
yy yy_0_1;
yy yyv_Name;
yy yy_1_1;
yy yy_2_1;
yy yy_3_1;
yy_0_1 = yyin_1;
yyv_DList = yy_0_1;
get_basename(&yy_1_1);
yyv_Name = yy_1_1;
yy_2_1 = yyv_DList;
FFileIncludes(yy_2_1);
yy_3_1 = ((yy)"extern void MatchError(char *, int);");
Put(yy_3_1);
Nl();
return;
}
}
FFileIncludes(yyin_1)
yy yyin_1;
{
{
yy yyb;
yy yy_0_1;
yy yyv_H;
yy yy_0_1_1;
yy yyv_T;
yy yy_0_1_2;
yy yy_1_1;
yy yy_2_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 1) goto yyfl_21_1;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yyv_H = yy_0_1_1;
yyv_T = yy_0_1_2;
yy_1_1 = yyv_H;
FFileInclude(yy_1_1);
yy_2_1 = yyv_T;
FFileIncludes(yy_2_1);
return;
yyfl_21_1 : ;
}
{
yy yyb;
yy yy_0_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 2) goto yyfl_21_2;
return;
yyfl_21_2 : ;
}
yyErr(2,196);
}
FFileInclude(yyin_1)
yy yyin_1;
{
{
yy yyb;
yy yy_0_1;
yy yyv_Id;
yy yy_0_1_1;
yy yy_0_1_2;
yy yy_0_1_3;
yy yy_0_1_4;
yy yy_1_1;
yy yy_2_1;
yy yy_3_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 2) goto yyfl_22_1;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yy_0_1_4 = ((yy)yy_0_1[4]);
yyv_Id = yy_0_1_1;
yy_1_1 = ((yy)"#include \"");
Put(yy_1_1);
yy_2_1 = yyv_Id;
PutId(yy_2_1);
yy_3_1 = ((yy)".f\"");
Put(yy_3_1);
Nl();
return;
yyfl_22_1 : ;
}
{
yy yyb;
yy yy_0_1;
yy_0_1 = yyin_1;
return;
yyfl_22_2 : ;
}
yyErr(2,203);
}
EmitConstructorDecls_DECL(yyin_1)
yy yyin_1;
{
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Id;
yy yy_0_1_1_1;
yy yyv_DefList;
yy yy_0_1_1_2;
yy yy_0_1_1_3;
yy yy_0_1_2;
yy yy_0_1_3;
yy yy_0_1_4;
yy yy_1_1;
yy yy_1_2;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 4) goto yyfl_23_1;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yy_0_1_4 = ((yy)yy_0_1[4]);
if (yy_0_1_1[0] != 1) goto yyfl_23_1;
yy_0_1_1_1 = ((yy)yy_0_1_1[1]);
yy_0_1_1_2 = ((yy)yy_0_1_1[2]);
yy_0_1_1_3 = ((yy)yy_0_1_1[3]);
yyv_Id = yy_0_1_1_1;
yyv_DefList = yy_0_1_1_2;
yy_1_1 = yyv_DefList;
yy_1_2 = yyv_Id;
EmitConstructorDecls_FUNCTORDEFLIST(yy_1_1, yy_1_2);
return;
yyfl_23_1 : ;
}
{
yy yyb;
yy yy_0_1;
yy_0_1 = yyin_1;
return;
yyfl_23_2 : ;
}
yyErr(2,215);
}
EmitConstructorDecls_FUNCTORDEFLIST(yyin_1, yyin_2)
yy yyin_1;
yy yyin_2;
{
{
yy yyb;
yy yy_0_1;
yy yyv_H;
yy yy_0_1_1;
yy yyv_T;
yy yy_0_1_2;
yy yyv_Id;
yy yy_0_2;
yy yy_1_1;
yy yy_1_2;
yy yy_2_1;
yy yy_2_2;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
if (yy_0_1[0] != 1) goto yyfl_24_1;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yyv_H = yy_0_1_1;
yyv_T = yy_0_1_2;
yyv_Id = yy_0_2;
yy_1_1 = yyv_H;
yy_1_2 = yyv_Id;
EmitConstructorDecl(yy_1_1, yy_1_2);
yy_2_1 = yyv_T;
yy_2_2 = yyv_Id;
EmitConstructorDecls_FUNCTORDEFLIST(yy_2_1, yy_2_2);
return;
yyfl_24_1 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_2;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
if (yy_0_1[0] != 2) goto yyfl_24_2;
return;
yyfl_24_2 : ;
}
yyErr(2,220);
}
EmitConstructorDecl(yyin_1, yyin_2)
yy yyin_1;
yy yyin_2;
{
{
yy yyb;
yy yy_0_1;
yy yyv_Functor;
yy yy_0_1_1;
yy yyv_ArgDefs;
yy yy_0_1_2;
yy yyv_Pos;
yy yy_0_1_3;
yy yyv_ResultType;
yy yy_0_2;
yy yy_1_1;
yy yy_2_1;
yy yy_3_1;
yy yy_4_1;
yy yy_5_1;
yy yy_6_1;
yy yy_8_1;
yy yy_9_1;
yy yy_11_1;
yy yy_13_1;
yy yy_14_1;
yy yy_15_1;
yy yy_17_1;
yy yy_18_1;
yy yy_20_1;
yy yy_21_1;
yy yy_22_1;
yy yy_23_1;
yy yy_25_1;
yy yy_26_1;
yy yy_28_1;
yy yy_30_1;
yy yy_31_1;
yy yy_32_1;
yy yy_34_1;
yy yy_35_1;
yy yy_37_1;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
if (yy_0_1[0] != 1) goto yyfl_25_1;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yyv_Functor = yy_0_1_1;
yyv_ArgDefs = yy_0_1_2;
yyv_Pos = yy_0_1_3;
yyv_ResultType = yy_0_2;
yy_1_1 = yyv_Functor;
PutId(yy_1_1);
yy_2_1 = ((yy)"_struct");
Put(yy_2_1);
yy_3_1 = ((yy)"::");
Put(yy_3_1);
yy_4_1 = yyv_Functor;
PutId(yy_4_1);
yy_5_1 = ((yy)"_struct");
Put(yy_5_1);
yy_6_1 = ((yy)" (");
Put(yy_6_1);
Nl();
yy_8_1 = yyv_ArgDefs;
FormalArgs(yy_8_1);
yy_9_1 = ((yy)")");
Put(yy_9_1);
Nl();
yy_11_1 = ((yy)"{");
Put(yy_11_1);
Nl();
yy_13_1 = ((yy)"   tag = ");
Put(yy_13_1);
yy_14_1 = yyv_Functor;
PutId(yy_14_1);
yy_15_1 = ((yy)"_tag;");
Put(yy_15_1);
Nl();
yy_17_1 = yyv_ArgDefs;
SonAssignments(yy_17_1);
yy_18_1 = ((yy)"}");
Put(yy_18_1);
Nl();
yy_20_1 = yyv_Functor;
PutId(yy_20_1);
yy_21_1 = ((yy)"_struct *");
Put(yy_21_1);
yy_22_1 = yyv_Functor;
PutId(yy_22_1);
yy_23_1 = ((yy)" (");
Put(yy_23_1);
Nl();
yy_25_1 = yyv_ArgDefs;
FormalArgs(yy_25_1);
yy_26_1 = ((yy)")");
Put(yy_26_1);
Nl();
yy_28_1 = ((yy)"{");
Put(yy_28_1);
Nl();
yy_30_1 = ((yy)"   return new ");
Put(yy_30_1);
yy_31_1 = yyv_Functor;
PutId(yy_31_1);
yy_32_1 = ((yy)"_struct (");
Put(yy_32_1);
Nl();
yy_34_1 = yyv_ArgDefs;
ActualArgs(yy_34_1);
yy_35_1 = ((yy)"   );");
Put(yy_35_1);
Nl();
yy_37_1 = ((yy)"}");
Put(yy_37_1);
Nl();
return;
yyfl_25_1 : ;
}
yyErr(2,226);
}
FormalArgs(yyin_1)
yy yyin_1;
{
{
yy yyb;
yy yy_0_1;
yy yyv_H;
yy yy_0_1_1;
yy yyv_T;
yy yy_0_1_2;
yy yy_1_1;
yy yy_2_1_1_1;
yy yy_2_1_1_2;
yy yy_2_1_2_1;
yy yy_4_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 1) goto yyfl_26_1;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yyv_H = yy_0_1_1;
yyv_T = yy_0_1_2;
yy_1_1 = yyv_H;
FormalArg(yy_1_1);
{
yy yysb = yyb;
yy_2_1_1_1 = yyv_T;
yy_2_1_1_2 = yy_2_1_1_1;
if (yy_2_1_1_2[0] != 1) goto yyfl_26_1_2_1;
yy_2_1_2_1 = ((yy)",");
Put(yy_2_1_2_1);
goto yysl_26_1_2;
yyfl_26_1_2_1 : ;
goto yysl_26_1_2;
yysl_26_1_2 : ;
yyb = yysb;
}
Nl();
yy_4_1 = yyv_T;
FormalArgs(yy_4_1);
return;
yyfl_26_1 : ;
}
{
yy yyb;
yy yy_0_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 2) goto yyfl_26_2;
return;
yyfl_26_2 : ;
}
yyErr(2,252);
}
FormalArg(yyin_1)
yy yyin_1;
{
{
yy yyb;
yy yy_0_1;
yy yyv_Type;
yy yy_0_1_1;
yy yyv_Selector;
yy yy_0_1_2;
yy yy_0_1_3;
yy yy_1_1;
yy yy_2_1;
yy yy_3_1;
yy yy_4_1;
yy yy_5_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 1) goto yyfl_27_1;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yyv_Type = yy_0_1_1;
yyv_Selector = yy_0_1_2;
yy_1_1 = ((yy)"   ");
Put(yy_1_1);
yy_2_1 = yyv_Type;
PutId(yy_2_1);
yy_3_1 = ((yy)" ");
Put(yy_3_1);
yy_4_1 = yyv_Selector;
PutId(yy_4_1);
yy_5_1 = ((yy)"_value");
Put(yy_5_1);
return;
yyfl_27_1 : ;
}
yyErr(2,263);
}
ActualArgs(yyin_1)
yy yyin_1;
{
{
yy yyb;
yy yy_0_1;
yy yyv_H;
yy yy_0_1_1;
yy yyv_T;
yy yy_0_1_2;
yy yy_1_1;
yy yy_2_1_1_1;
yy yy_2_1_1_2;
yy yy_2_1_2_1;
yy yy_4_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 1) goto yyfl_28_1;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yyv_H = yy_0_1_1;
yyv_T = yy_0_1_2;
yy_1_1 = yyv_H;
ActualArg(yy_1_1);
{
yy yysb = yyb;
yy_2_1_1_1 = yyv_T;
yy_2_1_1_2 = yy_2_1_1_1;
if (yy_2_1_1_2[0] != 1) goto yyfl_28_1_2_1;
yy_2_1_2_1 = ((yy)",");
Put(yy_2_1_2_1);
goto yysl_28_1_2;
yyfl_28_1_2_1 : ;
goto yysl_28_1_2;
yysl_28_1_2 : ;
yyb = yysb;
}
Nl();
yy_4_1 = yyv_T;
ActualArgs(yy_4_1);
return;
yyfl_28_1 : ;
}
{
yy yyb;
yy yy_0_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 2) goto yyfl_28_2;
return;
yyfl_28_2 : ;
}
yyErr(2,271);
}
ActualArg(yyin_1)
yy yyin_1;
{
{
yy yyb;
yy yy_0_1;
yy yyv_Type;
yy yy_0_1_1;
yy yyv_Selector;
yy yy_0_1_2;
yy yy_0_1_3;
yy yy_1_1;
yy yy_2_1;
yy yy_3_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 1) goto yyfl_29_1;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yyv_Type = yy_0_1_1;
yyv_Selector = yy_0_1_2;
yy_1_1 = ((yy)"   ");
Put(yy_1_1);
yy_2_1 = yyv_Selector;
PutId(yy_2_1);
yy_3_1 = ((yy)"_value");
Put(yy_3_1);
return;
yyfl_29_1 : ;
}
yyErr(2,282);
}
SonAssignments(yyin_1)
yy yyin_1;
{
{
yy yyb;
yy yy_0_1;
yy yyv_H;
yy yy_0_1_1;
yy yyv_T;
yy yy_0_1_2;
yy yy_1_1;
yy yy_2_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 1) goto yyfl_30_1;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yyv_H = yy_0_1_1;
yyv_T = yy_0_1_2;
yy_1_1 = yyv_H;
SonAssignment(yy_1_1);
yy_2_1 = yyv_T;
SonAssignments(yy_2_1);
return;
yyfl_30_1 : ;
}
{
yy yyb;
yy yy_0_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 2) goto yyfl_30_2;
return;
yyfl_30_2 : ;
}
yyErr(2,288);
}
SonAssignment(yyin_1)
yy yyin_1;
{
{
yy yyb;
yy yy_0_1;
yy yyv_Type;
yy yy_0_1_1;
yy yyv_Selector;
yy yy_0_1_2;
yy yy_0_1_3;
yy yy_1_1;
yy yy_2_1;
yy yy_3_1;
yy yy_4_1;
yy yy_5_1;
yy yy_6_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 1) goto yyfl_31_1;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yyv_Type = yy_0_1_1;
yyv_Selector = yy_0_1_2;
yy_1_1 = ((yy)"   ");
Put(yy_1_1);
yy_2_1 = yyv_Selector;
PutId(yy_2_1);
yy_3_1 = ((yy)" = ");
Put(yy_3_1);
yy_4_1 = yyv_Selector;
PutId(yy_4_1);
yy_5_1 = ((yy)"_value");
Put(yy_5_1);
yy_6_1 = ((yy)";");
Put(yy_6_1);
Nl();
return;
yyfl_31_1 : ;
}
yyErr(2,294);
}
VisitDECLLIST(yyin_1)
yy yyin_1;
{
{
yy yyb;
yy yy_0_1;
yy yyv_DECL;
yy yy_0_1_1;
yy yyv_DECLLIST;
yy yy_0_1_2;
yy yy_1_1;
yy yy_2_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 1) goto yyfl_32_1;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yyv_DECL = yy_0_1_1;
yyv_DECLLIST = yy_0_1_2;
yy_1_1 = yyv_DECL;
VisitDECL(yy_1_1);
yy_2_1 = yyv_DECLLIST;
VisitDECLLIST(yy_2_1);
return;
yyfl_32_1 : ;
}
{
yy yyb;
yy yy_0_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 2) goto yyfl_32_2;
return;
yyfl_32_2 : ;
}
yyErr(2,310);
}
VisitDECL(yyin_1)
yy yyin_1;
{
{
yy yyb;
yy yy_0_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 1) goto yyfl_33_1;
return;
yyfl_33_1 : ;
}
{
yy yyb;
yy yy_0_1;
yy yyv_BLOCK;
yy yy_0_1_1;
yy yy_1_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 3) goto yyfl_33_2;
yy_0_1_1 = ((yy)yy_0_1[1]);
yyv_BLOCK = yy_0_1_1;
yy_1_1 = yyv_BLOCK;
VisitBLOCK(yy_1_1);
return;
yyfl_33_2 : ;
}
{
yy yyb;
yy yy_0_1;
yy yyv_Id;
yy yy_0_1_1;
yy yyv_Start;
yy yy_0_1_2;
yy yyv_Stop;
yy yy_0_1_3;
yy yyv_SrcPos;
yy yy_0_1_4;
yy yy_1_1;
yy yy_1_1_1;
yy yy_1_1_2;
yy yy_3_1;
yy yy_4_1;
yy yy_5_1;
yy yy_7_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 2) goto yyfl_33_3;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yy_0_1_4 = ((yy)yy_0_1[4]);
yyv_Id = yy_0_1_1;
yyv_Start = yy_0_1_2;
yyv_Stop = yy_0_1_3;
yyv_SrcPos = yy_0_1_4;
yy_1_1_1 = yyv_Start;
yy_1_1_2 = ((yy)1);
yy_1_1 = (yy)(((long)yy_1_1_1)-((long)yy_1_1_2));
EmitUpto(yy_1_1);
HeaderAndConstructors();
yy_3_1 = ((yy)"#include \"");
Put(yy_3_1);
yy_4_1 = yyv_Id;
PutId(yy_4_1);
yy_5_1 = ((yy)".h\"");
Put(yy_5_1);
Nl();
yy_7_1 = yyv_Stop;
SkipTo(yy_7_1);
return;
yyfl_33_3 : ;
}
{
yy yyb;
yy yyv_D;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Def;
yy yy_0_1_1_1;
yy yyv_Start;
yy yy_0_1_1_2;
yy yyv_Stop;
yy yy_0_1_1_3;
yy yyv_SrcPos;
yy yy_0_1_1_4;
yy yy_1_1;
yy yy_1_1_1;
yy yy_1_1_2;
yy yy_3_1;
yy yy_4_1;
yy yy_5_1;
yy_0_1 = yyin_1;
yy_0_1_1 = yy_0_1;
yyv_D = yy_0_1;
if (yy_0_1_1[0] != 4) goto yyfl_33_4;
yy_0_1_1_1 = ((yy)yy_0_1_1[1]);
yy_0_1_1_2 = ((yy)yy_0_1_1[2]);
yy_0_1_1_3 = ((yy)yy_0_1_1[3]);
yy_0_1_1_4 = ((yy)yy_0_1_1[4]);
yyv_Def = yy_0_1_1_1;
yyv_Start = yy_0_1_1_2;
yyv_Stop = yy_0_1_1_3;
yyv_SrcPos = yy_0_1_1_4;
yy_1_1_1 = yyv_Start;
yy_1_1_2 = ((yy)1);
yy_1_1 = (yy)(((long)yy_1_1_1)-((long)yy_1_1_2));
EmitUpto(yy_1_1);
HeaderAndConstructors();
yy_3_1 = yyv_Def;
EmitDomainDecl(yy_3_1);
yy_4_1 = yyv_D;
EmitConstructorDecls_DECL(yy_4_1);
yy_5_1 = yyv_Stop;
SkipTo(yy_5_1);
return;
yyfl_33_4 : ;
}
yyErr(2,321);
}
VisitBLOCK(yyin_1)
yy yyin_1;
{
{
yy yyb;
yy yy_0_1;
yy yyv_BLOCKITEMLIST;
yy yy_0_1_1;
yy yy_0_1_2;
yy yy_0_1_3;
yy yy_1_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 1) goto yyfl_34_1;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yyv_BLOCKITEMLIST = yy_0_1_1;
yy_1_1 = yyv_BLOCKITEMLIST;
VisitBLOCKITEMLIST(yy_1_1);
return;
yyfl_34_1 : ;
}
yyErr(2,339);
}
VisitBLOCKITEMLIST(yyin_1)
yy yyin_1;
{
{
yy yyb;
yy yy_0_1;
yy yyv_BLOCKITEM;
yy yy_0_1_1;
yy yyv_BLOCKITEMLIST;
yy yy_0_1_2;
yy yy_1_1;
yy yy_2_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 1) goto yyfl_35_1;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yyv_BLOCKITEM = yy_0_1_1;
yyv_BLOCKITEMLIST = yy_0_1_2;
yy_1_1 = yyv_BLOCKITEM;
VisitBLOCKITEM(yy_1_1);
yy_2_1 = yyv_BLOCKITEMLIST;
VisitBLOCKITEMLIST(yy_2_1);
return;
yyfl_35_1 : ;
}
{
yy yyb;
yy yy_0_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 2) goto yyfl_35_2;
return;
yyfl_35_2 : ;
}
yyErr(2,343);
}
VisitBLOCKITEM(yyin_1)
yy yyin_1;
{
{
yy yyb;
yy yy_0_1;
yy yyv_MATCHSTMNT;
yy yy_0_1_1;
yy yy_1_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 1) goto yyfl_36_1;
yy_0_1_1 = ((yy)yy_0_1[1]);
yyv_MATCHSTMNT = yy_0_1_1;
yy_1_1 = yyv_MATCHSTMNT;
VisitMATCHSTMNT(yy_1_1);
return;
yyfl_36_1 : ;
}
{
yy yyb;
yy yy_0_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 2) goto yyfl_36_2;
return;
yyfl_36_2 : ;
}
{
yy yyb;
yy yy_0_1;
yy yyv_BLOCK;
yy yy_0_1_1;
yy yy_1_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 3) goto yyfl_36_3;
yy_0_1_1 = ((yy)yy_0_1[1]);
yyv_BLOCK = yy_0_1_1;
yy_1_1 = yyv_BLOCK;
VisitBLOCK(yy_1_1);
return;
yyfl_36_3 : ;
}
yyErr(2,349);
}
VisitMATCHSTMNT(yyin_1)
yy yyin_1;
{
{
yy yyb;
yy yy_0_1;
yy yyv_EXPRLIST;
yy yy_0_1_1;
yy yyv_RULELIST;
yy yy_0_1_2;
yy yyv_P1;
yy yy_0_1_3;
yy yyv_P2;
yy yy_0_1_4;
yy yyv_Number;
yy yy_0_1_5;
yy yyv_SrcPos;
yy yy_0_1_6;
yy yy_1_1;
yy yy_1_1_1;
yy yy_1_1_2;
yy yy_2_1;
yy yyv_OldMatchNumber;
yy yy_3;
yy yy_4;
yy yyv_OldTmpList;
yy yy_5;
yy yy_6_1;
yy yyv_INTLIST;
yy yy_6_2;
yy yy_7;
yy yy_9_1;
yy yy_9_2;
yy yy_9_3;
yy yyv_IDENTLIST;
yy yy_9_4;
yy yy_10_1;
yy yy_10_2;
yy yy_11;
yy yy_12_1;
yy yy_13_1;
yy yy_13_2;
yy yy_13_3;
yy yy_14_1;
yy yy_14_2;
yy yy_15;
yy yy_16;
yy yy_17_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 1) goto yyfl_37_1;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yy_0_1_4 = ((yy)yy_0_1[4]);
yy_0_1_5 = ((yy)yy_0_1[5]);
yy_0_1_6 = ((yy)yy_0_1[6]);
yyv_EXPRLIST = yy_0_1_1;
yyv_RULELIST = yy_0_1_2;
yyv_P1 = yy_0_1_3;
yyv_P2 = yy_0_1_4;
yyv_Number = yy_0_1_5;
yyv_SrcPos = yy_0_1_6;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_1_1_1 = yyv_P1;
yy_1_1_2 = ((yy)1);
yy_1_1 = (yy)(((long)yy_1_1_1)-((long)yy_1_1_2));
EmitUpto(yy_1_1);
yy_2_1 = yyv_SrcPos;
SourceReference(yy_2_1);
yy_3 = yyglov_CurMatchNumber;
if (yy_3 == (yy) yyu) yyErr(1,366);
yyv_OldMatchNumber = yy_3;
yy_4 = yyv_Number;
yyglov_CurMatchNumber = yy_4;
yy_5 = yyglov_CurTmpList;
if (yy_5 == (yy) yyu) yyErr(1,368);
yyv_OldTmpList = yy_5;
yy_6_1 = yyv_EXPRLIST;
MatchExprList_to_IntList(yy_6_1, &yy_6_2);
yyv_INTLIST = yy_6_2;
yy_7 = yyv_INTLIST;
yyglov_CurTmpList = yy_7;
TemplBeginMatch();
yy_9_1 = yyv_EXPRLIST;
yy_9_2 = yyv_RULELIST;
yy_9_3 = ((yy)1);
DetermineMatchTypes(yy_9_1, yy_9_2, yy_9_3, &yy_9_4);
yyv_IDENTLIST = yy_9_4;
yy_10_1 = yyv_EXPRLIST;
yy_10_2 = yyv_IDENTLIST;
DeclareMatchTempos(yy_10_1, yy_10_2);
yy_11 = yyb + 0;
yy_11[0] = 2;
yyglov_ListOfLocalVars = yy_11;
yy_12_1 = yyv_EXPRLIST;
CodeMatchList(yy_12_1);
yy_13_1 = yyv_RULELIST;
yy_13_2 = yyv_P2;
yy_13_3 = yyv_IDENTLIST;
VisitRULELIST(yy_13_1, yy_13_2, yy_13_3);
yy_14_1 = yyv_Number;
yy_14_2 = yyv_SrcPos;
TemplEndMatch(yy_14_1, yy_14_2);
yy_15 = yyv_OldMatchNumber;
yyglov_CurMatchNumber = yy_15;
yy_16 = yyv_OldTmpList;
yyglov_CurTmpList = yy_16;
yy_17_1 = yyv_P2;
SkipTo(yy_17_1);
return;
yyfl_37_1 : ;
}
yyErr(2,356);
}
VisitRULELIST(yyin_1, yyin_2, yyin_3)
yy yyin_1;
yy yyin_2;
yy yyin_3;
{
{
yy yyb;
yy yy_0_1;
yy yyv_RULE;
yy yy_0_1_1;
yy yyv_RULELIST;
yy yy_0_1_2;
yy yyv_Continue;
yy yy_0_2;
yy yyv_TypeList;
yy yy_0_3;
yy yy_1_1_1_1;
yy yy_1_1_1_2;
yy yy_1_1_1_2_1;
yy yy_1_1_1_2_1_1;
yy yy_1_1_1_2_1_2;
yy yyv_P;
yy yy_1_1_1_2_1_3;
yy yy_1_1_1_2_1_4;
yy yy_1_1_1_2_1_5;
yy yy_1_1_1_2_1_6;
yy yy_1_1_1_2_2;
yy yy_1_2_1_1;
yy yy_1_2_1_2;
yy yy_2_1;
yy yy_2_2;
yy yy_2_3;
yy yy_3_1;
yy yy_3_2;
yy yy_3_3;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yy_0_3 = yyin_3;
if (yy_0_1[0] != 1) goto yyfl_38_1;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yyv_RULE = yy_0_1_1;
yyv_RULELIST = yy_0_1_2;
yyv_Continue = yy_0_2;
yyv_TypeList = yy_0_3;
{
yy yysb = yyb;
yy_1_1_1_1 = yyv_RULELIST;
yy_1_1_1_2 = yy_1_1_1_1;
if (yy_1_1_1_2[0] != 1) goto yyfl_38_1_1_1;
yy_1_1_1_2_1 = ((yy)yy_1_1_1_2[1]);
yy_1_1_1_2_2 = ((yy)yy_1_1_1_2[2]);
if (yy_1_1_1_2_1[0] != 1) goto yyfl_38_1_1_1;
yy_1_1_1_2_1_1 = ((yy)yy_1_1_1_2_1[1]);
yy_1_1_1_2_1_2 = ((yy)yy_1_1_1_2_1[2]);
yy_1_1_1_2_1_3 = ((yy)yy_1_1_1_2_1[3]);
yy_1_1_1_2_1_4 = ((yy)yy_1_1_1_2_1[4]);
yy_1_1_1_2_1_5 = ((yy)yy_1_1_1_2_1[5]);
yy_1_1_1_2_1_6 = ((yy)yy_1_1_1_2_1[6]);
yyv_P = yy_1_1_1_2_1_3;
goto yysl_38_1_1;
yyfl_38_1_1_1 : ;
yy_1_2_1_1 = yyv_Continue;
yy_1_2_1_2 = yy_1_2_1_1;
yyv_P = yy_1_2_1_2;
goto yysl_38_1_1;
yysl_38_1_1 : ;
yyb = yysb;
}
yy_2_1 = yyv_RULE;
yy_2_2 = yyv_P;
yy_2_3 = yyv_TypeList;
VisitRULE(yy_2_1, yy_2_2, yy_2_3);
yy_3_1 = yyv_RULELIST;
yy_3_2 = yyv_Continue;
yy_3_3 = yyv_TypeList;
VisitRULELIST(yy_3_1, yy_3_2, yy_3_3);
return;
yyfl_38_1 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_2;
yy yy_0_3;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yy_0_3 = yyin_3;
if (yy_0_1[0] != 2) goto yyfl_38_2;
return;
yyfl_38_2 : ;
}
yyErr(2,388);
}
VisitRULE(yyin_1, yyin_2, yyin_3)
yy yyin_1;
yy yyin_2;
yy yyin_3;
{
{
yy yyb;
yy yy_0_1;
yy yyv_PATTERNLIST;
yy yy_0_1_1;
yy yyv_BLOCKITEMLIST;
yy yy_0_1_2;
yy yyv_P1;
yy yy_0_1_3;
yy yyv_P2;
yy yy_0_1_4;
yy yyv_RuleNumber;
yy yy_0_1_5;
yy yyv_SrcPos;
yy yy_0_1_6;
yy yyv_P3;
yy yy_0_2;
yy yyv_TypeList;
yy yy_0_3;
yy yyv_OldListOfLocalVars;
yy yy_1;
yy yyv_OldRuleNumber;
yy yy_2;
yy yy_3;
yy yyv_TmpList;
yy yy_4;
yy yy_6_1;
yy yy_6_2;
yy yy_6_3;
yy yy_7_1;
yy yy_7_2;
yy yy_8_1;
yy yy_9_1;
yy yy_10_1;
yy yy_10_1_1;
yy yy_10_1_2;
yy yyv_MatchNumber;
yy yy_11;
yy yy_12_1;
yy yy_12_2;
yy yy_13;
yy yy_14;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yy_0_3 = yyin_3;
if (yy_0_1[0] != 1) goto yyfl_39_1;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yy_0_1_4 = ((yy)yy_0_1[4]);
yy_0_1_5 = ((yy)yy_0_1[5]);
yy_0_1_6 = ((yy)yy_0_1[6]);
yyv_PATTERNLIST = yy_0_1_1;
yyv_BLOCKITEMLIST = yy_0_1_2;
yyv_P1 = yy_0_1_3;
yyv_P2 = yy_0_1_4;
yyv_RuleNumber = yy_0_1_5;
yyv_SrcPos = yy_0_1_6;
yyv_P3 = yy_0_2;
yyv_TypeList = yy_0_3;
yy_1 = yyglov_ListOfLocalVars;
if (yy_1 == (yy) yyu) yyErr(1,404);
yyv_OldListOfLocalVars = yy_1;
yy_2 = yyglov_CurRuleNumber;
if (yy_2 == (yy) yyu) yyErr(1,406);
yyv_OldRuleNumber = yy_2;
yy_3 = yyv_RuleNumber;
yyglov_CurRuleNumber = yy_3;
yy_4 = yyglov_CurTmpList;
if (yy_4 == (yy) yyu) yyErr(1,408);
yyv_TmpList = yy_4;
TemplBeginRule();
yy_6_1 = yyv_PATTERNLIST;
yy_6_2 = yyv_TypeList;
yy_6_3 = yyv_SrcPos;
DeclareRuleTempos_PATTERNLIST(yy_6_1, yy_6_2, yy_6_3);
yy_7_1 = yyv_PATTERNLIST;
yy_7_2 = yyv_TmpList;
CodePATTERNLIST(yy_7_1, yy_7_2);
yy_8_1 = yyv_P2;
SkipTo(yy_8_1);
yy_9_1 = yyv_BLOCKITEMLIST;
VisitBLOCKITEMLIST(yy_9_1);
yy_10_1_1 = yyv_P3;
yy_10_1_2 = ((yy)1);
yy_10_1 = (yy)(((long)yy_10_1_1)-((long)yy_10_1_2));
EmitUpto(yy_10_1);
yy_11 = yyglov_CurMatchNumber;
if (yy_11 == (yy) yyu) yyErr(1,422);
yyv_MatchNumber = yy_11;
yy_12_1 = yyv_MatchNumber;
yy_12_2 = yyv_RuleNumber;
TemplEndRule(yy_12_1, yy_12_2);
yy_13 = yyv_OldRuleNumber;
yyglov_CurRuleNumber = yy_13;
yy_14 = yyv_OldListOfLocalVars;
yyglov_ListOfLocalVars = yy_14;
return;
yyfl_39_1 : ;
}
yyErr(2,399);
}
DeclareRuleTempos_PATTERNLIST(yyin_1, yyin_2, yyin_3)
yy yyin_1;
yy yyin_2;
yy yyin_3;
{
{
yy yyb;
yy yy_0_1;
yy yyv_H;
yy yy_0_1_1;
yy yyv_T;
yy yy_0_1_2;
yy yy_0_2;
yy yyv_TypeH;
yy yy_0_2_1;
yy yyv_TypeT;
yy yy_0_2_2;
yy yyv_SrcPos;
yy yy_0_3;
yy yy_1_1;
yy yy_1_2;
yy yy_2_1;
yy yy_2_2;
yy yy_2_3;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yy_0_3 = yyin_3;
if (yy_0_1[0] != 1) goto yyfl_40_1;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yyv_H = yy_0_1_1;
yyv_T = yy_0_1_2;
if (yy_0_2[0] != 1) goto yyfl_40_1;
yy_0_2_1 = ((yy)yy_0_2[1]);
yy_0_2_2 = ((yy)yy_0_2[2]);
yyv_TypeH = yy_0_2_1;
yyv_TypeT = yy_0_2_2;
yyv_SrcPos = yy_0_3;
yy_1_1 = yyv_H;
yy_1_2 = yyv_TypeH;
DeclareRuleTempos_PATTERN(yy_1_1, yy_1_2);
yy_2_1 = yyv_T;
yy_2_2 = yyv_TypeT;
yy_2_3 = yyv_SrcPos;
DeclareRuleTempos_PATTERNLIST(yy_2_1, yy_2_2, yy_2_3);
return;
yyfl_40_1 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_2;
yy yy_0_3;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yy_0_3 = yyin_3;
if (yy_0_1[0] != 2) goto yyfl_40_2;
if (yy_0_2[0] != 2) goto yyfl_40_2;
return;
yyfl_40_2 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_2;
yy yyv_SrcPos;
yy yy_0_3;
yy yy_1_1;
yy yy_1_2;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yy_0_3 = yyin_3;
if (yy_0_1[0] != 2) goto yyfl_40_3;
yyv_SrcPos = yy_0_3;
yy_1_1 = ((yy)"xx b : too few patterns");
yy_1_2 = yyv_SrcPos;
Error(yy_1_1, yy_1_2);
return;
yyfl_40_3 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_2;
yy yyv_SrcPos;
yy yy_0_3;
yy yy_1_1;
yy yy_1_2;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yy_0_3 = yyin_3;
if (yy_0_2[0] != 2) goto yyfl_40_4;
yyv_SrcPos = yy_0_3;
yy_1_1 = ((yy)"too many patterns");
yy_1_2 = yyv_SrcPos;
Error(yy_1_1, yy_1_2);
return;
yyfl_40_4 : ;
}
yyErr(2,432);
}
DeclareRuleTempos_PATTERN(yyin_1, yyin_2)
yy yyin_1;
yy yyin_2;
{
{
yy yyb;
yy yy_0_1;
yy yyv_Id;
yy yy_0_1_1;
yy yyv_N;
yy yy_0_1_2;
yy yy_0_1_3;
yy yyv_Type;
yy yy_0_2;
yy yy_1_1;
yy yy_2_1;
yy yy_3_1;
yy yy_4_1;
yy yy_6_1;
yy yy_7_1;
yy yy_8_1;
yy yy_9_1;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
if (yy_0_1[0] != 1) goto yyfl_41_1;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yyv_Id = yy_0_1_1;
yyv_N = yy_0_1_2;
yyv_Type = yy_0_2;
yy_1_1 = yyv_Type;
PutId(yy_1_1);
yy_2_1 = ((yy)" ");
Put(yy_2_1);
yy_3_1 = yyv_Id;
PutId(yy_3_1);
yy_4_1 = ((yy)";");
Put(yy_4_1);
Nl();
yy_6_1 = yyv_Type;
PutId(yy_6_1);
yy_7_1 = ((yy)" tmp");
Put(yy_7_1);
yy_8_1 = yyv_N;
PutI(yy_8_1);
yy_9_1 = ((yy)";");
Put(yy_9_1);
Nl();
return;
yyfl_41_1 : ;
}
{
yy yyb;
yy yy_0_1;
yy yyv_Functor;
yy yy_0_1_1;
yy yyv_Args;
yy yy_0_1_2;
yy yyv_N;
yy yy_0_1_3;
yy yyv_Pos;
yy yy_0_1_4;
yy yyv_Type;
yy yy_0_2;
yy yy_1_1;
yy yy_2_1;
yy yy_3_1;
yy yy_4_1;
yy yy_6_1_1_1;
yy yy_6_1_1_2;
yy yy_6_1_1_2_1;
yy yy_6_1_1_2_2;
yy yy_6_1_1_2_2_1;
yy yyv_ArgDefs;
yy yy_6_1_1_2_2_2;
yy yy_6_1_1_2_2_3;
yy yy_6_1_2_1;
yy yyv_Types;
yy yy_6_1_2_2;
yy yy_6_1_3_1_1_1;
yy yy_6_1_3_1_1_2;
yy yy_6_1_3_2_1_1;
yy yy_6_1_3_2_1_2;
yy yy_6_1_3_2_1_3;
yy yy_6_2_1_1;
yy yy_6_2_1_2;
yy yy_6_2_1_3;
yy yy_6_2_1_4;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
if (yy_0_1[0] != 2) goto yyfl_41_2;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yy_0_1_4 = ((yy)yy_0_1[4]);
yyv_Functor = yy_0_1_1;
yyv_Args = yy_0_1_2;
yyv_N = yy_0_1_3;
yyv_Pos = yy_0_1_4;
yyv_Type = yy_0_2;
yy_1_1 = yyv_Type;
PutId(yy_1_1);
yy_2_1 = ((yy)" tmp");
Put(yy_2_1);
yy_3_1 = yyv_N;
PutI(yy_3_1);
yy_4_1 = ((yy)";");
Put(yy_4_1);
Nl();
{
yy yysb = yyb;
yy_6_1_1_1 = yyv_Functor;
if (! HasMeaning(yy_6_1_1_1, &yy_6_1_1_2)) goto yyfl_41_2_6_1;
if (yy_6_1_1_2[0] != 2) goto yyfl_41_2_6_1;
yy_6_1_1_2_1 = ((yy)yy_6_1_1_2[1]);
yy_6_1_1_2_2 = ((yy)yy_6_1_1_2[2]);
if (yy_6_1_1_2_2[0] != 1) goto yyfl_41_2_6_1;
yy_6_1_1_2_2_1 = ((yy)yy_6_1_1_2_2[1]);
yy_6_1_1_2_2_2 = ((yy)yy_6_1_1_2_2[2]);
yy_6_1_1_2_2_3 = ((yy)yy_6_1_1_2_2[3]);
yyv_ArgDefs = yy_6_1_1_2_2_2;
yy_6_1_2_1 = yyv_ArgDefs;
ArgDefTypes(yy_6_1_2_1, &yy_6_1_2_2);
yyv_Types = yy_6_1_2_2;
{
yy yysb = yyb;
yy_6_1_3_1_1_1 = yyv_Args;
yy_6_1_3_1_1_2 = yy_6_1_3_1_1_1;
if (yy_6_1_3_1_1_2[0] != 2) goto yyfl_41_2_6_1_3_1;
goto yysl_41_2_6_1_3;
yyfl_41_2_6_1_3_1 : ;
yy_6_1_3_2_1_1 = yyv_Args;
yy_6_1_3_2_1_2 = yyv_Types;
yy_6_1_3_2_1_3 = yyv_Pos;
DeclareRuleTempos_PATTERNLIST(yy_6_1_3_2_1_1, yy_6_1_3_2_1_2, yy_6_1_3_2_1_3);
goto yysl_41_2_6_1_3;
yysl_41_2_6_1_3 : ;
yyb = yysb;
}
goto yysl_41_2_6;
yyfl_41_2_6_1 : ;
yy_6_2_1_1 = ((yy)"'");
yy_6_2_1_2 = yyv_Functor;
yy_6_2_1_3 = ((yy)"' not declared as functor");
yy_6_2_1_4 = yyv_Pos;
ErrorI(yy_6_2_1_1, yy_6_2_1_2, yy_6_2_1_3, yy_6_2_1_4);
goto yysl_41_2_6;
yysl_41_2_6 : ;
yyb = yysb;
}
return;
yyfl_41_2 : ;
}
{
yy yyb;
yy yy_0_1;
yy yyv_Id;
yy yy_0_1_1;
yy yyv_Pattern;
yy yy_0_1_2;
yy yyv_Pos;
yy yy_0_1_3;
yy yyv_Type;
yy yy_0_2;
yy yy_1_1;
yy yy_1_2;
yy yy_2_1_1_1;
yy yy_2_1_1_2;
yy yyv_Functor;
yy yy_2_1_1_2_1;
yy yy_2_1_1_2_2;
yy yy_2_1_1_2_3;
yy yy_2_1_1_2_4;
yy yy_2_1_2_1;
yy yy_2_1_2_2;
yy yy_2_2_1_1;
yy yy_2_2_1_2;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
if (yy_0_1[0] != 3) goto yyfl_41_3;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yyv_Id = yy_0_1_1;
yyv_Pattern = yy_0_1_2;
yyv_Pos = yy_0_1_3;
yyv_Type = yy_0_2;
yy_1_1 = yyv_Pattern;
yy_1_2 = yyv_Type;
DeclareRuleTempos_PATTERN(yy_1_1, yy_1_2);
{
yy yysb = yyb;
yy_2_1_1_1 = yyv_Pattern;
yy_2_1_1_2 = yy_2_1_1_1;
if (yy_2_1_1_2[0] != 2) goto yyfl_41_3_2_1;
yy_2_1_1_2_1 = ((yy)yy_2_1_1_2[1]);
yy_2_1_1_2_2 = ((yy)yy_2_1_1_2[2]);
yy_2_1_1_2_3 = ((yy)yy_2_1_1_2[3]);
yy_2_1_1_2_4 = ((yy)yy_2_1_1_2[4]);
yyv_Functor = yy_2_1_1_2_1;
yy_2_1_2_1 = yyv_Id;
yy_2_1_2_2 = yyv_Functor;
TemplDeclareTildeVar(yy_2_1_2_1, yy_2_1_2_2);
goto yysl_41_3_2;
yyfl_41_3_2_1 : ;
yy_2_2_1_1 = ((yy)"invalid form of named pattern");
yy_2_2_1_2 = yyv_Pos;
Error(yy_2_2_1_1, yy_2_2_1_2);
goto yysl_41_3_2;
yysl_41_3_2 : ;
yyb = yysb;
}
return;
yyfl_41_3 : ;
}
yyErr(2,442);
}
ArgDefTypes(yyin_1, yyout_1)
yy yyin_1;
yy *yyout_1;
{
{
yy yyb;
yy yy_0_1;
yy yyv_H;
yy yy_0_1_1;
yy yyv_T;
yy yy_0_1_2;
yy yy_0_2;
yy yy_0_2_1;
yy yy_0_2_2;
yy yy_1_1;
yy yy_1_2;
yy yyv_TypeH;
yy yy_1_2_1;
yy yy_1_2_2;
yy yy_1_2_3;
yy yy_2_1;
yy yyv_TypeT;
yy yy_2_2;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 1) goto yyfl_42_1;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yyv_H = yy_0_1_1;
yyv_T = yy_0_1_2;
yyb = yyh;
yyh += 3; if (yyh > yyhx) yyExtend();
yy_1_1 = yyv_H;
yy_1_2 = yy_1_1;
if (yy_1_2[0] != 1) goto yyfl_42_1;
yy_1_2_1 = ((yy)yy_1_2[1]);
yy_1_2_2 = ((yy)yy_1_2[2]);
yy_1_2_3 = ((yy)yy_1_2[3]);
yyv_TypeH = yy_1_2_1;
yy_2_1 = yyv_T;
ArgDefTypes(yy_2_1, &yy_2_2);
yyv_TypeT = yy_2_2;
yy_0_2_1 = yyv_TypeH;
yy_0_2_2 = yyv_TypeT;
yy_0_2 = yyb + 0;
yy_0_2[0] = 1;
yy_0_2[1] = ((long)yy_0_2_1);
yy_0_2[2] = ((long)yy_0_2_2);
*yyout_1 = yy_0_2;
return;
yyfl_42_1 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_2;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 2) goto yyfl_42_2;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_0_2 = yyb + 0;
yy_0_2[0] = 2;
*yyout_1 = yy_0_2;
return;
yyfl_42_2 : ;
}
yyErr(2,473);
}
DetermineMatchTypes(yyin_1, yyin_2, yyin_3, yyout_1)
yy yyin_1;
yy yyin_2;
yy yyin_3;
yy *yyout_1;
{
{
yy yyb;
yy yy_0_1;
yy yyv_Hd;
yy yy_0_1_1;
yy yyv_Tl;
yy yy_0_1_2;
yy yyv_RuleList;
yy yy_0_2;
yy yyv_Pos;
yy yy_0_3;
yy yy_0_4;
yy yy_0_4_1;
yy yy_0_4_2;
yy yy_1_1;
yy yy_1_2;
yy yy_1_2_1;
yy yy_1_2_2;
yy yyv_SrcPos;
yy yy_1_2_3;
yy yy_2_1;
yy yy_2_2;
yy yy_2_3;
yy yyv_HdType;
yy yy_2_4;
yy yy_3_1;
yy yy_3_2;
yy yy_3_3;
yy yy_3_3_1;
yy yy_3_3_2;
yy yyv_TlTypes;
yy yy_3_4;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yy_0_3 = yyin_3;
if (yy_0_1[0] != 1) goto yyfl_43_1;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yyv_Hd = yy_0_1_1;
yyv_Tl = yy_0_1_2;
yyv_RuleList = yy_0_2;
yyv_Pos = yy_0_3;
yyb = yyh;
yyh += 3; if (yyh > yyhx) yyExtend();
yy_1_1 = yyv_Hd;
yy_1_2 = yy_1_1;
if (yy_1_2[0] != 1) goto yyfl_43_1;
yy_1_2_1 = ((yy)yy_1_2[1]);
yy_1_2_2 = ((yy)yy_1_2[2]);
yy_1_2_3 = ((yy)yy_1_2[3]);
yyv_SrcPos = yy_1_2_3;
yy_2_1 = yyv_RuleList;
yy_2_2 = yyv_Pos;
yy_2_3 = yyv_SrcPos;
DetermineMatchType(yy_2_1, yy_2_2, yy_2_3, &yy_2_4);
yyv_HdType = yy_2_4;
yy_3_1 = yyv_Tl;
yy_3_2 = yyv_RuleList;
yy_3_3_1 = yyv_Pos;
yy_3_3_2 = ((yy)1);
yy_3_3 = (yy)(((long)yy_3_3_1)+((long)yy_3_3_2));
DetermineMatchTypes(yy_3_1, yy_3_2, yy_3_3, &yy_3_4);
yyv_TlTypes = yy_3_4;
yy_0_4_1 = yyv_HdType;
yy_0_4_2 = yyv_TlTypes;
yy_0_4 = yyb + 0;
yy_0_4[0] = 1;
yy_0_4[1] = ((long)yy_0_4_1);
yy_0_4[2] = ((long)yy_0_4_2);
*yyout_1 = yy_0_4;
return;
yyfl_43_1 : ;
}
{
yy yyb;
yy yy_0_1;
yy yyv_RuleList;
yy yy_0_2;
yy yyv_Pos;
yy yy_0_3;
yy yy_0_4;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yy_0_3 = yyin_3;
if (yy_0_1[0] != 2) goto yyfl_43_2;
yyv_RuleList = yy_0_2;
yyv_Pos = yy_0_3;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_0_4 = yyb + 0;
yy_0_4[0] = 2;
*yyout_1 = yy_0_4;
return;
yyfl_43_2 : ;
}
yyErr(2,484);
}
DetermineMatchType(yyin_1, yyin_2, yyin_3, yyout_1)
yy yyin_1;
yy yyin_2;
yy yyin_3;
yy *yyout_1;
{
{
yy yyb;
yy yy_0_1;
yy yyv_Hd;
yy yy_0_1_1;
yy yyv_Tl;
yy yy_0_1_2;
yy yyv_Pos;
yy yy_0_2;
yy yyv_SrcPos;
yy yy_0_3;
yy yy_0_4;
yy yy_1_1;
yy yy_1_2;
yy yyv_Patterns;
yy yy_1_2_1;
yy yy_1_2_2;
yy yy_1_2_3;
yy yy_1_2_4;
yy yy_1_2_5;
yy yy_1_2_6;
yy yy_2_1;
yy yy_2_2;
yy yy_2_3;
yy yyv_Pattern;
yy yy_2_4;
yy yy_3_1_1_1;
yy yyv_Type;
yy yy_3_1_1_2;
yy yy_3_1_2_1;
yy yy_3_1_2_2;
yy yy_3_1_2_3;
yy yy_3_2_1_1;
yy yy_3_2_1_2;
yy yy_3_2_1_3;
yy yy_3_2_1_4;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yy_0_3 = yyin_3;
if (yy_0_1[0] != 1) goto yyfl_44_1;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yyv_Hd = yy_0_1_1;
yyv_Tl = yy_0_1_2;
yyv_Pos = yy_0_2;
yyv_SrcPos = yy_0_3;
yy_1_1 = yyv_Hd;
yy_1_2 = yy_1_1;
if (yy_1_2[0] != 1) goto yyfl_44_1;
yy_1_2_1 = ((yy)yy_1_2[1]);
yy_1_2_2 = ((yy)yy_1_2[2]);
yy_1_2_3 = ((yy)yy_1_2[3]);
yy_1_2_4 = ((yy)yy_1_2[4]);
yy_1_2_5 = ((yy)yy_1_2[5]);
yy_1_2_6 = ((yy)yy_1_2[6]);
yyv_Patterns = yy_1_2_1;
yy_2_1 = yyv_Patterns;
yy_2_2 = yyv_Pos;
yy_2_3 = ((yy)1);
GetPatternAtPos(yy_2_1, yy_2_2, yy_2_3, &yy_2_4);
yyv_Pattern = yy_2_4;
{
yy yysb = yyb;
yy_3_1_1_1 = yyv_Pattern;
if (! GetTypeOfPattern(yy_3_1_1_1, &yy_3_1_1_2)) goto yyfl_44_1_3_1;
yyv_Type = yy_3_1_1_2;
yy_3_1_2_1 = yyv_Tl;
yy_3_1_2_2 = yyv_Pos;
yy_3_1_2_3 = yyv_Type;
CheckTypeOfPatterns(yy_3_1_2_1, yy_3_1_2_2, yy_3_1_2_3);
goto yysl_44_1_3;
yyfl_44_1_3_1 : ;
yy_3_2_1_1 = yyv_Tl;
yy_3_2_1_2 = yyv_Pos;
yy_3_2_1_3 = yyv_SrcPos;
DetermineMatchType(yy_3_2_1_1, yy_3_2_1_2, yy_3_2_1_3, &yy_3_2_1_4);
yyv_Type = yy_3_2_1_4;
goto yysl_44_1_3;
yysl_44_1_3 : ;
yyb = yysb;
}
yy_0_4 = yyv_Type;
*yyout_1 = yy_0_4;
return;
yyfl_44_1 : ;
}
{
yy yyb;
yy yy_0_1;
yy yyv_Pos;
yy yy_0_2;
yy yyv_SrcPos;
yy yy_0_3;
yy yy_0_4;
yy yy_1_1;
yy yy_1_2;
yy yy_2_1;
yy yyv_ErrorName;
yy yy_2_2;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yy_0_3 = yyin_3;
if (yy_0_1[0] != 2) goto yyfl_44_2;
yyv_Pos = yy_0_2;
yyv_SrcPos = yy_0_3;
yy_1_1 = ((yy)"unknown pattern type (at least one functor usage required)");
yy_1_2 = yyv_SrcPos;
Error(yy_1_1, yy_1_2);
yy_2_1 = ((yy)"<?>");
string_to_id(yy_2_1, &yy_2_2);
yyv_ErrorName = yy_2_2;
yy_0_4 = yyv_ErrorName;
*yyout_1 = yy_0_4;
return;
yyfl_44_2 : ;
}
yyErr(2,492);
}
CheckTypeOfPatterns(yyin_1, yyin_2, yyin_3)
yy yyin_1;
yy yyin_2;
yy yyin_3;
{
{
yy yyb;
yy yy_0_1;
yy yyv_Hd;
yy yy_0_1_1;
yy yyv_Tl;
yy yy_0_1_2;
yy yyv_Pos;
yy yy_0_2;
yy yyv_ExpectedType;
yy yy_0_3;
yy yy_1_1;
yy yy_1_2;
yy yyv_Patterns;
yy yy_1_2_1;
yy yy_1_2_2;
yy yy_1_2_3;
yy yy_1_2_4;
yy yy_1_2_5;
yy yy_1_2_6;
yy yy_2_1;
yy yy_2_2;
yy yy_2_3;
yy yyv_Pattern;
yy yy_2_4;
yy yy_3_1_1_1;
yy yyv_Type;
yy yy_3_1_1_2;
yy yy_3_1_2_1_1_1;
yy yy_3_1_2_1_1_2;
yy yy_3_1_2_1_2_1;
yy yyv_SrcPos;
yy yy_3_1_2_1_2_2;
yy yy_3_1_2_1_3_1;
yy yy_3_1_2_1_3_2;
yy yy_3_1_2_1_3_3;
yy yy_3_1_2_1_3_4;
yy yy_4_1;
yy yy_4_2;
yy yy_4_3;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yy_0_3 = yyin_3;
if (yy_0_1[0] != 1) goto yyfl_45_1;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yyv_Hd = yy_0_1_1;
yyv_Tl = yy_0_1_2;
yyv_Pos = yy_0_2;
yyv_ExpectedType = yy_0_3;
yy_1_1 = yyv_Hd;
yy_1_2 = yy_1_1;
if (yy_1_2[0] != 1) goto yyfl_45_1;
yy_1_2_1 = ((yy)yy_1_2[1]);
yy_1_2_2 = ((yy)yy_1_2[2]);
yy_1_2_3 = ((yy)yy_1_2[3]);
yy_1_2_4 = ((yy)yy_1_2[4]);
yy_1_2_5 = ((yy)yy_1_2[5]);
yy_1_2_6 = ((yy)yy_1_2[6]);
yyv_Patterns = yy_1_2_1;
yy_2_1 = yyv_Patterns;
yy_2_2 = yyv_Pos;
yy_2_3 = ((yy)1);
GetPatternAtPos(yy_2_1, yy_2_2, yy_2_3, &yy_2_4);
yyv_Pattern = yy_2_4;
{
yy yysb = yyb;
yy_3_1_1_1 = yyv_Pattern;
if (! GetTypeOfPattern(yy_3_1_1_1, &yy_3_1_1_2)) goto yyfl_45_1_3_1;
yyv_Type = yy_3_1_1_2;
{
yy yysb = yyb;
yy_3_1_2_1_1_1 = yyv_Type;
yy_3_1_2_1_1_2 = yyv_ExpectedType;
if (yyeq_IDENT(yy_3_1_2_1_1_1, yy_3_1_2_1_1_2)) goto yyfl_45_1_3_1_2_1;
yy_3_1_2_1_2_1 = yyv_Pattern;
GetPosOfPattern(yy_3_1_2_1_2_1, &yy_3_1_2_1_2_2);
yyv_SrcPos = yy_3_1_2_1_2_2;
yy_3_1_2_1_3_1 = ((yy)"pattern of type '");
yy_3_1_2_1_3_2 = yyv_ExpectedType;
yy_3_1_2_1_3_3 = ((yy)"' expected");
yy_3_1_2_1_3_4 = yyv_SrcPos;
ErrorI(yy_3_1_2_1_3_1, yy_3_1_2_1_3_2, yy_3_1_2_1_3_3, yy_3_1_2_1_3_4);
goto yysl_45_1_3_1_2;
yyfl_45_1_3_1_2_1 : ;
goto yysl_45_1_3_1_2;
yysl_45_1_3_1_2 : ;
yyb = yysb;
}
goto yysl_45_1_3;
yyfl_45_1_3_1 : ;
goto yysl_45_1_3;
yysl_45_1_3 : ;
yyb = yysb;
}
yy_4_1 = yyv_Tl;
yy_4_2 = yyv_Pos;
yy_4_3 = yyv_ExpectedType;
CheckTypeOfPatterns(yy_4_1, yy_4_2, yy_4_3);
return;
yyfl_45_1 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_2;
yy yy_0_3;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yy_0_3 = yyin_3;
if (yy_0_1[0] != 2) goto yyfl_45_2;
return;
yyfl_45_2 : ;
}
yyErr(2,506);
}
GetPatternAtPos(yyin_1, yyin_2, yyin_3, yyout_1)
yy yyin_1;
yy yyin_2;
yy yyin_3;
yy *yyout_1;
{
{
yy yyb;
yy yy_0_1;
yy yyv_Hd;
yy yy_0_1_1;
yy yyv_Tl;
yy yy_0_1_2;
yy yyv_Pos;
yy yy_0_2;
yy yyv_N;
yy yy_0_3;
yy yy_0_4;
yy yy_1_1_1_1;
yy yy_1_1_1_2;
yy yy_1_1_2_1;
yy yyv_Pattern;
yy yy_1_1_2_2;
yy yy_1_2_1_1;
yy yy_1_2_1_2;
yy yy_1_2_1_3;
yy yy_1_2_1_3_1;
yy yy_1_2_1_3_2;
yy yy_1_2_1_4;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yy_0_3 = yyin_3;
if (yy_0_1[0] != 1) goto yyfl_46_1;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yyv_Hd = yy_0_1_1;
yyv_Tl = yy_0_1_2;
yyv_Pos = yy_0_2;
yyv_N = yy_0_3;
{
yy yysb = yyb;
yy_1_1_1_1 = yyv_Pos;
yy_1_1_1_2 = yyv_N;
if ((long)yy_1_1_1_1 != (long)yy_1_1_1_2) goto yyfl_46_1_1_1;
yy_1_1_2_1 = yyv_Hd;
yy_1_1_2_2 = yy_1_1_2_1;
yyv_Pattern = yy_1_1_2_2;
goto yysl_46_1_1;
yyfl_46_1_1_1 : ;
yy_1_2_1_1 = yyv_Tl;
yy_1_2_1_2 = yyv_Pos;
yy_1_2_1_3_1 = yyv_N;
yy_1_2_1_3_2 = ((yy)1);
yy_1_2_1_3 = (yy)(((long)yy_1_2_1_3_1)+((long)yy_1_2_1_3_2));
GetPatternAtPos(yy_1_2_1_1, yy_1_2_1_2, yy_1_2_1_3, &yy_1_2_1_4);
yyv_Pattern = yy_1_2_1_4;
goto yysl_46_1_1;
yysl_46_1_1 : ;
yyb = yysb;
}
yy_0_4 = yyv_Pattern;
*yyout_1 = yy_0_4;
return;
yyfl_46_1 : ;
}
{
yy yyb;
yy yy_0_1;
yy yyv_Pos;
yy yy_0_1_1;
yy yy_0_2;
yy yy_0_3;
yy yy_0_4;
yy yy_1_1;
yy yy_1_2;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yy_0_3 = yyin_3;
if (yy_0_1[0] != 2) goto yyfl_46_2;
yy_0_1_1 = ((yy)yy_0_1[1]);
yyv_Pos = yy_0_1_1;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_1_1 = ((yy)"too few patterns");
yy_1_2 = yyv_Pos;
Error(yy_1_1, yy_1_2);
yy_0_4 = yyb + 0;
yy_0_4[0] = 4;
*yyout_1 = yy_0_4;
return;
yyfl_46_2 : ;
}
yyErr(2,521);
}
int GetTypeOfPattern(yyin_1, yyout_1)
yy yyin_1;
yy *yyout_1;
{
{
yy yyb;
yy yy_0_1;
yy yyv_Functor;
yy yy_0_1_1;
yy yy_0_1_2;
yy yy_0_1_3;
yy yyv_Pos;
yy yy_0_1_4;
yy yy_0_2;
yy yy_1_1_1_1;
yy yyv_Meaning;
yy yy_1_1_1_2;
yy yy_1_1_2_1;
yy yy_1_1_2_2;
yy yyv_Type;
yy yy_1_1_2_2_1;
yy yy_1_1_2_2_2;
yy yy_1_2_1_1;
yy yy_1_2_1_2;
yy yy_1_2_1_3;
yy yy_1_2_1_4;
yy yy_1_2_2_1;
yy yy_1_2_2_2;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 2) goto yyfl_47_1;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yy_0_1_4 = ((yy)yy_0_1[4]);
yyv_Functor = yy_0_1_1;
yyv_Pos = yy_0_1_4;
{
yy yysb = yyb;
yy_1_1_1_1 = yyv_Functor;
if (! HasMeaning(yy_1_1_1_1, &yy_1_1_1_2)) goto yyfl_47_1_1_1;
yyv_Meaning = yy_1_1_1_2;
yy_1_1_2_1 = yyv_Meaning;
yy_1_1_2_2 = yy_1_1_2_1;
if (yy_1_1_2_2[0] != 2) goto yyfl_47_1_1_1;
yy_1_1_2_2_1 = ((yy)yy_1_1_2_2[1]);
yy_1_1_2_2_2 = ((yy)yy_1_1_2_2[2]);
yyv_Type = yy_1_1_2_2_1;
goto yysl_47_1_1;
yyfl_47_1_1_1 : ;
yy_1_2_1_1 = ((yy)"'");
yy_1_2_1_2 = yyv_Functor;
yy_1_2_1_3 = ((yy)"' not declared as functor");
yy_1_2_1_4 = yyv_Pos;
ErrorI(yy_1_2_1_1, yy_1_2_1_2, yy_1_2_1_3, yy_1_2_1_4);
yy_1_2_2_1 = ((yy)"<?>");
string_to_id(yy_1_2_2_1, &yy_1_2_2_2);
yyv_Type = yy_1_2_2_2;
goto yysl_47_1_1;
yysl_47_1_1 : ;
yyb = yysb;
}
yy_0_2 = yyv_Type;
*yyout_1 = yy_0_2;
return 1;
yyfl_47_1 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Pattern;
yy yy_0_1_2;
yy yy_0_1_3;
yy yy_0_2;
yy yy_1_1;
yy yyv_Type;
yy yy_1_2;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 3) goto yyfl_47_2;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yyv_Pattern = yy_0_1_2;
yy_1_1 = yyv_Pattern;
if (! GetTypeOfPattern(yy_1_1, &yy_1_2)) goto yyfl_47_2;
yyv_Type = yy_1_2;
yy_0_2 = yyv_Type;
*yyout_1 = yy_0_2;
return 1;
yyfl_47_2 : ;
}
return 0;
}
DeclareMatchTempos(yyin_1, yyin_2)
yy yyin_1;
yy yyin_2;
{
{
yy yyb;
yy yy_0_1;
yy yyv_H;
yy yy_0_1_1;
yy yyv_T;
yy yy_0_1_2;
yy yy_0_2;
yy yyv_H2;
yy yy_0_2_1;
yy yyv_T2;
yy yy_0_2_2;
yy yy_1_1;
yy yy_1_2;
yy yy_2_1;
yy yy_2_2;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
if (yy_0_1[0] != 1) goto yyfl_48_1;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yyv_H = yy_0_1_1;
yyv_T = yy_0_1_2;
if (yy_0_2[0] != 1) goto yyfl_48_1;
yy_0_2_1 = ((yy)yy_0_2[1]);
yy_0_2_2 = ((yy)yy_0_2[2]);
yyv_H2 = yy_0_2_1;
yyv_T2 = yy_0_2_2;
yy_1_1 = yyv_H;
yy_1_2 = yyv_H2;
DeclareMatchTempo(yy_1_1, yy_1_2);
yy_2_1 = yyv_T;
yy_2_2 = yyv_T2;
DeclareMatchTempos(yy_2_1, yy_2_2);
return;
yyfl_48_1 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_2;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
if (yy_0_1[0] != 2) goto yyfl_48_2;
return;
yyfl_48_2 : ;
}
yyErr(2,541);
}
DeclareMatchTempo(yyin_1, yyin_2)
yy yyin_1;
yy yyin_2;
{
{
yy yyb;
yy yy_0_1;
yy yyv_Id;
yy yy_0_1_1;
yy yyv_Tmp;
yy yy_0_1_2;
yy yy_0_1_3;
yy yyv_Type;
yy yy_0_2;
yy yy_1_1;
yy yy_1_2;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
if (yy_0_1[0] != 1) goto yyfl_49_1;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yyv_Id = yy_0_1_1;
yyv_Tmp = yy_0_1_2;
yyv_Type = yy_0_2;
yy_1_1 = yyv_Type;
yy_1_2 = yyv_Tmp;
TemplDeclareMatchTmp(yy_1_1, yy_1_2);
return;
yyfl_49_1 : ;
}
yyErr(2,547);
}
GetPosOfPattern(yyin_1, yyout_1)
yy yyin_1;
yy *yyout_1;
{
{
yy yyb;
yy yy_0_1;
yy yyv_Functor;
yy yy_0_1_1;
yy yy_0_1_2;
yy yy_0_1_3;
yy yyv_Pos;
yy yy_0_1_4;
yy yy_0_2;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 2) goto yyfl_50_1;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yy_0_1_4 = ((yy)yy_0_1[4]);
yyv_Functor = yy_0_1_1;
yyv_Pos = yy_0_1_4;
yy_0_2 = yyv_Pos;
*yyout_1 = yy_0_2;
return;
yyfl_50_1 : ;
}
yyErr(2,551);
}
CodeMatchList(yyin_1)
yy yyin_1;
{
{
yy yyb;
yy yy_0_1;
yy yyv_H;
yy yy_0_1_1;
yy yyv_T;
yy yy_0_1_2;
yy yy_1_1;
yy yy_1_2;
yy yyv_Id;
yy yy_1_2_1;
yy yyv_Tmp;
yy yy_1_2_2;
yy yy_1_2_3;
yy yy_2_1;
yy yy_2_2;
yy yy_3_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 1) goto yyfl_51_1;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yyv_H = yy_0_1_1;
yyv_T = yy_0_1_2;
yy_1_1 = yyv_H;
yy_1_2 = yy_1_1;
if (yy_1_2[0] != 1) goto yyfl_51_1;
yy_1_2_1 = ((yy)yy_1_2[1]);
yy_1_2_2 = ((yy)yy_1_2[2]);
yy_1_2_3 = ((yy)yy_1_2[3]);
yyv_Id = yy_1_2_1;
yyv_Tmp = yy_1_2_2;
yy_2_1 = yyv_Id;
yy_2_2 = yyv_Tmp;
TemplGetMatchVar(yy_2_1, yy_2_2);
yy_3_1 = yyv_T;
CodeMatchList(yy_3_1);
return;
yyfl_51_1 : ;
}
{
yy yyb;
yy yy_0_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 2) goto yyfl_51_2;
return;
yyfl_51_2 : ;
}
yyErr(2,556);
}
CodePATTERNLIST(yyin_1, yyin_2)
yy yyin_1;
yy yyin_2;
{
{
yy yyb;
yy yy_0_1;
yy yyv_H;
yy yy_0_1_1;
yy yyv_T;
yy yy_0_1_2;
yy yy_0_2;
yy yyv_H2;
yy yy_0_2_1;
yy yyv_T2;
yy yy_0_2_2;
yy yy_1_1;
yy yy_1_2;
yy yy_2_1;
yy yy_2_2;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
if (yy_0_1[0] != 1) goto yyfl_52_1;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yyv_H = yy_0_1_1;
yyv_T = yy_0_1_2;
if (yy_0_2[0] != 1) goto yyfl_52_1;
yy_0_2_1 = ((yy)yy_0_2[1]);
yy_0_2_2 = ((yy)yy_0_2[2]);
yyv_H2 = yy_0_2_1;
yyv_T2 = yy_0_2_2;
yy_1_1 = yyv_H;
yy_1_2 = yyv_H2;
CodePATTERN(yy_1_1, yy_1_2);
yy_2_1 = yyv_T;
yy_2_2 = yyv_T2;
CodePATTERNLIST(yy_2_1, yy_2_2);
return;
yyfl_52_1 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_2;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
if (yy_0_1[0] != 2) goto yyfl_52_2;
return;
yyfl_52_2 : ;
}
yyErr(2,563);
}
CodePATTERN(yyin_1, yyin_2)
yy yyin_1;
yy yyin_2;
{
{
yy yyb;
yy yy_0_1;
yy yyv_Id;
yy yy_0_1_1;
yy yy_0_1_2;
yy yyv_Pos;
yy yy_0_1_3;
yy yyv_ContainerTmp;
yy yy_0_2;
yy yy_1_1;
yy yy_1_2;
yy yy_2_1;
yy yy_3_1;
yy yy_3_2;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
if (yy_0_1[0] != 1) goto yyfl_53_1;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yyv_Id = yy_0_1_1;
yyv_Pos = yy_0_1_3;
yyv_ContainerTmp = yy_0_2;
yy_1_1 = yyv_Id;
yy_1_2 = yyv_Pos;
CheckIsVarUnique(yy_1_1, yy_1_2);
yy_2_1 = yyv_Id;
EnterLocalVar(yy_2_1);
yy_3_1 = yyv_Id;
yy_3_2 = yyv_ContainerTmp;
TemplAssignVar(yy_3_1, yy_3_2);
return;
yyfl_53_1 : ;
}
{
yy yyb;
yy yy_0_1;
yy yyv_Id;
yy yy_0_1_1;
yy yyv_Args;
yy yy_0_1_2;
yy yy_0_1_3;
yy yyv_Pos;
yy yy_0_1_4;
yy yyv_ContainerTmp;
yy yy_0_2;
yy yyv_RuleNumber;
yy yy_1;
yy yy_2_1;
yy yy_2_2;
yy yy_2_3;
yy yy_3_1_1_1;
yy yy_3_1_1_2;
yy yy_3_1_1_2_1;
yy yy_3_1_1_2_2;
yy yy_3_1_1_2_2_1;
yy yyv_ArgDefs;
yy yy_3_1_1_2_2_2;
yy yy_3_1_1_2_2_3;
yy yy_3_1_2_1;
yy yy_3_1_2_2;
yy yy_3_1_2_3;
yy yy_3_1_2_4;
yy yy_3_2_1_1;
yy yy_3_2_1_2;
yy yy_3_2_1_3;
yy yy_3_2_1_4;
yy yy_4_1;
yy yyv_IntList;
yy yy_4_2;
yy yy_5_1;
yy yy_5_2;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
if (yy_0_1[0] != 2) goto yyfl_53_2;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yy_0_1_4 = ((yy)yy_0_1[4]);
yyv_Id = yy_0_1_1;
yyv_Args = yy_0_1_2;
yyv_Pos = yy_0_1_4;
yyv_ContainerTmp = yy_0_2;
yy_1 = yyglov_CurRuleNumber;
if (yy_1 == (yy) yyu) yyErr(1,575);
yyv_RuleNumber = yy_1;
yy_2_1 = yyv_Id;
yy_2_2 = yyv_ContainerTmp;
yy_2_3 = yyv_RuleNumber;
TemplTestFunctor(yy_2_1, yy_2_2, yy_2_3);
{
yy yysb = yyb;
yy_3_1_1_1 = yyv_Id;
if (! HasMeaning(yy_3_1_1_1, &yy_3_1_1_2)) goto yyfl_53_2_3_1;
if (yy_3_1_1_2[0] != 2) goto yyfl_53_2_3_1;
yy_3_1_1_2_1 = ((yy)yy_3_1_1_2[1]);
yy_3_1_1_2_2 = ((yy)yy_3_1_1_2[2]);
if (yy_3_1_1_2_2[0] != 1) goto yyfl_53_2_3_1;
yy_3_1_1_2_2_1 = ((yy)yy_3_1_1_2_2[1]);
yy_3_1_1_2_2_2 = ((yy)yy_3_1_1_2_2[2]);
yy_3_1_1_2_2_3 = ((yy)yy_3_1_1_2_2[3]);
yyv_ArgDefs = yy_3_1_1_2_2_2;
yy_3_1_2_1 = yyv_Args;
yy_3_1_2_2 = yyv_ArgDefs;
yy_3_1_2_3 = yyv_Id;
yy_3_1_2_4 = yyv_ContainerTmp;
CodeChildAssignments(yy_3_1_2_1, yy_3_1_2_2, yy_3_1_2_3, yy_3_1_2_4);
goto yysl_53_2_3;
yyfl_53_2_3_1 : ;
yy_3_2_1_1 = ((yy)"'");
yy_3_2_1_2 = yyv_Id;
yy_3_2_1_3 = ((yy)"' not declared as functor");
yy_3_2_1_4 = yyv_Pos;
ErrorI(yy_3_2_1_1, yy_3_2_1_2, yy_3_2_1_3, yy_3_2_1_4);
goto yysl_53_2_3;
yysl_53_2_3 : ;
yyb = yysb;
}
yy_4_1 = yyv_Args;
PaternList_to_IntList(yy_4_1, &yy_4_2);
yyv_IntList = yy_4_2;
yy_5_1 = yyv_Args;
yy_5_2 = yyv_IntList;
CodePATTERNLIST(yy_5_1, yy_5_2);
return;
yyfl_53_2 : ;
}
{
yy yyb;
yy yy_0_1;
yy yyv_Id;
yy yy_0_1_1;
yy yyv_Pattern;
yy yy_0_1_2;
yy yyv_Pos;
yy yy_0_1_3;
yy yyv_ContainerTempo;
yy yy_0_2;
yy yy_1_1;
yy yy_1_2;
yy yy_2_1;
yy yy_3_1;
yy yy_3_2;
yy yy_4_1_1_1;
yy yy_4_1_1_2;
yy yyv_Functor;
yy yy_4_1_1_2_1;
yy yy_4_1_1_2_2;
yy yy_4_1_1_2_3;
yy yy_4_1_1_2_4;
yy yy_4_1_2_1;
yy yy_4_1_2_2;
yy yy_4_1_2_3;
yy yy_4_2_1_1;
yy yy_4_2_1_2;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
if (yy_0_1[0] != 3) goto yyfl_53_3;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yyv_Id = yy_0_1_1;
yyv_Pattern = yy_0_1_2;
yyv_Pos = yy_0_1_3;
yyv_ContainerTempo = yy_0_2;
yy_1_1 = yyv_Id;
yy_1_2 = yyv_Pos;
CheckIsVarUnique(yy_1_1, yy_1_2);
yy_2_1 = yyv_Id;
EnterLocalVar(yy_2_1);
yy_3_1 = yyv_Pattern;
yy_3_2 = yyv_ContainerTempo;
CodePATTERN(yy_3_1, yy_3_2);
{
yy yysb = yyb;
yy_4_1_1_1 = yyv_Pattern;
yy_4_1_1_2 = yy_4_1_1_1;
if (yy_4_1_1_2[0] != 2) goto yyfl_53_3_4_1;
yy_4_1_1_2_1 = ((yy)yy_4_1_1_2[1]);
yy_4_1_1_2_2 = ((yy)yy_4_1_1_2[2]);
yy_4_1_1_2_3 = ((yy)yy_4_1_1_2[3]);
yy_4_1_1_2_4 = ((yy)yy_4_1_1_2[4]);
yyv_Functor = yy_4_1_1_2_1;
yy_4_1_2_1 = yyv_Id;
yy_4_1_2_2 = yyv_Functor;
yy_4_1_2_3 = yyv_ContainerTempo;
TemplAssignTildeVar(yy_4_1_2_1, yy_4_1_2_2, yy_4_1_2_3);
goto yysl_53_3_4;
yyfl_53_3_4_1 : ;
yy_4_2_1_1 = ((yy)"invalid form of named pattern");
yy_4_2_1_2 = yyv_Pos;
Error(yy_4_2_1_1, yy_4_2_1_2);
goto yysl_53_3_4;
yysl_53_3_4 : ;
yyb = yysb;
}
return;
yyfl_53_3 : ;
}
yyErr(2,569);
}
CodeChildAssignments(yyin_1, yyin_2, yyin_3, yyin_4)
yy yyin_1;
yy yyin_2;
yy yyin_3;
yy yyin_4;
{
{
yy yyb;
yy yy_0_1;
yy yyv_H;
yy yy_0_1_1;
yy yyv_T;
yy yy_0_1_2;
yy yy_0_2;
yy yyv_H2;
yy yy_0_2_1;
yy yyv_T2;
yy yy_0_2_2;
yy yyv_Cast;
yy yy_0_3;
yy yyv_ContainerTmp;
yy yy_0_4;
yy yy_1_1_1_1;
yy yy_1_1_1_2;
yy yy_1_1_1_2_1;
yy yyv_INT;
yy yy_1_1_1_2_2;
yy yy_1_1_1_2_3;
yy yy_1_2_1_1;
yy yy_1_2_1_2;
yy yy_1_2_1_2_1;
yy yy_1_2_1_2_2;
yy yy_1_2_1_2_3;
yy yy_1_2_1_2_4;
yy yy_1_3_1_1;
yy yy_1_3_1_2;
yy yy_1_3_1_2_1;
yy yy_1_3_1_2_2;
yy yy_1_3_1_2_2_1;
yy yy_1_3_1_2_2_2;
yy yy_1_3_1_2_2_3;
yy yy_1_3_1_2_2_4;
yy yy_1_3_1_2_3;
yy yy_2_1;
yy yy_2_2;
yy yyv_Type;
yy yy_2_2_1;
yy yyv_Selector;
yy yy_2_2_2;
yy yy_2_2_3;
yy yy_3_1;
yy yy_3_2;
yy yy_3_3;
yy yy_3_4;
yy yy_4_1;
yy yy_4_2;
yy yy_4_3;
yy yy_4_4;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yy_0_3 = yyin_3;
yy_0_4 = yyin_4;
if (yy_0_1[0] != 1) goto yyfl_54_1;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yyv_H = yy_0_1_1;
yyv_T = yy_0_1_2;
if (yy_0_2[0] != 1) goto yyfl_54_1;
yy_0_2_1 = ((yy)yy_0_2[1]);
yy_0_2_2 = ((yy)yy_0_2[2]);
yyv_H2 = yy_0_2_1;
yyv_T2 = yy_0_2_2;
yyv_Cast = yy_0_3;
yyv_ContainerTmp = yy_0_4;
{
yy yysb = yyb;
yy_1_1_1_1 = yyv_H;
yy_1_1_1_2 = yy_1_1_1_1;
if (yy_1_1_1_2[0] != 1) goto yyfl_54_1_1_1;
yy_1_1_1_2_1 = ((yy)yy_1_1_1_2[1]);
yy_1_1_1_2_2 = ((yy)yy_1_1_1_2[2]);
yy_1_1_1_2_3 = ((yy)yy_1_1_1_2[3]);
yyv_INT = yy_1_1_1_2_2;
goto yysl_54_1_1;
yyfl_54_1_1_1 : ;
yy_1_2_1_1 = yyv_H;
yy_1_2_1_2 = yy_1_2_1_1;
if (yy_1_2_1_2[0] != 2) goto yyfl_54_1_1_2;
yy_1_2_1_2_1 = ((yy)yy_1_2_1_2[1]);
yy_1_2_1_2_2 = ((yy)yy_1_2_1_2[2]);
yy_1_2_1_2_3 = ((yy)yy_1_2_1_2[3]);
yy_1_2_1_2_4 = ((yy)yy_1_2_1_2[4]);
yyv_INT = yy_1_2_1_2_3;
goto yysl_54_1_1;
yyfl_54_1_1_2 : ;
yy_1_3_1_1 = yyv_H;
yy_1_3_1_2 = yy_1_3_1_1;
if (yy_1_3_1_2[0] != 3) goto yyfl_54_1_1_3;
yy_1_3_1_2_1 = ((yy)yy_1_3_1_2[1]);
yy_1_3_1_2_2 = ((yy)yy_1_3_1_2[2]);
yy_1_3_1_2_3 = ((yy)yy_1_3_1_2[3]);
if (yy_1_3_1_2_2[0] != 2) goto yyfl_54_1_1_3;
yy_1_3_1_2_2_1 = ((yy)yy_1_3_1_2_2[1]);
yy_1_3_1_2_2_2 = ((yy)yy_1_3_1_2_2[2]);
yy_1_3_1_2_2_3 = ((yy)yy_1_3_1_2_2[3]);
yy_1_3_1_2_2_4 = ((yy)yy_1_3_1_2_2[4]);
yyv_INT = yy_1_3_1_2_2_3;
goto yysl_54_1_1;
yyfl_54_1_1_3 : ;
goto yyfl_54_1;
yysl_54_1_1 : ;
yyb = yysb;
}
yy_2_1 = yyv_H2;
yy_2_2 = yy_2_1;
if (yy_2_2[0] != 1) goto yyfl_54_1;
yy_2_2_1 = ((yy)yy_2_2[1]);
yy_2_2_2 = ((yy)yy_2_2[2]);
yy_2_2_3 = ((yy)yy_2_2[3]);
yyv_Type = yy_2_2_1;
yyv_Selector = yy_2_2_2;
yy_3_1 = yyv_INT;
yy_3_2 = yyv_Cast;
yy_3_3 = yyv_ContainerTmp;
yy_3_4 = yyv_Selector;
TemplChildAssignment(yy_3_1, yy_3_2, yy_3_3, yy_3_4);
yy_4_1 = yyv_T;
yy_4_2 = yyv_T2;
yy_4_3 = yyv_Cast;
yy_4_4 = yyv_ContainerTmp;
CodeChildAssignments(yy_4_1, yy_4_2, yy_4_3, yy_4_4);
return;
yyfl_54_1 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_2;
yy yy_0_3;
yy yy_0_4;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yy_0_3 = yyin_3;
yy_0_4 = yyin_4;
if (yy_0_1[0] != 2) goto yyfl_54_2;
return;
yyfl_54_2 : ;
}
yyErr(2,597);
}
CheckIsVarUnique(yyin_1, yyin_2)
yy yyin_1;
yy yyin_2;
{
{
yy yyb;
yy yyv_Id;
yy yy_0_1;
yy yyv_Pos;
yy yy_0_2;
yy yyv_L;
yy yy_1;
yy yy_2_1_1;
yy yy_2_1_2;
yy yyv_H;
yy yy_2_1_2_1;
yy yyv_T;
yy yy_2_1_2_2;
yy yy_2_2_1_1_1;
yy yy_2_2_1_1_2;
yy yy_2_2_1_2_1;
yy yy_2_2_1_2_2;
yy yy_2_2_1_2_3;
yy yy_2_2_1_2_4;
yy yy_2_3_1;
yy yy_2_3_2;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yyv_Id = yy_0_1;
yyv_Pos = yy_0_2;
yy_1 = yyglov_ListOfLocalVars;
if (yy_1 == (yy) yyu) yyErr(1,615);
yyv_L = yy_1;
yysl_56_1_2 : ;
yy_2_1_1 = yyv_L;
yy_2_1_2 = yy_2_1_1;
if (yy_2_1_2[0] != 1) goto yyfl_56_1_2;
yy_2_1_2_1 = ((yy)yy_2_1_2[1]);
yy_2_1_2_2 = ((yy)yy_2_1_2[2]);
yyv_H = yy_2_1_2_1;
yyv_T = yy_2_1_2_2;
{
yy yysb = yyb;
yy_2_2_1_1_1 = yyv_Id;
yy_2_2_1_1_2 = yyv_H;
if (! yyeq_IDENT(yy_2_2_1_1_1, yy_2_2_1_1_2)) goto yyfl_56_1_2_2_1;
yy_2_2_1_2_1 = ((yy)"variable '");
yy_2_2_1_2_2 = yyv_Id;
yy_2_2_1_2_3 = ((yy)"' defined more than once");
yy_2_2_1_2_4 = yyv_Pos;
ErrorI(yy_2_2_1_2_1, yy_2_2_1_2_2, yy_2_2_1_2_3, yy_2_2_1_2_4);
goto yysl_56_1_2_2;
yyfl_56_1_2_2_1 : ;
goto yysl_56_1_2_2;
yysl_56_1_2_2 : ;
yyb = yysb;
}
yy_2_3_1 = yyv_T;
yyv_L = yy_2_3_1;
goto yysl_56_1_2;
yyfl_56_1_2 : ;
return;
}
}
EnterLocalVar(yyin_1)
yy yyin_1;
{
{
yy yyb;
yy yyv_Id;
yy yy_0_1;
yy yyv_L;
yy yy_1;
yy yy_2;
yy yy_2_1;
yy yy_2_2;
yy_0_1 = yyin_1;
yyv_Id = yy_0_1;
yyb = yyh;
yyh += 3; if (yyh > yyhx) yyExtend();
yy_1 = yyglov_ListOfLocalVars;
if (yy_1 == (yy) yyu) yyErr(1,627);
yyv_L = yy_1;
yy_2_1 = yyv_Id;
yy_2_2 = yyv_L;
yy_2 = yyb + 0;
yy_2[0] = 1;
yy_2[1] = ((long)yy_2_1);
yy_2[2] = ((long)yy_2_2);
yyglov_ListOfLocalVars = yy_2;
return;
}
}
TemplDeclareMatchTmp(yyin_1, yyin_2)
yy yyin_1;
yy yyin_2;
{
{
yy yyb;
yy yyv_Type;
yy yy_0_1;
yy yyv_N;
yy yy_0_2;
yy yy_1_1;
yy yy_2_1;
yy yy_3_1;
yy yy_4_1;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yyv_Type = yy_0_1;
yyv_N = yy_0_2;
yy_1_1 = yyv_Type;
PutId(yy_1_1);
yy_2_1 = ((yy)" ");
Put(yy_2_1);
yy_3_1 = yyv_N;
PutTmp(yy_3_1);
yy_4_1 = ((yy)";");
Put(yy_4_1);
Nl();
return;
}
}
TemplDeclareDomainTmp(yyin_1, yyin_2)
yy yyin_1;
yy yyin_2;
{
{
yy yyb;
yy yyv_Type;
yy yy_0_1;
yy yyv_N;
yy yy_0_2;
yy yy_1_1;
yy yy_2_1;
yy yy_3_1;
yy yy_4_1;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yyv_Type = yy_0_1;
yyv_N = yy_0_2;
yy_1_1 = yyv_Type;
PutId(yy_1_1);
yy_2_1 = ((yy)" ");
Put(yy_2_1);
yy_3_1 = yyv_N;
PutTmp(yy_3_1);
yy_4_1 = ((yy)";");
Put(yy_4_1);
Nl();
return;
}
}
TemplDeclareTildeVar(yyin_1, yyin_2)
yy yyin_1;
yy yyin_2;
{
{
yy yyb;
yy yyv_Id;
yy yy_0_1;
yy yyv_Functor;
yy yy_0_2;
yy yy_1_1;
yy yy_2_1;
yy yy_3_1;
yy yy_4_1;
yy yy_5_1;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yyv_Id = yy_0_1;
yyv_Functor = yy_0_2;
yy_1_1 = yyv_Functor;
PutId(yy_1_1);
yy_2_1 = ((yy)"_subtype");
Put(yy_2_1);
yy_3_1 = ((yy)" ");
Put(yy_3_1);
yy_4_1 = yyv_Id;
PutId(yy_4_1);
yy_5_1 = ((yy)";");
Put(yy_5_1);
Nl();
return;
}
}
TemplAssignTildeVar(yyin_1, yyin_2, yyin_3)
yy yyin_1;
yy yyin_2;
yy yyin_3;
{
{
yy yyb;
yy yyv_Id;
yy yy_0_1;
yy yyv_Functor;
yy yy_0_2;
yy yyv_ContainerTempo;
yy yy_0_3;
yy yy_1_1;
yy yy_2_1;
yy yy_3_1;
yy yy_4_1;
yy yy_5_1;
yy yy_6_1;
yy yy_7_1;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yy_0_3 = yyin_3;
yyv_Id = yy_0_1;
yyv_Functor = yy_0_2;
yyv_ContainerTempo = yy_0_3;
yy_1_1 = yyv_Id;
PutId(yy_1_1);
yy_2_1 = ((yy)" = (");
Put(yy_2_1);
yy_3_1 = yyv_Functor;
PutId(yy_3_1);
yy_4_1 = ((yy)"_subtype");
Put(yy_4_1);
yy_5_1 = ((yy)") ");
Put(yy_5_1);
yy_6_1 = yyv_ContainerTempo;
PutTmp(yy_6_1);
yy_7_1 = ((yy)";");
Put(yy_7_1);
Nl();
return;
}
}
TemplBeginMatch()
{
{
yy yyb;
yy yy_1_1;
yy_1_1 = ((yy)"{");
Put(yy_1_1);
Nl();
return;
}
}
TemplGetMatchVar(yyin_1, yyin_2)
yy yyin_1;
yy yyin_2;
{
{
yy yyb;
yy yyv_Id;
yy yy_0_1;
yy yyv_Tmp;
yy yy_0_2;
yy yy_1_1;
yy yy_2_1;
yy yy_3_1;
yy yy_4_1;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yyv_Id = yy_0_1;
yyv_Tmp = yy_0_2;
yy_1_1 = yyv_Tmp;
PutTmp(yy_1_1);
yy_2_1 = ((yy)" = ");
Put(yy_2_1);
yy_3_1 = yyv_Id;
PutId(yy_3_1);
yy_4_1 = ((yy)";");
Put(yy_4_1);
Nl();
return;
}
}
TemplEndMatch(yyin_1, yyin_2)
yy yyin_1;
yy yyin_2;
{
{
yy yyb;
yy yyv_Number;
yy yy_0_1;
yy yyv_Pos;
yy yy_0_2;
yy yy_1_1;
yy yyv_Name;
yy yy_2_1;
yy yy_3_1;
yy yy_4_1;
yy yy_5_1;
yy yy_6_1;
yy yy_8_1;
yy yy_9_1;
yy yy_10_1;
yy yy_12_1;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yyv_Number = yy_0_1;
yyv_Pos = yy_0_2;
yy_1_1 = ((yy)"MatchError(\"");
Put(yy_1_1);
get_basename(&yy_2_1);
yyv_Name = yy_2_1;
yy_3_1 = yyv_Name;
Put(yy_3_1);
yy_4_1 = ((yy)".m\", ");
Put(yy_4_1);
yy_5_1 = yyv_Pos;
PutPos(yy_5_1);
yy_6_1 = ((yy)");");
Put(yy_6_1);
Nl();
yy_8_1 = ((yy)"EndOfMatch");
Put(yy_8_1);
yy_9_1 = yyv_Number;
PutI(yy_9_1);
yy_10_1 = ((yy)" : ;");
Put(yy_10_1);
Nl();
yy_12_1 = ((yy)"}");
Put(yy_12_1);
Nl();
return;
}
}
TemplBeginRule()
{
{
yy yyb;
yy yy_1_1;
yy_1_1 = ((yy)"{");
Put(yy_1_1);
Nl();
return;
}
}
TemplEndRule(yyin_1, yyin_2)
yy yyin_1;
yy yyin_2;
{
{
yy yyb;
yy yyv_MatchNumber;
yy yy_0_1;
yy yyv_RuleNumber;
yy yy_0_2;
yy yy_1_1;
yy yy_2_1;
yy yy_3_1;
yy yy_5_1;
yy yy_6_1;
yy yy_7_1;
yy yy_9_1;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yyv_MatchNumber = yy_0_1;
yyv_RuleNumber = yy_0_2;
yy_1_1 = ((yy)"goto EndOfMatch");
Put(yy_1_1);
yy_2_1 = yyv_MatchNumber;
PutI(yy_2_1);
yy_3_1 = ((yy)";");
Put(yy_3_1);
Nl();
yy_5_1 = ((yy)"EndOfRule");
Put(yy_5_1);
yy_6_1 = yyv_RuleNumber;
PutI(yy_6_1);
yy_7_1 = ((yy)" : ;");
Put(yy_7_1);
Nl();
yy_9_1 = ((yy)"}");
Put(yy_9_1);
Nl();
return;
}
}
TemplTestFunctor(yyin_1, yyin_2, yyin_3)
yy yyin_1;
yy yyin_2;
yy yyin_3;
{
{
yy yyb;
yy yyv_Id;
yy yy_0_1;
yy yyv_Tmp;
yy yy_0_2;
yy yyv_RuleNumber;
yy yy_0_3;
yy yy_1_1;
yy yy_2_1;
yy yy_3_1;
yy yy_4_1;
yy yy_5_1;
yy yy_6_1;
yy yy_7_1;
yy yy_8_1;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yy_0_3 = yyin_3;
yyv_Id = yy_0_1;
yyv_Tmp = yy_0_2;
yyv_RuleNumber = yy_0_3;
yy_1_1 = ((yy)"if (");
Put(yy_1_1);
yy_2_1 = yyv_Tmp;
PutTmp(yy_2_1);
yy_3_1 = ((yy)"->tag != ");
Put(yy_3_1);
yy_4_1 = yyv_Id;
PutId(yy_4_1);
yy_5_1 = ((yy)"_tag");
Put(yy_5_1);
yy_6_1 = ((yy)") goto EndOfRule");
Put(yy_6_1);
yy_7_1 = yyv_RuleNumber;
PutI(yy_7_1);
yy_8_1 = ((yy)";");
Put(yy_8_1);
Nl();
return;
}
}
TemplChildAssignment(yyin_1, yyin_2, yyin_3, yyin_4)
yy yyin_1;
yy yyin_2;
yy yyin_3;
yy yyin_4;
{
{
yy yyb;
yy yyv_N;
yy yy_0_1;
yy yyv_Cast;
yy yy_0_2;
yy yyv_ContainerTmp;
yy yy_0_3;
yy yyv_Selector;
yy yy_0_4;
yy yy_1_1;
yy yy_2_1;
yy yy_3_1;
yy yy_4_1;
yy yy_5_1;
yy yy_6_1;
yy yy_7_1;
yy yy_8_1;
yy yy_9_1;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yy_0_3 = yyin_3;
yy_0_4 = yyin_4;
yyv_N = yy_0_1;
yyv_Cast = yy_0_2;
yyv_ContainerTmp = yy_0_3;
yyv_Selector = yy_0_4;
yy_1_1 = yyv_N;
PutTmp(yy_1_1);
yy_2_1 = ((yy)" = ");
Put(yy_2_1);
yy_3_1 = ((yy)"((");
Put(yy_3_1);
yy_4_1 = yyv_Cast;
PutId(yy_4_1);
yy_5_1 = ((yy)"_subtype) ");
Put(yy_5_1);
yy_6_1 = yyv_ContainerTmp;
PutTmp(yy_6_1);
yy_7_1 = ((yy)")->");
Put(yy_7_1);
yy_8_1 = yyv_Selector;
PutId(yy_8_1);
yy_9_1 = ((yy)";");
Put(yy_9_1);
Nl();
return;
}
}
TemplAssignVar(yyin_1, yyin_2)
yy yyin_1;
yy yyin_2;
{
{
yy yyb;
yy yyv_Id;
yy yy_0_1;
yy yyv_Tmp;
yy yy_0_2;
yy yy_1_1;
yy yy_2_1;
yy yy_3_1;
yy yy_4_1;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yyv_Id = yy_0_1;
yyv_Tmp = yy_0_2;
yy_1_1 = yyv_Id;
PutId(yy_1_1);
yy_2_1 = ((yy)" = ");
Put(yy_2_1);
yy_3_1 = yyv_Tmp;
PutTmp(yy_3_1);
yy_4_1 = ((yy)";");
Put(yy_4_1);
Nl();
return;
}
}
MatchExprList_to_IntList(yyin_1, yyout_1)
yy yyin_1;
yy *yyout_1;
{
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_1_1;
yy yyv_N;
yy yy_0_1_1_2;
yy yy_0_1_1_3;
yy yyv_T1;
yy yy_0_1_2;
yy yy_0_2;
yy yy_0_2_1;
yy yy_0_2_2;
yy yy_1_1;
yy yyv_T2;
yy yy_1_2;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 1) goto yyfl_70_1;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
if (yy_0_1_1[0] != 1) goto yyfl_70_1;
yy_0_1_1_1 = ((yy)yy_0_1_1[1]);
yy_0_1_1_2 = ((yy)yy_0_1_1[2]);
yy_0_1_1_3 = ((yy)yy_0_1_1[3]);
yyv_N = yy_0_1_1_2;
yyv_T1 = yy_0_1_2;
yyb = yyh;
yyh += 3; if (yyh > yyhx) yyExtend();
yy_1_1 = yyv_T1;
MatchExprList_to_IntList(yy_1_1, &yy_1_2);
yyv_T2 = yy_1_2;
yy_0_2_1 = yyv_N;
yy_0_2_2 = yyv_T2;
yy_0_2 = yyb + 0;
yy_0_2[0] = 1;
yy_0_2[1] = ((long)yy_0_2_1);
yy_0_2[2] = ((long)yy_0_2_2);
*yyout_1 = yy_0_2;
return;
yyfl_70_1 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_2;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 2) goto yyfl_70_2;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_0_2 = yyb + 0;
yy_0_2[0] = 2;
*yyout_1 = yy_0_2;
return;
yyfl_70_2 : ;
}
yyErr(2,695);
}
PaternList_to_IntList(yyin_1, yyout_1)
yy yyin_1;
yy *yyout_1;
{
{
yy yyb;
yy yy_0_1;
yy yyv_H1;
yy yy_0_1_1;
yy yyv_T1;
yy yy_0_1_2;
yy yy_0_2;
yy yy_0_2_1;
yy yy_0_2_2;
yy yy_1_1_1_1;
yy yy_1_1_1_2;
yy yy_1_1_1_2_1;
yy yy_1_1_1_2_2;
yy yyv_N;
yy yy_1_1_1_2_3;
yy yy_1_1_1_2_4;
yy yy_1_2_1_1;
yy yy_1_2_1_2;
yy yy_1_2_1_2_1;
yy yy_1_2_1_2_2;
yy yy_1_2_1_2_3;
yy yy_1_3_1_1;
yy yy_1_3_1_2;
yy yy_1_3_1_2_1;
yy yy_1_3_1_2_2;
yy yy_1_3_1_2_2_1;
yy yy_1_3_1_2_2_2;
yy yy_1_3_1_2_2_3;
yy yy_1_3_1_2_2_4;
yy yy_1_3_1_2_3;
yy yy_2_1;
yy yyv_T2;
yy yy_2_2;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 1) goto yyfl_71_1;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yyv_H1 = yy_0_1_1;
yyv_T1 = yy_0_1_2;
yyb = yyh;
yyh += 3; if (yyh > yyhx) yyExtend();
{
yy yysb = yyb;
yy_1_1_1_1 = yyv_H1;
yy_1_1_1_2 = yy_1_1_1_1;
if (yy_1_1_1_2[0] != 2) goto yyfl_71_1_1_1;
yy_1_1_1_2_1 = ((yy)yy_1_1_1_2[1]);
yy_1_1_1_2_2 = ((yy)yy_1_1_1_2[2]);
yy_1_1_1_2_3 = ((yy)yy_1_1_1_2[3]);
yy_1_1_1_2_4 = ((yy)yy_1_1_1_2[4]);
yyv_N = yy_1_1_1_2_3;
goto yysl_71_1_1;
yyfl_71_1_1_1 : ;
yy_1_2_1_1 = yyv_H1;
yy_1_2_1_2 = yy_1_2_1_1;
if (yy_1_2_1_2[0] != 1) goto yyfl_71_1_1_2;
yy_1_2_1_2_1 = ((yy)yy_1_2_1_2[1]);
yy_1_2_1_2_2 = ((yy)yy_1_2_1_2[2]);
yy_1_2_1_2_3 = ((yy)yy_1_2_1_2[3]);
yyv_N = yy_1_2_1_2_2;
goto yysl_71_1_1;
yyfl_71_1_1_2 : ;
yy_1_3_1_1 = yyv_H1;
yy_1_3_1_2 = yy_1_3_1_1;
if (yy_1_3_1_2[0] != 3) goto yyfl_71_1_1_3;
yy_1_3_1_2_1 = ((yy)yy_1_3_1_2[1]);
yy_1_3_1_2_2 = ((yy)yy_1_3_1_2[2]);
yy_1_3_1_2_3 = ((yy)yy_1_3_1_2[3]);
if (yy_1_3_1_2_2[0] != 2) goto yyfl_71_1_1_3;
yy_1_3_1_2_2_1 = ((yy)yy_1_3_1_2_2[1]);
yy_1_3_1_2_2_2 = ((yy)yy_1_3_1_2_2[2]);
yy_1_3_1_2_2_3 = ((yy)yy_1_3_1_2_2[3]);
yy_1_3_1_2_2_4 = ((yy)yy_1_3_1_2_2[4]);
yyv_N = yy_1_3_1_2_2_3;
goto yysl_71_1_1;
yyfl_71_1_1_3 : ;
goto yyfl_71_1;
yysl_71_1_1 : ;
yyb = yysb;
}
yy_2_1 = yyv_T1;
PaternList_to_IntList(yy_2_1, &yy_2_2);
yyv_T2 = yy_2_2;
yy_0_2_1 = yyv_N;
yy_0_2_2 = yyv_T2;
yy_0_2 = yyb + 0;
yy_0_2[0] = 1;
yy_0_2[1] = ((long)yy_0_2_1);
yy_0_2[2] = ((long)yy_0_2_2);
*yyout_1 = yy_0_2;
return;
yyfl_71_1 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_2;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 2) goto yyfl_71_2;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_0_2 = yyb + 0;
yy_0_2[0] = 2;
*yyout_1 = yy_0_2;
return;
yyfl_71_2 : ;
}
yyErr(2,700);
}
EmitUpto(yyin_1)
yy yyin_1;
{
{
yy yyb;
yy yyv_Stop;
yy yy_0_1;
yy yy_1_1;
yy_0_1 = yyin_1;
yyv_Stop = yy_0_1;
yy_1_1 = yyv_Stop;
EmitText(yy_1_1);
return;
}
}
PutTmp(yyin_1)
yy yyin_1;
{
{
yy yyb;
yy yyv_Tmp;
yy yy_0_1;
yy yy_1_1;
yy yy_2_1;
yy_0_1 = yyin_1;
yyv_Tmp = yy_0_1;
yy_1_1 = ((yy)"tmp");
Put(yy_1_1);
yy_2_1 = yyv_Tmp;
PutI(yy_2_1);
return;
}
}
