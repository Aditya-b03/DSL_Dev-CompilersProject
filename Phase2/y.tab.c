/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

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
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.3"

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
     NUMBER = 258,
     STRING_LITERAL = 259,
     BOOL_LITERAL = 260,
     CLASS = 261,
     RETURN = 262,
     INT = 263,
     STRING = 264,
     BOOL = 265,
     FLOAT = 266,
     VOID = 267,
     LIST = 268,
     DOCUMENT = 269,
     TEAM = 270,
     MEMBERS = 271,
     TASK = 272,
     EVENT = 273,
     MEETING = 274,
     CALENDAR = 275,
     ADD = 276,
     SUB = 277,
     MUL = 278,
     DIV = 279,
     MOD = 280,
     UNARY_OP = 281,
     ASSIGN_OP = 282,
     REL_OP = 283,
     EQUALS = 284,
     AND = 285,
     OR = 286,
     NOT = 287,
     INTERSECTION_OP = 288,
     UNION_OP = 289,
     FOR = 290,
     WHILE = 291,
     IF = 292,
     ELSE = 293,
     IDENTIFIER = 294,
     SELF = 295,
     LSB = 296,
     RSB = 297,
     LCB = 298,
     RCB = 299,
     LPB = 300,
     RPB = 301,
     SEMICOLON = 302,
     COMMA = 303,
     DOT = 304,
     COLON = 305,
     ARROW = 306,
     STRUCT = 307,
     INCLUDE = 308,
     TYPEDEF = 309
   };
#endif
/* Tokens.  */
#define NUMBER 258
#define STRING_LITERAL 259
#define BOOL_LITERAL 260
#define CLASS 261
#define RETURN 262
#define INT 263
#define STRING 264
#define BOOL 265
#define FLOAT 266
#define VOID 267
#define LIST 268
#define DOCUMENT 269
#define TEAM 270
#define MEMBERS 271
#define TASK 272
#define EVENT 273
#define MEETING 274
#define CALENDAR 275
#define ADD 276
#define SUB 277
#define MUL 278
#define DIV 279
#define MOD 280
#define UNARY_OP 281
#define ASSIGN_OP 282
#define REL_OP 283
#define EQUALS 284
#define AND 285
#define OR 286
#define NOT 287
#define INTERSECTION_OP 288
#define UNION_OP 289
#define FOR 290
#define WHILE 291
#define IF 292
#define ELSE 293
#define IDENTIFIER 294
#define SELF 295
#define LSB 296
#define RSB 297
#define LCB 298
#define RCB 299
#define LPB 300
#define RPB 301
#define SEMICOLON 302
#define COMMA 303
#define DOT 304
#define COLON 305
#define ARROW 306
#define STRUCT 307
#define INCLUDE 308
#define TYPEDEF 309




/* Copy the first part of user declarations.  */
#line 1 "yacc.y"
  
    #include <stdio.h>
    #include <string.h>
    #include <stdlib.h>
    int yylex(void);
  
  void yyerror(char *);
    extern char* yytext;
    extern FILE *yyout;
    extern FILE *yyin;
    extern int yylineno;
    FILE *tf;
    int for_loop = 0;       //nested loop
    int nested_call = 0;    // nested call
    int return_flag = 0;

    


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

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 233 "y.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
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
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  42
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   873

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  55
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  43
/* YYNRULES -- Number of rules.  */
#define YYNRULES  136
/* YYNRULES -- Number of states.  */
#define YYNSTATES  265

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   309

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
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
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,     8,    11,    13,    16,    18,    22,
      26,    29,    34,    39,    43,    46,    49,    52,    55,    56,
      58,    61,    68,    71,    72,    77,    83,    89,    95,   101,
     103,   105,   107,   109,   111,   113,   115,   117,   119,   121,
     123,   127,   129,   130,   133,   136,   139,   144,   147,   150,
     153,   156,   157,   160,   161,   163,   165,   167,   169,   171,
     173,   175,   177,   180,   182,   184,   186,   188,   192,   196,
     200,   204,   209,   214,   218,   220,   224,   229,   233,   237,
     241,   247,   249,   252,   256,   260,   262,   270,   276,   286,
     294,   306,   316,   326,   334,   345,   354,   365,   374,   382,
     388,   391,   395,   398,   403,   407,   409,   415,   419,   420,
     424,   430,   436,   442,   448,   450,   454,   458,   462,   466,
     468,   470,   472,   474,   476,   478,   483,   486,   488,   490,
     492,   494,   496,   498,   500,   502,   504
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      56,     0,    -1,    57,    60,    -1,    60,    -1,    57,    58,
      -1,    58,    -1,    53,     4,    -1,    39,    -1,    39,    51,
      59,    -1,    39,    49,    59,    -1,    39,    81,    -1,    39,
      81,    51,    59,    -1,    39,    81,    49,    59,    -1,    40,
      49,    59,    -1,    77,    60,    -1,    64,    60,    -1,    61,
      60,    -1,    70,    60,    -1,    -1,    62,    -1,    54,    62,
      -1,    52,    39,    43,    63,    44,    47,    -1,    63,    77,
      -1,    -1,    65,    43,    73,    44,    -1,    66,    39,    45,
      68,    46,    -1,    67,    39,    45,    68,    46,    -1,    39,
      39,    45,    68,    46,    -1,    12,    39,    45,    68,    46,
      -1,    14,    -1,    15,    -1,    16,    -1,    17,    -1,    18,
      -1,    19,    -1,    20,    -1,     8,    -1,     9,    -1,    10,
      -1,    11,    -1,    68,    48,    69,    -1,    69,    -1,    -1,
      66,    39,    -1,    67,    39,    -1,    39,    39,    -1,    71,
      43,    72,    44,    -1,     6,    39,    -1,    64,    72,    -1,
      77,    72,    -1,    83,    72,    -1,    -1,    73,    74,    -1,
      -1,    77,    -1,    85,    -1,    86,    -1,    87,    -1,    88,
      -1,    89,    -1,    83,    -1,    47,    -1,    59,    26,    -1,
      59,    -1,    77,    -1,    89,    -1,    83,    -1,    66,    82,
      47,    -1,    67,    82,    47,    -1,    39,    82,    47,    -1,
      78,    82,    47,    -1,    13,    81,    50,    67,    -1,    13,
      81,    50,    66,    -1,    43,    80,    44,    -1,    92,    -1,
      80,    48,    92,    -1,    81,    41,    92,    42,    -1,    41,
      92,    42,    -1,    82,    48,    39,    -1,    39,    29,    92,
      -1,    82,    48,    39,    29,    92,    -1,    39,    -1,    84,
      47,    -1,    59,    27,    92,    -1,    59,    29,    92,    -1,
      75,    -1,    37,    45,    92,    46,    43,    73,    44,    -1,
      37,    45,    92,    46,    76,    -1,    37,    45,    92,    46,
      43,    73,    44,    38,    85,    -1,    37,    45,    92,    46,
      76,    38,    85,    -1,    37,    45,    92,    46,    43,    73,
      44,    38,    43,    73,    44,    -1,    37,    45,    92,    46,
      76,    38,    43,    73,    44,    -1,    37,    45,    92,    46,
      43,    73,    44,    38,    76,    -1,    37,    45,    92,    46,
      76,    38,    76,    -1,    35,    45,    77,    92,    47,    84,
      46,    43,    73,    44,    -1,    35,    45,    77,    92,    47,
      84,    46,    76,    -1,    35,    45,    83,    92,    47,    84,
      46,    43,    73,    44,    -1,    35,    45,    83,    92,    47,
      84,    46,    76,    -1,    36,    45,    92,    46,    43,    73,
      44,    -1,    36,    45,    92,    46,    76,    -1,     7,    47,
      -1,     7,    92,    47,    -1,    90,    47,    -1,    59,    45,
      91,    46,    -1,    91,    48,    92,    -1,    92,    -1,    91,
      48,    59,    29,    92,    -1,    59,    29,    92,    -1,    -1,
      45,    92,    46,    -1,    45,    92,    46,    95,    92,    -1,
      45,    92,    46,    28,    92,    -1,    45,    92,    46,    97,
      92,    -1,    45,    92,    46,    96,    92,    -1,    93,    -1,
      94,    95,    92,    -1,    94,    28,    92,    -1,    94,    97,
      92,    -1,    94,    96,    92,    -1,    94,    -1,    75,    -1,
       3,    -1,     4,    -1,     5,    -1,    90,    -1,    32,    45,
      92,    46,    -1,    32,    59,    -1,    79,    -1,    30,    -1,
      31,    -1,    33,    -1,    34,    -1,    21,    -1,    22,    -1,
      23,    -1,    24,    -1,    25,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    39,    39,    40,    43,    44,    47,    50,    51,    52,
      53,    54,    55,    56,    59,    60,    61,    62,    63,    66,
      67,    70,    73,    74,    77,    80,    81,    82,    83,    86,
      87,    88,    89,    90,    91,    92,    96,    97,    98,    99,
     103,   104,   105,   108,   109,   110,   113,   116,   119,   120,
     121,   122,   125,   126,   129,   130,   131,   132,   133,   134,
     135,   136,   139,   140,   143,   144,   145,   148,   149,   150,
     151,   154,   155,   158,   161,   162,   166,   167,   170,   171,
     172,   173,   178,   181,   182,   183,   186,   187,   188,   189,
     190,   191,   192,   193,   196,   197,   198,   199,   202,   203,
     206,   207,   210,   213,   216,   217,   218,   219,   220,   223,
     224,   225,   226,   227,   228,   231,   232,   233,   234,   235,
     238,   239,   240,   241,   242,   243,   244,   245,   248,   249,
     252,   253,   256,   257,   258,   259,   260
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NUMBER", "STRING_LITERAL",
  "BOOL_LITERAL", "CLASS", "RETURN", "INT", "STRING", "BOOL", "FLOAT",
  "VOID", "LIST", "DOCUMENT", "TEAM", "MEMBERS", "TASK", "EVENT",
  "MEETING", "CALENDAR", "ADD", "SUB", "MUL", "DIV", "MOD", "UNARY_OP",
  "ASSIGN_OP", "REL_OP", "EQUALS", "AND", "OR", "NOT", "INTERSECTION_OP",
  "UNION_OP", "FOR", "WHILE", "IF", "ELSE", "IDENTIFIER", "SELF", "LSB",
  "RSB", "LCB", "RCB", "LPB", "RPB", "SEMICOLON", "COMMA", "DOT", "COLON",
  "ARROW", "STRUCT", "INCLUDE", "TYPEDEF", "$accept", "start",
  "include_stmts", "include_stmt", "identifier", "code", "struct_code",
  "struct_def", "struct_body", "function", "function_dec", "data_type_new",
  "data_type_pr", "function_params", "function_param", "class",
  "class_dec", "class_stmt", "statements", "statement", "unary_stmt",
  "single_stmt", "decl_stmt", "list", "list_literal", "list_terminal",
  "dim", "id_list", "expr_stmt", "expr_stmt_without_semicolon", "if_stmt",
  "for_stmt", "while_stmt", "return_stmt", "call_stmt", "call",
  "call_args", "nested_expr", "expr", "expr_terminal", "conj", "set_op",
  "arith_op", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    55,    56,    56,    57,    57,    58,    59,    59,    59,
      59,    59,    59,    59,    60,    60,    60,    60,    60,    61,
      61,    62,    63,    63,    64,    65,    65,    65,    65,    66,
      66,    66,    66,    66,    66,    66,    67,    67,    67,    67,
      68,    68,    68,    69,    69,    69,    70,    71,    72,    72,
      72,    72,    73,    73,    74,    74,    74,    74,    74,    74,
      74,    74,    75,    75,    76,    76,    76,    77,    77,    77,
      77,    78,    78,    79,    80,    80,    81,    81,    82,    82,
      82,    82,    83,    84,    84,    84,    85,    85,    85,    85,
      85,    85,    85,    85,    86,    86,    86,    86,    87,    87,
      88,    88,    89,    90,    91,    91,    91,    91,    91,    92,
      92,    92,    92,    92,    92,    93,    93,    93,    93,    93,
      94,    94,    94,    94,    94,    94,    94,    94,    95,    95,
      96,    96,    97,    97,    97,    97,    97
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     2,     1,     2,     1,     3,     3,
       2,     4,     4,     3,     2,     2,     2,     2,     0,     1,
       2,     6,     2,     0,     4,     5,     5,     5,     5,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     1,     0,     2,     2,     2,     4,     2,     2,     2,
       2,     0,     2,     0,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     1,     1,     1,     1,     3,     3,     3,
       3,     4,     4,     3,     1,     3,     4,     3,     3,     3,
       5,     1,     2,     3,     3,     1,     7,     5,     9,     7,
      11,     9,     9,     7,    10,     8,    10,     8,     7,     5,
       2,     3,     2,     4,     3,     1,     5,     3,     0,     3,
       5,     5,     5,     5,     1,     3,     3,     3,     3,     1,
       1,     1,     1,     1,     1,     4,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
      18,     0,    36,    37,    38,    39,     0,     0,    29,    30,
      31,    32,    33,    34,    35,     0,     0,     0,     0,     0,
      18,     5,     3,    18,    19,    18,     0,     0,     0,    18,
       0,    18,     0,    47,     0,     0,     0,    81,     0,     0,
       6,    20,     1,     4,     2,    16,    15,    53,    81,     0,
      81,     0,    17,    51,    14,    81,     0,    42,   121,   122,
     123,     0,     7,     0,     0,     0,    63,   120,   127,   124,
       0,   114,   119,     0,     0,     0,    42,    69,     0,    23,
       0,    42,    67,    42,    68,     7,    63,    51,     0,    85,
      51,    51,     0,    70,     0,     0,     0,     0,    41,     0,
     126,     0,     0,    10,     0,     0,    74,     0,    62,   108,
      77,   132,   133,   134,   135,   136,     0,   128,   129,   130,
     131,     0,     0,     0,     0,    72,    71,    79,     0,    78,
       0,     0,     0,     0,     0,     7,    24,    61,    63,     0,
       0,    52,    54,    60,    55,    56,    57,    58,    59,     0,
       0,     0,     0,     0,    48,    46,    49,    50,    82,    45,
      43,    44,    28,     0,     0,     9,     8,     0,     0,    13,
      73,     0,   109,    63,     0,   105,   116,   115,   118,   117,
      76,    27,     0,     0,     0,    22,   100,     0,     0,     0,
       0,   102,    25,    26,    83,    84,    40,   125,    12,    11,
      75,     0,     0,     0,     0,     0,   103,     0,    80,    21,
     101,     0,     0,     0,     0,   111,   110,   113,   112,   107,
      63,   104,     0,     0,     0,     0,     0,     0,     0,    53,
      99,    64,    66,    65,    53,    87,   106,     0,     0,     0,
       0,     0,     0,     0,    98,    86,    53,    93,    89,    53,
      95,    53,    97,     0,     0,     0,     0,    53,    92,    88,
      91,    94,    96,     0,    90
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    19,    20,    21,    66,    22,    23,    24,   130,    25,
      26,   139,   140,    97,    98,    29,    30,    88,    80,   141,
      67,   230,   142,    32,    68,   105,   103,    38,   143,    92,
     144,   145,   146,   147,   148,    69,   174,    70,    71,    72,
     121,   122,   123
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -238
static const yytype_int16 yypact[] =
{
     417,    -3,  -238,  -238,  -238,  -238,    25,    34,  -238,  -238,
    -238,  -238,  -238,  -238,  -238,    40,    42,   111,    74,   132,
     417,  -238,  -238,   433,  -238,   433,    93,   101,   109,   433,
     120,   433,   113,  -238,   124,   102,   -28,   -24,   108,   133,
    -238,  -238,  -238,  -238,  -238,  -238,  -238,  -238,    20,   125,
      33,   152,  -238,   792,  -238,   156,   172,   819,  -238,  -238,
    -238,    83,     9,   153,   102,   102,   -19,  -238,  -238,  -238,
     139,  -238,   137,   102,   853,   102,   819,  -238,   148,  -238,
     346,   819,  -238,   819,  -238,    60,    98,   792,   163,  -238,
     792,   792,   167,  -238,   177,   183,   194,    47,  -238,   102,
    -238,   188,   188,    61,   188,   -29,  -238,   189,  -238,   102,
    -238,  -238,  -238,  -238,  -238,  -238,   102,  -238,  -238,  -238,
    -238,   102,   102,   102,   197,  -238,  -238,  -238,    87,   205,
     273,    29,   191,   195,   206,    80,  -238,  -238,    44,   113,
     113,  -238,  -238,  -238,  -238,  -238,  -238,  -238,  -238,   203,
     103,   118,   102,   102,  -238,  -238,  -238,  -238,  -238,  -238,
    -238,  -238,  -238,   819,   211,  -238,  -238,   188,   188,  -238,
    -238,   102,   826,   -17,   138,  -238,  -238,  -238,  -238,  -238,
    -238,  -238,   102,   113,   217,  -238,  -238,   218,   805,   102,
     102,  -238,  -238,  -238,  -238,  -238,  -238,  -238,  -238,  -238,
    -238,   102,   102,   102,   102,   102,  -238,   102,  -238,  -238,
    -238,   102,   102,   221,   224,  -238,  -238,  -238,  -238,  -238,
      -2,  -238,   228,   229,   694,   707,   102,   188,   188,  -238,
    -238,  -238,  -238,  -238,  -238,   214,  -238,   231,   233,   481,
     495,   645,   743,   756,  -238,   247,  -238,  -238,  -238,  -238,
    -238,  -238,  -238,   658,   536,   550,   591,  -238,  -238,  -238,
    -238,  -238,  -238,   605,  -238
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -238,  -238,  -238,   274,   -50,   192,  -238,   277,  -238,   -43,
    -238,    63,   249,     1,   135,  -238,  -238,   -73,    67,  -238,
     -45,  -145,     0,  -238,  -238,  -238,   292,   -26,    13,     4,
    -237,  -238,  -238,  -238,  -186,     5,  -238,   198,  -238,  -238,
     128,   131,   136
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint16 yytable[] =
{
      31,    49,    51,    86,   248,    75,    56,   108,    89,   108,
      87,   100,   205,    73,   154,   170,   259,   156,   157,   171,
      31,    76,    74,    31,   108,    31,   109,   226,   109,    31,
     138,    31,    58,    59,    60,    89,    33,    86,   233,   233,
      86,    86,    89,   109,    87,    89,    89,    87,    87,    75,
      35,   165,   166,    90,   169,   233,   233,   233,   101,   173,
     102,    61,    75,    27,    34,    81,    91,   233,    62,    63,
     108,   152,    64,   153,    65,    35,   186,   128,    83,    37,
     235,    39,   150,    27,   151,   149,    27,    90,    27,   109,
      90,    90,    27,   162,    27,   163,   247,   250,   252,    37,
      91,    35,    73,    91,    91,    58,    59,    60,   258,   101,
     167,   102,   168,    49,    51,    40,    27,   198,   199,    55,
      95,    35,    62,    63,   108,   152,    16,   153,    99,   101,
     185,   102,    42,   181,    61,   163,    47,   125,    86,    95,
      48,    62,    63,    89,    95,    64,    95,    65,    50,   192,
      27,   163,    55,    27,    27,    77,    78,   220,   111,   112,
     113,   114,   115,    53,   193,   116,   163,   117,   118,    57,
     119,   120,    82,    78,   138,   138,    79,    86,    86,    89,
      89,   110,    89,    89,   206,    75,   207,   129,   211,   138,
     138,   138,   138,   138,    89,    89,    89,    89,    89,    84,
      78,   212,   104,   138,   138,   138,   138,   155,    89,    89,
      89,    89,    44,   138,   158,    45,   159,    46,    89,    93,
      78,    52,   160,    54,   231,   231,    95,    62,    63,   149,
     149,   237,   238,   161,   182,   172,   188,   232,   232,   180,
     189,   231,   231,   231,   149,   149,   149,   149,   149,    28,
     191,   190,   241,   231,   232,   232,   232,   197,   149,   149,
     149,   149,   106,   107,   209,   210,   232,   224,   149,    28,
     225,   124,    28,   127,    28,   227,   228,   242,    28,   243,
      28,     2,     3,     4,     5,   253,     7,     8,     9,    10,
      11,    12,    13,    14,    43,    41,   239,   164,   196,    36,
     202,   240,    28,   203,     0,     0,    96,   175,   204,     0,
       0,     0,   183,   254,   176,     0,   255,   184,   256,   177,
     178,   179,     0,   126,   263,    96,     0,     0,     0,   187,
      96,     0,    96,     0,     0,     0,    28,     0,     0,    28,
      28,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     194,   195,     0,   131,     2,     3,     4,     5,     0,     7,
       8,     9,    10,    11,    12,    13,    14,     0,     0,   200,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     208,   132,   133,   134,     0,   135,    63,   213,   214,     0,
     136,     0,     0,   137,     0,     0,     0,     0,     0,   215,
     216,   217,   218,   219,     0,   221,     0,     0,     0,   222,
     223,     0,    96,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     1,   236,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,     0,     1,
       0,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,     0,     0,    15,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    16,
      17,    18,    15,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    16,     0,    18,   131,     2,
       3,     4,     5,     0,     7,     8,     9,    10,    11,    12,
      13,    14,   131,     2,     3,     4,     5,     0,     7,     8,
       9,    10,    11,    12,    13,    14,   132,   133,   134,     0,
     135,    63,     0,     0,     0,   244,     0,     0,   137,     0,
     132,   133,   134,     0,   135,    63,     0,     0,     0,   245,
       0,     0,   137,   131,     2,     3,     4,     5,     0,     7,
       8,     9,    10,    11,    12,    13,    14,   131,     2,     3,
       4,     5,     0,     7,     8,     9,    10,    11,    12,    13,
      14,   132,   133,   134,     0,   135,    63,     0,     0,     0,
     260,     0,     0,   137,     0,   132,   133,   134,     0,   135,
      63,     0,     0,     0,   261,     0,     0,   137,   131,     2,
       3,     4,     5,     0,     7,     8,     9,    10,    11,    12,
      13,    14,   131,     2,     3,     4,     5,     0,     7,     8,
       9,    10,    11,    12,    13,    14,   132,   133,   134,     0,
     135,    63,     0,     0,     0,   262,     0,     0,   137,     0,
     132,   133,   134,     0,   135,    63,     0,     0,     0,   264,
       0,     0,   137,     2,     3,     4,     5,     0,     7,     8,
       9,    10,    11,    12,    13,    14,     2,     3,     4,     5,
       0,     7,     8,     9,    10,    11,    12,    13,    14,     0,
       0,     0,   134,     0,   135,    63,     0,     0,   246,     0,
       0,     0,     0,     0,     0,   134,     0,   135,    63,     0,
       0,   257,     2,     3,     4,     5,     0,     7,     8,     9,
      10,    11,    12,    13,    14,     2,     3,     4,     5,     0,
       7,     8,     9,    10,    11,    12,    13,    14,     0,     0,
       0,     0,     0,   135,    63,     0,     0,   229,     0,     0,
       0,     0,     0,     0,     0,     0,   135,    63,     0,     0,
     234,     2,     3,     4,     5,     0,     7,     8,     9,    10,
      11,    12,    13,    14,     2,     3,     4,     5,     0,     7,
       8,     9,    10,    11,    12,    13,    14,     0,     0,     0,
       0,     0,   135,    63,     0,     0,   249,     0,     0,     0,
       0,     0,     0,     0,     0,   135,    63,     0,     0,   251,
       2,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,     2,     3,     4,     5,     0,     7,     8,
       9,    10,    11,    12,    13,    14,     0,     2,     3,     4,
       5,    85,    63,     8,     9,    10,    11,    12,    13,    14,
       0,     0,     0,     0,   135,    63,     0,   111,   112,   113,
     114,   115,     0,     0,   201,     0,   117,   118,    94,   119,
     120,     2,     3,     4,     5,     0,     0,     8,     9,    10,
      11,    12,    13,    14
};

static const yytype_int16 yycheck[] =
{
       0,    27,    28,    53,   241,    29,    32,    26,    53,    26,
      53,    61,    29,    41,    87,    44,   253,    90,    91,    48,
      20,    45,    50,    23,    26,    25,    45,    29,    45,    29,
      80,    31,     3,     4,     5,    80,    39,    87,   224,   225,
      90,    91,    87,    45,    87,    90,    91,    90,    91,    29,
      41,   101,   102,    53,   104,   241,   242,   243,    49,   109,
      51,    32,    29,     0,    39,    45,    53,   253,    39,    40,
      26,    27,    43,    29,    45,    41,    47,    76,    45,    39,
     225,    39,    81,    20,    83,    80,    23,    87,    25,    45,
      90,    91,    29,    46,    31,    48,   241,   242,   243,    39,
      87,    41,    41,    90,    91,     3,     4,     5,   253,    49,
      49,    51,    51,   139,   140,     4,    53,   167,   168,    39,
      57,    41,    39,    40,    26,    27,    52,    29,    45,    49,
     130,    51,     0,    46,    32,    48,    43,    74,   188,    76,
      39,    39,    40,   188,    81,    43,    83,    45,    39,    46,
      87,    48,    39,    90,    91,    47,    48,   207,    21,    22,
      23,    24,    25,    43,    46,    28,    48,    30,    31,    45,
      33,    34,    47,    48,   224,   225,    43,   227,   228,   224,
     225,    42,   227,   228,    46,    29,    48,    39,   188,   239,
     240,   241,   242,   243,   239,   240,   241,   242,   243,    47,
      48,   188,    49,   253,   254,   255,   256,    44,   253,   254,
     255,   256,    20,   263,    47,    23,    39,    25,   263,    47,
      48,    29,    39,    31,   224,   225,   163,    39,    40,   224,
     225,   227,   228,    39,    29,    46,    45,   224,   225,    42,
      45,   241,   242,   243,   239,   240,   241,   242,   243,     0,
      47,    45,    38,   253,   241,   242,   243,    46,   253,   254,
     255,   256,    64,    65,    47,    47,   253,    46,   263,    20,
      46,    73,    23,    75,    25,    47,    47,    46,    29,    46,
      31,     8,     9,    10,    11,    38,    13,    14,    15,    16,
      17,    18,    19,    20,    20,    18,   229,    99,   163,     7,
     172,   234,    53,   172,    -1,    -1,    57,   109,   172,    -1,
      -1,    -1,    39,   246,   116,    -1,   249,    44,   251,   121,
     122,   123,    -1,    74,   257,    76,    -1,    -1,    -1,   131,
      81,    -1,    83,    -1,    -1,    -1,    87,    -1,    -1,    90,
      91,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     152,   153,    -1,     7,     8,     9,    10,    11,    -1,    13,
      14,    15,    16,    17,    18,    19,    20,    -1,    -1,   171,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     182,    35,    36,    37,    -1,    39,    40,   189,   190,    -1,
      44,    -1,    -1,    47,    -1,    -1,    -1,    -1,    -1,   201,
     202,   203,   204,   205,    -1,   207,    -1,    -1,    -1,   211,
     212,    -1,   163,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     6,   226,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    -1,     6,
      -1,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    -1,    -1,    39,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,
      53,    54,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    52,    -1,    54,     7,     8,
       9,    10,    11,    -1,    13,    14,    15,    16,    17,    18,
      19,    20,     7,     8,     9,    10,    11,    -1,    13,    14,
      15,    16,    17,    18,    19,    20,    35,    36,    37,    -1,
      39,    40,    -1,    -1,    -1,    44,    -1,    -1,    47,    -1,
      35,    36,    37,    -1,    39,    40,    -1,    -1,    -1,    44,
      -1,    -1,    47,     7,     8,     9,    10,    11,    -1,    13,
      14,    15,    16,    17,    18,    19,    20,     7,     8,     9,
      10,    11,    -1,    13,    14,    15,    16,    17,    18,    19,
      20,    35,    36,    37,    -1,    39,    40,    -1,    -1,    -1,
      44,    -1,    -1,    47,    -1,    35,    36,    37,    -1,    39,
      40,    -1,    -1,    -1,    44,    -1,    -1,    47,     7,     8,
       9,    10,    11,    -1,    13,    14,    15,    16,    17,    18,
      19,    20,     7,     8,     9,    10,    11,    -1,    13,    14,
      15,    16,    17,    18,    19,    20,    35,    36,    37,    -1,
      39,    40,    -1,    -1,    -1,    44,    -1,    -1,    47,    -1,
      35,    36,    37,    -1,    39,    40,    -1,    -1,    -1,    44,
      -1,    -1,    47,     8,     9,    10,    11,    -1,    13,    14,
      15,    16,    17,    18,    19,    20,     8,     9,    10,    11,
      -1,    13,    14,    15,    16,    17,    18,    19,    20,    -1,
      -1,    -1,    37,    -1,    39,    40,    -1,    -1,    43,    -1,
      -1,    -1,    -1,    -1,    -1,    37,    -1,    39,    40,    -1,
      -1,    43,     8,     9,    10,    11,    -1,    13,    14,    15,
      16,    17,    18,    19,    20,     8,     9,    10,    11,    -1,
      13,    14,    15,    16,    17,    18,    19,    20,    -1,    -1,
      -1,    -1,    -1,    39,    40,    -1,    -1,    43,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    39,    40,    -1,    -1,
      43,     8,     9,    10,    11,    -1,    13,    14,    15,    16,
      17,    18,    19,    20,     8,     9,    10,    11,    -1,    13,
      14,    15,    16,    17,    18,    19,    20,    -1,    -1,    -1,
      -1,    -1,    39,    40,    -1,    -1,    43,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    39,    40,    -1,    -1,    43,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,     8,     9,    10,    11,    -1,    13,    14,
      15,    16,    17,    18,    19,    20,    -1,     8,     9,    10,
      11,    39,    40,    14,    15,    16,    17,    18,    19,    20,
      -1,    -1,    -1,    -1,    39,    40,    -1,    21,    22,    23,
      24,    25,    -1,    -1,    28,    -1,    30,    31,    39,    33,
      34,     8,     9,    10,    11,    -1,    -1,    14,    15,    16,
      17,    18,    19,    20
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     6,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    39,    52,    53,    54,    56,
      57,    58,    60,    61,    62,    64,    65,    66,    67,    70,
      71,    77,    78,    39,    39,    41,    81,    39,    82,    39,
       4,    62,     0,    58,    60,    60,    60,    43,    39,    82,
      39,    82,    60,    43,    60,    39,    82,    45,     3,     4,
       5,    32,    39,    40,    43,    45,    59,    75,    79,    90,
      92,    93,    94,    41,    50,    29,    45,    47,    48,    43,
      73,    45,    47,    45,    47,    39,    59,    64,    72,    75,
      77,    83,    84,    47,    39,    66,    67,    68,    69,    45,
      59,    49,    51,    81,    49,    80,    92,    92,    26,    45,
      42,    21,    22,    23,    24,    25,    28,    30,    31,    33,
      34,    95,    96,    97,    92,    66,    67,    92,    68,    39,
      63,     7,    35,    36,    37,    39,    44,    47,    59,    66,
      67,    74,    77,    83,    85,    86,    87,    88,    89,    90,
      68,    68,    27,    29,    72,    44,    72,    72,    47,    39,
      39,    39,    46,    48,    92,    59,    59,    49,    51,    59,
      44,    48,    46,    59,    91,    92,    92,    92,    92,    92,
      42,    46,    29,    39,    44,    77,    47,    92,    45,    45,
      45,    47,    46,    46,    92,    92,    69,    46,    59,    59,
      92,    28,    95,    96,    97,    29,    46,    48,    92,    47,
      47,    77,    83,    92,    92,    92,    92,    92,    92,    92,
      59,    92,    92,    92,    46,    46,    29,    47,    47,    43,
      76,    77,    83,    89,    43,    76,    92,    84,    84,    73,
      73,    38,    46,    46,    44,    44,    43,    76,    85,    43,
      76,    43,    76,    38,    73,    73,    73,    43,    76,    85,
      44,    44,    44,    73,    44
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


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
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
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
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
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
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

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
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
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

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
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
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
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

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

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
      
/* Line 1267 of yacc.c.  */
#line 1799 "y.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
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
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
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


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

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
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 263 "yacc.y"


// error handling
void yyerror(char *s) {
    //fprintf(yyout," : invalid statement");
    fprintf(stderr, "%s: at line: %d ", s, yylineno);
    fprintf(stderr,"Unexpected Token: %s\n",yytext);
}

int main(int argc, char* argv[]) {
    
    //check for input file aurgument
    
    if(argc < 2){
        printf("Missing Argument:./lex_source_program < \"test case path\"");
        return -1;
    }
    else{
        // InFile and Outfile path and Name Handling
        yyin = fopen(argv[1],"r");
        if(!yyin){
            printf("Error: Input File not found");
            return -1;
        }
        int len = strlen(argv[1]);
        int i = 0;
        int filestart=0;
        while(argv[1][i] != '\0'){
            if(argv[1][i] == '/'){
                filestart = i+1;
            }
            i++;
        }

        // get the file Name in suffix
        char *suffix = (char *)malloc(100*sizeof(char));
        i = filestart;
        while(argv[1][i] != '.'){
            suffix[i-filestart] = argv[1][i];
            i++;
        }

        // append suffix to outfile and C_outfile name
        char *C_outfile = (char *)malloc(100*sizeof(char));
        sprintf(C_outfile,"../output/%s.cpp",suffix);
        

        // open the respective files
        yyout = fopen(C_outfile, "w+");
    }
    fprintf(yyout,"#include <iostream>\n");
    fprintf(yyout,"#include <string>\n");
    fprintf(yyout,"#include <vector>\n");
    fprintf(yyout,"#include \"teamScribe.h\"\n");
    yyparse();
    return 0;
}
