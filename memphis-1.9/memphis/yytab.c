/* A Bison parser, made by GNU Bison 1.875b.  */

/* Skeleton parser for Yacc-like parsing with Bison,
   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003 Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 59 Temple Place - Suite 330,
   Boston, MA 02111-1307, USA.  */

/* As a special exception, when this file is copied by Bison into a
   Bison output file, you may use that output file without restriction.
   This special exception was added by the Free Software Foundation
   in version 1.24 of Bison.  */

/* Written by Richard Stallman by simplifying the original so called
   ``semantic'' parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     TOKEN = 257,
     OPENPAREN = 258,
     CLOSEPAREN = 259,
     OPENCURL = 260,
     CLOSECURL = 261,
     DOMAIN = 262,
     WITH = 263,
     MATCH = 264,
     COMMA = 265,
     TILDE = 266,
     SEMICOLON = 267,
     RULETKN = 268,
     COLON = 269,
     IDENTIFIER = 270,
     STRINGTOKEN = 271,
     NUMBER = 272,
     NEXT = 273
   };
#endif
#define TOKEN 257
#define OPENPAREN 258
#define CLOSEPAREN 259
#define OPENCURL 260
#define CLOSECURL 261
#define DOMAIN 262
#define WITH 263
#define MATCH 264
#define COMMA 265
#define TILDE 266
#define SEMICOLON 267
#define RULETKN 268
#define COLON 269
#define IDENTIFIER 270
#define STRINGTOKEN 271
#define NUMBER 272
#define NEXT 273




/* Copy the first part of user declarations.  */
#line 1 "gen.y"

typedef long * yy;
#define yyu (-2147483647L)
static yy yynull;
extern yy yyh;
extern yy yyhx;
static yyErr(n,l)
{
yyAbort(n,"grammar", l);
}
/* start */
/* end */
extern yy yyglov_NextUniqueNumber;
extern yy yyglov_FirstWithPos;
typedef struct {long attr[2];} yyATTRIBUTES;
#define YYSTYPE yyATTRIBUTES
extern YYSTYPE yylval;



/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

#if ! defined (YYSTYPE) && ! defined (YYSTYPE_IS_DECLARED)
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 214 of yacc.c.  */
#line 145 "gen.tab.c"

#if ! defined (yyoverflow) || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# if YYSTACK_USE_ALLOCA
#  define YYSTACK_ALLOC alloca
# else
#  ifndef YYSTACK_USE_ALLOCA
#   if defined (alloca) || defined (_ALLOCA_H)
#    define YYSTACK_ALLOC alloca
#   else
#    ifdef __GNUC__
#     define YYSTACK_ALLOC __builtin_alloca
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning. */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
# else
#  if defined (__STDC__) || defined (__cplusplus)
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   define YYSIZE_T size_t
#  endif
#  define YYSTACK_ALLOC malloc
#  define YYSTACK_FREE free
# endif
#endif /* ! defined (yyoverflow) || YYERROR_VERBOSE */


#if (! defined (yyoverflow) \
     && (! defined (__cplusplus) \
	 || (YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  short yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (short) + sizeof (YYSTYPE))				\
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  register YYSIZE_T yyi;		\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (0)
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (0)

#endif

#if defined (__STDC__) || defined (__cplusplus)
   typedef signed char yysigned_char;
#else
   typedef short yysigned_char;
#endif

/* YYFINAL -- State number of the termination state. */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   89

/* YYNTOKENS -- Number of terminals. */
#define YYNTOKENS  20
/* YYNNTS -- Number of nonterminals. */
#define YYNNTS  35
/* YYNRULES -- Number of rules. */
#define YYNRULES  64
/* YYNRULES -- Number of states. */
#define YYNSTATES  99

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   274

#define YYTRANSLATE(YYX) 						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const unsigned char yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,     2
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const unsigned char yyprhs[] =
{
       0,     0,     3,     5,    10,    11,    12,    15,    16,    20,
      21,    23,    27,    29,    31,    37,    40,    41,    46,    48,
      49,    53,    55,    58,    62,    65,    66,    68,    70,    72,
      78,    81,    83,    88,    92,    95,    97,    99,   102,   107,
     111,   115,   117,   118,   120,   123,   124,   126,   132,   135,
     136,   141,   144,   145,   148,   150,   152,   154,   156,   158,
     160,   162,   164,   166,   169
};

/* YYRHS -- A `-1'-separated list of the rules' RHS. */
static const yysigned_char yyrhs[] =
{
      21,     0,    -1,    22,    -1,    23,    24,    25,    26,    -1,
      -1,    -1,    28,    25,    -1,    -1,    27,    45,    26,    -1,
      -1,    19,    -1,     9,    16,    13,    -1,    54,    -1,    34,
      -1,     8,    16,     6,    29,     7,    -1,    30,    29,    -1,
      -1,    16,     4,    31,     5,    -1,    32,    -1,    -1,    33,
      11,    32,    -1,    33,    -1,    16,    16,    -1,     6,    35,
       7,    -1,    36,    35,    -1,    -1,    37,    -1,    54,    -1,
      34,    -1,    10,    43,     6,    38,     7,    -1,    39,    38,
      -1,    39,    -1,    14,    40,    15,    35,    -1,    41,    11,
      40,    -1,    41,    44,    -1,    16,    -1,    42,    -1,    42,
      16,    -1,    16,     4,    40,     5,    -1,    16,     4,     5,
      -1,    16,    11,    43,    -1,    16,    -1,    -1,    46,    -1,
      47,    46,    -1,    -1,    48,    -1,     8,    16,     6,    49,
       7,    -1,    50,    49,    -1,    -1,    16,     4,    51,     5,
      -1,    52,    51,    -1,    -1,    16,    16,    -1,     3,    -1,
      16,    -1,     4,    -1,     5,    -1,    17,    -1,    18,    -1,
      13,    -1,    15,    -1,    11,    -1,    53,    54,    -1,    53,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned short yyrline[] =
{
       0,    40,    40,    48,    85,    95,   107,   137,   149,   180,
     192,   201,   275,   289,   310,   372,   402,   414,   452,   468,
     480,   510,   535,   571,   608,   638,   650,   671,   685,   706,
     768,   797,   822,   881,   911,   944,   979,   994,  1030,  1075,
    1123,  1171,  1215,  1228,  1249,  1279,  1291,  1325,  1370,  1400,
    1412,  1450,  1480,  1492,  1528,  1536,  1546,  1554,  1562,  1570,
    1578,  1588,  1598,  1606,  1615
};
#endif

#if YYDEBUG || YYERROR_VERBOSE
/* YYTNME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals. */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TOKEN", "OPENPAREN", "CLOSEPAREN", 
  "OPENCURL", "CLOSECURL", "DOMAIN", "WITH", "MATCH", "COMMA", "TILDE", 
  "SEMICOLON", "RULETKN", "COLON", "IDENTIFIER", "STRINGTOKEN", "NUMBER", 
  "NEXT", "$accept", "ROOT_", "Root", "init_unique_numbers", 
  "init_FirstWithPos", "decllist", "externdecls", "separator", "decl", 
  "functordefs", "functordef", "argdefsoption", "argdefs", "argdef", 
  "block", "blockitemlist", "blockitem", "matchstatement", "rulelist", 
  "rule", "patternlist", "pattern", "term_pattern", "matchexprlist", 
  "empty", "module", "DomFile_DECLLIST", "DomFile_DECL", "DomFile", 
  "DomFile_SubTypes", "DomFile_SubType", "DomFile_StructFields", 
  "DomFile_StructField", "tkn", "tknlist", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const unsigned short yytoknum[] =
{
       0,   256,   274,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   268,   269,   270,   271,   272,   273
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const unsigned char yyr1[] =
{
       0,    20,    21,    22,    23,    24,    25,    25,    26,    26,
      27,    28,    28,    28,    28,    29,    29,    30,    31,    31,
      32,    32,    33,    34,    35,    35,    36,    36,    36,    37,
      38,    38,    39,    40,    40,    41,    41,    41,    42,    42,
      43,    43,    44,    45,    46,    46,    47,    48,    49,    49,
      50,    51,    51,    52,    53,    53,    53,    53,    53,    53,
      53,    53,    53,    54,    54
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const unsigned char yyr2[] =
{
       0,     2,     1,     4,     0,     0,     2,     0,     3,     0,
       1,     3,     1,     1,     5,     2,     0,     4,     1,     0,
       3,     1,     2,     3,     2,     0,     1,     1,     1,     5,
       2,     1,     4,     3,     2,     1,     1,     2,     4,     3,
       3,     1,     0,     1,     2,     0,     1,     5,     2,     0,
       4,     2,     0,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const unsigned char yydefact[] =
{
       4,     0,     2,     5,     1,     7,    54,    56,    57,    25,
       0,     0,    62,    60,    61,    55,    58,    59,     9,     7,
      13,    64,    12,     0,    28,     0,    25,    26,    27,     0,
       0,    10,     3,    45,     6,    63,    41,     0,    23,    24,
      16,    11,     0,     9,    43,    45,    46,     0,     0,     0,
       0,    16,     0,     8,    44,    40,     0,     0,    31,    19,
      14,    15,    49,    35,     0,    42,    36,    29,    30,     0,
       0,    18,    21,     0,     0,    49,     0,    25,     0,    34,
      37,    22,    17,     0,    52,    47,    48,    39,     0,    32,
      33,    20,     0,     0,    52,    38,    53,    50,    51
};

/* YYDEFGOTO[NTERM-NUM]. */
static const yysigned_char yydefgoto[] =
{
      -1,     1,     2,     3,     5,    18,    32,    33,    19,    50,
      51,    70,    71,    72,    24,    25,    26,    27,    57,    58,
      64,    65,    66,    37,    79,    43,    44,    45,    46,    74,
      75,    93,    94,    21,    28
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -75
static const yysigned_char yypact[] =
{
     -75,     5,   -75,   -75,   -75,     3,   -75,   -75,   -75,    19,
     -13,    -6,   -75,   -75,   -75,   -75,   -75,   -75,     7,     3,
     -75,    37,   -75,    15,   -75,    26,    19,   -75,   -75,    32,
      30,   -75,   -75,    36,   -75,   -75,    34,    40,   -75,   -75,
      31,   -75,    33,     7,   -75,    36,   -75,    15,    42,    53,
      51,    31,    54,   -75,   -75,   -75,    43,    55,    42,    45,
     -75,   -75,    47,    60,    50,    56,    52,   -75,   -75,    57,
      61,   -75,    58,    66,    64,    47,    23,    19,    43,   -75,
     -75,   -75,   -75,    45,    59,   -75,   -75,   -75,    67,   -75,
     -75,   -75,    62,    69,    59,   -75,   -75,   -75,   -75
};

/* YYPGOTO[NTERM-NUM].  */
static const yysigned_char yypgoto[] =
{
     -75,   -75,   -75,   -75,   -75,    63,    38,   -75,   -75,    25,
     -75,   -75,    -3,   -75,     8,   -26,   -75,   -75,    21,   -75,
     -74,   -75,   -75,    39,   -75,   -75,    44,   -75,   -75,     2,
     -75,   -11,   -75,   -75,    -4
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const unsigned char yytable[] =
{
      39,    22,    88,    29,    90,     4,     6,     7,     8,     9,
      30,    10,    11,    20,    12,    22,    13,    35,    14,    15,
      16,    17,     6,     7,     8,     9,    31,    20,    87,    23,
      12,    36,    13,    38,    14,    15,    16,    17,    40,    63,
       6,     7,     8,    41,    42,    47,    48,    49,    12,    52,
      13,    89,    14,    15,    16,    17,    56,    59,    60,    63,
      62,    69,    67,    73,    76,    77,    82,    78,    80,    83,
      84,    85,    95,    81,    97,    92,    61,    86,    96,    68,
      91,    53,    34,    98,     0,     0,    55,     0,     0,    54
};

static const yysigned_char yycheck[] =
{
      26,     5,    76,    16,    78,     0,     3,     4,     5,     6,
      16,     8,     9,     5,    11,    19,    13,    21,    15,    16,
      17,    18,     3,     4,     5,     6,    19,    19,     5,    10,
      11,    16,    13,     7,    15,    16,    17,    18,     6,    16,
       3,     4,     5,    13,     8,    11,     6,    16,    11,    16,
      13,    77,    15,    16,    17,    18,    14,     4,     7,    16,
       6,    16,     7,    16,     4,    15,     5,    11,    16,    11,
       4,     7,     5,    16,     5,    16,    51,    75,    16,    58,
      83,    43,    19,    94,    -1,    -1,    47,    -1,    -1,    45
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const unsigned char yystos[] =
{
       0,    21,    22,    23,     0,    24,     3,     4,     5,     6,
       8,     9,    11,    13,    15,    16,    17,    18,    25,    28,
      34,    53,    54,    10,    34,    35,    36,    37,    54,    16,
      16,    19,    26,    27,    25,    54,    16,    43,     7,    35,
       6,    13,     8,    45,    46,    47,    48,    11,     6,    16,
      29,    30,    16,    26,    46,    43,    14,    38,    39,     4,
       7,    29,     6,    16,    40,    41,    42,     7,    38,    16,
      31,    32,    33,    16,    49,    50,     4,    15,    11,    44,
      16,    16,     5,    11,     4,     7,    49,     5,    40,    35,
      40,    32,    16,    51,    52,     5,    16,     5,    51
};

#if ! defined (YYSIZE_T) && defined (__SIZE_TYPE__)
# define YYSIZE_T __SIZE_TYPE__
#endif
#if ! defined (YYSIZE_T) && defined (size_t)
# define YYSIZE_T size_t
#endif
#if ! defined (YYSIZE_T)
# if defined (__STDC__) || defined (__cplusplus)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# endif
#endif
#if ! defined (YYSIZE_T)
# define YYSIZE_T unsigned int
#endif

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrlab1


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK;						\
      goto yybackup;						\
    }								\
  else								\
    { 								\
      yyerror ("syntax error: cannot back up");\
      YYERROR;							\
    }								\
while (0)

#define YYTERROR	1
#define YYERRCODE	256

/* YYLLOC_DEFAULT -- Compute the default location (before the actions
   are run).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)         \
  Current.first_line   = Rhs[1].first_line;      \
  Current.first_column = Rhs[1].first_column;    \
  Current.last_line    = Rhs[N].last_line;       \
  Current.last_column  = Rhs[N].last_column;
#endif

/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (0)

# define YYDSYMPRINT(Args)			\
do {						\
  if (yydebug)					\
    yysymprint Args;				\
} while (0)

# define YYDSYMPRINTF(Title, Token, Value, Location)		\
do {								\
  if (yydebug)							\
    {								\
      YYFPRINTF (stderr, "%s ", Title);				\
      yysymprint (stderr, 					\
                  Token, Value);	\
      YYFPRINTF (stderr, "\n");					\
    }								\
} while (0)

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (cinluded).                                                   |
`------------------------------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yy_stack_print (short *bottom, short *top)
#else
static void
yy_stack_print (bottom, top)
    short *bottom;
    short *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (/* Nothing. */; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yy_reduce_print (int yyrule)
#else
static void
yy_reduce_print (yyrule)
    int yyrule;
#endif
{
  int yyi;
  unsigned int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %u), ",
             yyrule - 1, yylno);
  /* Print the symbols being reduced, and their result.  */
  for (yyi = yyprhs[yyrule]; 0 <= yyrhs[yyi]; yyi++)
    YYFPRINTF (stderr, "%s ", yytname [yyrhs[yyi]]);
  YYFPRINTF (stderr, "-> %s\n", yytname [yyr1[yyrule]]);
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (Rule);		\
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YYDSYMPRINT(Args)
# define YYDSYMPRINTF(Title, Token, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   SIZE_MAX < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#if YYMAXDEPTH == 0
# undef YYMAXDEPTH
#endif

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined (__GLIBC__) && defined (_STRING_H)
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
#   if defined (__STDC__) || defined (__cplusplus)
yystrlen (const char *yystr)
#   else
yystrlen (yystr)
     const char *yystr;
#   endif
{
  register const char *yys = yystr;

  while (*yys++ != '\0')
    continue;

  return yys - yystr - 1;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined (__GLIBC__) && defined (_STRING_H) && defined (_GNU_SOURCE)
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
#   if defined (__STDC__) || defined (__cplusplus)
yystpcpy (char *yydest, const char *yysrc)
#   else
yystpcpy (yydest, yysrc)
     char *yydest;
     const char *yysrc;
#   endif
{
  register char *yyd = yydest;
  register const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

#endif /* !YYERROR_VERBOSE */



#if YYDEBUG
/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yysymprint (FILE *yyoutput, int yytype, YYSTYPE *yyvaluep)
#else
static void
yysymprint (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  /* Pacify ``unused variable'' warnings.  */
  (void) yyvaluep;

  if (yytype < YYNTOKENS)
    {
      YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
# ifdef YYPRINT
      YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
    }
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  switch (yytype)
    {
      default:
        break;
    }
  YYFPRINTF (yyoutput, ")");
}

#endif /* ! YYDEBUG */
/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yydestruct (int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yytype, yyvaluep)
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  /* Pacify ``unused variable'' warnings.  */
  (void) yyvaluep;

  switch (yytype)
    {

      default:
        break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
# if defined (__STDC__) || defined (__cplusplus)
int yyparse (void *YYPARSE_PARAM);
# else
int yyparse ();
# endif
#else /* ! YYPARSE_PARAM */
#if defined (__STDC__) || defined (__cplusplus)
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
# if defined (__STDC__) || defined (__cplusplus)
int yyparse (void *YYPARSE_PARAM)
# else
int yyparse (YYPARSE_PARAM)
  void *YYPARSE_PARAM;
# endif
#else /* ! YYPARSE_PARAM */
#if defined (__STDC__) || defined (__cplusplus)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  register int yystate;
  register int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  short	yyssa[YYINITDEPTH];
  short *yyss = yyssa;
  register short *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  register YYSTYPE *yyvsp;



#define YYPOPSTACK   (yyvsp--, yyssp--)

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* When reducing, the number of symbols on the RHS of the reduced
     rule.  */
  int yylen;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed. so pushing a state here evens the stacks.
     */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack. Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	short *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow ("parser stack overflow",
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyoverflowlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyoverflowlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	short *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyoverflowlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

/* Do appropriate processing given the current state.  */
/* Read a lookahead token if we need one and don't already have one.  */
/* yyresume: */

  /* First try to decide what to do without reference to lookahead token.  */

  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YYDSYMPRINTF ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Shift the lookahead token.  */
  YYDPRINTF ((stderr, "Shifting token %s, ", yytname[yytoken]));

  /* Discard the token being shifted unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  *++yyvsp = yylval;


  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  yystate = yyn;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 42 "gen.y"
    {
yy yyb;
yyval.attr[0] = yyvsp[0].attr[0];
;}
    break;

  case 3:
#line 53 "gen.y"
    {
yy yyb;
yy yyv_L;
yy yy_3_1;
yy yyv_M;
yy yy_4_1;
yy yy_5_1_2_1;
yy yy_5_2_1_1;
yy yy_5_2_1_2;
yy_3_1 = (yy)(yyvsp[-1].attr[1]);
yy_4_1 = (yy)(yyvsp[0].attr[1]);
yyv_L = yy_3_1;
yyv_M = yy_4_1;
{
yy yysb = yyb;
if (! is_sigmode()) goto yyfl_2_1_5_1;
yy_5_1_2_1 = yyv_L;
domwalker(yy_5_1_2_1);
goto yysl_2_1_5;
yyfl_2_1_5_1 : ;
yy_5_2_1_1 = yyv_L;
yy_5_2_1_2 = yyv_M;
cppwalker(yy_5_2_1_1, yy_5_2_1_2);
goto yysl_2_1_5;
yysl_2_1_5 : ;
yyb = yysb;
}
yyval.attr[0] = yyvsp[-3].attr[0];
;}
    break;

  case 4:
#line 85 "gen.y"
    {
yy yyb;
yy yy_1;
yy_1 = ((yy)0);
yyglov_NextUniqueNumber = yy_1;
yyGetPos(&yyval.attr[0]);
;}
    break;

  case 5:
#line 95 "gen.y"
    {
yy yyb;
yy yy_1;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_1 = yyb + 0;
yy_1[0] = 1;
yyglov_FirstWithPos = yy_1;
yyGetPos(&yyval.attr[0]);
;}
    break;

  case 6:
#line 110 "gen.y"
    {
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yyv_H;
yy yy_1_1;
yy yyv_T;
yy yy_2_1;
yy_1_1 = (yy)(yyvsp[-1].attr[1]);
yy_2_1 = (yy)(yyvsp[0].attr[1]);
yyb = yyh;
yyh += 3; if (yyh > yyhx) yyExtend();
yyv_H = yy_1_1;
yyv_T = yy_2_1;
yy_0_1_1 = yyv_H;
yy_0_1_2 = yyv_T;
yy_0_1 = yyb + 0;
yy_0_1[0] = 1;
yy_0_1[1] = ((long)yy_0_1_1);
yy_0_1[2] = ((long)yy_0_1_2);
yyval.attr[1] = ((long)yy_0_1);
yyval.attr[0] = yyvsp[-1].attr[0];
;}
    break;

  case 7:
#line 137 "gen.y"
    {
yy yyb;
yy yy_0_1;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_0_1 = yyb + 0;
yy_0_1[0] = 2;
yyval.attr[1] = ((long)yy_0_1);
yyGetPos(&yyval.attr[0]);
;}
    break;

  case 8:
#line 153 "gen.y"
    {
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yyv_H;
yy yy_2_1;
yy yyv_T;
yy yy_3_1;
yy_2_1 = (yy)(yyvsp[-1].attr[1]);
yy_3_1 = (yy)(yyvsp[0].attr[1]);
yyb = yyh;
yyh += 3; if (yyh > yyhx) yyExtend();
yyv_H = yy_2_1;
yyv_T = yy_3_1;
yy_0_1_1 = yyv_H;
yy_0_1_2 = yyv_T;
yy_0_1 = yyb + 0;
yy_0_1[0] = 1;
yy_0_1[1] = ((long)yy_0_1_1);
yy_0_1[2] = ((long)yy_0_1_2);
yyval.attr[1] = ((long)yy_0_1);
yyval.attr[0] = yyvsp[-2].attr[0];
;}
    break;

  case 9:
#line 180 "gen.y"
    {
yy yyb;
yy yy_0_1;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_0_1 = yyb + 0;
yy_0_1[0] = 2;
yyval.attr[1] = ((long)yy_0_1);
yyGetPos(&yyval.attr[0]);
;}
    break;

  case 10:
#line 194 "gen.y"
    {
yy yyb;
StoreEnd();
yyval.attr[0] = yyvsp[0].attr[0];
;}
    break;

  case 11:
#line 205 "gen.y"
    {
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yy_0_1_3;
yy yy_0_1_4;
yy yyv_Start;
yy yy_1_1;
yy yyv_Pos;
yy yy_2;
yy yyv_Id;
yy yy_3_1;
yy yyv_Stop;
yy yy_4_1;
yy yy_5_1;
yy yyv_Str;
yy yy_5_2;
yy yy_6_1;
yy yy_7_1_1;
yy yy_7_1_2;
yy yy_7_1_2_1;
yy_1_1 = (yy)(yyvsp[-2].attr[1]);
yy_2 = (yy)(yyvsp[-2].attr[0]);
yy_3_1 = (yy)(yyvsp[-1].attr[1]);
yy_4_1 = (yy)(yyvsp[0].attr[1]);
yyb = yyh;
yyh += 5; if (yyh > yyhx) yyExtend();
yyv_Start = yy_1_1;
yyv_Pos = yy_2;
yyv_Id = yy_3_1;
yyv_Stop = yy_4_1;
yy_5_1 = yyv_Id;
id_to_string(yy_5_1, &yy_5_2);
yyv_Str = yy_5_2;
yy_6_1 = yyv_Str;
enterfilename(yy_6_1);
{
yy yysb = yyb;
yyb = yyh;
yyh += 2; if (yyh > yyhx) yyExtend();
yy_7_1_1 = yyglov_FirstWithPos;
if (yy_7_1_1 == (yy) yyu) yyErr(1,181);
if (yy_7_1_1[0] != 1) goto yyfl_30_1_7_1;
yy_7_1_2_1 = yyv_Pos;
yy_7_1_2 = yyb + 0;
yy_7_1_2[0] = 2;
yy_7_1_2[1] = ((long)yy_7_1_2_1);
yyglov_FirstWithPos = yy_7_1_2;
goto yysl_30_1_7;
yyfl_30_1_7_1 : ;
goto yysl_30_1_7;
yysl_30_1_7 : ;
yyb = yysb;
}
yy_0_1_1 = yyv_Id;
yy_0_1_2 = yyv_Start;
yy_0_1_3 = yyv_Stop;
yy_0_1_4 = yyv_Pos;
yy_0_1 = yyb + 0;
yy_0_1[0] = 2;
yy_0_1[1] = ((long)yy_0_1_1);
yy_0_1[2] = ((long)yy_0_1_2);
yy_0_1[3] = ((long)yy_0_1_3);
yy_0_1[4] = ((long)yy_0_1_4);
yyval.attr[1] = ((long)yy_0_1);
yyval.attr[0] = yyvsp[-2].attr[0];
;}
    break;

  case 12:
#line 277 "gen.y"
    {
yy yyb;
yy yy_0_1;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_0_1 = yyb + 0;
yy_0_1[0] = 1;
yyval.attr[1] = ((long)yy_0_1);
yyval.attr[0] = yyvsp[0].attr[0];
;}
    break;

  case 13:
#line 291 "gen.y"
    {
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_B;
yy yy_1_1;
yy_1_1 = (yy)(yyvsp[0].attr[1]);
yyb = yyh;
yyh += 2; if (yyh > yyhx) yyExtend();
yyv_B = yy_1_1;
yy_0_1_1 = yyv_B;
yy_0_1 = yyb + 0;
yy_0_1[0] = 3;
yy_0_1[1] = ((long)yy_0_1_1);
yyval.attr[1] = ((long)yy_0_1);
yyval.attr[0] = yyvsp[0].attr[0];
;}
    break;

  case 14:
#line 316 "gen.y"
    {
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_1_1;
yy yy_0_1_1_2;
yy yy_0_1_1_3;
yy yy_0_1_2;
yy yy_0_1_3;
yy yy_0_1_4;
yy yyv_P1;
yy yy_1_1;
yy yyv_Pos;
yy yy_2;
yy yyv_Id;
yy yy_3_1;
yy yy_4_1;
yy yyv_Defs;
yy yy_5_1;
yy yyv_P2;
yy yy_6_1;
yy_1_1 = (yy)(yyvsp[-4].attr[1]);
yy_2 = (yy)(yyvsp[-4].attr[0]);
yy_3_1 = (yy)(yyvsp[-3].attr[1]);
yy_4_1 = (yy)(yyvsp[-2].attr[1]);
yy_5_1 = (yy)(yyvsp[-1].attr[1]);
yy_6_1 = (yy)(yyvsp[0].attr[1]);
yyb = yyh;
yyh += 9; if (yyh > yyhx) yyExtend();
yyv_P1 = yy_1_1;
yyv_Pos = yy_2;
yyv_Id = yy_3_1;
yyv_Defs = yy_5_1;
yyv_P2 = yy_6_1;
yy_0_1_1_1 = yyv_Id;
yy_0_1_1_2 = yyv_Defs;
yy_0_1_1_3 = yyv_Pos;
yy_0_1_1 = yyb + 5;
yy_0_1_1[0] = 1;
yy_0_1_1[1] = ((long)yy_0_1_1_1);
yy_0_1_1[2] = ((long)yy_0_1_1_2);
yy_0_1_1[3] = ((long)yy_0_1_1_3);
yy_0_1_2 = yyv_P1;
yy_0_1_3 = yyv_P2;
yy_0_1_4 = yyv_Pos;
yy_0_1 = yyb + 0;
yy_0_1[0] = 4;
yy_0_1[1] = ((long)yy_0_1_1);
yy_0_1[2] = ((long)yy_0_1_2);
yy_0_1[3] = ((long)yy_0_1_3);
yy_0_1[4] = ((long)yy_0_1_4);
yyval.attr[1] = ((long)yy_0_1);
yyval.attr[0] = yyvsp[-4].attr[0];
;}
    break;

  case 15:
#line 375 "gen.y"
    {
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yyv_H;
yy yy_1_1;
yy yyv_T;
yy yy_2_1;
yy_1_1 = (yy)(yyvsp[-1].attr[1]);
yy_2_1 = (yy)(yyvsp[0].attr[1]);
yyb = yyh;
yyh += 3; if (yyh > yyhx) yyExtend();
yyv_H = yy_1_1;
yyv_T = yy_2_1;
yy_0_1_1 = yyv_H;
yy_0_1_2 = yyv_T;
yy_0_1 = yyb + 0;
yy_0_1[0] = 1;
yy_0_1[1] = ((long)yy_0_1_1);
yy_0_1[2] = ((long)yy_0_1_2);
yyval.attr[1] = ((long)yy_0_1);
yyval.attr[0] = yyvsp[-1].attr[0];
;}
    break;

  case 16:
#line 402 "gen.y"
    {
yy yyb;
yy yy_0_1;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_0_1 = yyb + 0;
yy_0_1[0] = 2;
yyval.attr[1] = ((long)yy_0_1);
yyGetPos(&yyval.attr[0]);
;}
    break;

  case 17:
#line 419 "gen.y"
    {
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yy_0_1_3;
yy yyv_Id;
yy yy_1_1;
yy yyv_Pos;
yy yy_3;
yy yyv_Args;
yy yy_4_1;
yy_1_1 = (yy)(yyvsp[-3].attr[1]);
yy_3 = (yy)(yyvsp[-2].attr[0]);
yy_4_1 = (yy)(yyvsp[-1].attr[1]);
yyb = yyh;
yyh += 4; if (yyh > yyhx) yyExtend();
yyv_Id = yy_1_1;
yyv_Pos = yy_3;
yyv_Args = yy_4_1;
yy_0_1_1 = yyv_Id;
yy_0_1_2 = yyv_Args;
yy_0_1_3 = yyv_Pos;
yy_0_1 = yyb + 0;
yy_0_1[0] = 1;
yy_0_1[1] = ((long)yy_0_1_1);
yy_0_1[2] = ((long)yy_0_1_2);
yy_0_1[3] = ((long)yy_0_1_3);
yyval.attr[1] = ((long)yy_0_1);
yyval.attr[0] = yyvsp[-3].attr[0];
;}
    break;

  case 18:
#line 454 "gen.y"
    {
yy yyb;
yy yy_0_1;
yy yyv_L;
yy yy_1_1;
yy_1_1 = (yy)(yyvsp[0].attr[1]);
yyv_L = yy_1_1;
yy_0_1 = yyv_L;
yyval.attr[1] = ((long)yy_0_1);
yyval.attr[0] = yyvsp[0].attr[0];
;}
    break;

  case 19:
#line 468 "gen.y"
    {
yy yyb;
yy yy_0_1;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_0_1 = yyb + 0;
yy_0_1[0] = 2;
yyval.attr[1] = ((long)yy_0_1);
yyGetPos(&yyval.attr[0]);
;}
    break;

  case 20:
#line 484 "gen.y"
    {
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yyv_H;
yy yy_1_1;
yy yyv_T;
yy yy_3_1;
yy_1_1 = (yy)(yyvsp[-2].attr[1]);
yy_3_1 = (yy)(yyvsp[0].attr[1]);
yyb = yyh;
yyh += 3; if (yyh > yyhx) yyExtend();
yyv_H = yy_1_1;
yyv_T = yy_3_1;
yy_0_1_1 = yyv_H;
yy_0_1_2 = yyv_T;
yy_0_1 = yyb + 0;
yy_0_1[0] = 1;
yy_0_1[1] = ((long)yy_0_1_1);
yy_0_1[2] = ((long)yy_0_1_2);
yyval.attr[1] = ((long)yy_0_1);
yyval.attr[0] = yyvsp[-2].attr[0];
;}
    break;

  case 21:
#line 512 "gen.y"
    {
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yyv_Def;
yy yy_1_1;
yy_1_1 = (yy)(yyvsp[0].attr[1]);
yyb = yyh;
yyh += 4; if (yyh > yyhx) yyExtend();
yyv_Def = yy_1_1;
yy_0_1_1 = yyv_Def;
yy_0_1_2 = yyb + 3;
yy_0_1_2[0] = 2;
yy_0_1 = yyb + 0;
yy_0_1[0] = 1;
yy_0_1[1] = ((long)yy_0_1_1);
yy_0_1[2] = ((long)yy_0_1_2);
yyval.attr[1] = ((long)yy_0_1);
yyval.attr[0] = yyvsp[0].attr[0];
;}
    break;

  case 22:
#line 538 "gen.y"
    {
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yy_0_1_3;
yy yyv_Type;
yy yy_1_1;
yy yyv_Selector;
yy yy_2_1;
yy yyv_Pos;
yy yy_3;
yy_1_1 = (yy)(yyvsp[-1].attr[1]);
yy_2_1 = (yy)(yyvsp[0].attr[1]);
yy_3 = (yy)(yyvsp[0].attr[0]);
yyb = yyh;
yyh += 4; if (yyh > yyhx) yyExtend();
yyv_Type = yy_1_1;
yyv_Selector = yy_2_1;
yyv_Pos = yy_3;
yy_0_1_1 = yyv_Type;
yy_0_1_2 = yyv_Selector;
yy_0_1_3 = yyv_Pos;
yy_0_1 = yyb + 0;
yy_0_1[0] = 1;
yy_0_1[1] = ((long)yy_0_1_1);
yy_0_1[2] = ((long)yy_0_1_2);
yy_0_1[3] = ((long)yy_0_1_3);
yyval.attr[1] = ((long)yy_0_1);
yyval.attr[0] = yyvsp[-1].attr[0];
;}
    break;

  case 23:
#line 575 "gen.y"
    {
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yy_0_1_3;
yy yyv_Start;
yy yy_1_1;
yy yyv_L;
yy yy_2_1;
yy yyv_Stop;
yy yy_3_1;
yy_1_1 = (yy)(yyvsp[-2].attr[1]);
yy_2_1 = (yy)(yyvsp[-1].attr[1]);
yy_3_1 = (yy)(yyvsp[0].attr[1]);
yyb = yyh;
yyh += 4; if (yyh > yyhx) yyExtend();
yyv_Start = yy_1_1;
yyv_L = yy_2_1;
yyv_Stop = yy_3_1;
yy_0_1_1 = yyv_L;
yy_0_1_2 = yyv_Start;
yy_0_1_3 = yyv_Stop;
yy_0_1 = yyb + 0;
yy_0_1[0] = 1;
yy_0_1[1] = ((long)yy_0_1_1);
yy_0_1[2] = ((long)yy_0_1_2);
yy_0_1[3] = ((long)yy_0_1_3);
yyval.attr[1] = ((long)yy_0_1);
yyval.attr[0] = yyvsp[-2].attr[0];
;}
    break;

  case 24:
#line 611 "gen.y"
    {
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yyv_H;
yy yy_1_1;
yy yyv_T;
yy yy_2_1;
yy_1_1 = (yy)(yyvsp[-1].attr[1]);
yy_2_1 = (yy)(yyvsp[0].attr[1]);
yyb = yyh;
yyh += 3; if (yyh > yyhx) yyExtend();
yyv_H = yy_1_1;
yyv_T = yy_2_1;
yy_0_1_1 = yyv_H;
yy_0_1_2 = yyv_T;
yy_0_1 = yyb + 0;
yy_0_1[0] = 1;
yy_0_1[1] = ((long)yy_0_1_1);
yy_0_1[2] = ((long)yy_0_1_2);
yyval.attr[1] = ((long)yy_0_1);
yyval.attr[0] = yyvsp[-1].attr[0];
;}
    break;

  case 25:
#line 638 "gen.y"
    {
yy yyb;
yy yy_0_1;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_0_1 = yyb + 0;
yy_0_1[0] = 2;
yyval.attr[1] = ((long)yy_0_1);
yyGetPos(&yyval.attr[0]);
;}
    break;

  case 26:
#line 652 "gen.y"
    {
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_M;
yy yy_1_1;
yy_1_1 = (yy)(yyvsp[0].attr[1]);
yyb = yyh;
yyh += 2; if (yyh > yyhx) yyExtend();
yyv_M = yy_1_1;
yy_0_1_1 = yyv_M;
yy_0_1 = yyb + 0;
yy_0_1[0] = 1;
yy_0_1[1] = ((long)yy_0_1_1);
yyval.attr[1] = ((long)yy_0_1);
yyval.attr[0] = yyvsp[0].attr[0];
;}
    break;

  case 27:
#line 673 "gen.y"
    {
yy yyb;
yy yy_0_1;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_0_1 = yyb + 0;
yy_0_1[0] = 2;
yyval.attr[1] = ((long)yy_0_1);
yyval.attr[0] = yyvsp[0].attr[0];
;}
    break;

  case 28:
#line 687 "gen.y"
    {
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_B;
yy yy_1_1;
yy_1_1 = (yy)(yyvsp[0].attr[1]);
yyb = yyh;
yyh += 2; if (yyh > yyhx) yyExtend();
yyv_B = yy_1_1;
yy_0_1_1 = yyv_B;
yy_0_1 = yyb + 0;
yy_0_1[0] = 3;
yy_0_1[1] = ((long)yy_0_1_1);
yyval.attr[1] = ((long)yy_0_1);
yyval.attr[0] = yyvsp[0].attr[0];
;}
    break;

  case 29:
#line 712 "gen.y"
    {
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yy_0_1_3;
yy yy_0_1_4;
yy yy_0_1_5;
yy yy_0_1_6;
yy yyv_P1;
yy yy_1_1;
yy yyv_Pos;
yy yy_2;
yy yyv_Exprs;
yy yy_3_1;
yy yy_4_1;
yy yyv_Rs;
yy yy_5_1;
yy yyv_P2;
yy yy_6_1;
yy yyv_Number;
yy yy_7_1;
yy_1_1 = (yy)(yyvsp[-4].attr[1]);
yy_2 = (yy)(yyvsp[-4].attr[0]);
yy_3_1 = (yy)(yyvsp[-3].attr[1]);
yy_4_1 = (yy)(yyvsp[-2].attr[1]);
yy_5_1 = (yy)(yyvsp[-1].attr[1]);
yy_6_1 = (yy)(yyvsp[0].attr[1]);
yyb = yyh;
yyh += 7; if (yyh > yyhx) yyExtend();
yyv_P1 = yy_1_1;
yyv_Pos = yy_2;
yyv_Exprs = yy_3_1;
yyv_Rs = yy_5_1;
yyv_P2 = yy_6_1;
UniqueNumber(&yy_7_1);
yyv_Number = yy_7_1;
yy_0_1_1 = yyv_Exprs;
yy_0_1_2 = yyv_Rs;
yy_0_1_3 = yyv_P1;
yy_0_1_4 = yyv_P2;
yy_0_1_5 = yyv_Number;
yy_0_1_6 = yyv_Pos;
yy_0_1 = yyb + 0;
yy_0_1[0] = 1;
yy_0_1[1] = ((long)yy_0_1_1);
yy_0_1[2] = ((long)yy_0_1_2);
yy_0_1[3] = ((long)yy_0_1_3);
yy_0_1[4] = ((long)yy_0_1_4);
yy_0_1[5] = ((long)yy_0_1_5);
yy_0_1[6] = ((long)yy_0_1_6);
yyval.attr[1] = ((long)yy_0_1);
yyval.attr[0] = yyvsp[-4].attr[0];
;}
    break;

  case 30:
#line 771 "gen.y"
    {
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yyv_H;
yy yy_1_1;
yy yyv_T;
yy yy_2_1;
yy_1_1 = (yy)(yyvsp[-1].attr[1]);
yy_2_1 = (yy)(yyvsp[0].attr[1]);
yyb = yyh;
yyh += 3; if (yyh > yyhx) yyExtend();
yyv_H = yy_1_1;
yyv_T = yy_2_1;
yy_0_1_1 = yyv_H;
yy_0_1_2 = yyv_T;
yy_0_1 = yyb + 0;
yy_0_1[0] = 1;
yy_0_1[1] = ((long)yy_0_1_1);
yy_0_1[2] = ((long)yy_0_1_2);
yyval.attr[1] = ((long)yy_0_1);
yyval.attr[0] = yyvsp[-1].attr[0];
;}
    break;

  case 31:
#line 799 "gen.y"
    {
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yyv_H;
yy yy_1_1;
yy_1_1 = (yy)(yyvsp[0].attr[1]);
yyb = yyh;
yyh += 4; if (yyh > yyhx) yyExtend();
yyv_H = yy_1_1;
yy_0_1_1 = yyv_H;
yy_0_1_2 = yyb + 3;
yy_0_1_2[0] = 2;
yy_0_1 = yyb + 0;
yy_0_1[0] = 1;
yy_0_1[1] = ((long)yy_0_1_1);
yy_0_1[2] = ((long)yy_0_1_2);
yyval.attr[1] = ((long)yy_0_1);
yyval.attr[0] = yyvsp[0].attr[0];
;}
    break;

  case 32:
#line 827 "gen.y"
    {
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yy_0_1_3;
yy yy_0_1_4;
yy yy_0_1_5;
yy yy_0_1_6;
yy yyv_P1;
yy yy_1_1;
yy yyv_Pos;
yy yy_2;
yy yyv_Ps;
yy yy_3_1;
yy yyv_P2;
yy yy_4_1;
yy yyv_Is;
yy yy_5_1;
yy yyv_Number;
yy yy_6_1;
yy_1_1 = (yy)(yyvsp[-3].attr[1]);
yy_2 = (yy)(yyvsp[-3].attr[0]);
yy_3_1 = (yy)(yyvsp[-2].attr[1]);
yy_4_1 = (yy)(yyvsp[-1].attr[1]);
yy_5_1 = (yy)(yyvsp[0].attr[1]);
yyb = yyh;
yyh += 7; if (yyh > yyhx) yyExtend();
yyv_P1 = yy_1_1;
yyv_Pos = yy_2;
yyv_Ps = yy_3_1;
yyv_P2 = yy_4_1;
yyv_Is = yy_5_1;
UniqueNumber(&yy_6_1);
yyv_Number = yy_6_1;
yy_0_1_1 = yyv_Ps;
yy_0_1_2 = yyv_Is;
yy_0_1_3 = yyv_P1;
yy_0_1_4 = yyv_P2;
yy_0_1_5 = yyv_Number;
yy_0_1_6 = yyv_Pos;
yy_0_1 = yyb + 0;
yy_0_1[0] = 1;
yy_0_1[1] = ((long)yy_0_1_1);
yy_0_1[2] = ((long)yy_0_1_2);
yy_0_1[3] = ((long)yy_0_1_3);
yy_0_1[4] = ((long)yy_0_1_4);
yy_0_1[5] = ((long)yy_0_1_5);
yy_0_1[6] = ((long)yy_0_1_6);
yyval.attr[1] = ((long)yy_0_1);
yyval.attr[0] = yyvsp[-3].attr[0];
;}
    break;

  case 33:
#line 885 "gen.y"
    {
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yyv_H;
yy yy_1_1;
yy yyv_T;
yy yy_3_1;
yy_1_1 = (yy)(yyvsp[-2].attr[1]);
yy_3_1 = (yy)(yyvsp[0].attr[1]);
yyb = yyh;
yyh += 3; if (yyh > yyhx) yyExtend();
yyv_H = yy_1_1;
yyv_T = yy_3_1;
yy_0_1_1 = yyv_H;
yy_0_1_2 = yyv_T;
yy_0_1 = yyb + 0;
yy_0_1[0] = 1;
yy_0_1[1] = ((long)yy_0_1_1);
yy_0_1[2] = ((long)yy_0_1_2);
yyval.attr[1] = ((long)yy_0_1);
yyval.attr[0] = yyvsp[-2].attr[0];
;}
    break;

  case 34:
#line 914 "gen.y"
    {
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yy_0_1_2_1;
yy yyv_P;
yy yy_1_1;
yy yyv_Pos;
yy yy_2_1;
yy_1_1 = (yy)(yyvsp[-1].attr[1]);
yy_2_1 = (yy)(yyvsp[0].attr[1]);
yyb = yyh;
yyh += 5; if (yyh > yyhx) yyExtend();
yyv_P = yy_1_1;
yyv_Pos = yy_2_1;
yy_0_1_1 = yyv_P;
yy_0_1_2_1 = yyv_Pos;
yy_0_1_2 = yyb + 3;
yy_0_1_2[0] = 2;
yy_0_1_2[1] = ((long)yy_0_1_2_1);
yy_0_1 = yyb + 0;
yy_0_1[0] = 1;
yy_0_1[1] = ((long)yy_0_1_1);
yy_0_1[2] = ((long)yy_0_1_2);
yyval.attr[1] = ((long)yy_0_1);
yyval.attr[0] = yyvsp[-1].attr[0];
;}
    break;

  case 35:
#line 946 "gen.y"
    {
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yy_0_1_3;
yy yyv_Id;
yy yy_1_1;
yy yyv_Pos;
yy yy_2;
yy yyv_Number;
yy yy_3_1;
yy_1_1 = (yy)(yyvsp[0].attr[1]);
yy_2 = (yy)(yyvsp[0].attr[0]);
yyb = yyh;
yyh += 4; if (yyh > yyhx) yyExtend();
yyv_Id = yy_1_1;
yyv_Pos = yy_2;
UniqueNumber(&yy_3_1);
yyv_Number = yy_3_1;
yy_0_1_1 = yyv_Id;
yy_0_1_2 = yyv_Number;
yy_0_1_3 = yyv_Pos;
yy_0_1 = yyb + 0;
yy_0_1[0] = 1;
yy_0_1[1] = ((long)yy_0_1_1);
yy_0_1[2] = ((long)yy_0_1_2);
yy_0_1[3] = ((long)yy_0_1_3);
yyval.attr[1] = ((long)yy_0_1);
yyval.attr[0] = yyvsp[0].attr[0];
;}
    break;

  case 36:
#line 981 "gen.y"
    {
yy yyb;
yy yy_0_1;
yy yyv_Pat;
yy yy_1_1;
yy_1_1 = (yy)(yyvsp[0].attr[1]);
yyv_Pat = yy_1_1;
yy_0_1 = yyv_Pat;
yyval.attr[1] = ((long)yy_0_1);
yyval.attr[0] = yyvsp[0].attr[0];
;}
    break;

  case 37:
#line 997 "gen.y"
    {
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yy_0_1_3;
yy yyv_Pattern;
yy yy_1_1;
yy yyv_Id;
yy yy_2_1;
yy yyv_Pos;
yy yy_3;
yy_1_1 = (yy)(yyvsp[-1].attr[1]);
yy_2_1 = (yy)(yyvsp[0].attr[1]);
yy_3 = (yy)(yyvsp[0].attr[0]);
yyb = yyh;
yyh += 4; if (yyh > yyhx) yyExtend();
yyv_Pattern = yy_1_1;
yyv_Id = yy_2_1;
yyv_Pos = yy_3;
yy_0_1_1 = yyv_Id;
yy_0_1_2 = yyv_Pattern;
yy_0_1_3 = yyv_Pos;
yy_0_1 = yyb + 0;
yy_0_1[0] = 3;
yy_0_1[1] = ((long)yy_0_1_1);
yy_0_1[2] = ((long)yy_0_1_2);
yy_0_1[3] = ((long)yy_0_1_3);
yyval.attr[1] = ((long)yy_0_1);
yyval.attr[0] = yyvsp[-1].attr[0];
;}
    break;

  case 38:
#line 1035 "gen.y"
    {
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yy_0_1_3;
yy yy_0_1_4;
yy yyv_Id;
yy yy_1_1;
yy yyv_Pos;
yy yy_2;
yy yyv_L;
yy yy_4_1;
yy yyv_Number;
yy yy_6_1;
yy_1_1 = (yy)(yyvsp[-3].attr[1]);
yy_2 = (yy)(yyvsp[-3].attr[0]);
yy_4_1 = (yy)(yyvsp[-1].attr[1]);
yyb = yyh;
yyh += 5; if (yyh > yyhx) yyExtend();
yyv_Id = yy_1_1;
yyv_Pos = yy_2;
yyv_L = yy_4_1;
UniqueNumber(&yy_6_1);
yyv_Number = yy_6_1;
yy_0_1_1 = yyv_Id;
yy_0_1_2 = yyv_L;
yy_0_1_3 = yyv_Number;
yy_0_1_4 = yyv_Pos;
yy_0_1 = yyb + 0;
yy_0_1[0] = 2;
yy_0_1[1] = ((long)yy_0_1_1);
yy_0_1[2] = ((long)yy_0_1_2);
yy_0_1[3] = ((long)yy_0_1_3);
yy_0_1[4] = ((long)yy_0_1_4);
yyval.attr[1] = ((long)yy_0_1);
yyval.attr[0] = yyvsp[-3].attr[0];
;}
    break;

  case 39:
#line 1079 "gen.y"
    {
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yy_0_1_2_1;
yy yy_0_1_3;
yy yy_0_1_4;
yy yyv_Id;
yy yy_1_1;
yy yyv_PosFunctor;
yy yy_2;
yy yyv_Pos;
yy yy_5;
yy yyv_Number;
yy yy_6_1;
yy_1_1 = (yy)(yyvsp[-2].attr[1]);
yy_2 = (yy)(yyvsp[-2].attr[0]);
yy_5 = (yy)(yyvsp[0].attr[0]);
yyb = yyh;
yyh += 7; if (yyh > yyhx) yyExtend();
yyv_Id = yy_1_1;
yyv_PosFunctor = yy_2;
yyv_Pos = yy_5;
UniqueNumber(&yy_6_1);
yyv_Number = yy_6_1;
yy_0_1_1 = yyv_Id;
yy_0_1_2_1 = yyv_Pos;
yy_0_1_2 = yyb + 5;
yy_0_1_2[0] = 2;
yy_0_1_2[1] = ((long)yy_0_1_2_1);
yy_0_1_3 = yyv_Number;
yy_0_1_4 = yyv_PosFunctor;
yy_0_1 = yyb + 0;
yy_0_1[0] = 2;
yy_0_1[1] = ((long)yy_0_1_1);
yy_0_1[2] = ((long)yy_0_1_2);
yy_0_1[3] = ((long)yy_0_1_3);
yy_0_1[4] = ((long)yy_0_1_4);
yyval.attr[1] = ((long)yy_0_1);
yyval.attr[0] = yyvsp[-2].attr[0];
;}
    break;

  case 40:
#line 1127 "gen.y"
    {
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_1_1;
yy yy_0_1_1_2;
yy yy_0_1_1_3;
yy yy_0_1_2;
yy yyv_I;
yy yy_1_1;
yy yyv_Pos;
yy yy_2;
yy yyv_T;
yy yy_4_1;
yy yyv_N;
yy yy_5_1;
yy_1_1 = (yy)(yyvsp[-2].attr[1]);
yy_2 = (yy)(yyvsp[-2].attr[0]);
yy_4_1 = (yy)(yyvsp[0].attr[1]);
yyb = yyh;
yyh += 7; if (yyh > yyhx) yyExtend();
yyv_I = yy_1_1;
yyv_Pos = yy_2;
yyv_T = yy_4_1;
UniqueNumber(&yy_5_1);
yyv_N = yy_5_1;
yy_0_1_1_1 = yyv_I;
yy_0_1_1_2 = yyv_N;
yy_0_1_1_3 = yyv_Pos;
yy_0_1_1 = yyb + 3;
yy_0_1_1[0] = 1;
yy_0_1_1[1] = ((long)yy_0_1_1_1);
yy_0_1_1[2] = ((long)yy_0_1_1_2);
yy_0_1_1[3] = ((long)yy_0_1_1_3);
yy_0_1_2 = yyv_T;
yy_0_1 = yyb + 0;
yy_0_1[0] = 1;
yy_0_1[1] = ((long)yy_0_1_1);
yy_0_1[2] = ((long)yy_0_1_2);
yyval.attr[1] = ((long)yy_0_1);
yyval.attr[0] = yyvsp[-2].attr[0];
;}
    break;

  case 41:
#line 1173 "gen.y"
    {
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_1_1;
yy yy_0_1_1_2;
yy yy_0_1_1_3;
yy yy_0_1_2;
yy yyv_I;
yy yy_1_1;
yy yyv_Pos;
yy yy_2;
yy yyv_N;
yy yy_3_1;
yy_1_1 = (yy)(yyvsp[0].attr[1]);
yy_2 = (yy)(yyvsp[0].attr[0]);
yyb = yyh;
yyh += 8; if (yyh > yyhx) yyExtend();
yyv_I = yy_1_1;
yyv_Pos = yy_2;
UniqueNumber(&yy_3_1);
yyv_N = yy_3_1;
yy_0_1_1_1 = yyv_I;
yy_0_1_1_2 = yyv_N;
yy_0_1_1_3 = yyv_Pos;
yy_0_1_1 = yyb + 3;
yy_0_1_1[0] = 1;
yy_0_1_1[1] = ((long)yy_0_1_1_1);
yy_0_1_1[2] = ((long)yy_0_1_1_2);
yy_0_1_1[3] = ((long)yy_0_1_1_3);
yy_0_1_2 = yyb + 7;
yy_0_1_2[0] = 2;
yy_0_1 = yyb + 0;
yy_0_1[0] = 1;
yy_0_1[1] = ((long)yy_0_1_1);
yy_0_1[2] = ((long)yy_0_1_2);
yyval.attr[1] = ((long)yy_0_1);
yyval.attr[0] = yyvsp[0].attr[0];
;}
    break;

  case 42:
#line 1215 "gen.y"
    {
yy yyb;
yy yy_0_1;
yy yyv_Pos;
yy yy_1;
yyGetPos(&yy_1);
yyv_Pos = yy_1;
yy_0_1 = yyv_Pos;
yyval.attr[1] = ((long)yy_0_1);
yyGetPos(&yyval.attr[0]);
;}
    break;

  case 43:
#line 1230 "gen.y"
    {
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_DECLLIST;
yy yy_1_1;
yy_1_1 = (yy)(yyvsp[0].attr[1]);
yyb = yyh;
yyh += 2; if (yyh > yyhx) yyExtend();
yyv_DECLLIST = yy_1_1;
yy_0_1_1 = yyv_DECLLIST;
yy_0_1 = yyb + 0;
yy_0_1[0] = 1;
yy_0_1[1] = ((long)yy_0_1_1);
yyval.attr[1] = ((long)yy_0_1);
yyval.attr[0] = yyvsp[0].attr[0];
;}
    break;

  case 44:
#line 1252 "gen.y"
    {
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yyv_H;
yy yy_1_1;
yy yyv_T;
yy yy_2_1;
yy_1_1 = (yy)(yyvsp[-1].attr[1]);
yy_2_1 = (yy)(yyvsp[0].attr[1]);
yyb = yyh;
yyh += 3; if (yyh > yyhx) yyExtend();
yyv_H = yy_1_1;
yyv_T = yy_2_1;
yy_0_1_1 = yyv_H;
yy_0_1_2 = yyv_T;
yy_0_1 = yyb + 0;
yy_0_1[0] = 1;
yy_0_1[1] = ((long)yy_0_1_1);
yy_0_1[2] = ((long)yy_0_1_2);
yyval.attr[1] = ((long)yy_0_1);
yyval.attr[0] = yyvsp[-1].attr[0];
;}
    break;

  case 45:
#line 1279 "gen.y"
    {
yy yyb;
yy yy_0_1;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_0_1 = yyb + 0;
yy_0_1[0] = 2;
yyval.attr[1] = ((long)yy_0_1);
yyGetPos(&yyval.attr[0]);
;}
    break;

  case 46:
#line 1293 "gen.y"
    {
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yy_0_1_3;
yy yy_0_1_4;
yy yyv_Def;
yy yy_1_1;
yy yyv_Pos;
yy yy_2;
yy_1_1 = (yy)(yyvsp[0].attr[1]);
yy_2 = (yy)(yyvsp[0].attr[0]);
yyb = yyh;
yyh += 5; if (yyh > yyhx) yyExtend();
yyv_Def = yy_1_1;
yyv_Pos = yy_2;
yy_0_1_1 = yyv_Def;
yy_0_1_2 = ((yy)4711);
yy_0_1_3 = ((yy)4711);
yy_0_1_4 = yyv_Pos;
yy_0_1 = yyb + 0;
yy_0_1[0] = 4;
yy_0_1[1] = ((long)yy_0_1_1);
yy_0_1[2] = ((long)yy_0_1_2);
yy_0_1[3] = ((long)yy_0_1_3);
yy_0_1[4] = ((long)yy_0_1_4);
yyval.attr[1] = ((long)yy_0_1);
yyval.attr[0] = yyvsp[0].attr[0];
;}
    break;

  case 47:
#line 1331 "gen.y"
    {
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yy_0_1_3;
yy yy_1_1;
yy yyv_Pos;
yy yy_2;
yy yyv_Id;
yy yy_3_1;
yy yy_4_1;
yy yyv_Functors;
yy yy_5_1;
yy yy_6_1;
yy_1_1 = (yy)(yyvsp[-4].attr[1]);
yy_2 = (yy)(yyvsp[-4].attr[0]);
yy_3_1 = (yy)(yyvsp[-3].attr[1]);
yy_4_1 = (yy)(yyvsp[-2].attr[1]);
yy_5_1 = (yy)(yyvsp[-1].attr[1]);
yy_6_1 = (yy)(yyvsp[0].attr[1]);
yyb = yyh;
yyh += 4; if (yyh > yyhx) yyExtend();
yyv_Pos = yy_2;
yyv_Id = yy_3_1;
yyv_Functors = yy_5_1;
yy_0_1_1 = yyv_Id;
yy_0_1_2 = yyv_Functors;
yy_0_1_3 = yyv_Pos;
yy_0_1 = yyb + 0;
yy_0_1[0] = 1;
yy_0_1[1] = ((long)yy_0_1_1);
yy_0_1[2] = ((long)yy_0_1_2);
yy_0_1[3] = ((long)yy_0_1_3);
yyval.attr[1] = ((long)yy_0_1);
yyval.attr[0] = yyvsp[-4].attr[0];
;}
    break;

  case 48:
#line 1373 "gen.y"
    {
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yyv_H;
yy yy_1_1;
yy yyv_T;
yy yy_2_1;
yy_1_1 = (yy)(yyvsp[-1].attr[1]);
yy_2_1 = (yy)(yyvsp[0].attr[1]);
yyb = yyh;
yyh += 3; if (yyh > yyhx) yyExtend();
yyv_H = yy_1_1;
yyv_T = yy_2_1;
yy_0_1_1 = yyv_H;
yy_0_1_2 = yyv_T;
yy_0_1 = yyb + 0;
yy_0_1[0] = 1;
yy_0_1[1] = ((long)yy_0_1_1);
yy_0_1[2] = ((long)yy_0_1_2);
yyval.attr[1] = ((long)yy_0_1);
yyval.attr[0] = yyvsp[-1].attr[0];
;}
    break;

  case 49:
#line 1400 "gen.y"
    {
yy yyb;
yy yy_0_1;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_0_1 = yyb + 0;
yy_0_1[0] = 2;
yyval.attr[1] = ((long)yy_0_1);
yyGetPos(&yyval.attr[0]);
;}
    break;

  case 50:
#line 1417 "gen.y"
    {
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yy_0_1_3;
yy yyv_Id;
yy yy_1_1;
yy yyv_Pos;
yy yy_3;
yy yyv_Args;
yy yy_4_1;
yy_1_1 = (yy)(yyvsp[-3].attr[1]);
yy_3 = (yy)(yyvsp[-2].attr[0]);
yy_4_1 = (yy)(yyvsp[-1].attr[1]);
yyb = yyh;
yyh += 4; if (yyh > yyhx) yyExtend();
yyv_Id = yy_1_1;
yyv_Pos = yy_3;
yyv_Args = yy_4_1;
yy_0_1_1 = yyv_Id;
yy_0_1_2 = yyv_Args;
yy_0_1_3 = yyv_Pos;
yy_0_1 = yyb + 0;
yy_0_1[0] = 1;
yy_0_1[1] = ((long)yy_0_1_1);
yy_0_1[2] = ((long)yy_0_1_2);
yy_0_1[3] = ((long)yy_0_1_3);
yyval.attr[1] = ((long)yy_0_1);
yyval.attr[0] = yyvsp[-3].attr[0];
;}
    break;

  case 51:
#line 1453 "gen.y"
    {
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yyv_H;
yy yy_1_1;
yy yyv_T;
yy yy_2_1;
yy_1_1 = (yy)(yyvsp[-1].attr[1]);
yy_2_1 = (yy)(yyvsp[0].attr[1]);
yyb = yyh;
yyh += 3; if (yyh > yyhx) yyExtend();
yyv_H = yy_1_1;
yyv_T = yy_2_1;
yy_0_1_1 = yyv_H;
yy_0_1_2 = yyv_T;
yy_0_1 = yyb + 0;
yy_0_1[0] = 1;
yy_0_1[1] = ((long)yy_0_1_1);
yy_0_1[2] = ((long)yy_0_1_2);
yyval.attr[1] = ((long)yy_0_1);
yyval.attr[0] = yyvsp[-1].attr[0];
;}
    break;

  case 52:
#line 1480 "gen.y"
    {
yy yyb;
yy yy_0_1;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_0_1 = yyb + 0;
yy_0_1[0] = 2;
yyval.attr[1] = ((long)yy_0_1);
yyGetPos(&yyval.attr[0]);
;}
    break;

  case 53:
#line 1495 "gen.y"
    {
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yy_0_1_3;
yy yyv_Type;
yy yy_1_1;
yy yyv_Selector;
yy yy_2_1;
yy yyv_Pos;
yy yy_3;
yy_1_1 = (yy)(yyvsp[-1].attr[1]);
yy_2_1 = (yy)(yyvsp[0].attr[1]);
yy_3 = (yy)(yyvsp[0].attr[0]);
yyb = yyh;
yyh += 4; if (yyh > yyhx) yyExtend();
yyv_Type = yy_1_1;
yyv_Selector = yy_2_1;
yyv_Pos = yy_3;
yy_0_1_1 = yyv_Type;
yy_0_1_2 = yyv_Selector;
yy_0_1_3 = yyv_Pos;
yy_0_1 = yyb + 0;
yy_0_1[0] = 1;
yy_0_1[1] = ((long)yy_0_1_1);
yy_0_1[2] = ((long)yy_0_1_2);
yy_0_1[3] = ((long)yy_0_1_3);
yyval.attr[1] = ((long)yy_0_1);
yyval.attr[0] = yyvsp[-1].attr[0];
;}
    break;

  case 54:
#line 1530 "gen.y"
    {
yy yyb;
yyval.attr[0] = yyvsp[0].attr[0];
;}
    break;

  case 55:
#line 1538 "gen.y"
    {
yy yyb;
yy yy_1_1;
yy_1_1 = (yy)(yyvsp[0].attr[1]);
yyval.attr[0] = yyvsp[0].attr[0];
;}
    break;

  case 56:
#line 1548 "gen.y"
    {
yy yyb;
yyval.attr[0] = yyvsp[0].attr[0];
;}
    break;

  case 57:
#line 1556 "gen.y"
    {
yy yyb;
yyval.attr[0] = yyvsp[0].attr[0];
;}
    break;

  case 58:
#line 1564 "gen.y"
    {
yy yyb;
yyval.attr[0] = yyvsp[0].attr[0];
;}
    break;

  case 59:
#line 1572 "gen.y"
    {
yy yyb;
yyval.attr[0] = yyvsp[0].attr[0];
;}
    break;

  case 60:
#line 1580 "gen.y"
    {
yy yyb;
yy yy_1_1;
yy_1_1 = (yy)(yyvsp[0].attr[1]);
yyval.attr[0] = yyvsp[0].attr[0];
;}
    break;

  case 61:
#line 1590 "gen.y"
    {
yy yyb;
yy yy_1_1;
yy_1_1 = (yy)(yyvsp[0].attr[1]);
yyval.attr[0] = yyvsp[0].attr[0];
;}
    break;

  case 62:
#line 1600 "gen.y"
    {
yy yyb;
yyval.attr[0] = yyvsp[0].attr[0];
;}
    break;

  case 63:
#line 1609 "gen.y"
    {
yy yyb;
yyval.attr[0] = yyvsp[-1].attr[0];
;}
    break;

  case 64:
#line 1617 "gen.y"
    {
yy yyb;
yyval.attr[0] = yyvsp[0].attr[0];
;}
    break;


    }

/* Line 999 of yacc.c.  */
#line 2649 "gen.tab.c"

  yyvsp -= yylen;
  yyssp -= yylen;


  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if YYERROR_VERBOSE
      yyn = yypact[yystate];

      if (YYPACT_NINF < yyn && yyn < YYLAST)
	{
	  YYSIZE_T yysize = 0;
	  int yytype = YYTRANSLATE (yychar);
	  const char* yyprefix;
	  char *yymsg;
	  int yyx;

	  /* Start YYX at -YYN if negative to avoid negative indexes in
	     YYCHECK.  */
	  int yyxbegin = yyn < 0 ? -yyn : 0;

	  /* Stay within bounds of both yycheck and yytname.  */
	  int yychecklim = YYLAST - yyn;
	  int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
	  int yycount = 0;

	  yyprefix = ", expecting ";
	  for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	    if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	      {
		yysize += yystrlen (yyprefix) + yystrlen (yytname [yyx]);
		yycount += 1;
		if (yycount == 5)
		  {
		    yysize = 0;
		    break;
		  }
	      }
	  yysize += (sizeof ("syntax error, unexpected ")
		     + yystrlen (yytname[yytype]));
	  yymsg = (char *) YYSTACK_ALLOC (yysize);
	  if (yymsg != 0)
	    {
	      char *yyp = yystpcpy (yymsg, "syntax error, unexpected ");
	      yyp = yystpcpy (yyp, yytname[yytype]);

	      if (yycount < 5)
		{
		  yyprefix = ", expecting ";
		  for (yyx = yyxbegin; yyx < yyxend; ++yyx)
		    if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
		      {
			yyp = yystpcpy (yyp, yyprefix);
			yyp = yystpcpy (yyp, yytname[yyx]);
			yyprefix = " or ";
		      }
		}
	      yyerror (yymsg);
	      YYSTACK_FREE (yymsg);
	    }
	  else
	    yyerror ("syntax error; also virtual memory exhausted");
	}
      else
#endif /* YYERROR_VERBOSE */
	yyerror ("syntax error");
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      /* Return failure if at end of input.  */
      if (yychar == YYEOF)
        {
	  /* Pop the error token.  */
          YYPOPSTACK;
	  /* Pop the rest of the stack.  */
	  while (yyss < yyssp)
	    {
	      YYDSYMPRINTF ("Error: popping", yystos[*yyssp], yyvsp, yylsp);
	      yydestruct (yystos[*yyssp], yyvsp);
	      YYPOPSTACK;
	    }
	  YYABORT;
        }

      YYDSYMPRINTF ("Error: discarding", yytoken, &yylval, &yylloc);
      yydestruct (yytoken, &yylval);
      yychar = YYEMPTY;

    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*----------------------------------------------------.
| yyerrlab1 -- error raised explicitly by an action.  |
`----------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;

      YYDSYMPRINTF ("Error: popping", yystos[*yyssp], yyvsp, yylsp);
      yydestruct (yystos[yystate], yyvsp);
      yyvsp--;
      yystate = *--yyssp;

      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  YYDPRINTF ((stderr, "Shifting error token, "));

  *++yyvsp = yylval;


  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#ifndef yyoverflow
/*----------------------------------------------.
| yyoverflowlab -- parser overflow comes here.  |
`----------------------------------------------*/
yyoverflowlab:
  yyerror ("parser stack overflow");
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  return yyresult;
}




