typedef long * yy;
#define yyu (-2147483647L)
static yy yynull;
extern yy yyh;
extern yy yyhx;
static yyErr(n,l)
{
yyAbort(n,"sig", l);
}
extern yy yyglov_FirstWithPos;
yy yyglov_ListOfFunctors = (yy) yyu;
domwalker(yyin_1)
yy yyin_1;
{
{
yy yyb;
yy yyv_L;
yy yy_0_1;
yy yyv_Name;
yy yy_2_1;
yy yy_3_1;
yy yy_3_2;
yy yy_4_1;
yy yy_6_1;
yy yy_6_2;
yy yy_7_1;
yy yy_9_1;
yy yy_9_2;
yy yy_10_1;
yy_0_1 = yyin_1;
yyv_L = yy_0_1;
InitListOfFunctors();
get_basename(&yy_2_1);
yyv_Name = yy_2_1;
yy_3_1 = yyv_Name;
yy_3_2 = ((yy)"sig");
OpenOutputWithExtension(yy_3_1, yy_3_2);
yy_4_1 = yyv_L;
WriteDomFile_DECLLIST(yy_4_1);
CloseOutput();
yy_6_1 = yyv_Name;
yy_6_2 = ((yy)"f");
OpenOutputWithExtension(yy_6_1, yy_6_2);
yy_7_1 = yyv_L;
EmitDomainForwardDecls(yy_7_1);
CloseOutput();
yy_9_1 = yyv_Name;
yy_9_2 = ((yy)"h");
OpenOutputWithExtension(yy_9_1, yy_9_2);
yy_10_1 = yyv_L;
EmitDomainDeclsDECLLIST(yy_10_1);
CloseOutput();
return;
}
}
InitListOfFunctors()
{
{
yy yyb;
yy yy_1;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_1 = yyb + 0;
yy_1[0] = 2;
yyglov_ListOfFunctors = yy_1;
return;
}
}
CheckFunctorIsUnique(yyin_1, yyin_2)
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
yy yyv_Hd;
yy yy_2_1_2_1;
yy yyv_Tl;
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
yy_1 = yyglov_ListOfFunctors;
if (yy_1 == (yy) yyu) yyErr(1,49);
yyv_L = yy_1;
yysl_4_1_2 : ;
yy_2_1_1 = yyv_L;
yy_2_1_2 = yy_2_1_1;
if (yy_2_1_2[0] != 1) goto yyfl_4_1_2;
yy_2_1_2_1 = ((yy)yy_2_1_2[1]);
yy_2_1_2_2 = ((yy)yy_2_1_2[2]);
yyv_Hd = yy_2_1_2_1;
yyv_Tl = yy_2_1_2_2;
{
yy yysb = yyb;
yy_2_2_1_1_1 = yyv_Id;
yy_2_2_1_1_2 = yyv_Hd;
if (! yyeq_IDENT(yy_2_2_1_1_1, yy_2_2_1_1_2)) goto yyfl_4_1_2_2_1;
yy_2_2_1_2_1 = ((yy)"duplicate functor '");
yy_2_2_1_2_2 = yyv_Id;
yy_2_2_1_2_3 = ((yy)"'");
yy_2_2_1_2_4 = yyv_Pos;
ErrorI(yy_2_2_1_2_1, yy_2_2_1_2_2, yy_2_2_1_2_3, yy_2_2_1_2_4);
goto yysl_4_1_2_2;
yyfl_4_1_2_2_1 : ;
goto yysl_4_1_2_2;
yysl_4_1_2_2 : ;
yyb = yysb;
}
yy_2_3_1 = yyv_Tl;
yyv_L = yy_2_3_1;
goto yysl_4_1_2;
yyfl_4_1_2 : ;
return;
}
}
AddToFunctorList(yyin_1)
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
yy_1 = yyglov_ListOfFunctors;
if (yy_1 == (yy) yyu) yyErr(1,61);
yyv_L = yy_1;
yy_2_1 = yyv_Id;
yy_2_2 = yyv_L;
yy_2 = yyb + 0;
yy_2[0] = 1;
yy_2[1] = ((long)yy_2_1);
yy_2[2] = ((long)yy_2_2);
yyglov_ListOfFunctors = yy_2;
return;
}
}
WriteDomFile_DECLLIST(yyin_1)
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
if (yy_0_1[0] != 1) goto yyfl_6_1;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yyv_H = yy_0_1_1;
yyv_T = yy_0_1_2;
yy_1_1 = yyv_H;
WriteDomFile_DECL(yy_1_1);
yy_2_1 = yyv_T;
WriteDomFile_DECLLIST(yy_2_1);
return;
yyfl_6_1 : ;
}
{
yy yyb;
yy yy_0_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 2) goto yyfl_6_2;
return;
yyfl_6_2 : ;
}
yyErr(2,70);
}
WriteDomFile_DECL(yyin_1)
yy yyin_1;
{
{
yy yyb;
yy yy_0_1;
yy yyv_Def;
yy yy_0_1_1;
yy yy_0_1_2;
yy yy_0_1_3;
yy yy_0_1_4;
yy yy_1_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 4) goto yyfl_7_1;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yy_0_1_4 = ((yy)yy_0_1[4]);
yyv_Def = yy_0_1_1;
yy_1_1 = yyv_Def;
WriteDomFile(yy_1_1);
return;
yyfl_7_1 : ;
}
{
yy yyb;
yy yy_0_1;
yy_0_1 = yyin_1;
return;
yyfl_7_2 : ;
}
yyErr(2,80);
}
WriteDomFile(yyin_1)
yy yyin_1;
{
{
yy yyb;
yy yy_0_1;
yy yyv_Id;
yy yy_0_1_1;
yy yyv_Functors;
yy yy_0_1_2;
yy yy_0_1_3;
yy yy_1_1;
yy yy_2_1;
yy yy_3_1;
yy yy_5_1;
yy yy_5_2;
yy yy_5_3;
yy yy_6_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 1) goto yyfl_8_1;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yyv_Id = yy_0_1_1;
yyv_Functors = yy_0_1_2;
yy_1_1 = ((yy)"domain ");
Put(yy_1_1);
yy_2_1 = yyv_Id;
PutId(yy_2_1);
yy_3_1 = ((yy)" {");
Put(yy_3_1);
Nl();
yy_5_1 = yyv_Functors;
yy_5_2 = yyv_Id;
yy_5_3 = ((yy)1);
WriteDomFile_SubTypes(yy_5_1, yy_5_2, yy_5_3);
yy_6_1 = ((yy)"}");
Put(yy_6_1);
Nl();
return;
yyfl_8_1 : ;
}
yyErr(2,85);
}
WriteDomFile_SubTypes(yyin_1, yyin_2, yyin_3)
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
yy yyv_Super;
yy yy_0_2;
yy yyv_Code;
yy yy_0_3;
yy yy_1_1;
yy yy_1_2;
yy yy_1_3;
yy yy_2_1;
yy yy_2_2;
yy yy_2_3;
yy yy_2_3_1;
yy yy_2_3_2;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yy_0_3 = yyin_3;
if (yy_0_1[0] != 1) goto yyfl_9_1;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yyv_H = yy_0_1_1;
yyv_T = yy_0_1_2;
yyv_Super = yy_0_2;
yyv_Code = yy_0_3;
yy_1_1 = yyv_H;
yy_1_2 = yyv_Super;
yy_1_3 = yyv_Code;
WriteDomFile_SubType(yy_1_1, yy_1_2, yy_1_3);
yy_2_1 = yyv_T;
yy_2_2 = yyv_Super;
yy_2_3_1 = yyv_Code;
yy_2_3_2 = ((yy)1);
yy_2_3 = (yy)(((long)yy_2_3_1)+((long)yy_2_3_2));
WriteDomFile_SubTypes(yy_2_1, yy_2_2, yy_2_3);
return;
yyfl_9_1 : ;
}
{
yy yyb;
yy yy_0_1;
yy yyv_Super;
yy yy_0_2;
yy yyv_Code;
yy yy_0_3;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yy_0_3 = yyin_3;
if (yy_0_1[0] != 2) goto yyfl_9_2;
yyv_Super = yy_0_2;
yyv_Code = yy_0_3;
return;
yyfl_9_2 : ;
}
yyErr(2,91);
}
WriteDomFile_SubType(yyin_1, yyin_2, yyin_3)
yy yyin_1;
yy yyin_2;
yy yyin_3;
{
{
yy yyb;
yy yy_0_1;
yy yyv_Id;
yy yy_0_1_1;
yy yyv_Args;
yy yy_0_1_2;
yy yyv_Pos;
yy yy_0_1_3;
yy yyv_Super;
yy yy_0_2;
yy yyv_Code;
yy yy_0_3;
yy yy_1_1;
yy yy_1_2;
yy yy_2_1;
yy yy_3_1;
yy yy_4_1;
yy yy_5_1;
yy yy_7_1;
yy yy_8_1;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yy_0_3 = yyin_3;
if (yy_0_1[0] != 1) goto yyfl_10_1;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yyv_Id = yy_0_1_1;
yyv_Args = yy_0_1_2;
yyv_Pos = yy_0_1_3;
yyv_Super = yy_0_2;
yyv_Code = yy_0_3;
yy_1_1 = yyv_Id;
yy_1_2 = yyv_Pos;
CheckFunctorIsUnique(yy_1_1, yy_1_2);
yy_2_1 = yyv_Id;
AddToFunctorList(yy_2_1);
yy_3_1 = ((yy)"   ");
Put(yy_3_1);
yy_4_1 = yyv_Id;
PutId(yy_4_1);
yy_5_1 = ((yy)" (");
Put(yy_5_1);
Nl();
yy_7_1 = yyv_Args;
WriteDomFile_StructFields(yy_7_1);
yy_8_1 = ((yy)"   )");
Put(yy_8_1);
Nl();
return;
yyfl_10_1 : ;
}
yyErr(2,97);
}
WriteDomFile_StructFields(yyin_1)
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
yy yy_2_1;
yy yy_3_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 1) goto yyfl_11_1;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yyv_H = yy_0_1_1;
yyv_T = yy_0_1_2;
yy_1_1 = yyv_H;
yy_1_2 = yyv_T;
CheckField(yy_1_1, yy_1_2);
yy_2_1 = yyv_H;
WriteDomFile_StructField(yy_2_1);
yy_3_1 = yyv_T;
WriteDomFile_StructFields(yy_3_1);
return;
yyfl_11_1 : ;
}
{
yy yyb;
yy yy_0_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 2) goto yyfl_11_2;
return;
yyfl_11_2 : ;
}
yyErr(2,105);
}
WriteDomFile_StructField(yyin_1)
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
yy_0_1 = yyin_1;
if (yy_0_1[0] != 1) goto yyfl_12_1;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yyv_Type = yy_0_1_1;
yyv_Selector = yy_0_1_2;
yy_1_1 = ((yy)"      ");
Put(yy_1_1);
yy_2_1 = yyv_Type;
PutId(yy_2_1);
yy_3_1 = ((yy)" ");
Put(yy_3_1);
yy_4_1 = yyv_Selector;
PutId(yy_4_1);
Nl();
return;
yyfl_12_1 : ;
}
yyErr(2,112);
}
CheckField(yyin_1, yyin_2)
yy yyin_1;
yy yyin_2;
{
{
yy yyb;
yy yyv_Def;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Type;
yy yy_0_1_1_1;
yy yyv_Selector;
yy yy_0_1_1_2;
yy yyv_Pos;
yy yy_0_1_1_3;
yy yy_0_2;
yy yyv_H;
yy yy_0_2_1;
yy yyv_T;
yy yy_0_2_2;
yy yy_1_1_1_1;
yy yy_1_1_1_2;
yy yyv_Type2;
yy yy_1_1_1_2_1;
yy yyv_Selector2;
yy yy_1_1_1_2_2;
yy yy_1_1_1_2_3;
yy yy_1_1_2_1;
yy yy_1_1_2_2;
yy yy_1_1_3_1;
yy yy_1_1_3_2;
yy yy_1_1_3_3;
yy yy_1_1_3_4;
yy yy_2_1;
yy yy_2_2;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yy_0_1_1 = yy_0_1;
yyv_Def = yy_0_1;
if (yy_0_1_1[0] != 1) goto yyfl_13_1;
yy_0_1_1_1 = ((yy)yy_0_1_1[1]);
yy_0_1_1_2 = ((yy)yy_0_1_1[2]);
yy_0_1_1_3 = ((yy)yy_0_1_1[3]);
yyv_Type = yy_0_1_1_1;
yyv_Selector = yy_0_1_1_2;
yyv_Pos = yy_0_1_1_3;
if (yy_0_2[0] != 1) goto yyfl_13_1;
yy_0_2_1 = ((yy)yy_0_2[1]);
yy_0_2_2 = ((yy)yy_0_2[2]);
yyv_H = yy_0_2_1;
yyv_T = yy_0_2_2;
{
yy yysb = yyb;
yy_1_1_1_1 = yyv_H;
yy_1_1_1_2 = yy_1_1_1_1;
if (yy_1_1_1_2[0] != 1) goto yyfl_13_1_1_1;
yy_1_1_1_2_1 = ((yy)yy_1_1_1_2[1]);
yy_1_1_1_2_2 = ((yy)yy_1_1_1_2[2]);
yy_1_1_1_2_3 = ((yy)yy_1_1_1_2[3]);
yyv_Type2 = yy_1_1_1_2_1;
yyv_Selector2 = yy_1_1_1_2_2;
yy_1_1_2_1 = yyv_Selector;
yy_1_1_2_2 = yyv_Selector2;
if (! yyeq_IDENT(yy_1_1_2_1, yy_1_1_2_2)) goto yyfl_13_1_1_1;
yy_1_1_3_1 = ((yy)"selector '");
yy_1_1_3_2 = yyv_Selector;
yy_1_1_3_3 = ((yy)"' not unique");
yy_1_1_3_4 = yyv_Pos;
ErrorI(yy_1_1_3_1, yy_1_1_3_2, yy_1_1_3_3, yy_1_1_3_4);
goto yysl_13_1_1;
yyfl_13_1_1_1 : ;
goto yysl_13_1_1;
yysl_13_1_1 : ;
yyb = yysb;
}
yy_2_1 = yyv_Def;
yy_2_2 = yyv_T;
CheckField(yy_2_1, yy_2_2);
return;
yyfl_13_1 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_2;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
if (yy_0_2[0] != 2) goto yyfl_13_2;
return;
yyfl_13_2 : ;
}
yyErr(2,116);
}
EmitDomainForwardDecls(yyin_1)
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
if (yy_0_1[0] != 1) goto yyfl_14_1;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yyv_H = yy_0_1_1;
yyv_T = yy_0_1_2;
yy_1_1 = yyv_H;
EmitDomainForwardDecl(yy_1_1);
yy_2_1 = yyv_T;
EmitDomainForwardDecls(yy_2_1);
return;
yyfl_14_1 : ;
}
{
yy yyb;
yy yy_0_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 2) goto yyfl_14_2;
return;
yyfl_14_2 : ;
}
yyErr(2,131);
}
EmitDomainForwardDecl(yyin_1)
yy yyin_1;
{
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Id;
yy yy_0_1_1_1;
yy yy_0_1_1_2;
yy yy_0_1_1_3;
yy yy_0_1_2;
yy yy_0_1_3;
yy yy_0_1_4;
yy yy_1_1;
yy yy_2_1;
yy yy_3_1;
yy yy_4_1;
yy yy_5_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 4) goto yyfl_15_1;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yy_0_1_4 = ((yy)yy_0_1[4]);
if (yy_0_1_1[0] != 1) goto yyfl_15_1;
yy_0_1_1_1 = ((yy)yy_0_1_1[1]);
yy_0_1_1_2 = ((yy)yy_0_1_1[2]);
yy_0_1_1_3 = ((yy)yy_0_1_1[3]);
yyv_Id = yy_0_1_1_1;
yy_1_1 = ((yy)"typedef class ");
Put(yy_1_1);
yy_2_1 = yyv_Id;
PutId(yy_2_1);
yy_3_1 = ((yy)"_struct *");
Put(yy_3_1);
yy_4_1 = yyv_Id;
PutId(yy_4_1);
yy_5_1 = ((yy)";");
Put(yy_5_1);
Nl();
return;
yyfl_15_1 : ;
}
{
yy yyb;
yy yy_0_1;
yy_0_1 = yyin_1;
return;
yyfl_15_2 : ;
}
yyErr(2,138);
}
EmitDomainDeclsDECLLIST(yyin_1)
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
if (yy_0_1[0] != 1) goto yyfl_16_1;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yyv_H = yy_0_1_1;
yyv_T = yy_0_1_2;
yy_1_1 = yyv_H;
EmitDomainDeclsDECL(yy_1_1);
yy_2_1 = yyv_T;
EmitDomainDeclsDECLLIST(yy_2_1);
return;
yyfl_16_1 : ;
}
{
yy yyb;
yy yy_0_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 2) goto yyfl_16_2;
return;
yyfl_16_2 : ;
}
yyErr(2,149);
}
EmitDomainDeclsDECL(yyin_1)
yy yyin_1;
{
{
yy yyb;
yy yy_0_1;
yy yyv_Def;
yy yy_0_1_1;
yy yy_0_1_2;
yy yy_0_1_3;
yy yy_0_1_4;
yy yy_1_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 4) goto yyfl_17_1;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yy_0_1_4 = ((yy)yy_0_1[4]);
yyv_Def = yy_0_1_1;
yy_1_1 = yyv_Def;
EmitDomainDecl(yy_1_1);
return;
yyfl_17_1 : ;
}
{
yy yyb;
yy yy_0_1;
yy_0_1 = yyin_1;
return;
yyfl_17_2 : ;
}
yyErr(2,159);
}
EmitDomainDecl(yyin_1)
yy yyin_1;
{
{
yy yyb;
yy yy_0_1;
yy yyv_Id;
yy yy_0_1_1;
yy yyv_Functors;
yy yy_0_1_2;
yy yy_0_1_3;
yy yy_1_1;
yy yy_2_1;
yy yy_2_2;
yy yy_2_3;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 1) goto yyfl_18_1;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yyv_Id = yy_0_1_1;
yyv_Functors = yy_0_1_2;
yy_1_1 = yyv_Id;
EmitSuperType(yy_1_1);
yy_2_1 = yyv_Functors;
yy_2_2 = yyv_Id;
yy_2_3 = ((yy)1);
EmitSubTypes(yy_2_1, yy_2_2, yy_2_3);
return;
yyfl_18_1 : ;
}
yyErr(2,164);
}
EmitSubTypes(yyin_1, yyin_2, yyin_3)
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
yy yyv_Super;
yy yy_0_2;
yy yyv_Code;
yy yy_0_3;
yy yy_1_1;
yy yy_1_2;
yy yy_1_3;
yy yy_2_1;
yy yy_2_2;
yy yy_2_3;
yy yy_2_3_1;
yy yy_2_3_2;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yy_0_3 = yyin_3;
if (yy_0_1[0] != 1) goto yyfl_19_1;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yyv_H = yy_0_1_1;
yyv_T = yy_0_1_2;
yyv_Super = yy_0_2;
yyv_Code = yy_0_3;
yy_1_1 = yyv_H;
yy_1_2 = yyv_Super;
yy_1_3 = yyv_Code;
EmitSubType(yy_1_1, yy_1_2, yy_1_3);
yy_2_1 = yyv_T;
yy_2_2 = yyv_Super;
yy_2_3_1 = yyv_Code;
yy_2_3_2 = ((yy)1);
yy_2_3 = (yy)(((long)yy_2_3_1)+((long)yy_2_3_2));
EmitSubTypes(yy_2_1, yy_2_2, yy_2_3);
return;
yyfl_19_1 : ;
}
{
yy yyb;
yy yy_0_1;
yy yyv_Super;
yy yy_0_2;
yy yyv_Code;
yy yy_0_3;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yy_0_3 = yyin_3;
if (yy_0_1[0] != 2) goto yyfl_19_2;
yyv_Super = yy_0_2;
yyv_Code = yy_0_3;
return;
yyfl_19_2 : ;
}
yyErr(2,169);
}
EmitSuperType(yyin_1)
yy yyin_1;
{
{
yy yyb;
yy yyv_Id;
yy yy_0_1;
yy yy_1_1;
yy yy_2_1;
yy yy_3_1;
yy yy_5_1;
yy yy_7_1;
yy_0_1 = yyin_1;
yyv_Id = yy_0_1;
yy_1_1 = ((yy)"struct ");
Put(yy_1_1);
yy_2_1 = yyv_Id;
PutId(yy_2_1);
yy_3_1 = ((yy)"_struct {");
Put(yy_3_1);
Nl();
yy_5_1 = ((yy)"   int tag;");
Put(yy_5_1);
Nl();
yy_7_1 = ((yy)"};");
Put(yy_7_1);
Nl();
return;
}
}
EmitSubType(yyin_1, yyin_2, yyin_3)
yy yyin_1;
yy yyin_2;
yy yyin_3;
{
{
yy yyb;
yy yy_0_1;
yy yyv_Id;
yy yy_0_1_1;
yy yyv_Args;
yy yy_0_1_2;
yy yyv_Pos;
yy yy_0_1_3;
yy yyv_Super;
yy yy_0_2;
yy yyv_Code;
yy yy_0_3;
yy yy_1_1;
yy yy_2_1;
yy yy_3_1;
yy yy_4_1;
yy yy_5_1;
yy yy_7_1;
yy yy_8_1;
yy yy_9_1;
yy yy_10_1;
yy yy_11_1;
yy yy_13_1;
yy yy_14_1;
yy yy_16_1;
yy yy_18_1;
yy yy_19_1;
yy yy_20_1;
yy yy_21_1;
yy yy_22_1;
yy yy_23_1;
yy yy_25_1;
yy yy_26_1;
yy yy_27_1;
yy yy_28_1;
yy yy_30_1;
yy yy_31_1;
yy yy_32_1;
yy yy_33_1;
yy yy_34_1;
yy yy_36_1;
yy yy_37_1;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yy_0_3 = yyin_3;
if (yy_0_1[0] != 1) goto yyfl_21_1;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yyv_Id = yy_0_1_1;
yyv_Args = yy_0_1_2;
yyv_Pos = yy_0_1_3;
yyv_Super = yy_0_2;
yyv_Code = yy_0_3;
yy_1_1 = ((yy)"struct ");
Put(yy_1_1);
yy_2_1 = yyv_Id;
PutId(yy_2_1);
yy_3_1 = ((yy)"_struct : ");
Put(yy_3_1);
yy_4_1 = yyv_Super;
PutId(yy_4_1);
yy_5_1 = ((yy)"_struct {");
Put(yy_5_1);
Nl();
yy_7_1 = yyv_Args;
EmitStructFields(yy_7_1);
yy_8_1 = ((yy)"   ");
Put(yy_8_1);
yy_9_1 = yyv_Id;
PutId(yy_9_1);
yy_10_1 = ((yy)"_struct");
Put(yy_10_1);
yy_11_1 = ((yy)"(");
Put(yy_11_1);
Nl();
yy_13_1 = yyv_Args;
EmitConstructorArgs(yy_13_1);
yy_14_1 = ((yy)"   );");
Put(yy_14_1);
Nl();
yy_16_1 = ((yy)"};");
Put(yy_16_1);
Nl();
yy_18_1 = ((yy)"typedef ");
Put(yy_18_1);
yy_19_1 = yyv_Id;
PutId(yy_19_1);
yy_20_1 = ((yy)"_struct *");
Put(yy_20_1);
yy_21_1 = yyv_Id;
PutId(yy_21_1);
yy_22_1 = ((yy)"_subtype");
Put(yy_22_1);
yy_23_1 = ((yy)";");
Put(yy_23_1);
Nl();
yy_25_1 = ((yy)"#define ");
Put(yy_25_1);
yy_26_1 = yyv_Id;
PutId(yy_26_1);
yy_27_1 = ((yy)"_tag ");
Put(yy_27_1);
yy_28_1 = yyv_Code;
PutI(yy_28_1);
Nl();
yy_30_1 = ((yy)"extern \"C\" ");
Put(yy_30_1);
yy_31_1 = yyv_Id;
PutId(yy_31_1);
yy_32_1 = ((yy)"_struct *");
Put(yy_32_1);
yy_33_1 = yyv_Id;
PutId(yy_33_1);
yy_34_1 = ((yy)" (");
Put(yy_34_1);
Nl();
yy_36_1 = yyv_Args;
EmitConstructorArgs(yy_36_1);
yy_37_1 = ((yy)");");
Put(yy_37_1);
Nl();
return;
yyfl_21_1 : ;
}
yyErr(2,181);
}
EmitStructFields(yyin_1)
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
if (yy_0_1[0] != 1) goto yyfl_22_1;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yyv_H = yy_0_1_1;
yyv_T = yy_0_1_2;
yy_1_1 = yyv_H;
EmitStructField(yy_1_1);
yy_2_1 = yyv_T;
EmitStructFields(yy_2_1);
return;
yyfl_22_1 : ;
}
{
yy yyb;
yy yy_0_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 2) goto yyfl_22_2;
return;
yyfl_22_2 : ;
}
yyErr(2,203);
}
EmitStructField(yyin_1)
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
if (yy_0_1[0] != 1) goto yyfl_23_1;
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
yy_5_1 = ((yy)";");
Put(yy_5_1);
Nl();
return;
yyfl_23_1 : ;
}
yyErr(2,209);
}
EmitConstructorArgs(yyin_1)
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
yy yy_2_2_1_1;
yy yy_2_2_3_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 1) goto yyfl_24_1;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yyv_H = yy_0_1_1;
yyv_T = yy_0_1_2;
yy_1_1 = yyv_H;
EmitConstructorArg(yy_1_1);
{
yy yysb = yyb;
yy_2_1_1_1 = yyv_T;
yy_2_1_1_2 = yy_2_1_1_1;
if (yy_2_1_1_2[0] != 2) goto yyfl_24_1_2_1;
Nl();
goto yysl_24_1_2;
yyfl_24_1_2_1 : ;
yy_2_2_1_1 = ((yy)",");
Put(yy_2_2_1_1);
Nl();
yy_2_2_3_1 = yyv_T;
EmitConstructorArgs(yy_2_2_3_1);
goto yysl_24_1_2;
yysl_24_1_2 : ;
yyb = yysb;
}
return;
yyfl_24_1 : ;
}
{
yy yyb;
yy yy_0_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 2) goto yyfl_24_2;
return;
yyfl_24_2 : ;
}
yyErr(2,213);
}
EmitConstructorArg(yyin_1)
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
yy_0_1 = yyin_1;
if (yy_0_1[0] != 1) goto yyfl_25_1;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yyv_Type = yy_0_1_1;
yyv_Selector = yy_0_1_2;
yy_1_1 = ((yy)"      ");
Put(yy_1_1);
yy_2_1 = yyv_Type;
PutId(yy_2_1);
yy_3_1 = ((yy)" ");
Put(yy_3_1);
yy_4_1 = yyv_Selector;
PutId(yy_4_1);
return;
yyfl_25_1 : ;
}
yyErr(2,225);
}
