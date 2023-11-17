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
     DECIMAL = 261,
     CLASS = 262,
     RETURN = 263,
     INT = 264,
     STRING = 265,
     BOOL = 266,
     FLOAT = 267,
     VOID = 268,
     LIST = 269,
     DOCUMENT = 270,
     TEAM = 271,
     MEMBERS = 272,
     TASK = 273,
     EVENT = 274,
     MEETING = 275,
     CALENDAR = 276,
     ADD = 277,
     SUB = 278,
     MUL = 279,
     DIV = 280,
     MOD = 281,
     UNARY_OP = 282,
     ASSIGN_OP = 283,
     REL_OP = 284,
     EQUALS = 285,
     AND = 286,
     OR = 287,
     NOT = 288,
     INTERSECTION_OP = 289,
     UNION_OP = 290,
     FOR = 291,
     WHILE = 292,
     IF = 293,
     ELSE = 294,
     IDENTIFIER = 295,
     SELF = 296,
     LSB = 297,
     RSB = 298,
     LCB = 299,
     RCB = 300,
     LPB = 301,
     RPB = 302,
     SEMICOLON = 303,
     COMMA = 304,
     DOT = 305,
     COLON = 306,
     ARROW = 307,
     INCLUDE = 308,
     TYPEDEF = 309
   };
#endif
/* Tokens.  */
#define NUMBER 258
#define STRING_LITERAL 259
#define BOOL_LITERAL 260
#define DECIMAL 261
#define CLASS 262
#define RETURN 263
#define INT 264
#define STRING 265
#define BOOL 266
#define FLOAT 267
#define VOID 268
#define LIST 269
#define DOCUMENT 270
#define TEAM 271
#define MEMBERS 272
#define TASK 273
#define EVENT 274
#define MEETING 275
#define CALENDAR 276
#define ADD 277
#define SUB 278
#define MUL 279
#define DIV 280
#define MOD 281
#define UNARY_OP 282
#define ASSIGN_OP 283
#define REL_OP 284
#define EQUALS 285
#define AND 286
#define OR 287
#define NOT 288
#define INTERSECTION_OP 289
#define UNION_OP 290
#define FOR 291
#define WHILE 292
#define IF 293
#define ELSE 294
#define IDENTIFIER 295
#define SELF 296
#define LSB 297
#define RSB 298
#define LCB 299
#define RCB 300
#define LPB 301
#define RPB 302
#define SEMICOLON 303
#define COMMA 304
#define DOT 305
#define COLON 306
#define ARROW 307
#define INCLUDE 308
#define TYPEDEF 309




/* Copy the first part of user declarations.  */
#line 1 "yacc.y"
 
    #include <stdio.h>
    #include <stdlib.h>
    #include <stdbool.h>
    #include "yacc_module.h"


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
    extern FILE *tf;

    struct symtab *global_table;
    struct functab *function_table;
    struct symtab *local_table;
    struct classtab *class_table;
    struct symtab *members;
    struct functab *methods;
    struct symtab *params;

    int scope;
    bool rflag;
    int return_type;



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
typedef union YYSTYPE
#line 35 "yacc.y"
{
    struct id{
        char* name;
        int type;
        char *class_name;
    } id;
    struct slist *namelist;
    int type;
    int op_type;
    struct list{
        char* class_name;
        int type;
        int dim;
    } list;
    int assignop;
    struct functions{
        int type;
        int dim;
        char* name;
        struct symtab *params;
        struct symtab *local_table;
        int num_params;
    } functions;
    struct stmt{
        int type;
        int scope;
    } stmt;
    struct class_id{
        int type;
        int dim;
        struct slist *namelist;
    } class_id;
    struct idrec *param;
    struct exprs{
        int type;
        int dim;
    } exprs;
}
/* Line 193 of yacc.c.  */
#line 277 "yacc.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 290 "yacc.tab.c"

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
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1018

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  55
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  58
/* YYNRULES -- Number of rules.  */
#define YYNRULES  174
/* YYNRULES -- Number of states.  */
#define YYNSTATES  342

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
       0,     0,     3,     4,     8,     9,    12,    15,    17,    20,
      23,    26,    29,    30,    31,    32,    39,    45,    51,    57,
      63,    69,    73,    75,    76,    79,    82,    85,    88,    93,
      96,    99,   102,   103,   104,   105,   112,   118,   124,   130,
     136,   142,   146,   150,   154,   158,   159,   165,   168,   169,
     171,   173,   175,   177,   179,   181,   183,   185,   190,   195,
     200,   205,   210,   214,   216,   219,   221,   223,   225,   230,
     235,   240,   245,   249,   253,   257,   261,   265,   269,   275,
     277,   280,   284,   288,   292,   296,   298,   302,   308,   314,
     320,   326,   328,   332,   336,   340,   344,   346,   348,   350,
     352,   354,   356,   358,   363,   366,   369,   371,   373,   375,
     380,   383,   390,   395,   404,   411,   418,   423,   428,   429,
     437,   442,   448,   454,   455,   461,   464,   469,   472,   477,
     482,   486,   488,   489,   492,   496,   501,   506,   511,   515,
     517,   521,   526,   530,   532,   536,   539,   541,   544,   548,
     552,   557,   562,   568,   572,   577,   579,   581,   583,   585,
     587,   589,   591,   593,   595,   597,   599,   601,   603,   605,
     607,   609,   611,   613,   615
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      56,     0,    -1,    -1,    57,    59,    61,    -1,    -1,    58,
      61,    -1,    59,    60,    -1,    60,    -1,    53,     4,    -1,
      82,    61,    -1,    62,    61,    -1,    68,    61,    -1,    -1,
      -1,    -1,    65,    63,    44,    64,    76,    45,    -1,   111,
      40,    46,    66,    47,    -1,   112,    40,    46,    66,    47,
      -1,    40,    40,    46,    66,    47,    -1,    13,    40,    46,
      66,    47,    -1,   101,    40,    46,    66,    47,    -1,    66,
      49,    67,    -1,    67,    -1,    -1,   111,    40,    -1,   112,
      40,    -1,    40,    40,    -1,   101,    40,    -1,    69,    44,
      70,    45,    -1,     7,    40,    -1,    71,    70,    -1,    75,
      70,    -1,    -1,    -1,    -1,    74,    72,    44,    73,    76,
      45,    -1,   111,    40,    46,    66,    47,    -1,   112,    40,
      46,    66,    47,    -1,    40,    40,    46,    66,    47,    -1,
      13,    40,    46,    66,    47,    -1,   101,    40,    46,    66,
      47,    -1,   111,    83,    48,    -1,   112,    83,    48,    -1,
      40,    83,    48,    -1,   101,    83,    48,    -1,    -1,    76,
      44,    77,    76,    45,    -1,    76,    78,    -1,    -1,    82,
      -1,    89,    -1,    91,    -1,    94,    -1,   100,    -1,    97,
      -1,    84,    -1,    48,    -1,   106,    52,   106,    48,    -1,
     106,    52,   107,    48,    -1,   107,    52,   106,    48,    -1,
     107,    52,   107,    48,    -1,    54,    79,    40,    48,    -1,
      79,    49,    40,    -1,    40,    -1,   106,    27,    -1,    82,
      -1,    97,    -1,    84,    -1,   106,    52,   106,    48,    -1,
     106,    52,   107,    48,    -1,   107,    52,   106,    48,    -1,
     107,    52,   107,    48,    -1,   111,    83,    48,    -1,   112,
      83,    48,    -1,    40,    83,    48,    -1,   101,    83,    48,
      -1,    83,    49,    40,    -1,    40,    30,    86,    -1,    83,
      49,    40,    30,    86,    -1,    40,    -1,    85,    48,    -1,
     106,    28,    86,    -1,   107,    28,    86,    -1,   106,    30,
      86,    -1,   107,    30,    86,    -1,    80,    -1,    46,    86,
      47,    -1,    46,    86,    47,   108,    86,    -1,    46,    86,
      47,    29,    86,    -1,    46,    86,    47,   110,    86,    -1,
      46,    86,    47,   109,    86,    -1,    87,    -1,    88,   108,
      86,    -1,    88,    29,    86,    -1,    88,   110,    86,    -1,
      88,   109,    86,    -1,    88,    -1,    80,    -1,     3,    -1,
       6,    -1,     4,    -1,     5,    -1,    98,    -1,    33,    46,
      86,    47,    -1,    33,   106,    -1,    33,   107,    -1,   106,
      -1,   107,    -1,   102,    -1,    90,    44,    76,    45,    -1,
      90,    81,    -1,    90,    44,    76,    45,    39,    89,    -1,
      90,    81,    39,    89,    -1,    90,    44,    76,    45,    39,
      44,    76,    45,    -1,    90,    81,    39,    44,    76,    45,
      -1,    90,    44,    76,    45,    39,    81,    -1,    90,    81,
      39,    81,    -1,    38,    46,    86,    47,    -1,    -1,    93,
      85,    47,    44,    92,    76,    45,    -1,    93,    85,    47,
      81,    -1,    36,    46,    82,    86,    48,    -1,    36,    46,
      84,    86,    48,    -1,    -1,    96,    44,    95,    76,    45,
      -1,    96,    81,    -1,    37,    46,    86,    47,    -1,    98,
      48,    -1,    40,    46,    99,    47,    -1,   107,    46,    99,
      47,    -1,    99,    49,    86,    -1,    86,    -1,    -1,     8,
      48,    -1,     8,    86,    48,    -1,    14,   104,    51,   112,
      -1,    14,   104,    51,   111,    -1,    14,   104,    51,    40,
      -1,    44,   103,    45,    -1,    86,    -1,   103,    49,    86,
      -1,    42,    86,    43,   104,    -1,    42,    86,    43,    -1,
     105,    -1,   105,    42,    43,    -1,    42,    43,    -1,    40,
      -1,    40,   104,    -1,    40,    50,    40,    -1,    40,    50,
     107,    -1,    40,    50,    40,   104,    -1,    40,   104,    50,
      40,    -1,    40,   104,    50,    40,   104,    -1,    41,    50,
      40,    -1,    41,    50,    40,   104,    -1,    31,    -1,    32,
      -1,    34,    -1,    35,    -1,    22,    -1,    23,    -1,    24,
      -1,    25,    -1,    26,    -1,    15,    -1,    16,    -1,    17,
      -1,    18,    -1,    19,    -1,    20,    -1,    21,    -1,     9,
      -1,    10,    -1,    11,    -1,    12,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   107,   107,   107,   128,   128,   151,   152,   156,   160,
     161,   162,   163,   168,   173,   168,   195,   214,   234,   258,
     278,   302,   312,   317,   324,   335,   346,   363,   378,   397,
     406,   407,   408,   411,   416,   411,   438,   459,   480,   506,
     528,   552,   572,   594,   621,   646,   646,   647,   648,   652,
     653,   654,   655,   656,   657,   658,   659,   660,   661,   662,
     663,   664,   668,   669,   674,   684,   685,   686,   687,   688,
     689,   690,   695,   719,   743,   772,   799,   803,   808,   812,
     820,   824,   829,   834,   846,   858,   862,   866,   874,   878,
     886,   894,   901,   909,   918,   926,   935,   942,   946,   950,
     954,   958,   962,   966,   974,   982,   990,   994,  1003,  1011,
    1012,  1013,  1014,  1015,  1016,  1017,  1018,  1022,  1033,  1033,
    1034,  1038,  1044,  1053,  1053,  1054,  1058,  1067,  1071,  1084,
    1106,  1113,  1120,  1126,  1135,  1148,  1153,  1158,  1171,  1178,
    1187,  1199,  1206,  1213,  1218,  1221,  1226,  1239,  1255,  1260,
    1269,  1274,  1279,  1284,  1298,  1316,  1317,  1321,  1322,  1326,
    1327,  1328,  1329,  1330,  1334,  1335,  1336,  1337,  1338,  1339,
    1340,  1344,  1345,  1346,  1347
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NUMBER", "STRING_LITERAL",
  "BOOL_LITERAL", "DECIMAL", "CLASS", "RETURN", "INT", "STRING", "BOOL",
  "FLOAT", "VOID", "LIST", "DOCUMENT", "TEAM", "MEMBERS", "TASK", "EVENT",
  "MEETING", "CALENDAR", "ADD", "SUB", "MUL", "DIV", "MOD", "UNARY_OP",
  "ASSIGN_OP", "REL_OP", "EQUALS", "AND", "OR", "NOT", "INTERSECTION_OP",
  "UNION_OP", "FOR", "WHILE", "IF", "ELSE", "IDENTIFIER", "SELF", "LSB",
  "RSB", "LCB", "RCB", "LPB", "RPB", "SEMICOLON", "COMMA", "DOT", "COLON",
  "ARROW", "INCLUDE", "TYPEDEF", "$accept", "start", "@1", "@2",
  "include_stmts", "include_stmt", "code", "function", "@3", "@4",
  "function_dec", "function_params", "function_param", "class",
  "class_dec", "class_stmt", "class_function", "@5", "@6",
  "class_function_dec", "class_decl_stmt", "statements", "@7", "statement",
  "ids", "unary_stmt", "single_stmt", "decl_stmt", "id_list", "expr_stmt",
  "expr_stmt_without_semicolon", "nested_expr", "expr", "expr_terminal",
  "if_stmt", "if_expr", "for_stmt", "@8", "for_exp", "while_stmt", "@9",
  "while_exp", "call_stmt", "call", "call_args", "return_stmt", "list",
  "list_literal", "list_terminal", "dim", "empty_dim", "identifier",
  "class_identifier", "conj", "set_op", "arith_op", "data_type_new",
  "data_type_pr", 0
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
       0,    55,    57,    56,    58,    56,    59,    59,    60,    61,
      61,    61,    61,    63,    64,    62,    65,    65,    65,    65,
      65,    66,    66,    66,    67,    67,    67,    67,    68,    69,
      70,    70,    70,    72,    73,    71,    74,    74,    74,    74,
      74,    75,    75,    75,    75,    77,    76,    76,    76,    78,
      78,    78,    78,    78,    78,    78,    78,    78,    78,    78,
      78,    78,    79,    79,    80,    81,    81,    81,    81,    81,
      81,    81,    82,    82,    82,    82,    83,    83,    83,    83,
      84,    85,    85,    85,    85,    85,    86,    86,    86,    86,
      86,    86,    87,    87,    87,    87,    87,    88,    88,    88,
      88,    88,    88,    88,    88,    88,    88,    88,    88,    89,
      89,    89,    89,    89,    89,    89,    89,    90,    92,    91,
      91,    93,    93,    95,    94,    94,    96,    97,    98,    98,
      99,    99,    99,   100,   100,   101,   101,   101,   102,   103,
     103,   104,   104,   104,   105,   105,   106,   106,   107,   107,
     107,   107,   107,   107,   107,   108,   108,   109,   109,   110,
     110,   110,   110,   110,   111,   111,   111,   111,   111,   111,
     111,   112,   112,   112,   112
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     3,     0,     2,     2,     1,     2,     2,
       2,     2,     0,     0,     0,     6,     5,     5,     5,     5,
       5,     3,     1,     0,     2,     2,     2,     2,     4,     2,
       2,     2,     0,     0,     0,     6,     5,     5,     5,     5,
       5,     3,     3,     3,     3,     0,     5,     2,     0,     1,
       1,     1,     1,     1,     1,     1,     1,     4,     4,     4,
       4,     4,     3,     1,     2,     1,     1,     1,     4,     4,
       4,     4,     3,     3,     3,     3,     3,     3,     5,     1,
       2,     3,     3,     3,     3,     1,     3,     5,     5,     5,
       5,     1,     3,     3,     3,     3,     1,     1,     1,     1,
       1,     1,     1,     4,     2,     2,     1,     1,     1,     4,
       2,     6,     4,     8,     6,     6,     4,     4,     0,     7,
       4,     5,     5,     0,     5,     2,     4,     2,     4,     4,
       3,     1,     0,     2,     3,     4,     4,     4,     3,     1,
       3,     4,     3,     1,     3,     2,     1,     2,     3,     3,
       4,     4,     5,     3,     4,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,     0,    12,     1,     0,    12,     7,     0,   171,
     172,   173,   174,     0,     0,   164,   165,   166,   167,   168,
     169,   170,     0,     5,    12,    13,    12,     0,    12,     0,
       0,     0,     8,     6,     3,    29,     0,     0,     0,   143,
      79,     0,    10,     0,    11,    32,     9,    79,     0,    79,
       0,    79,     0,    23,    98,   100,   101,    99,     0,   146,
       0,   145,     0,     0,    97,     0,    91,    96,   102,   108,
     106,   107,     0,     0,     0,    23,    74,     0,    14,     0,
       0,     0,    32,    33,    32,     0,     0,     0,    23,    75,
      23,    72,    23,    73,     0,     0,    22,     0,     0,     0,
     146,     0,   104,   105,   132,     0,   147,     0,   139,     0,
       0,   142,   159,   160,   161,   162,   163,     0,   155,   156,
     157,   158,     0,     0,     0,    64,   132,   137,   136,   135,
     144,    77,     0,    76,    48,     0,    79,     0,    28,    30,
       0,    31,    79,     0,    79,     0,    79,     0,     0,     0,
       0,    26,    19,     0,    27,    24,    25,     0,   131,     0,
     148,   149,     0,   153,   138,     0,    86,   141,    93,    92,
      95,    94,     0,    18,     0,     0,    23,    23,    43,    34,
      23,    44,    23,    41,    23,    42,    20,    16,    17,    21,
     103,   128,     0,   150,   151,   154,   140,     0,     0,     0,
       0,   129,    78,     0,     0,     0,     0,   146,    45,    15,
      56,     0,    47,    85,    49,    55,     0,    50,     0,    51,
       0,    52,     0,    54,     0,    53,     0,     0,     0,     0,
       0,     0,     0,    48,     0,     0,     0,   130,   152,    88,
      87,    90,    89,   133,     0,     0,     0,     0,    79,    48,
      63,     0,    80,    48,   110,    65,    67,    66,     0,     0,
       0,     0,     0,   123,   125,   127,     0,     0,     0,     0,
       0,     0,    39,    38,     0,    40,    36,    37,   134,   146,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    48,    81,    83,     0,     0,    82,    84,     0,
       0,    35,     0,     0,   126,   117,    46,    61,    62,   109,
      48,   116,   112,     0,     0,     0,     0,   118,   120,     0,
      57,    58,    59,    60,   121,   122,     0,     0,    68,    69,
      70,    71,    48,   124,    48,   115,   111,   114,     0,     0,
     119,   113
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     3,     6,     7,    23,    24,    43,   134,
      25,    95,    96,    26,    27,    81,    82,   140,   233,    83,
      84,   175,   249,   212,   251,    64,   254,   214,    41,   215,
     216,   158,    66,    67,   217,   218,   219,   332,   220,   221,
     292,   222,   223,    68,   159,   225,   226,    69,   109,   106,
      39,    70,    71,   122,   123,   124,   229,   230
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -284
static const yytype_int16 yypact[] =
{
     -47,    56,   -44,   399,  -284,    23,   781,  -284,   -23,  -284,
    -284,  -284,  -284,    41,    49,  -284,  -284,  -284,  -284,  -284,
    -284,  -284,    60,  -284,   399,  -284,   399,    69,   399,    85,
      89,    95,  -284,  -284,  -284,  -284,   112,   390,   103,   157,
     -15,   128,  -284,   141,  -284,   949,  -284,    19,   132,    24,
     143,    27,   209,   976,  -284,  -284,  -284,  -284,    21,    73,
     160,  -284,   800,   800,  -284,   170,  -284,   214,  -284,  -284,
     191,   177,   963,   183,   800,   976,  -284,   195,  -284,   201,
     212,   216,   949,  -284,   949,   228,   240,   253,   976,  -284,
     976,  -284,   976,  -284,   271,    92,  -284,   272,   276,   277,
     -18,   800,  -284,  -284,   800,   232,   204,   279,  -284,    44,
     251,    49,  -284,  -284,  -284,  -284,  -284,   800,  -284,  -284,
    -284,  -284,   800,   800,   800,  -284,   800,  -284,  -284,  -284,
    -284,  -284,    93,   278,  -284,   280,    29,   235,  -284,  -284,
     281,  -284,    30,   238,    34,   256,    52,   258,    96,   101,
     108,  -284,  -284,   976,  -284,  -284,  -284,   284,  -284,   115,
     -18,  -284,   292,    49,  -284,   800,   983,  -284,  -284,  -284,
    -284,  -284,   120,  -284,   800,   448,   976,   976,  -284,  -284,
     976,  -284,   976,  -284,   976,  -284,  -284,  -284,  -284,  -284,
    -284,  -284,   800,   204,    49,  -284,  -284,   800,   800,   800,
     800,  -284,  -284,   324,   287,   289,   290,   -28,  -284,  -284,
    -284,   297,  -284,  -284,  -284,  -284,   293,  -284,   851,  -284,
     269,  -284,   887,  -284,   296,  -284,   302,   -17,   -26,   302,
     302,   121,   126,  -284,   155,   156,   175,  -284,  -284,  -284,
    -284,  -284,  -284,  -284,   298,   936,   800,   800,   315,  -284,
    -284,    47,  -284,  -284,   285,  -284,  -284,  -284,    17,    22,
     301,   100,   119,  -284,  -284,  -284,   800,   800,   269,   800,
     800,   269,  -284,  -284,   489,  -284,  -284,  -284,  -284,    72,
     800,   800,   304,   306,   530,   307,   309,   571,   798,   269,
     269,   900,  -284,  -284,  -284,   311,   313,  -284,  -284,   314,
     319,  -284,   323,   325,  -284,  -284,  -284,  -284,  -284,   335,
    -284,  -284,  -284,   327,   329,   331,   332,  -284,  -284,   612,
    -284,  -284,  -284,  -284,  -284,  -284,   838,   653,  -284,  -284,
    -284,  -284,  -284,  -284,  -284,  -284,  -284,  -284,   694,   735,
    -284,  -284
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -284,  -284,  -284,  -284,  -284,   348,   110,  -284,  -284,  -284,
    -284,     2,   210,  -284,  -284,   169,  -284,  -284,  -284,  -284,
    -284,   -33,  -284,  -284,  -284,  -167,  -189,    -3,    -1,  -182,
     161,     9,  -284,  -284,  -283,  -284,  -284,  -284,  -284,  -284,
    -284,  -284,  -180,   116,   257,  -284,    13,  -284,  -284,    -7,
    -284,   -24,   -57,   219,   221,   222,   268,   294
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -3
static const yytype_int16 yytable[] =
{
      28,   103,   269,    28,   270,   312,    -2,    38,   213,     5,
     125,   266,   248,   267,    37,    74,    29,    35,   104,    29,
     126,    28,   105,    28,    37,    28,   271,    32,    48,    50,
      52,    75,   105,   264,   102,   268,   256,    29,   257,    29,
     256,    29,   257,   336,   125,   266,    65,   267,   161,    74,
     269,   213,   270,   213,    74,   213,     4,    74,    85,    74,
      74,   100,    60,   281,    74,    88,    97,   101,   126,   289,
      90,   108,   110,    92,   290,   177,   180,   132,   213,   137,
     182,    36,    74,   131,   143,   145,   147,   285,    97,   164,
     148,    37,   149,   165,   150,    85,   286,    85,   184,   311,
      40,    97,   318,    97,   167,    97,   256,   213,   257,   256,
     157,   257,   248,    45,    37,    37,    34,   213,   228,   104,
     213,   213,   105,   105,   213,    47,   168,   125,   266,    49,
     267,   169,   170,   171,    42,    51,    44,   335,    46,   152,
     173,   153,   153,   186,   256,   153,   257,   269,   187,   270,
     153,   227,   213,   193,    72,   188,   195,   153,    53,   213,
     213,   259,   191,   262,   192,   259,    97,   201,   272,   192,
     153,   213,   213,   273,   196,   153,    76,    77,   231,   232,
      89,    77,   234,   202,   235,    78,   236,   238,   262,    97,
      97,    91,    77,    97,   258,    97,   261,    97,   258,    73,
     274,   237,   275,   276,   153,   153,   239,   240,   241,   242,
     107,   296,   244,   111,   300,   255,   284,   228,   125,   255,
     287,   261,   277,   126,   153,    48,   130,   228,    50,    52,
     228,   259,   314,   316,   259,   133,   112,   113,   114,   115,
     116,   135,   280,   117,   295,   118,   119,   299,   120,   121,
     227,   139,   136,   141,   162,   282,   283,    93,    77,   319,
     227,   138,   228,   227,   258,   313,   315,   258,   142,   259,
     228,    30,   160,    60,    30,   293,   294,   327,   297,   298,
     144,   228,   228,   178,    77,   255,   181,    77,   255,   302,
     303,   224,    30,   146,    30,   227,    30,    31,   166,   338,
      31,   339,   258,   227,   183,    77,   185,    77,   174,   100,
      60,   151,   154,    86,   227,   227,   155,   156,    31,   163,
      31,    98,    31,   255,   288,   179,   176,    54,    55,    56,
      57,   190,   194,   245,   224,   246,   247,   250,   224,    87,
     128,   252,   248,    98,   265,    74,   278,    99,   291,   308,
      86,   304,    86,   305,    33,   307,    98,    58,    98,   320,
      98,   321,   322,   189,    59,    60,   129,   323,    62,    99,
      63,   324,   243,   325,   326,   328,    87,   329,    87,   330,
     331,   260,    99,   172,    99,   198,    99,   199,   200,     0,
     224,     0,     0,    54,    55,    56,    57,     0,     0,     0,
     224,     0,     0,   224,   224,     0,     8,   224,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    98,     0,    58,     0,     0,     0,     0,     0,     0,
      59,    60,     0,    61,    62,   224,    63,     0,     0,    22,
       0,     0,   224,   224,    98,    98,     0,    99,    98,     0,
      98,     0,    98,     0,   224,   224,   203,     9,    10,    11,
      12,     0,    14,    15,    16,    17,    18,    19,    20,    21,
      99,    99,     0,     0,    99,     0,    99,     0,    99,     0,
       0,     0,     0,     0,   204,   205,   206,     0,   207,    60,
       0,     0,   208,   209,     0,     0,   210,   203,     9,    10,
      11,    12,   211,    14,    15,    16,    17,    18,    19,    20,
      21,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   204,   205,   206,     0,   207,
      60,     0,     0,   208,   301,     0,     0,   210,   203,     9,
      10,    11,    12,   211,    14,    15,    16,    17,    18,    19,
      20,    21,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   204,   205,   206,     0,
     207,    60,     0,     0,   208,   306,     0,     0,   210,   203,
       9,    10,    11,    12,   211,    14,    15,    16,    17,    18,
      19,    20,    21,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   204,   205,   206,
       0,   207,    60,     0,     0,   208,   309,     0,     0,   210,
     203,     9,    10,    11,    12,   211,    14,    15,    16,    17,
      18,    19,    20,    21,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   204,   205,
     206,     0,   207,    60,     0,     0,   208,   333,     0,     0,
     210,   203,     9,    10,    11,    12,   211,    14,    15,    16,
      17,    18,    19,    20,    21,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   204,
     205,   206,     0,   207,    60,     0,     0,   208,   337,     0,
       0,   210,   203,     9,    10,    11,    12,   211,    14,    15,
      16,    17,    18,    19,    20,    21,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     204,   205,   206,     0,   207,    60,     0,     0,   208,   340,
       0,     0,   210,   203,     9,    10,    11,    12,   211,    14,
      15,    16,    17,    18,    19,    20,    21,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   204,   205,   206,     0,   207,    60,     0,     0,   208,
     341,     0,     0,   210,     0,     0,     0,     0,     8,   211,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    54,    55,    56,    57,     9,    10,    11,
      12,     0,    14,    15,    16,    17,    18,    19,    20,    21,
       0,    22,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    58,     5,     0,   206,     0,   207,    60,
      59,    60,   310,     0,    62,     0,    63,     9,    10,    11,
      12,     0,    14,    15,    16,    17,    18,    19,    20,    21,
       9,    10,    11,    12,     0,    14,    15,    16,    17,    18,
      19,    20,    21,     0,     0,     0,   206,     0,   207,    60,
       0,     0,   334,     0,     0,     0,     0,     0,     0,     0,
       0,   207,    60,     0,     0,   253,     9,    10,    11,    12,
       0,    14,    15,    16,    17,    18,    19,    20,    21,     9,
      10,    11,    12,     0,    14,    15,    16,    17,    18,    19,
      20,    21,     0,     0,     0,     0,     0,   207,    60,     0,
       0,   263,     0,     0,     0,     0,     0,     0,     0,     0,
     207,    60,     0,     0,   317,     9,    10,    11,    12,     0,
      14,    15,    16,    17,    18,    19,    20,    21,     9,    10,
      11,    12,    79,    14,    15,    16,    17,    18,    19,    20,
      21,     0,     9,    10,    11,    12,   279,    60,    15,    16,
      17,    18,    19,    20,    21,     9,    10,    11,    12,    80,
      14,    15,    16,    17,    18,    19,    20,    21,     0,     0,
       0,     0,     0,   127,     0,   112,   113,   114,   115,   116,
       0,     0,   197,     0,   118,   119,    94,   120,   121
};

static const yytype_int16 yycheck[] =
{
       3,    58,    28,     6,    30,   288,    53,    14,   175,    53,
      27,    28,    40,    30,    42,    30,     3,    40,    46,     6,
      46,    24,    50,    26,    42,    28,    52,     4,    29,    30,
      31,    46,    50,   222,    58,    52,   218,    24,   218,    26,
     222,    28,   222,   326,    27,    28,    37,    30,   105,    30,
      28,   218,    30,   220,    30,   222,     0,    30,    45,    30,
      30,    40,    41,   245,    30,    46,    53,    46,    46,    52,
      46,    62,    63,    46,    52,    46,    46,    75,   245,    80,
      46,    40,    30,    74,    85,    86,    87,    40,    75,    45,
      88,    42,    90,    49,    92,    82,    49,    84,    46,   288,
      40,    88,   291,    90,   111,    92,   288,   274,   288,   291,
     101,   291,    40,    44,    42,    42,     6,   284,   175,    46,
     287,   288,    50,    50,   291,    40,   117,    27,    28,    40,
      30,   122,   123,   124,    24,    40,    26,   326,    28,    47,
      47,    49,    49,    47,   326,    49,   326,    28,    47,    30,
      49,   175,   319,   160,    51,    47,   163,    49,    46,   326,
     327,   218,    47,   220,    49,   222,   153,    47,    47,    49,
      49,   338,   339,    47,   165,    49,    48,    49,   176,   177,
      48,    49,   180,   174,   182,    44,   184,   194,   245,   176,
     177,    48,    49,   180,   218,   182,   220,   184,   222,    42,
     233,   192,    47,    47,    49,    49,   197,   198,   199,   200,
      50,   268,   203,    43,   271,   218,   249,   274,    27,   222,
     253,   245,    47,    46,    49,   226,    43,   284,   229,   230,
     287,   288,   289,   290,   291,    40,    22,    23,    24,    25,
      26,    40,   245,    29,   268,    31,    32,   271,    34,    35,
     274,    82,    40,    84,    50,   246,   247,    48,    49,   292,
     284,    45,   319,   287,   288,   289,   290,   291,    40,   326,
     327,     3,    40,    41,     6,   266,   267,   310,   269,   270,
      40,   338,   339,    48,    49,   288,    48,    49,   291,   280,
     281,   175,    24,    40,    26,   319,    28,     3,    47,   332,
       6,   334,   326,   327,    48,    49,    48,    49,    30,    40,
      41,    40,    40,    45,   338,   339,    40,    40,    24,    40,
      26,    53,    28,   326,    39,    44,    46,     3,     4,     5,
       6,    47,    40,    46,   218,    46,    46,    40,   222,    45,
      72,    48,    40,    75,    48,    30,    48,    53,    47,    40,
      82,    47,    84,    47,     6,    48,    88,    33,    90,    48,
      92,    48,    48,   153,    40,    41,    72,    48,    44,    75,
      46,    48,    48,    48,    39,    48,    82,    48,    84,    48,
      48,   220,    88,   126,    90,   166,    92,   166,   166,    -1,
     274,    -1,    -1,     3,     4,     5,     6,    -1,    -1,    -1,
     284,    -1,    -1,   287,   288,    -1,     7,   291,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,   153,    -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,
      40,    41,    -1,    43,    44,   319,    46,    -1,    -1,    40,
      -1,    -1,   326,   327,   176,   177,    -1,   153,   180,    -1,
     182,    -1,   184,    -1,   338,   339,     8,     9,    10,    11,
      12,    -1,    14,    15,    16,    17,    18,    19,    20,    21,
     176,   177,    -1,    -1,   180,    -1,   182,    -1,   184,    -1,
      -1,    -1,    -1,    -1,    36,    37,    38,    -1,    40,    41,
      -1,    -1,    44,    45,    -1,    -1,    48,     8,     9,    10,
      11,    12,    54,    14,    15,    16,    17,    18,    19,    20,
      21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    36,    37,    38,    -1,    40,
      41,    -1,    -1,    44,    45,    -1,    -1,    48,     8,     9,
      10,    11,    12,    54,    14,    15,    16,    17,    18,    19,
      20,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    36,    37,    38,    -1,
      40,    41,    -1,    -1,    44,    45,    -1,    -1,    48,     8,
       9,    10,    11,    12,    54,    14,    15,    16,    17,    18,
      19,    20,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    36,    37,    38,
      -1,    40,    41,    -1,    -1,    44,    45,    -1,    -1,    48,
       8,     9,    10,    11,    12,    54,    14,    15,    16,    17,
      18,    19,    20,    21,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    36,    37,
      38,    -1,    40,    41,    -1,    -1,    44,    45,    -1,    -1,
      48,     8,     9,    10,    11,    12,    54,    14,    15,    16,
      17,    18,    19,    20,    21,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    36,
      37,    38,    -1,    40,    41,    -1,    -1,    44,    45,    -1,
      -1,    48,     8,     9,    10,    11,    12,    54,    14,    15,
      16,    17,    18,    19,    20,    21,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      36,    37,    38,    -1,    40,    41,    -1,    -1,    44,    45,
      -1,    -1,    48,     8,     9,    10,    11,    12,    54,    14,
      15,    16,    17,    18,    19,    20,    21,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    36,    37,    38,    -1,    40,    41,    -1,    -1,    44,
      45,    -1,    -1,    48,    -1,    -1,    -1,    -1,     7,    54,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,     3,     4,     5,     6,     9,    10,    11,
      12,    -1,    14,    15,    16,    17,    18,    19,    20,    21,
      -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    33,    53,    -1,    38,    -1,    40,    41,
      40,    41,    44,    -1,    44,    -1,    46,     9,    10,    11,
      12,    -1,    14,    15,    16,    17,    18,    19,    20,    21,
       9,    10,    11,    12,    -1,    14,    15,    16,    17,    18,
      19,    20,    21,    -1,    -1,    -1,    38,    -1,    40,    41,
      -1,    -1,    44,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    40,    41,    -1,    -1,    44,     9,    10,    11,    12,
      -1,    14,    15,    16,    17,    18,    19,    20,    21,     9,
      10,    11,    12,    -1,    14,    15,    16,    17,    18,    19,
      20,    21,    -1,    -1,    -1,    -1,    -1,    40,    41,    -1,
      -1,    44,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      40,    41,    -1,    -1,    44,     9,    10,    11,    12,    -1,
      14,    15,    16,    17,    18,    19,    20,    21,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    -1,     9,    10,    11,    12,    40,    41,    15,    16,
      17,    18,    19,    20,    21,     9,    10,    11,    12,    40,
      14,    15,    16,    17,    18,    19,    20,    21,    -1,    -1,
      -1,    -1,    -1,    40,    -1,    22,    23,    24,    25,    26,
      -1,    -1,    29,    -1,    31,    32,    40,    34,    35
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    56,    57,    58,     0,    53,    59,    60,     7,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    40,    61,    62,    65,    68,    69,    82,   101,
     111,   112,     4,    60,    61,    40,    40,    42,   104,   105,
      40,    83,    61,    63,    61,    44,    61,    40,    83,    40,
      83,    40,    83,    46,     3,     4,     5,     6,    33,    40,
      41,    43,    44,    46,    80,    86,    87,    88,    98,   102,
     106,   107,    51,    42,    30,    46,    48,    49,    44,    13,
      40,    70,    71,    74,    75,   101,   111,   112,    46,    48,
      46,    48,    46,    48,    40,    66,    67,   101,   111,   112,
      40,    46,   106,   107,    46,    50,   104,    50,    86,   103,
      86,    43,    22,    23,    24,    25,    26,    29,    31,    32,
      34,    35,   108,   109,   110,    27,    46,    40,   111,   112,
      43,    86,    66,    40,    64,    40,    40,    83,    45,    70,
      72,    70,    40,    83,    40,    83,    40,    83,    66,    66,
      66,    40,    47,    49,    40,    40,    40,    86,    86,    99,
      40,   107,    50,    40,    45,    49,    47,   104,    86,    86,
      86,    86,    99,    47,    30,    76,    46,    46,    48,    44,
      46,    48,    46,    48,    46,    48,    47,    47,    47,    67,
      47,    47,    49,   104,    40,   104,    86,    29,   108,   109,
     110,    47,    86,     8,    36,    37,    38,    40,    44,    45,
      48,    54,    78,    80,    82,    84,    85,    89,    90,    91,
      93,    94,    96,    97,    98,   100,   101,   106,   107,   111,
     112,    66,    66,    73,    66,    66,    66,    86,   104,    86,
      86,    86,    86,    48,    86,    46,    46,    46,    40,    77,
      40,    79,    48,    44,    81,    82,    84,    97,   106,   107,
      85,   106,   107,    44,    81,    48,    28,    30,    52,    28,
      30,    52,    47,    47,    76,    47,    47,    47,    48,    40,
      82,    84,    86,    86,    76,    40,    49,    76,    39,    52,
      52,    47,    95,    86,    86,   106,   107,    86,    86,   106,
     107,    45,    86,    86,    47,    47,    45,    48,    40,    45,
      44,    81,    89,   106,   107,   106,   107,    44,    81,    76,
      48,    48,    48,    48,    48,    48,    39,    76,    48,    48,
      48,    48,    92,    45,    44,    81,    89,    45,    76,    76,
      45,    45
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
        case 2:
#line 107 "yacc.y"
    {
        global_table = init_symtab();
        function_table = init_functab();
        class_table = init_classtab();
        params = NULL;
        local_table = global_table;
        members = NULL;
        methods = NULL;
        scope = 0;
    ;}
    break;

  case 3:
#line 117 "yacc.y"
    {
        printf("Global Table : \n\n");
        display_symtab(global_table);
        printf("Function Table : \n\n");
        display_functab(function_table);
        printf("Class Table : \n\n");
        display_classtab(class_table);
        free_symtab(global_table);
        free_functab(function_table);
        free_classtab(class_table);
    ;}
    break;

  case 4:
#line 128 "yacc.y"
    {
        global_table = init_symtab();
        function_table = init_functab();
        class_table = init_classtab();
        params = NULL;
        local_table = global_table;
        members = NULL;
        methods = NULL;
        scope = 0;
    ;}
    break;

  case 5:
#line 137 "yacc.y"
    {
        printf("Global Table : \n\n");
        display_symtab(global_table);
        printf("Function Table : \n\n");
        display_functab(function_table);
        printf("Class Table : \n\n");
        display_classtab(class_table);
        free_symtab(global_table);
        free_functab(function_table);
        free_classtab(class_table);
    ;}
    break;

  case 13:
#line 168 "yacc.y"
    {
            local_table = (yyvsp[(1) - (1)].functions).local_table;
            params = (yyvsp[(1) - (1)].functions).params;
            rflag = false;
            return_type = (yyvsp[(1) - (1)].functions).type;
        ;}
    break;

  case 14:
#line 173 "yacc.y"
    {scope++;;}
    break;

  case 15:
#line 173 "yacc.y"
    {
        struct funcrec *entry = (struct funcrec*) malloc(sizeof(struct funcrec));
        entry -> name = (yyvsp[(1) - (6)].functions).name;
        entry -> type = (yyvsp[(1) - (6)].functions).type;
        entry -> dim = (yyvsp[(1) - (6)].functions).dim;
        entry -> params = (yyvsp[(1) - (6)].functions).params;
        entry -> num_params = (yyvsp[(1) - (6)].functions).num_params;
        entry -> next = NULL;
        entry -> local_table = (yyvsp[(1) - (6)].functions).local_table;
        if(!rflag)
        {
            printf("Error: Function %s doesn't return a value on all control paths\n",entry -> name);
            YYABORT;
        }
        insert_functab(function_table, entry);
        local_table = global_table;
        params = NULL;
        scope--;
    ;}
    break;

  case 16:
#line 195 "yacc.y"
    {
        struct funcrec *entry = (struct funcrec*) malloc(sizeof(struct funcrec));
        entry -> name = (yyvsp[(2) - (5)].id).name;
        entry -> type = (yyvsp[(1) - (5)].type);
        entry -> dim = 0;
        entry -> params = (yyvsp[(4) - (5)].functions).params;
        entry -> num_params = (yyvsp[(4) - (5)].functions).num_params;
        if(search_functab(function_table, entry,0) != NULL)
        {
            printf("Error: Function %s already declared\n", entry -> name);
            YYABORT;
        }
        (yyval.functions).type = (yyvsp[(1) - (5)].type);
        (yyval.functions).dim = 0;
        (yyval.functions).name = (yyvsp[(2) - (5)].id).name;
        (yyval.functions).params = (yyvsp[(4) - (5)].functions).params;
        (yyval.functions).num_params = (yyvsp[(4) - (5)].functions).num_params;
        (yyval.functions).local_table = init_symtab();
    ;}
    break;

  case 17:
#line 214 "yacc.y"
    {
        
        struct funcrec *entry = (struct funcrec *)malloc(sizeof(struct funcrec));
        entry -> name = (yyvsp[(2) - (5)].id).name;
        entry -> type = (yyvsp[(1) - (5)].type);
        entry -> params = (yyvsp[(4) - (5)].functions).params;
        entry -> dim = 0;
        entry -> num_params = (yyvsp[(4) - (5)].functions).num_params;
        if(search_functab(function_table, entry, 0) != NULL)
        {
            printf("Error: Function %s already declared\n", entry -> name);
            YYABORT;
        }
        (yyval.functions).type = (yyvsp[(1) - (5)].type);
        (yyval.functions).dim = 0;
        (yyval.functions).name = (yyvsp[(2) - (5)].id).name;
        (yyval.functions).params = (yyvsp[(4) - (5)].functions).params;
        (yyval.functions).num_params = (yyvsp[(4) - (5)].functions).num_params;
        (yyval.functions).local_table = init_symtab();
    ;}
    break;

  case 18:
#line 234 "yacc.y"
    {
        if(search_classtab(class_table, (yyvsp[(1) - (5)].id).name) == NULL)
        {
            printf("Error: Class %s not declared\n", (yyvsp[(1) - (5)].id).name);
            YYABORT;
        }
        struct funcrec *entry = (struct funcrec *)malloc(sizeof(struct funcrec));
        entry -> name = (yyvsp[(2) - (5)].id).name;
        entry -> type = 14;
        entry -> dim = 0;
        entry -> params = (yyvsp[(4) - (5)].functions).params;
        entry -> num_params = (yyvsp[(4) - (5)].functions).num_params;
        if(search_functab(function_table, entry, 0) != NULL)
        {
            printf("Error: Function %s already declared\n", entry -> name);
            YYABORT;
        }
        (yyval.functions).type = 14;
        (yyval.functions).dim = 0;
        (yyval.functions).name = (yyvsp[(2) - (5)].id).name;
        (yyval.functions).params = (yyvsp[(4) - (5)].functions).params;
        (yyval.functions).num_params = (yyvsp[(4) - (5)].functions).num_params;
        (yyval.functions).local_table = init_symtab();
    ;}
    break;

  case 19:
#line 258 "yacc.y"
    {
        struct funcrec *entry = (struct funcrec *)malloc(sizeof(struct funcrec));
        entry -> name = (yyvsp[(2) - (5)].id).name;
        entry -> type = 4;
        entry -> dim = 0;
        entry -> params = (yyvsp[(4) - (5)].functions).params;
        entry -> num_params = (yyvsp[(4) - (5)].functions).num_params;
        if(search_functab(function_table, entry, 0) != NULL)
        {
            printf("Error: Function %s already declared\n", entry -> name);
            YYABORT;
        }
        (yyval.functions).type = 4;
        (yyval.functions).dim = 0;
        (yyval.functions).name = (yyvsp[(2) - (5)].id).name;
        (yyval.functions).params = (yyvsp[(4) - (5)].functions).params;
        (yyval.functions).num_params = (yyvsp[(4) - (5)].functions).num_params;
        (yyval.functions).local_table = init_symtab();
    ;}
    break;

  case 20:
#line 278 "yacc.y"
    {
        struct funcrec *entry = (struct funcrec *)malloc(sizeof(struct funcrec));
        entry -> name = (yyvsp[(2) - (5)].id).name;
        entry -> type = 5;
        entry -> dim = (yyvsp[(1) - (5)].list).dim;
        entry -> params = (yyvsp[(4) - (5)].functions).params;
        entry -> num_params = (yyvsp[(4) - (5)].functions).num_params;
        entry -> next = NULL;
        entry -> local_table = init_symtab();
        if(search_functab(function_table, entry, 0) != NULL)
        {
            printf("Error: Function %s already declared\n", entry -> name);
            YYABORT;
        }
        (yyval.functions).type = (yyvsp[(1) - (5)].list).type;
        (yyval.functions).dim = (yyvsp[(1) - (5)].list).dim;
        (yyval.functions).name = (yyvsp[(2) - (5)].id).name;
        (yyval.functions).params = (yyvsp[(4) - (5)].functions).params;
        (yyval.functions).num_params = (yyvsp[(4) - (5)].functions).num_params;
        (yyval.functions).local_table = init_symtab();
    ;}
    break;

  case 21:
#line 302 "yacc.y"
    {
        if(lookup((yyval.functions).params, (yyval.functions).params, (yyvsp[(3) - (3)].param)->name) != NULL)
        {
            printf("Error: Parameter %s already used\n", (yyvsp[(3) - (3)].param)->name);
            YYABORT;
        }
        (yyval.functions).params = (yyvsp[(1) - (3)].functions).params;
        insert_symtab((yyval.functions).params, (yyvsp[(3) - (3)].param));
        (yyval.functions).num_params = (yyvsp[(1) - (3)].functions).num_params + 1;
    ;}
    break;

  case 22:
#line 312 "yacc.y"
    {
        (yyval.functions).params = init_symtab();
        insert_symtab((yyval.functions).params, (yyvsp[(1) - (1)].param));
        (yyval.functions).num_params = 1;
    ;}
    break;

  case 23:
#line 317 "yacc.y"
    {
        (yyval.functions).params = init_symtab();
        (yyval.functions).num_params = 0;
    ;}
    break;

  case 24:
#line 324 "yacc.y"
    {
        struct idrec *entry = (struct idrec *)malloc(sizeof(struct idrec));
        entry -> name = (yyvsp[(2) - (2)].id).name;
        entry -> type = (yyvsp[(1) - (2)].type);
        entry -> arr = false;
        entry -> dim = 0;
        entry -> scope = 1;
        entry -> next = NULL;
        entry -> class_name = NULL;       
        (yyval.param) = entry;
    ;}
    break;

  case 25:
#line 335 "yacc.y"
    {
        struct idrec *entry = (struct idrec*) malloc(sizeof(struct idrec));
        entry -> name = (yyvsp[(2) - (2)].id).name;
        entry -> type = (yyvsp[(1) - (2)].type);
        entry -> arr = false;
        entry -> dim = 0;
        entry -> scope = 1;
        entry -> next = NULL;
        entry -> class_name = NULL;       
        (yyval.param) = entry;
    ;}
    break;

  case 26:
#line 346 "yacc.y"
    {
        if(search_classtab(class_table, (yyvsp[(1) - (2)].id).name) == NULL)
        {
            printf("Error: Class %s not declared\n", (yyvsp[(1) - (2)].id).name);
            YYABORT;
        }
        struct idrec *entry = (struct idrec *)malloc(sizeof(struct idrec));
        entry -> name = (yyvsp[(2) - (2)].id).name;
        entry -> type = 14;
        entry -> arr = false;
        entry -> scope = 1;
        entry -> next = NULL;
        entry -> class_name = (yyvsp[(1) - (2)].id).name;
        entry -> dim = 0;
        (yyval.param) = entry;
    ;}
    break;

  case 27:
#line 363 "yacc.y"
    {
        struct idrec *entry = (struct idrec *)malloc(sizeof(struct idrec));
        entry -> name = (yyvsp[(2) - (2)].id).name;
        entry -> type = (yyvsp[(1) - (2)].list).type;
        entry -> arr = true;
        entry -> scope = 1;
        entry -> next = NULL;
        entry -> class_name = NULL;
        entry -> dim = (yyvsp[(1) - (2)].list).dim;
        (yyval.param) = entry;
    ;}
    break;

  case 28:
#line 378 "yacc.y"
    {
        struct classrec *entry = (struct classrec *)malloc(sizeof(struct classrec));
        entry -> name = (yyvsp[(1) - (4)].id).name;
        entry -> members = members;
        entry -> methods = methods;
        entry -> next = NULL;
        if(search_classtab(class_table, entry -> name) != NULL)
        {
            printf("Error: Class %s already declared\n", entry -> name);
            YYABORT;
        }
        insert_classtab(class_table, entry);
        members = NULL;
        methods = NULL;
        local_table = global_table;
    ;}
    break;

  case 29:
#line 397 "yacc.y"
    {
        (yyval.id).name = (yyvsp[(2) - (2)].id).name;
        (yyvsp[(2) - (2)].id).type = 14;
        members = init_symtab();
        methods = init_functab();
    ;}
    break;

  case 33:
#line 411 "yacc.y"
    {
            local_table = (yyvsp[(1) - (1)].functions).local_table;
            params = (yyvsp[(1) - (1)].functions).params;
            rflag = true;
            return_type = (yyvsp[(1) - (1)].functions).type;
        ;}
    break;

  case 34:
#line 416 "yacc.y"
    {scope++;;}
    break;

  case 35:
#line 416 "yacc.y"
    {
        if(!rflag)
        {
            printf("Error: Method doesn't return a value on all control paths\n");
            YYABORT;
        }
        struct funcrec *entry = (struct funcrec*) malloc(sizeof(struct funcrec));
        entry -> name = (yyvsp[(1) - (6)].functions).name;
        entry -> type = (yyvsp[(1) - (6)].functions).type;
        entry -> dim = (yyvsp[(1) - (6)].functions).dim;
        entry -> params = (yyvsp[(1) - (6)].functions).params;
        entry -> num_params = (yyvsp[(1) - (6)].functions).num_params;
        entry -> next = NULL;
        entry -> local_table = (yyvsp[(1) - (6)].functions).local_table;
        insert_functab(methods, entry);
        local_table = NULL;
        params = NULL;
        scope--;
    ;}
    break;

  case 36:
#line 438 "yacc.y"
    {
        struct funcrec *entry = (struct funcrec*) malloc(sizeof(struct funcrec));
        entry -> name = (yyvsp[(2) - (5)].id).name;
        entry -> type = (yyvsp[(1) - (5)].type);
        entry -> dim = 0;
        entry -> params = (yyvsp[(4) - (5)].functions).params;
        entry -> num_params = (yyvsp[(4) - (5)].functions).num_params;
        entry -> next = NULL;
        entry -> local_table = init_symtab();
        if(search_functab(methods, entry, 0) != NULL)
        {
            printf("Error: Method %s already declared\n", entry -> name);
            YYABORT;
        }
        (yyval.functions).type = (yyvsp[(1) - (5)].type);
        (yyval.functions).dim = 0;
        (yyval.functions).name = (yyvsp[(2) - (5)].id).name;
        (yyval.functions).params = (yyvsp[(4) - (5)].functions).params;
        (yyval.functions).num_params = (yyvsp[(4) - (5)].functions).num_params;
        (yyval.functions).local_table = init_symtab();
    ;}
    break;

  case 37:
#line 459 "yacc.y"
    {
        struct funcrec *entry = (struct funcrec *)malloc(sizeof(struct funcrec));
        entry -> name = (yyvsp[(2) - (5)].id).name;
        entry -> type = (yyvsp[(1) - (5)].type);
        entry -> dim = 0;
        entry -> params = (yyvsp[(4) - (5)].functions).params;
        entry -> num_params = (yyvsp[(4) - (5)].functions).num_params;
        entry -> next = NULL;
        entry -> local_table = init_symtab();
        if(search_functab(methods, entry, 0) != NULL)
        {
            printf("Error: Method %s already declared\n", entry -> name);
            YYABORT;
        }
        (yyval.functions).type = (yyvsp[(1) - (5)].type);
        (yyval.functions).dim = 0;
        (yyval.functions).name = (yyvsp[(2) - (5)].id).name;
        (yyval.functions).params = (yyvsp[(4) - (5)].functions).params;
        (yyval.functions).num_params = (yyvsp[(4) - (5)].functions).num_params;
        (yyval.functions).local_table = init_symtab();
    ;}
    break;

  case 38:
#line 480 "yacc.y"
    {
        if(search_classtab(class_table, (yyvsp[(1) - (5)].id).name) == NULL)
        {
            printf("Error: Class %s not declared\n", (yyvsp[(1) - (5)].id).name);
            YYABORT;
        }
        struct funcrec *entry = (struct funcrec *)malloc(sizeof(struct funcrec));
        entry -> name = (yyvsp[(2) - (5)].id).name;
        entry -> type = 14;
        entry -> dim = 0;
        entry -> params = (yyvsp[(4) - (5)].functions).params;
        entry -> num_params = (yyvsp[(4) - (5)].functions).num_params;
        entry -> next = NULL;
        entry -> local_table = init_symtab();
        if(search_functab(methods, entry, 0) != NULL)
        {
            printf("Error: Method %s already declared\n", entry -> name);
            YYABORT;
        }
        (yyval.functions).type = 14;
        (yyval.functions).dim = 0;
        (yyval.functions).name = (yyvsp[(2) - (5)].id).name;
        (yyval.functions).params = (yyvsp[(4) - (5)].functions).params;
        (yyval.functions).num_params = (yyvsp[(4) - (5)].functions).num_params;
        (yyval.functions).local_table = init_symtab();
    ;}
    break;

  case 39:
#line 506 "yacc.y"
    {
        struct funcrec *entry = (struct funcrec *)malloc(sizeof(struct funcrec));
        entry -> name = (yyvsp[(2) - (5)].id).name;
        entry -> type = 4;
        entry -> dim = 0;
        entry -> params = (yyvsp[(4) - (5)].functions).params;
        entry -> num_params = (yyvsp[(4) - (5)].functions).num_params;
        entry -> next = NULL;
        entry -> local_table = init_symtab();
        if(search_functab(methods, entry, 0) != NULL)
        {
            printf("Error: Method %s already declared\n", entry -> name);
            YYABORT;
        }
        (yyval.functions).type = 4;
        (yyval.functions).dim = 0;
        (yyval.functions).name = (yyvsp[(2) - (5)].id).name;
        (yyval.functions).params = (yyvsp[(4) - (5)].functions).params;
        (yyval.functions).num_params = (yyvsp[(4) - (5)].functions).num_params;
        (yyval.functions).local_table = init_symtab();
    ;}
    break;

  case 40:
#line 528 "yacc.y"
    {
        struct funcrec *entry = (struct funcrec *)malloc(sizeof(struct funcrec));
        entry -> name = (yyvsp[(2) - (5)].id).name;
        entry -> type = (yyvsp[(1) - (5)].list).type;
        entry -> dim = (yyvsp[(1) - (5)].list).dim;
        entry -> params = (yyvsp[(4) - (5)].functions).params;
        entry -> num_params = (yyvsp[(4) - (5)].functions).num_params;
        entry -> next = NULL;
        entry -> local_table = init_symtab();
        if(search_functab(methods, entry, 0) != NULL)
        {
            printf("Error: Method %s already declared\n", entry -> name);
            YYABORT;
        }
        (yyval.functions).type = (yyvsp[(1) - (5)].list).type;
        (yyval.functions).dim = (yyvsp[(1) - (5)].list).dim;
        (yyval.functions).name = (yyvsp[(2) - (5)].id).name;
        (yyval.functions).params = (yyvsp[(4) - (5)].functions).params;
        (yyval.functions).num_params = (yyvsp[(4) - (5)].functions).num_params;
        (yyval.functions).local_table = init_symtab();
    ;}
    break;

  case 41:
#line 552 "yacc.y"
    {
        struct snode* temp = (yyvsp[(2) - (3)].namelist)->head;
        while(temp != NULL){
            struct idrec *entry = (struct idrec *)malloc(sizeof(struct idrec));
            entry -> type = (yyvsp[(1) - (3)].type);
            entry -> arr = false;
            entry -> scope = 1; 
            entry -> name = temp->val;
            entry -> class_name = NULL;
            entry -> dim = 0;
            if(lookup(members, members, entry -> name) == NULL){
                insert_symtab(members, entry);
            }
            else{
                printf("Error: Member %s already declared\n", entry -> name);
                YYABORT;
            }
            temp = temp->next;
        }
    ;}
    break;

  case 42:
#line 572 "yacc.y"
    {
        
        struct snode* temp = (yyvsp[(2) - (3)].namelist)->head;
        while(temp != NULL){
            struct idrec *entry = (struct idrec *)malloc(sizeof(struct idrec));
            entry -> type = (yyvsp[(1) - (3)].type);
            entry -> arr = false;
            entry -> scope = 1; 
            entry -> name = temp->val;
            entry -> next = NULL;
            entry -> class_name = NULL;
            entry -> dim = 0;
            if(lookup(members, members ,entry -> name) == NULL){
                insert_symtab(members, entry);
            }
            else{
                printf("Error: Member %s already declared\n", entry -> name);
                YYABORT;
            }
            temp = temp->next;
        } 
    ;}
    break;

  case 43:
#line 594 "yacc.y"
    {
        if(search_classtab(class_table, (yyvsp[(1) - (3)].id).name) == NULL)
        {
            printf("Error: Class %s not declared\n", (yyvsp[(1) - (3)].id).name);
            YYABORT;
        }
        struct snode* temp = (yyvsp[(2) - (3)].namelist)->head;
        while(temp != NULL){
            struct idrec *entry = (struct idrec *)malloc(sizeof(struct idrec));
            entry -> type = 14;
            entry -> arr = false;
            entry -> scope = 1; 
            entry -> name = temp->val;
            entry -> next = NULL;
            entry -> class_name = (yyvsp[(1) - (3)].id).name;
            entry -> dim = 0;
            if(lookup(members, members ,entry -> name) == NULL){
                insert_symtab(members, entry);
            }
            else{
                printf("Error: Member %s already declared\n", entry -> name);
                YYABORT;
            }
            temp = temp->next;
        }
    ;}
    break;

  case 44:
#line 621 "yacc.y"
    {
        struct snode* temp = (yyvsp[(2) - (3)].namelist)->head;
        while(temp != NULL){
            struct idrec *entry = (struct idrec *)malloc(sizeof(struct idrec));
            entry -> type = (yyvsp[(1) - (3)].list).type;
            entry -> arr = true;
            entry -> scope = 1; 
            entry -> name = temp->val;
            entry->class_name = (yyvsp[(1) - (3)].list).class_name;
            entry -> next = NULL;
            entry -> dim = (yyvsp[(1) - (3)].list).dim;
            if(lookup(members, members ,entry -> name) == NULL){
                insert_symtab(members, entry);
            }
            else{
                printf("Error: Member %s already declared\n", entry -> name);
                YYABORT;
            }
            temp = temp->next;
        }
    ;}
    break;

  case 45:
#line 646 "yacc.y"
    {scope++;;}
    break;

  case 46:
#line 646 "yacc.y"
    {scope--;;}
    break;

  case 48:
#line 648 "yacc.y"
    {;}
    break;

  case 64:
#line 674 "yacc.y"
    {
        if((yyvsp[(1) - (2)].class_id).type != 0 && (yyvsp[(1) - (2)].class_id).type != 1){
            printf("Error: Unary operator not defined for this type\n"); 
            YYABORT;
        }
        (yyval.type) = (yyvsp[(1) - (2)].class_id).type;
    ;}
    break;

  case 72:
#line 695 "yacc.y"
    {
        struct snode* temp = (yyvsp[(2) - (3)].namelist)->head;
        while(temp != NULL){
            struct idrec *entry = (struct idrec*) malloc(sizeof(struct idrec));
            entry -> type = (yyvsp[(1) - (3)].type);
            entry -> arr = false;
            entry -> scope = scope; 
            entry -> name = temp->val;
            entry -> class_name = NULL;
            entry -> dim = 0;
            entry -> next = NULL;
            if(lookup(global_table, local_table, entry->name) != NULL){
                printf("Error: Variable %s already declared\n", temp -> val);
                YYABORT;
            }
            else if(lookup(params, params, temp -> val) != NULL){
                printf("Error: Variable %s already declared\n", temp -> val);
                YYABORT;
            }
            else
                insert_symtab(local_table, entry);
            temp = temp -> next;
        }
    ;}
    break;

  case 73:
#line 719 "yacc.y"
    {
        struct snode* temp = (yyvsp[(2) - (3)].namelist)->head;
        while(temp != NULL){
            struct idrec *entry = (struct idrec*) malloc(sizeof(struct idrec));
            entry -> type = (yyvsp[(1) - (3)].type);
            entry -> arr = false;
            entry -> scope = scope; 
            entry -> name = temp->val;
            entry -> class_name = NULL;
            entry -> dim = 0;
            entry -> next = NULL;
            if(lookup(global_table, local_table, entry->name) != NULL){
                printf("Error: Variable %s already declared\n", temp -> val);
                YYABORT;
            }
            else if(lookup(params, params, temp -> val) != NULL){
                printf("Error: Variable %s already declared\n", temp -> val);
                YYABORT;
            }
            else
                insert_symtab(local_table, entry);
            temp = temp -> next;
        }
    ;}
    break;

  case 74:
#line 743 "yacc.y"
    {
        struct snode* temp = (yyvsp[(2) - (3)].namelist)->head;
        if(search_classtab(class_table, (yyvsp[(1) - (3)].id).name) == NULL)
        {
            printf("Error: Class %s not declared\n", (yyvsp[(1) - (3)].id).name);
            YYABORT;
        }
        while(temp != NULL){
            struct idrec *entry = (struct idrec*) malloc(sizeof(struct idrec));
            entry -> type = 14;
            entry -> arr = false;
            entry -> scope = scope; 
            entry -> name = temp->val;
            entry -> class_name = (yyvsp[(1) - (3)].id).name;
            entry -> dim = 0;
            entry -> next = NULL;
            if(lookup(global_table, local_table, entry->name) != NULL){
                printf("Error: Variable %s already declared\n", temp -> val);
                YYABORT;
            }
            else if(lookup(params, params, temp -> val) != NULL){
                printf("Error: Variable %s already declared\n", temp -> val);
                YYABORT;
            }
            else
                insert_symtab(local_table, entry);
            temp = temp -> next;
        }
    ;}
    break;

  case 75:
#line 772 "yacc.y"
    {
        struct snode* temp = (yyvsp[(2) - (3)].namelist)->head;
        while(temp != NULL){
            struct idrec *entry = (struct idrec*) malloc(sizeof(struct idrec));
            entry -> type = 5;
            entry -> arr = true;
            entry -> scope = scope; 
            entry -> name = temp->val;
            entry -> class_name = (yyvsp[(1) - (3)].list).class_name;
            entry -> next = NULL;
            entry -> dim = (yyvsp[(1) - (3)].list).dim;
            if(lookup(global_table, local_table, entry->name) != NULL){
                printf("Error: Variable %s already declared\n", temp -> val);
                YYABORT;
            }
            else if(lookup(params, params, temp -> val) != NULL){
                printf("Error: Variable %s already declared\n", temp -> val);
                YYABORT;
            }
            else
                insert_symtab(local_table, entry);
            temp = temp -> next;
        }
    ;}
    break;

  case 76:
#line 799 "yacc.y"
    {
        insert_slist((yyvsp[(1) - (3)].namelist), (yyvsp[(3) - (3)].id).name);
        (yyval.namelist) = (yyvsp[(1) - (3)].namelist);
    ;}
    break;

  case 77:
#line 803 "yacc.y"
    {
        // check nested expr type
        (yyval.namelist) = init_slist();
        insert_slist((yyval.namelist), (yyvsp[(1) - (3)].id).name);
    ;}
    break;

  case 78:
#line 808 "yacc.y"
    {
        (yyval.namelist) = init_slist();
        insert_slist((yyval.namelist), (yyvsp[(3) - (5)].id).name);
    ;}
    break;

  case 79:
#line 812 "yacc.y"
    {
        (yyval.namelist) = init_slist();
        insert_slist((yyval.namelist), (yyvsp[(1) - (1)].id).name);   
    ;}
    break;

  case 81:
#line 824 "yacc.y"
    {
        if(!check_assign_op((yyvsp[(1) - (3)].class_id).type, (yyvsp[(3) - (3)].exprs).type, (yyvsp[(2) - (3)].assignop))){
            YYABORT;
        }
    ;}
    break;

  case 82:
#line 829 "yacc.y"
    {
        if(!check_assign_op((yyvsp[(1) - (3)].class_id).type, (yyvsp[(3) - (3)].exprs).type, (yyvsp[(2) - (3)].assignop))){
            YYABORT;
        }
    ;}
    break;

  case 83:
#line 834 "yacc.y"
    {
        if((yyvsp[(1) - (3)].class_id).type == 5 && (yyvsp[(3) - (3)].exprs).type == 5){
            if((yyvsp[(1) - (3)].class_id).dim != (yyvsp[(3) - (3)].exprs).dim){
                printf("Error: Dimension mismatch in assignment\n");
                printf("LHS is of dimension %i and RHS is of dimension %i\n", (yyvsp[(1) - (3)].class_id).dim, (yyvsp[(3) - (3)].exprs).dim);
                YYABORT;
            }
        }
        else if(!check_assign_op((yyvsp[(1) - (3)].class_id).type, (yyvsp[(3) - (3)].exprs).type, 7)){
            YYABORT;
        }
    ;}
    break;

  case 84:
#line 846 "yacc.y"
    {
        if((yyvsp[(1) - (3)].class_id).type == 5 && (yyvsp[(3) - (3)].exprs).type == 5){
            if((yyvsp[(1) - (3)].class_id).dim != (yyvsp[(3) - (3)].exprs).dim){
                printf("Error: Dimension mismatch in assignment\n");
                printf("LHS is of dimension %i and RHS is of dimension %i\n", (yyvsp[(1) - (3)].class_id).dim, (yyvsp[(3) - (3)].exprs).dim);
                YYABORT;
            }
        }
        else if(!check_assign_op((yyvsp[(1) - (3)].class_id).type, (yyvsp[(3) - (3)].exprs).type, 7)){
            YYABORT;
        }
    ;}
    break;

  case 86:
#line 862 "yacc.y"
    {
        (yyval.exprs).type = (yyvsp[(2) - (3)].exprs).type;
        (yyval.exprs).dim = (yyvsp[(2) - (3)].exprs).dim;
    ;}
    break;

  case 87:
#line 866 "yacc.y"
    {
        if((yyvsp[(5) - (5)].exprs).type != 3 || (yyvsp[(2) - (5)].exprs).type != 3){
            printf("Error: Type mismatch\n");
            YYABORT;
        }
        (yyval.exprs).type = (yyvsp[(2) - (5)].exprs).type;
        (yyval.exprs).dim = 0;
    ;}
    break;

  case 88:
#line 874 "yacc.y"
    {
        (yyval.exprs).type = 3;
        (yyval.exprs).dim = 0;
    ;}
    break;

  case 89:
#line 878 "yacc.y"
    {
        (yyval.exprs).type = check_arith_op((yyvsp[(2) - (5)].exprs).type, (yyvsp[(5) - (5)].exprs).type, (yyvsp[(4) - (5)].op_type));
        if((yyval.exprs).type == -1)
        {
            YYABORT;
        }
        (yyval.exprs).dim = 0;
    ;}
    break;

  case 90:
#line 886 "yacc.y"
    {
        if((yyvsp[(2) - (5)].exprs).type != 7 || (yyvsp[(5) - (5)].exprs).type != 7){
            printf("Error: Invalid operands for \n");
            YYABORT;
        }
        (yyval.exprs).type = (yyvsp[(2) - (5)].exprs).type; 
        (yyval.exprs).dim = 0;
    ;}
    break;

  case 91:
#line 894 "yacc.y"
    {
        (yyval.exprs).type = (yyvsp[(1) - (1)].exprs).type;
        (yyval.exprs).dim = (yyvsp[(1) - (1)].exprs).dim; 
    ;}
    break;

  case 92:
#line 901 "yacc.y"
    {
        if((yyvsp[(1) - (3)].exprs).type != 3 || (yyvsp[(3) - (3)].exprs).type != 3 ){
            printf("Error: Type mismatch\n");
            YYABORT;
        }
        (yyval.exprs).type = 3;
        (yyval.exprs).dim = 0;
    ;}
    break;

  case 93:
#line 909 "yacc.y"
    {
        // coercibility
        if((yyvsp[(1) - (3)].exprs).type != (yyvsp[(3) - (3)].exprs).type){
            printf("Error: Type mismatch\n");
            YYABORT;
        }
        (yyval.exprs).type = 3;
        (yyval.exprs).dim = 0;
    ;}
    break;

  case 94:
#line 918 "yacc.y"
    {
        (yyval.exprs).type = check_arith_op((yyvsp[(1) - (3)].exprs).type, (yyvsp[(3) - (3)].exprs).type, (yyvsp[(2) - (3)].op_type));
        if((yyval.exprs).type == -1)
        {
            YYABORT;
        }
        (yyval.exprs).dim = 0;
    ;}
    break;

  case 95:
#line 926 "yacc.y"
    {
        // coercibility
        if((yyvsp[(1) - (3)].exprs).type != 7 || (yyvsp[(3) - (3)].exprs).type != 7){
            printf("Error: Invalid operands for \n");
            YYABORT;
        }
        (yyval.exprs).type = (yyvsp[(1) - (3)].exprs).type;
        (yyval.exprs).dim = 0;    
    ;}
    break;

  case 96:
#line 935 "yacc.y"
    {
        (yyval.exprs).type = (yyvsp[(1) - (1)].exprs).type;
        (yyval.exprs).dim = (yyvsp[(1) - (1)].exprs).dim;
    ;}
    break;

  case 97:
#line 942 "yacc.y"
    {
        (yyval.exprs).type = (yyvsp[(1) - (1)].type);
        (yyval.exprs).dim = 0;
    ;}
    break;

  case 98:
#line 946 "yacc.y"
    {
        (yyval.exprs).type = 0;
        (yyval.exprs).dim = 0;
    ;}
    break;

  case 99:
#line 950 "yacc.y"
    { 
        (yyval.exprs).type = 1;
        (yyval.exprs).dim = 0;
    ;}
    break;

  case 100:
#line 954 "yacc.y"
    {
        (yyval.exprs).type = 2;   
        (yyval.exprs).dim = 0; 
    ;}
    break;

  case 101:
#line 958 "yacc.y"
    {
        (yyval.exprs).type = 3;
        (yyval.exprs).dim = 0;
    ;}
    break;

  case 102:
#line 962 "yacc.y"
    {
        (yyval.exprs).type = (yyvsp[(1) - (1)].exprs).type;
        (yyval.exprs).dim = (yyvsp[(1) - (1)].exprs).dim;
    ;}
    break;

  case 103:
#line 966 "yacc.y"
    {
        if((yyvsp[(3) - (4)].exprs).type != 3){
            printf("Error: Not operator not defined for this type\n"); 
            YYABORT;
        }
        (yyval.exprs).type = 3;
        (yyval.exprs).dim = 0;
    ;}
    break;

  case 104:
#line 974 "yacc.y"
    {
        if((yyvsp[(2) - (2)].class_id).type != 3){
            printf("Error: Not operator not defined for this type\n"); 
            YYABORT;
        }
        (yyval.exprs).type = 3;
        (yyval.exprs).dim = 0;
    ;}
    break;

  case 105:
#line 982 "yacc.y"
    {
        if(check_namelist((yyvsp[(2) - (2)].class_id).namelist, global_table, local_table, class_table, NULL, -1) == false)
        {
            YYABORT;
        }
        (yyval.exprs).type = 3;
        (yyval.exprs).dim = 0;
    ;}
    break;

  case 106:
#line 990 "yacc.y"
    {
        (yyval.exprs).type = (yyvsp[(1) - (1)].class_id).type;
        (yyval.exprs).dim = (yyvsp[(1) - (1)].class_id).dim;
    ;}
    break;

  case 107:
#line 994 "yacc.y"
    {
        if(check_namelist((yyvsp[(1) - (1)].class_id).namelist, global_table, local_table, class_table, NULL, -1) == false)
        {
            YYABORT;
        }
        (yyval.exprs).type = 3;
        (yyval.exprs).dim = 0;
    ;}
    break;

  case 108:
#line 1003 "yacc.y"
    {
        (yyval.exprs).type = 5;
        (yyval.exprs).dim = (yyvsp[(1) - (1)].list).dim;
    ;}
    break;

  case 109:
#line 1011 "yacc.y"
    {rflag = false;;}
    break;

  case 110:
#line 1012 "yacc.y"
    {rflag = false;;}
    break;

  case 111:
#line 1013 "yacc.y"
    {rflag = false;;}
    break;

  case 112:
#line 1014 "yacc.y"
    {rflag = false;;}
    break;

  case 113:
#line 1015 "yacc.y"
    {rflag = false;;}
    break;

  case 114:
#line 1016 "yacc.y"
    {rflag = false;;}
    break;

  case 115:
#line 1017 "yacc.y"
    {rflag = false;;}
    break;

  case 116:
#line 1018 "yacc.y"
    {rflag = false;;}
    break;

  case 117:
#line 1022 "yacc.y"
    {
        if((yyvsp[(3) - (4)].exprs).type != 3){
            printf("Error: If condition must be bool\n");
            YYABORT;
        }
        rflag = false;
    ;}
    break;

  case 118:
#line 1033 "yacc.y"
    {scope++;;}
    break;

  case 119:
#line 1033 "yacc.y"
    {scope--;rflag = false;;}
    break;

  case 120:
#line 1034 "yacc.y"
    {rflag = false;;}
    break;

  case 121:
#line 1038 "yacc.y"
    {
        if((yyvsp[(4) - (5)].exprs).type != 3){
            printf("Error: For condition must be bool\n");
            YYABORT;
        }
    ;}
    break;

  case 122:
#line 1044 "yacc.y"
    {
        if((yyvsp[(4) - (5)].exprs).type != 3){
            printf("Error: For condition must be bool\n");
            YYABORT;
        }
    ;}
    break;

  case 123:
#line 1053 "yacc.y"
    {scope++;;}
    break;

  case 124:
#line 1053 "yacc.y"
    {scope--;rflag = false;;}
    break;

  case 125:
#line 1054 "yacc.y"
    {rflag = false;;}
    break;

  case 126:
#line 1058 "yacc.y"
    {
        if((yyvsp[(3) - (4)].exprs).type != 3){
            printf("Error: While condition must be bool\n");
            YYABORT;
        }
    ;}
    break;

  case 128:
#line 1071 "yacc.y"
    {
        struct funcrec *entry = (struct funcrec *)malloc(sizeof(struct funcrec));
        entry -> name = (yyvsp[(1) - (4)].id).name;
        entry -> params = (yyvsp[(3) - (4)].functions).params;
        entry -> num_params = (yyvsp[(3) - (4)].functions).num_params;
        struct funcrec *func = search_functab(function_table, entry, 1);
        if(func == NULL)
        {
            YYABORT;
        }
        (yyval.exprs).type = func -> type;
        (yyval.exprs).dim = func -> dim;
    ;}
    break;

  case 129:
#line 1084 "yacc.y"
    {
        if(check_namelist((yyvsp[(1) - (4)].class_id).namelist, global_table, local_table, class_table, (yyvsp[(3) - (4)].functions).params, (yyvsp[(3) - (4)].functions).num_params) == false)
        {
            YYABORT;
        }
        struct funcrec *entry = (struct funcrec *)malloc(sizeof(struct funcrec));
        entry -> name = (yyvsp[(1) - (4)].class_id).namelist->tail->val;
        entry -> params = (yyvsp[(3) - (4)].functions).params;
        entry -> num_params = (yyvsp[(3) - (4)].functions).num_params;
        struct funcrec *func = search_functab(methods, entry,1);
        if(func == NULL)
        {
            printf("Error: Method %s not declared\n", entry->name);
            YYABORT;
        }
        (yyval.exprs).type = func -> type;
        (yyval.exprs).dim = func -> dim;
    ;}
    break;

  case 130:
#line 1106 "yacc.y"
    {
        (yyval.functions).params = (yyvsp[(1) - (3)].functions).params;
        struct idrec *entry = (struct idrec*) malloc(sizeof(struct idrec));
        entry -> type = (yyvsp[(3) - (3)].exprs).type;
        insert_symtab((yyval.functions).params, entry);
        (yyval.functions).num_params = (yyvsp[(1) - (3)].functions).num_params + 1;
    ;}
    break;

  case 131:
#line 1113 "yacc.y"
    {
        (yyval.functions).params = init_symtab();
        struct idrec *entry = (struct idrec*) malloc(sizeof(struct idrec));
        entry -> type = (yyvsp[(1) - (1)].exprs).type;
        insert_symtab((yyval.functions).params, entry);
        (yyval.functions).num_params = 1;
    ;}
    break;

  case 132:
#line 1120 "yacc.y"
    {
        (yyval.functions).params = init_symtab();
        (yyval.functions).num_params = 0;
    ;}
    break;

  case 133:
#line 1126 "yacc.y"
    {
        if(return_type != 4)
        {
            printf("Error: Mismatch in return type\n");
            printf("Returned void while function returns %s\n", map_type[return_type]);
            YYABORT;
        }
        rflag = true;
    ;}
    break;

  case 134:
#line 1135 "yacc.y"
    {
        if(return_type != (yyvsp[(2) - (3)].exprs).type)
        {
            printf("Error: Mismatch in return type\n");
            printf("Returned %s while function returns %s\n", map_type[(yyvsp[(2) - (3)].exprs).type], map_type[return_type]);
            YYABORT;
        }
        rflag = true;
    ;}
    break;

  case 135:
#line 1148 "yacc.y"
    {
        (yyval.list).type = (yyvsp[(4) - (4)].type);
        (yyval.list).dim = (yyvsp[(2) - (4)].list).dim;
        (yyval.list).class_name = NULL;
    ;}
    break;

  case 136:
#line 1153 "yacc.y"
    {
        (yyval.list).type = (yyvsp[(4) - (4)].type);
        (yyval.list).dim = (yyvsp[(2) - (4)].list).dim;
        (yyval.list).class_name = NULL;
    ;}
    break;

  case 137:
#line 1158 "yacc.y"
    {
        if(search_classtab(class_table, (yyvsp[(4) - (4)].id).name) == NULL)
        {
            printf("Error: Class %s not declared\n", (yyvsp[(4) - (4)].id).name);
            YYABORT;
        }
        (yyval.list).type = 14;
        (yyval.list).class_name = (yyvsp[(4) - (4)].id).name;
        (yyval.list).dim = (yyvsp[(2) - (4)].list).dim;
    ;}
    break;

  case 138:
#line 1171 "yacc.y"
    {
        (yyval.list).type = 5;
        (yyval.list).dim = (yyvsp[(2) - (3)].list).dim+1;
    ;}
    break;

  case 139:
#line 1178 "yacc.y"
    {
        (yyval.list).type = (yyvsp[(1) - (1)].exprs).type;
        if((yyvsp[(1) - (1)].exprs).type == 5){
            (yyval.list).dim = (yyvsp[(1) - (1)].exprs).dim;
        }
        else{
            (yyval.list).dim = 0;
        }
    ;}
    break;

  case 140:
#line 1187 "yacc.y"
    {
        if((yyvsp[(1) - (3)].list).type != (yyvsp[(3) - (3)].exprs).type){
            printf("Error: Type mismatch in list terminal\n");
            YYABORT;
        }
        (yyval.list).type = (yyvsp[(1) - (3)].list).type;
        (yyval.list).dim = (yyvsp[(1) - (3)].list).dim;
    ;}
    break;

  case 141:
#line 1199 "yacc.y"
    {
        if((yyvsp[(2) - (4)].exprs).type != 0){
            printf("Error: Array size must be an integer\n");
            YYABORT;
        }
        (yyval.list).dim = (yyvsp[(4) - (4)].list).dim + 1;
    ;}
    break;

  case 142:
#line 1206 "yacc.y"
    {
        if((yyvsp[(2) - (3)].exprs).type != 0){
            printf("Error: Array size must be an integer\n");
            YYABORT;
        }
        (yyval.list).dim = 1;
    ;}
    break;

  case 143:
#line 1213 "yacc.y"
    {
        (yyval.list).dim = (yyvsp[(1) - (1)].list).dim;
    ;}
    break;

  case 144:
#line 1218 "yacc.y"
    {
        (yyval.list).dim = (yyvsp[(1) - (3)].list).dim + 1;
    ;}
    break;

  case 145:
#line 1221 "yacc.y"
    {
        (yyval.list).dim = 1;
    ;}
    break;

  case 146:
#line 1226 "yacc.y"
    {
        struct idrec *entry = lookup(global_table, local_table, (yyvsp[(1) - (1)].id).name);
        if(entry == NULL){
            entry = lookup(params, params, (yyvsp[(1) - (1)].id).name);
            if(entry == NULL){
                printf("Error: Variable %s not declared\n", (yyvsp[(1) - (1)].id).name);
                YYABORT;
            }
        }
        (yyval.class_id).type = entry -> type;
        (yyval.class_id).dim = entry -> dim;
    ;}
    break;

  case 147:
#line 1239 "yacc.y"
    {
        struct idrec *entry = lookup(global_table, local_table, (yyvsp[(1) - (2)].id).name);
        if(entry == NULL){
            entry = lookup(params, params, (yyvsp[(1) - (2)].id).name);
            if(entry == NULL){
                printf("Error: Variable %s not declared\n", (yyvsp[(1) - (2)].id).name);
                YYABORT;
            }
            printf("Error: Variable %s not declared\n", (yyvsp[(1) - (2)].id).name);
            YYABORT;
        }
        (yyval.class_id).type = entry->type;
        (yyval.class_id).dim = entry->dim - (yyvsp[(2) - (2)].list).dim;
    ;}
    break;

  case 148:
#line 1255 "yacc.y"
    {
        (yyval.class_id).namelist = init_slist();
        insert_slist((yyval.class_id).namelist, (yyvsp[(1) - (3)].id).name);
        insert_slist((yyval.class_id).namelist, (yyvsp[(3) - (3)].id).name);   
    ;}
    break;

  case 149:
#line 1260 "yacc.y"
    {
        struct snode* temp = (struct snode*)malloc(sizeof(struct snode));
        temp -> val = (yyvsp[(1) - (3)].id).name;
        temp -> next = (yyvsp[(3) - (3)].class_id).namelist -> head;
        (yyvsp[(3) - (3)].class_id).namelist -> head = temp;
        (yyval.class_id).namelist = (yyvsp[(3) - (3)].class_id).namelist;               
    ;}
    break;

  case 150:
#line 1269 "yacc.y"
    {
        (yyval.class_id).namelist = init_slist();
        insert_slist((yyval.class_id).namelist, (yyvsp[(1) - (4)].id).name);
        insert_slist((yyval.class_id).namelist, (yyvsp[(3) - (4)].id).name);   
    ;}
    break;

  case 151:
#line 1274 "yacc.y"
    {
        (yyval.class_id).namelist = init_slist();
        insert_slist((yyval.class_id).namelist, (yyvsp[(1) - (4)].id).name);
        insert_slist((yyval.class_id).namelist, (yyvsp[(4) - (4)].id).name);   
    ;}
    break;

  case 152:
#line 1279 "yacc.y"
    {
        (yyval.class_id).namelist = init_slist();
        insert_slist((yyval.class_id).namelist, (yyvsp[(1) - (5)].id).name);
        insert_slist((yyval.class_id).namelist, (yyvsp[(4) - (5)].id).name);   
    ;}
    break;

  case 153:
#line 1284 "yacc.y"
    {
        if(members == NULL)
        {
            printf("Error: self must be used inside a class\n");
            YYABORT;
        }
        struct idrec *entry = lookup(members, members, (yyvsp[(3) - (3)].id).name);
        if(entry == NULL)
        {
            printf("Error: Variable %s not declared\n", (yyvsp[(3) - (3)].id).name);
            YYABORT;
        }
        (yyval.class_id).type = entry->type;
    ;}
    break;

  case 154:
#line 1298 "yacc.y"
    {
        if(members == NULL)
        {
            printf("Error: self must be used inside a class\n");
            YYABORT;
        }
        struct idrec *entry = lookup(members, members, (yyvsp[(3) - (4)].id).name);
        if(entry == NULL)
        {
            printf("Error: Variable %s not declared\n", (yyvsp[(3) - (4)].id).name);
            YYABORT;
        }
        (yyval.class_id).type = entry->type;
    ;}
    break;

  case 159:
#line 1326 "yacc.y"
    {(yyval.op_type) = 0;;}
    break;

  case 160:
#line 1327 "yacc.y"
    {(yyval.op_type) = 1;;}
    break;

  case 161:
#line 1328 "yacc.y"
    {(yyval.op_type) = 2;;}
    break;

  case 162:
#line 1329 "yacc.y"
    {(yyval.op_type) = 3;;}
    break;

  case 163:
#line 1330 "yacc.y"
    {(yyval.op_type) = 4;;}
    break;

  case 164:
#line 1334 "yacc.y"
    { (yyval.type) = 12;;}
    break;

  case 165:
#line 1335 "yacc.y"
    { (yyval.type) = 7;;}
    break;

  case 166:
#line 1336 "yacc.y"
    { (yyval.type) = 8;;}
    break;

  case 167:
#line 1337 "yacc.y"
    { (yyval.type) = 9;;}
    break;

  case 168:
#line 1338 "yacc.y"
    { (yyval.type) = 10;;}
    break;

  case 169:
#line 1339 "yacc.y"
    { (yyval.type) = 11;;}
    break;

  case 170:
#line 1340 "yacc.y"
    { (yyval.type) = 13;;}
    break;

  case 171:
#line 1344 "yacc.y"
    { (yyval.type) = 0;;}
    break;

  case 172:
#line 1345 "yacc.y"
    { (yyval.type) = 2;;}
    break;

  case 173:
#line 1346 "yacc.y"
    { (yyval.type) = 3;;}
    break;

  case 174:
#line 1347 "yacc.y"
    { (yyval.type) = 1;;}
    break;


/* Line 1267 of yacc.c.  */
#line 3524 "yacc.tab.c"
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


#line 1350 "yacc.y"



// error handling
void yyerror(char *s) {
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
       char *token_file = (char *)malloc(100*sizeof(char));
       sprintf(token_file,"../output/%s_tokens.txt",suffix);
       // open the respective files
       yyout = fopen(C_outfile, "w+");
       tf = fopen(token_file,"w+");
   }
   fprintf(yyout,"#include <iostream>\n");
   fprintf(yyout,"#include <string>\n");
   fprintf(yyout,"#include <vector>\n");
   fprintf(yyout,"#include \"teamScribe.h\"\n");
   yyparse();
   return 0;
}

