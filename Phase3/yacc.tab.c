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
     PUBLIC = 297,
     LSB = 298,
     RSB = 299,
     LCB = 300,
     RCB = 301,
     LPB = 302,
     RPB = 303,
     SEMICOLON = 304,
     COMMA = 305,
     DOT = 306,
     COLON = 307,
     ARROW = 308,
     INCLUDE = 309,
     TYPEDEF = 310
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
#define PUBLIC 297
#define LSB 298
#define RSB 299
#define LCB 300
#define RCB 301
#define LPB 302
#define RPB 303
#define SEMICOLON 304
#define COMMA 305
#define DOT 306
#define COLON 307
#define ARROW 308
#define INCLUDE 309
#define TYPEDEF 310




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
    extern int list_flag;
    extern char* init;
    FILE *tf;
    int for_loop = 0;       
    int nested_call = 0;    
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
    int lflag;



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
#line 38 "yacc.y"
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
#line 282 "yacc.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 295 "yacc.tab.c"

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
#define YYLAST   1066

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  56
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  60
/* YYNRULES -- Number of rules.  */
#define YYNRULES  180
/* YYNRULES -- Number of states.  */
#define YYNSTATES  356

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   310

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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     8,     9,    12,    15,    17,    20,
      23,    26,    29,    30,    31,    32,    39,    45,    51,    57,
      63,    69,    73,    75,    76,    79,    82,    85,    88,    94,
      97,   100,   103,   107,   108,   109,   110,   117,   123,   129,
     135,   141,   147,   151,   155,   159,   163,   164,   170,   173,
     174,   176,   178,   180,   182,   184,   186,   188,   190,   195,
     200,   205,   210,   215,   219,   221,   224,   227,   229,   231,
     233,   238,   243,   248,   253,   257,   261,   265,   269,   273,
     277,   283,   285,   288,   292,   296,   302,   306,   310,   316,
     318,   322,   328,   334,   340,   346,   348,   352,   356,   360,
     364,   366,   368,   370,   372,   374,   376,   378,   383,   386,
     389,   391,   393,   395,   399,   404,   409,   412,   419,   424,
     433,   440,   447,   452,   457,   458,   466,   471,   477,   483,
     484,   490,   493,   498,   501,   506,   511,   515,   517,   518,
     521,   525,   530,   531,   537,   538,   544,   548,   550,   554,
     559,   563,   565,   569,   572,   574,   577,   581,   585,   590,
     595,   601,   603,   605,   607,   609,   611,   613,   615,   617,
     619,   621,   623,   625,   627,   629,   631,   633,   635,   637,
     639
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      57,     0,    -1,    -1,    58,    60,    62,    -1,    -1,    59,
      62,    -1,    60,    61,    -1,    61,    -1,    54,     4,    -1,
      83,    62,    -1,    63,    62,    -1,    69,    62,    -1,    -1,
      -1,    -1,    66,    64,    45,    65,    77,    46,    -1,   114,
      40,    47,    67,    48,    -1,   115,    40,    47,    67,    48,
      -1,    40,    40,    47,    67,    48,    -1,    13,    40,    47,
      67,    48,    -1,   102,    40,    47,    67,    48,    -1,    67,
      50,    68,    -1,    68,    -1,    -1,   114,    40,    -1,   115,
      40,    -1,    40,    40,    -1,   102,    40,    -1,    70,    45,
      71,    46,    49,    -1,     7,    40,    -1,    72,    71,    -1,
      76,    71,    -1,    42,    52,    71,    -1,    -1,    -1,    -1,
      75,    73,    45,    74,    77,    46,    -1,   114,    40,    47,
      67,    48,    -1,   115,    40,    47,    67,    48,    -1,    40,
      40,    47,    67,    48,    -1,    13,    40,    47,    67,    48,
      -1,   102,    40,    47,    67,    48,    -1,   114,    84,    49,
      -1,   115,    84,    49,    -1,    40,    84,    49,    -1,   102,
      84,    49,    -1,    -1,    77,    45,    78,    77,    46,    -1,
      77,    79,    -1,    -1,    83,    -1,    90,    -1,    92,    -1,
      95,    -1,   101,    -1,    98,    -1,    85,    -1,    49,    -1,
     109,    53,   109,    49,    -1,   109,    53,   110,    49,    -1,
     110,    53,   109,    49,    -1,   110,    53,   110,    49,    -1,
      55,    80,    40,    49,    -1,    80,    50,    40,    -1,    40,
      -1,   109,    27,    -1,   110,    27,    -1,    83,    -1,    98,
      -1,    85,    -1,   109,    53,   109,    49,    -1,   109,    53,
     110,    49,    -1,   110,    53,   109,    49,    -1,   110,    53,
     110,    49,    -1,   114,    84,    49,    -1,   115,    84,    49,
      -1,    40,    84,    49,    -1,   102,    84,    49,    -1,    84,
      50,    40,    -1,    40,    30,    87,    -1,    84,    50,    40,
      30,    87,    -1,    40,    -1,    86,    49,    -1,   109,    28,
      87,    -1,   110,    28,    87,    -1,    41,    51,    40,    28,
      87,    -1,   109,    30,    87,    -1,   110,    30,    87,    -1,
      41,    51,    40,    30,    87,    -1,    81,    -1,    47,    87,
      48,    -1,    47,    87,    48,   111,    87,    -1,    47,    87,
      48,    29,    87,    -1,    47,    87,    48,   113,    87,    -1,
      47,    87,    48,   112,    87,    -1,    88,    -1,    89,   111,
      87,    -1,    89,    29,    87,    -1,    89,   113,    87,    -1,
      89,   112,    87,    -1,    89,    -1,    81,    -1,     3,    -1,
       6,    -1,     4,    -1,     5,    -1,    99,    -1,    33,    47,
      87,    48,    -1,    33,   109,    -1,    33,   110,    -1,   109,
      -1,   110,    -1,   105,    -1,    41,    51,    40,    -1,    41,
      51,    40,   107,    -1,    91,    45,    77,    46,    -1,    91,
      82,    -1,    91,    45,    77,    46,    39,    90,    -1,    91,
      82,    39,    90,    -1,    91,    45,    77,    46,    39,    45,
      77,    46,    -1,    91,    82,    39,    45,    77,    46,    -1,
      91,    45,    77,    46,    39,    82,    -1,    91,    82,    39,
      82,    -1,    38,    47,    87,    48,    -1,    -1,    94,    86,
      48,    45,    93,    77,    46,    -1,    94,    86,    48,    82,
      -1,    36,    47,    83,    87,    49,    -1,    36,    47,    85,
      87,    49,    -1,    -1,    97,    45,    96,    77,    46,    -1,
      97,    82,    -1,    37,    47,    87,    48,    -1,    99,    49,
      -1,    40,    47,   100,    48,    -1,   110,    47,   100,    48,
      -1,   100,    50,    87,    -1,    87,    -1,    -1,     8,    49,
      -1,     8,    87,    49,    -1,    14,   107,    52,   115,    -1,
      -1,    14,   107,    52,   103,   114,    -1,    -1,    14,   107,
      52,   104,    40,    -1,    45,   106,    46,    -1,    87,    -1,
     106,    50,    87,    -1,    43,    87,    44,   107,    -1,    43,
      87,    44,    -1,   108,    -1,   108,    43,    44,    -1,    43,
      44,    -1,    40,    -1,    40,   107,    -1,    40,    51,    40,
      -1,    40,    51,   110,    -1,    40,    51,    40,   107,    -1,
      40,   107,    51,    40,    -1,    40,   107,    51,    40,   107,
      -1,    31,    -1,    32,    -1,    34,    -1,    35,    -1,    22,
      -1,    23,    -1,    24,    -1,    25,    -1,    26,    -1,    15,
      -1,    16,    -1,    17,    -1,    18,    -1,    19,    -1,    20,
      -1,    21,    -1,     9,    -1,    10,    -1,    11,    -1,    12,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   110,   110,   110,   147,   147,   186,   187,   191,   195,
     196,   197,   198,   203,   211,   203,   233,   252,   271,   295,
     315,   339,   349,   354,   361,   372,   383,   400,   415,   434,
     443,   444,   445,   446,   449,   457,   449,   479,   500,   521,
     547,   568,   592,   612,   634,   660,   687,   687,   688,   689,
     693,   694,   695,   696,   697,   698,   699,   700,   701,   702,
     703,   704,   705,   709,   710,   715,   722,   733,   734,   735,
     736,   737,   738,   739,   744,   768,   792,   821,   850,   856,
     860,   864,   874,   878,   883,   890,   906,   918,   932,   955,
     959,   963,   971,   978,   986,   994,  1001,  1009,  1016,  1024,
    1032,  1039,  1043,  1047,  1051,  1055,  1059,  1063,  1071,  1079,
    1092,  1096,  1105,  1109,  1124,  1143,  1144,  1145,  1146,  1147,
    1148,  1149,  1150,  1154,  1165,  1165,  1166,  1170,  1176,  1185,
    1185,  1186,  1190,  1199,  1203,  1216,  1248,  1256,  1264,  1270,
    1279,  1293,  1298,  1298,  1303,  1303,  1316,  1323,  1332,  1343,
    1350,  1357,  1362,  1365,  1370,  1382,  1399,  1404,  1411,  1416,
    1421,  1430,  1431,  1435,  1436,  1440,  1441,  1442,  1443,  1444,
    1448,  1449,  1450,  1451,  1452,  1453,  1454,  1458,  1459,  1460,
    1461
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
  "UNION_OP", "FOR", "WHILE", "IF", "ELSE", "IDENTIFIER", "SELF", "PUBLIC",
  "LSB", "RSB", "LCB", "RCB", "LPB", "RPB", "SEMICOLON", "COMMA", "DOT",
  "COLON", "ARROW", "INCLUDE", "TYPEDEF", "$accept", "start", "@1", "@2",
  "include_stmts", "include_stmt", "code", "function", "@3", "@4",
  "function_dec", "function_params", "function_param", "class",
  "class_dec", "class_stmt", "class_function", "@5", "@6",
  "class_function_dec", "class_decl_stmt", "statements", "@7", "statement",
  "ids", "unary_stmt", "single_stmt", "decl_stmt", "id_list", "expr_stmt",
  "expr_stmt_without_semicolon", "nested_expr", "expr", "expr_terminal",
  "if_stmt", "if_expr", "for_stmt", "@8", "for_exp", "while_stmt", "@9",
  "while_exp", "call_stmt", "call", "call_args", "return_stmt", "list",
  "@10", "@11", "list_literal", "list_terminal", "dim", "empty_dim",
  "identifier", "class_identifier", "conj", "set_op", "arith_op",
  "data_type_new", "data_type_pr", 0
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
     305,   306,   307,   308,   309,   310
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    56,    58,    57,    59,    57,    60,    60,    61,    62,
      62,    62,    62,    64,    65,    63,    66,    66,    66,    66,
      66,    67,    67,    67,    68,    68,    68,    68,    69,    70,
      71,    71,    71,    71,    73,    74,    72,    75,    75,    75,
      75,    75,    76,    76,    76,    76,    78,    77,    77,    77,
      79,    79,    79,    79,    79,    79,    79,    79,    79,    79,
      79,    79,    79,    80,    80,    81,    81,    82,    82,    82,
      82,    82,    82,    82,    83,    83,    83,    83,    84,    84,
      84,    84,    85,    86,    86,    86,    86,    86,    86,    86,
      87,    87,    87,    87,    87,    87,    88,    88,    88,    88,
      88,    89,    89,    89,    89,    89,    89,    89,    89,    89,
      89,    89,    89,    89,    89,    90,    90,    90,    90,    90,
      90,    90,    90,    91,    93,    92,    92,    94,    94,    96,
      95,    95,    97,    98,    99,    99,   100,   100,   100,   101,
     101,   102,   103,   102,   104,   102,   105,   106,   106,   107,
     107,   107,   108,   108,   109,   109,   110,   110,   110,   110,
     110,   111,   111,   112,   112,   113,   113,   113,   113,   113,
     114,   114,   114,   114,   114,   114,   114,   115,   115,   115,
     115
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     3,     0,     2,     2,     1,     2,     2,
       2,     2,     0,     0,     0,     6,     5,     5,     5,     5,
       5,     3,     1,     0,     2,     2,     2,     2,     5,     2,
       2,     2,     3,     0,     0,     0,     6,     5,     5,     5,
       5,     5,     3,     3,     3,     3,     0,     5,     2,     0,
       1,     1,     1,     1,     1,     1,     1,     1,     4,     4,
       4,     4,     4,     3,     1,     2,     2,     1,     1,     1,
       4,     4,     4,     4,     3,     3,     3,     3,     3,     3,
       5,     1,     2,     3,     3,     5,     3,     3,     5,     1,
       3,     5,     5,     5,     5,     1,     3,     3,     3,     3,
       1,     1,     1,     1,     1,     1,     1,     4,     2,     2,
       1,     1,     1,     3,     4,     4,     2,     6,     4,     8,
       6,     6,     4,     4,     0,     7,     4,     5,     5,     0,
       5,     2,     4,     2,     4,     4,     3,     1,     0,     2,
       3,     4,     0,     5,     0,     5,     3,     1,     3,     4,
       3,     1,     3,     2,     1,     2,     3,     3,     4,     4,
       5,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,     0,    12,     1,     0,    12,     7,     0,   177,
     178,   179,   180,     0,     0,   170,   171,   172,   173,   174,
     175,   176,     0,     5,    12,    13,    12,     0,    12,     0,
       0,     0,     8,     6,     3,    29,     0,     0,     0,   151,
      81,     0,    10,     0,    11,    33,     9,    81,     0,    81,
       0,    81,     0,    23,   102,   104,   105,   103,     0,   154,
       0,   153,     0,     0,   101,     0,    95,   100,   106,   112,
     110,   111,   142,     0,     0,    23,    76,     0,    14,     0,
       0,     0,     0,    33,    34,    33,     0,     0,     0,    23,
      77,    23,    74,    23,    75,     0,     0,    22,     0,     0,
       0,   154,     0,   108,   109,   138,     0,   155,     0,   147,
       0,     0,   150,   165,   166,   167,   168,   169,     0,   161,
     162,   163,   164,     0,     0,     0,    65,    66,   138,     0,
       0,   141,   152,    79,     0,    78,    49,     0,    81,     0,
      33,     0,    30,     0,    31,    81,     0,    81,     0,    81,
       0,     0,     0,     0,    26,    19,     0,    27,    24,    25,
       0,   137,     0,   156,   157,     0,   113,   146,     0,    90,
     149,    97,    96,    99,    98,     0,   143,   145,    18,     0,
       0,    23,    23,    44,    32,    28,    35,    23,    45,    23,
      42,    23,    43,    20,    16,    17,    21,   107,   134,     0,
     158,   159,   114,   148,     0,     0,     0,     0,   135,    80,
       0,     0,     0,     0,   154,     0,    46,    15,    57,     0,
      48,    89,    50,    56,     0,    51,     0,    52,     0,    53,
       0,    55,     0,    54,     0,     0,     0,     0,     0,     0,
       0,    49,     0,     0,     0,   136,   160,    92,    91,    94,
      93,   139,     0,     0,     0,     0,    81,     0,    49,    64,
       0,    82,    49,   116,    67,    69,    68,     0,     0,     0,
       0,     0,   129,   131,   133,     0,     0,     0,     0,     0,
       0,    40,    39,     0,    41,    37,    38,   140,   154,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    49,    83,    86,     0,     0,    84,    87,     0,
       0,    36,     0,     0,   132,   123,     0,     0,    47,    62,
      63,   115,    49,   122,   118,     0,     0,     0,     0,   124,
     126,     0,    58,    59,    60,    61,   127,   128,    85,    88,
       0,     0,    70,    71,    72,    73,    49,   130,    49,   121,
     117,   120,     0,     0,   125,   119
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     3,     6,     7,    23,    24,    43,   136,
      25,    96,    97,    26,    27,    82,    83,   143,   241,    84,
      85,   180,   258,   220,   260,    64,   263,   222,    41,   223,
     224,   161,    66,    67,   225,   226,   227,   346,   228,   229,
     302,   230,   231,    68,   162,   233,   234,   129,   130,    69,
     110,   107,    39,    70,    71,   123,   124,   125,   237,   238
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -295
static const yytype_int16 yypact[] =
{
     -43,    24,     6,   959,  -295,    28,   842,  -295,    41,  -295,
    -295,  -295,  -295,    46,    73,  -295,  -295,  -295,  -295,  -295,
    -295,  -295,    90,  -295,   959,  -295,   959,    93,   959,   112,
     141,   165,  -295,  -295,  -295,  -295,   163,   101,   174,   187,
      15,     7,  -295,   206,  -295,   991,  -295,    66,    44,   102,
      52,   121,    59,   808,  -295,  -295,  -295,  -295,   -27,   156,
     188,  -295,   378,   378,  -295,   208,  -295,  1017,  -295,  -295,
     241,    32,    31,   227,   378,   808,  -295,   232,  -295,   251,
     256,   205,   263,   991,  -295,   991,   262,   270,   274,   808,
    -295,   808,  -295,   808,  -295,   279,   143,  -295,   284,   286,
     290,   -25,   378,  -295,  -295,   378,   291,   276,   293,  -295,
      -2,   288,    73,  -295,  -295,  -295,  -295,  -295,   378,  -295,
    -295,  -295,  -295,   378,   378,   378,  -295,  -295,   378,   217,
     298,  -295,  -295,  -295,   210,   305,  -295,   299,   130,   108,
     991,   296,  -295,   302,  -295,   132,   116,   137,   136,   150,
     164,   213,   216,   219,  -295,  -295,   808,  -295,  -295,  -295,
     301,  -295,   230,   -25,  -295,   311,    73,  -295,   378,  1031,
    -295,  -295,  -295,  -295,  -295,   236,  -295,  -295,  -295,   378,
     501,   808,   808,  -295,  -295,  -295,  -295,   808,  -295,   808,
    -295,   808,  -295,  -295,  -295,  -295,  -295,  -295,  -295,   378,
     276,    73,  -295,  -295,   378,   378,   378,   378,  -295,  -295,
     114,   306,   307,   308,   149,   310,  -295,  -295,  -295,   316,
    -295,  -295,  -295,  -295,   309,  -295,   442,  -295,   177,  -295,
     907,  -295,   317,  -295,   324,    50,     8,   324,   324,   244,
     249,  -295,   255,   258,   272,  -295,  -295,  -295,  -295,  -295,
    -295,  -295,   318,  1004,   378,   378,   327,   325,  -295,  -295,
      13,  -295,  -295,   330,  -295,  -295,  -295,    70,    22,   323,
     181,   194,  -295,  -295,  -295,   378,   378,   333,   378,   378,
     333,  -295,  -295,   543,  -295,  -295,  -295,  -295,   147,   378,
     378,   326,   329,   295,   585,   336,   335,   627,   857,   333,
     333,   944,  -295,  -295,  -295,   337,   338,  -295,  -295,   340,
     342,  -295,   343,   344,  -295,  -295,   378,   378,  -295,  -295,
    -295,   355,  -295,  -295,  -295,   346,   347,   348,   352,  -295,
    -295,   669,  -295,  -295,  -295,  -295,  -295,  -295,  -295,  -295,
     894,   711,  -295,  -295,  -295,  -295,  -295,  -295,  -295,  -295,
    -295,  -295,   753,   795,  -295,  -295
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -295,  -295,  -295,  -295,  -295,   373,    86,  -295,  -295,  -295,
    -295,   -60,   246,  -295,  -295,   -66,  -295,  -295,  -295,  -295,
    -295,  -211,  -295,  -295,  -295,  -158,  -225,    -3,   -22,  -216,
     175,   -35,  -295,  -295,  -294,  -295,  -295,  -295,  -295,  -295,
    -295,  -295,  -214,   183,   277,  -295,   315,  -295,  -295,  -295,
    -295,   -13,  -295,   -24,   -52,   238,   243,   245,   259,   287
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -145
static const yytype_int16 yytable[] =
{
      28,    38,    65,    28,   324,   273,   104,    48,    50,    52,
     265,    -2,   266,   101,   265,   134,   266,   142,    37,   144,
     102,    28,   221,    28,     4,    28,   106,   109,   111,   151,
     283,   152,    32,   153,   103,   127,   278,   290,   279,   133,
       9,    10,    11,    12,   167,    74,   350,   294,   168,   127,
     278,   297,   279,   295,   164,   128,    76,    77,   139,   127,
       5,   280,    75,   296,   146,   148,   150,   160,   221,   128,
     221,  -144,   221,   323,   184,   300,   330,   126,   275,   128,
     276,    35,   265,   171,   266,   265,    36,   266,   172,   173,
     174,   331,    34,    90,    77,   221,    74,   126,   275,   170,
     276,    92,    77,   277,    54,    55,    56,    57,    94,    77,
      42,   341,    44,    89,    46,   349,    37,    54,    55,    56,
      57,   239,   240,   299,   265,   221,   266,   242,   236,   243,
      40,   244,    74,   203,    58,   352,   221,   353,    45,   221,
     221,    59,    60,   221,   209,    61,    62,    58,    63,    91,
     200,    74,    47,   202,    59,    60,   235,   183,    77,    62,
      74,    63,    74,   251,   245,   188,    77,    74,    93,   247,
     248,   249,   250,   221,   268,   252,   271,   182,   268,   187,
      74,    49,   221,   221,   189,   190,    77,   256,   246,   256,
      37,   155,    37,   156,   221,   221,   105,   191,   106,    37,
     106,   271,   267,   105,   270,    51,   267,   106,   126,   275,
      53,   276,    48,   192,    77,    50,    52,   101,   215,   291,
     292,   127,   278,   264,   279,   306,    72,   264,   310,   270,
      73,   236,    15,    16,    17,    18,    19,    20,    21,   108,
     303,   304,   236,   307,   308,   236,   268,   326,   328,   268,
     289,    78,   112,   305,   312,   313,   309,   140,   178,   235,
     156,   193,    30,   156,   194,    30,   156,   195,   126,   156,
     235,   132,   135,   235,   267,   325,   327,   267,   198,   236,
     199,   338,   339,    30,   208,    30,   199,    30,   268,   236,
      31,   137,   281,    31,   156,   264,   138,   282,   264,   156,
     236,   236,   145,   284,    87,   156,   285,   235,   156,   141,
     147,    31,    99,    31,   149,    31,   267,   235,    29,   154,
     286,    29,   156,   316,   157,   317,   158,   165,   235,   235,
     159,   163,    88,   166,    99,   179,   169,   264,   177,    29,
     100,    29,    87,    29,    87,   185,   181,   186,    99,   197,
      99,   201,    99,   253,   254,   255,   259,    74,   261,   131,
      86,   257,   100,   232,   256,   293,   274,   287,    98,   298,
      88,   301,    88,   101,   314,   320,   100,   315,   100,    33,
     100,    54,    55,    56,    57,   319,   332,   333,   176,   334,
      98,   335,   336,   337,   340,   342,   343,   344,    86,    87,
      86,   345,   196,   269,    98,   175,    98,   205,    98,   232,
       0,    58,   206,   232,   207,    99,     0,     0,    59,    60,
       0,     0,     0,    62,     0,    63,     0,    88,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      99,    99,     0,   100,     0,     0,    99,     0,    99,     0,
      99,     9,    10,    11,    12,    86,    14,    15,    16,    17,
      18,    19,    20,    21,     0,     0,   232,     0,   100,   100,
       0,    98,     0,     0,   100,     0,   100,   232,   100,     0,
     232,   232,   214,   215,   232,     0,     0,   262,     0,     0,
       0,     0,     0,     0,     0,     0,    98,    98,     0,     0,
       0,     0,    98,     0,    98,     0,    98,     0,     0,   210,
       9,    10,    11,    12,   232,    14,    15,    16,    17,    18,
      19,    20,    21,   232,   232,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   232,   232,   211,   212,   213,
       0,   214,   215,     0,     0,     0,   216,   217,     0,     0,
     218,   210,     9,    10,    11,    12,   219,    14,    15,    16,
      17,    18,    19,    20,    21,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   211,
     212,   213,     0,   214,   215,     0,     0,     0,   216,   311,
       0,     0,   218,   210,     9,    10,    11,    12,   219,    14,
      15,    16,    17,    18,    19,    20,    21,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   211,   212,   213,     0,   214,   215,     0,     0,     0,
     216,   318,     0,     0,   218,   210,     9,    10,    11,    12,
     219,    14,    15,    16,    17,    18,    19,    20,    21,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   211,   212,   213,     0,   214,   215,     0,
       0,     0,   216,   321,     0,     0,   218,   210,     9,    10,
      11,    12,   219,    14,    15,    16,    17,    18,    19,    20,
      21,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   211,   212,   213,     0,   214,
     215,     0,     0,     0,   216,   347,     0,     0,   218,   210,
       9,    10,    11,    12,   219,    14,    15,    16,    17,    18,
      19,    20,    21,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   211,   212,   213,
       0,   214,   215,     0,     0,     0,   216,   351,     0,     0,
     218,   210,     9,    10,    11,    12,   219,    14,    15,    16,
      17,    18,    19,    20,    21,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   211,
     212,   213,     0,   214,   215,     0,     0,     0,   216,   354,
       0,     0,   218,   210,     9,    10,    11,    12,   219,    14,
      15,    16,    17,    18,    19,    20,    21,     9,    10,    11,
      12,     0,    14,    15,    16,    17,    18,    19,    20,    21,
       0,   211,   212,   213,     0,   214,   215,     0,     0,     0,
     216,   355,     0,     0,   218,     0,     0,     0,    95,     8,
     219,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,     0,     0,     9,    10,    11,    12,
       0,    14,    15,    16,    17,    18,    19,    20,    21,     0,
       0,     0,    22,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   213,     5,   214,   215,     0,
       0,     0,   322,     9,    10,    11,    12,     0,    14,    15,
      16,    17,    18,    19,    20,    21,     9,    10,    11,    12,
       0,    14,    15,    16,    17,    18,    19,    20,    21,     0,
       0,     0,   213,     0,   214,   215,     0,     0,     0,   348,
       0,     0,     0,     0,     0,     0,     0,   214,   215,     0,
       0,     0,   272,     9,    10,    11,    12,     0,    14,    15,
      16,    17,    18,    19,    20,    21,     8,     0,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,     0,     0,     0,   214,   215,     0,     0,     0,   329,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    22,
       9,    10,    11,    12,    79,    14,    15,    16,    17,    18,
      19,    20,    21,     9,    10,    11,    12,     0,    14,    15,
      16,    17,    18,    19,    20,    21,     0,     0,     0,     0,
       0,    80,     0,    81,     0,     0,     0,     0,     0,   113,
     114,   115,   116,   117,   288,   215,   118,     0,   119,   120,
       0,   121,   122,   113,   114,   115,   116,   117,     0,     0,
     204,     0,   119,   120,     0,   121,   122
};

static const yytype_int16 yycheck[] =
{
       3,    14,    37,     6,   298,   230,    58,    29,    30,    31,
     226,    54,   226,    40,   230,    75,   230,    83,    43,    85,
      47,    24,   180,    26,     0,    28,    51,    62,    63,    89,
     241,    91,     4,    93,    58,    27,    28,   253,    30,    74,
       9,    10,    11,    12,    46,    30,   340,   258,    50,    27,
      28,   262,    30,    40,   106,    47,    49,    50,    80,    27,
      54,    53,    47,    50,    86,    87,    88,   102,   226,    47,
     228,    40,   230,   298,   140,    53,   301,    27,    28,    47,
      30,    40,   298,   118,   298,   301,    40,   301,   123,   124,
     125,   302,     6,    49,    50,   253,    30,    27,    28,   112,
      30,    49,    50,    53,     3,     4,     5,     6,    49,    50,
      24,   322,    26,    47,    28,   340,    43,     3,     4,     5,
       6,   181,   182,    53,   340,   283,   340,   187,   180,   189,
      40,   191,    30,   168,    33,   346,   294,   348,    45,   297,
     298,    40,    41,   301,   179,    44,    45,    33,    47,    47,
     163,    30,    40,   166,    40,    41,   180,    49,    50,    45,
      30,    47,    30,    49,   199,    49,    50,    30,    47,   204,
     205,   206,   207,   331,   226,   210,   228,    47,   230,    47,
      30,    40,   340,   341,    47,    49,    50,    40,   201,    40,
      43,    48,    43,    50,   352,   353,    47,    47,    51,    43,
      51,   253,   226,    47,   228,    40,   230,    51,    27,    28,
      47,    30,   234,    49,    50,   237,   238,    40,    41,   254,
     255,    27,    28,   226,    30,   277,    52,   230,   280,   253,
      43,   283,    15,    16,    17,    18,    19,    20,    21,    51,
     275,   276,   294,   278,   279,   297,   298,   299,   300,   301,
     253,    45,    44,   277,   289,   290,   280,    52,    48,   283,
      50,    48,     3,    50,    48,     6,    50,    48,    27,    50,
     294,    44,    40,   297,   298,   299,   300,   301,    48,   331,
      50,   316,   317,    24,    48,    26,    50,    28,   340,   341,
       3,    40,    48,     6,    50,   298,    40,    48,   301,    50,
     352,   353,    40,    48,    45,    50,    48,   331,    50,    46,
      40,    24,    53,    26,    40,    28,   340,   341,     3,    40,
      48,     6,    50,    28,    40,    30,    40,    51,   352,   353,
      40,    40,    45,    40,    75,    30,    48,   340,    40,    24,
      53,    26,    83,    28,    85,    49,    47,    45,    89,    48,
      91,    40,    93,    47,    47,    47,    40,    30,    49,    72,
      45,    51,    75,   180,    40,    40,    49,    49,    53,    39,
      83,    48,    85,    40,    48,    40,    89,    48,    91,     6,
      93,     3,     4,     5,     6,    49,    49,    49,   129,    49,
      75,    49,    49,    49,    39,    49,    49,    49,    83,   140,
      85,    49,   156,   228,    89,   128,    91,   169,    93,   226,
      -1,    33,   169,   230,   169,   156,    -1,    -1,    40,    41,
      -1,    -1,    -1,    45,    -1,    47,    -1,   140,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     181,   182,    -1,   156,    -1,    -1,   187,    -1,   189,    -1,
     191,     9,    10,    11,    12,   140,    14,    15,    16,    17,
      18,    19,    20,    21,    -1,    -1,   283,    -1,   181,   182,
      -1,   156,    -1,    -1,   187,    -1,   189,   294,   191,    -1,
     297,   298,    40,    41,   301,    -1,    -1,    45,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   181,   182,    -1,    -1,
      -1,    -1,   187,    -1,   189,    -1,   191,    -1,    -1,     8,
       9,    10,    11,    12,   331,    14,    15,    16,    17,    18,
      19,    20,    21,   340,   341,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   352,   353,    36,    37,    38,
      -1,    40,    41,    -1,    -1,    -1,    45,    46,    -1,    -1,
      49,     8,     9,    10,    11,    12,    55,    14,    15,    16,
      17,    18,    19,    20,    21,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    36,
      37,    38,    -1,    40,    41,    -1,    -1,    -1,    45,    46,
      -1,    -1,    49,     8,     9,    10,    11,    12,    55,    14,
      15,    16,    17,    18,    19,    20,    21,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    36,    37,    38,    -1,    40,    41,    -1,    -1,    -1,
      45,    46,    -1,    -1,    49,     8,     9,    10,    11,    12,
      55,    14,    15,    16,    17,    18,    19,    20,    21,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    36,    37,    38,    -1,    40,    41,    -1,
      -1,    -1,    45,    46,    -1,    -1,    49,     8,     9,    10,
      11,    12,    55,    14,    15,    16,    17,    18,    19,    20,
      21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    36,    37,    38,    -1,    40,
      41,    -1,    -1,    -1,    45,    46,    -1,    -1,    49,     8,
       9,    10,    11,    12,    55,    14,    15,    16,    17,    18,
      19,    20,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    36,    37,    38,
      -1,    40,    41,    -1,    -1,    -1,    45,    46,    -1,    -1,
      49,     8,     9,    10,    11,    12,    55,    14,    15,    16,
      17,    18,    19,    20,    21,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    36,
      37,    38,    -1,    40,    41,    -1,    -1,    -1,    45,    46,
      -1,    -1,    49,     8,     9,    10,    11,    12,    55,    14,
      15,    16,    17,    18,    19,    20,    21,     9,    10,    11,
      12,    -1,    14,    15,    16,    17,    18,    19,    20,    21,
      -1,    36,    37,    38,    -1,    40,    41,    -1,    -1,    -1,
      45,    46,    -1,    -1,    49,    -1,    -1,    -1,    40,     7,
      55,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    -1,    -1,     9,    10,    11,    12,
      -1,    14,    15,    16,    17,    18,    19,    20,    21,    -1,
      -1,    -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    38,    54,    40,    41,    -1,
      -1,    -1,    45,     9,    10,    11,    12,    -1,    14,    15,
      16,    17,    18,    19,    20,    21,     9,    10,    11,    12,
      -1,    14,    15,    16,    17,    18,    19,    20,    21,    -1,
      -1,    -1,    38,    -1,    40,    41,    -1,    -1,    -1,    45,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    41,    -1,
      -1,    -1,    45,     9,    10,    11,    12,    -1,    14,    15,
      16,    17,    18,    19,    20,    21,     7,    -1,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    -1,    -1,    -1,    40,    41,    -1,    -1,    -1,    45,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,     9,    10,    11,    12,    -1,    14,    15,
      16,    17,    18,    19,    20,    21,    -1,    -1,    -1,    -1,
      -1,    40,    -1,    42,    -1,    -1,    -1,    -1,    -1,    22,
      23,    24,    25,    26,    40,    41,    29,    -1,    31,    32,
      -1,    34,    35,    22,    23,    24,    25,    26,    -1,    -1,
      29,    -1,    31,    32,    -1,    34,    35
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    57,    58,    59,     0,    54,    60,    61,     7,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    40,    62,    63,    66,    69,    70,    83,   102,
     114,   115,     4,    61,    62,    40,    40,    43,   107,   108,
      40,    84,    62,    64,    62,    45,    62,    40,    84,    40,
      84,    40,    84,    47,     3,     4,     5,     6,    33,    40,
      41,    44,    45,    47,    81,    87,    88,    89,    99,   105,
     109,   110,    52,    43,    30,    47,    49,    50,    45,    13,
      40,    42,    71,    72,    75,    76,   102,   114,   115,    47,
      49,    47,    49,    47,    49,    40,    67,    68,   102,   114,
     115,    40,    47,   109,   110,    47,    51,   107,    51,    87,
     106,    87,    44,    22,    23,    24,    25,    26,    29,    31,
      32,    34,    35,   111,   112,   113,    27,    27,    47,   103,
     104,   115,    44,    87,    67,    40,    65,    40,    40,    84,
      52,    46,    71,    73,    71,    40,    84,    40,    84,    40,
      84,    67,    67,    67,    40,    48,    50,    40,    40,    40,
      87,    87,   100,    40,   110,    51,    40,    46,    50,    48,
     107,    87,    87,    87,    87,   100,   114,    40,    48,    30,
      77,    47,    47,    49,    71,    49,    45,    47,    49,    47,
      49,    47,    49,    48,    48,    48,    68,    48,    48,    50,
     107,    40,   107,    87,    29,   111,   112,   113,    48,    87,
       8,    36,    37,    38,    40,    41,    45,    46,    49,    55,
      79,    81,    83,    85,    86,    90,    91,    92,    94,    95,
      97,    98,    99,   101,   102,   109,   110,   114,   115,    67,
      67,    74,    67,    67,    67,    87,   107,    87,    87,    87,
      87,    49,    87,    47,    47,    47,    40,    51,    78,    40,
      80,    49,    45,    82,    83,    85,    98,   109,   110,    86,
     109,   110,    45,    82,    49,    28,    30,    53,    28,    30,
      53,    48,    48,    77,    48,    48,    48,    49,    40,    83,
      85,    87,    87,    40,    77,    40,    50,    77,    39,    53,
      53,    48,    96,    87,    87,   109,   110,    87,    87,   109,
     110,    46,    87,    87,    48,    48,    28,    30,    46,    49,
      40,    46,    45,    82,    90,   109,   110,   109,   110,    45,
      82,    77,    49,    49,    49,    49,    49,    49,    87,    87,
      39,    77,    49,    49,    49,    49,    93,    46,    45,    82,
      90,    46,    77,    77,    46,    46
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
#line 110 "yacc.y"
    {
        global_table = init_symtab();
        function_table = init_functab();
        init_functab_entries(function_table);
        class_table = init_classtab();
        init_member_class(class_table);
        params = NULL;
        local_table = global_table;
        members = NULL;
        methods = NULL;
        scope = 0;
    ;}
    break;

  case 3:
#line 122 "yacc.y"
    {
        printf("Global Table : \n");
        display_symtab(global_table);
        printf("\n\nFunction Table : \n");
        display_functab(function_table);
        printf("\n\nClass Table : \n");
        display_classtab(class_table);
        printf("fds");
        struct funcrec  *entry = (struct funcrec *)malloc(sizeof(struct funcrec));
        entry -> name = "main";
        entry -> type = 0;
        entry -> dim = 0;
        entry -> params = NULL;
        entry -> num_params = 0;
        entry -> next = NULL;
        entry -> local_table = init_symtab();
        if(search_functab(function_table, entry, 0) == NULL)
        {
            printf("Error: Main function not declared\n");
            YYABORT;
        }      
        free_symtab(global_table);
        free_functab(function_table);
        free_classtab(class_table);
    ;}
    break;

  case 4:
#line 147 "yacc.y"
    {
        global_table = init_symtab();
        function_table = init_functab();
        init_functab_entries(function_table);
        class_table = init_classtab();
        init_member_class(class_table);
        params = NULL;
        local_table = global_table;
        members = NULL;
        methods = NULL;
        scope = 0;
    ;}
    break;

  case 5:
#line 158 "yacc.y"
    {
        printf("Global Table : \n");
        display_symtab(global_table);
        printf("\n\nFunction Table : \n");
        display_functab(function_table);
        printf("\n\nClass Table : \n");
        display_classtab(class_table);
        printf("fds\n\n\n\n\n\n\n");
        struct funcrec  *entry = (struct funcrec *)malloc(sizeof(struct funcrec));
        entry -> name = "main";
        entry -> type = 0;
        entry -> dim = 0;
        entry -> params = NULL;
        entry -> num_params = 0;
        entry -> next = NULL;
        entry -> local_table = init_symtab();
        if(search_functab(function_table, entry, 0) == NULL)
        {
            printf("Error: Main function not declared\n");
            YYABORT;
        }
        free_symtab(global_table);
        free_functab(function_table);
        free_classtab(class_table);
    ;}
    break;

  case 13:
#line 203 "yacc.y"
    {
            local_table = (yyvsp[(1) - (1)].functions).local_table;
            params = (yyvsp[(1) - (1)].functions).params;
            if((yyvsp[(1) - (1)].functions).type == 4)
                rflag = true;
            else
                rflag = false;
            return_type = (yyvsp[(1) - (1)].functions).type;
        ;}
    break;

  case 14:
#line 211 "yacc.y"
    {scope++;;}
    break;

  case 15:
#line 211 "yacc.y"
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
#line 233 "yacc.y"
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
#line 252 "yacc.y"
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
#line 271 "yacc.y"
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
#line 295 "yacc.y"
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
#line 315 "yacc.y"
    {
        struct funcrec *entry = (struct funcrec *)malloc(sizeof(struct funcrec));
        entry -> name = (yyvsp[(2) - (5)].id).name;
        entry -> type = (yyvsp[(1) - (5)].list).type;
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
#line 339 "yacc.y"
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
#line 349 "yacc.y"
    {
        (yyval.functions).params = init_symtab();
        insert_symtab((yyval.functions).params, (yyvsp[(1) - (1)].param));
        (yyval.functions).num_params = 1;
    ;}
    break;

  case 23:
#line 354 "yacc.y"
    {
        (yyval.functions).params = init_symtab();
        (yyval.functions).num_params = 0;
    ;}
    break;

  case 24:
#line 361 "yacc.y"
    {
        struct idrec *entry = (struct idrec *)malloc(sizeof(struct idrec));
        entry -> name = (yyvsp[(2) - (2)].id).name;
        entry -> type = (yyvsp[(1) - (2)].type);
        entry -> arr = false;
        entry -> dim = 0;
        entry -> scope = 1;
        entry -> next = NULL;
        entry -> class_name = map_type[(yyvsp[(1) - (2)].type)];       
        (yyval.param) = entry;
    ;}
    break;

  case 25:
#line 372 "yacc.y"
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
#line 383 "yacc.y"
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
#line 400 "yacc.y"
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
#line 415 "yacc.y"
    {
        struct classrec *entry = (struct classrec *)malloc(sizeof(struct classrec));
        entry -> name = (yyvsp[(1) - (5)].id).name;
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
#line 434 "yacc.y"
    {
        (yyval.id).name = (yyvsp[(2) - (2)].id).name;
        (yyvsp[(2) - (2)].id).type = 14;
        members = init_symtab();
        methods = init_functab();
    ;}
    break;

  case 34:
#line 449 "yacc.y"
    {
            local_table = (yyvsp[(1) - (1)].functions).local_table;
            params = (yyvsp[(1) - (1)].functions).params;
            if((yyvsp[(1) - (1)].functions).type == 4)
                rflag = true;
            else
                rflag = false;
            return_type = (yyvsp[(1) - (1)].functions).type;
        ;}
    break;

  case 35:
#line 457 "yacc.y"
    {scope++;;}
    break;

  case 36:
#line 457 "yacc.y"
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

  case 37:
#line 479 "yacc.y"
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

  case 38:
#line 500 "yacc.y"
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

  case 39:
#line 521 "yacc.y"
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

  case 40:
#line 547 "yacc.y"
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

  case 41:
#line 568 "yacc.y"
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

  case 42:
#line 592 "yacc.y"
    {
        struct snode* temp = (yyvsp[(2) - (3)].namelist)->head;
        while(temp != NULL){
            struct idrec *entry = (struct idrec *)malloc(sizeof(struct idrec));
            entry -> type = (yyvsp[(1) - (3)].type);
            entry -> arr = false;
            entry -> scope = 1; 
            entry -> name = temp->val;
            entry -> class_name = map_type[(yyvsp[(1) - (3)].type)];
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

  case 43:
#line 612 "yacc.y"
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

  case 44:
#line 634 "yacc.y"
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

  case 45:
#line 660 "yacc.y"
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
        init = "";
        lflag = 1;
    ;}
    break;

  case 46:
#line 687 "yacc.y"
    {scope++;;}
    break;

  case 47:
#line 687 "yacc.y"
    {scope--;;}
    break;

  case 49:
#line 689 "yacc.y"
    {;}
    break;

  case 65:
#line 715 "yacc.y"
    {
        if((yyvsp[(1) - (2)].class_id).type != 0 && (yyvsp[(1) - (2)].class_id).type != 1){
            printf("Error: Unary operator not defined for type %s\n", map_type[(yyvsp[(1) - (2)].class_id).type]); 
            YYABORT;
        }
        (yyval.type) = (yyvsp[(1) - (2)].class_id).type;
    ;}
    break;

  case 66:
#line 722 "yacc.y"
    {
        int *a = (int*) malloc(sizeof(int)), *b = (int*) malloc(sizeof(int));
        check_namelist((yyvsp[(1) - (2)].class_id).namelist, global_table, local_table, class_table, NULL, -1, a, b);
        if((yyvsp[(1) - (2)].class_id).type != 0 && (yyvsp[(1) - (2)].class_id).type != 1){
            printf("Error: Unary operator not defined for type %s\n", map_type[(yyvsp[(1) - (2)].class_id).type]); 
            YYABORT;
        }
    ;}
    break;

  case 74:
#line 744 "yacc.y"
    {
        struct snode* temp = (yyvsp[(2) - (3)].namelist)->head;
        while(temp != NULL){
            struct idrec *entry = (struct idrec*) malloc(sizeof(struct idrec));
            entry -> type = (yyvsp[(1) - (3)].type);
            entry -> arr = false;
            entry -> scope = scope; 
            entry -> name = temp->val;
            entry -> class_name = map_type[(yyvsp[(1) - (3)].type)];
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
#line 768 "yacc.y"
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

  case 76:
#line 792 "yacc.y"
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

  case 77:
#line 821 "yacc.y"
    {
        struct snode* temp = (yyvsp[(2) - (3)].namelist)->head;
        while(temp != NULL){
            struct idrec *entry = (struct idrec*) malloc(sizeof(struct idrec));
            entry -> type = (yyvsp[(1) - (3)].list).type;
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
        init = "";
        lflag = 1;
    ;}
    break;

  case 78:
#line 850 "yacc.y"
    {
        insert_slist((yyvsp[(1) - (3)].namelist), (yyvsp[(3) - (3)].id).name);
        (yyval.namelist) = (yyvsp[(1) - (3)].namelist);
        if(lflag)
            fprintf(yyout, "%s", init);
    ;}
    break;

  case 79:
#line 856 "yacc.y"
    {
        (yyval.namelist) = init_slist();
        insert_slist((yyval.namelist), (yyvsp[(1) - (3)].id).name);
    ;}
    break;

  case 80:
#line 860 "yacc.y"
    {
        insert_slist((yyvsp[(1) - (5)].namelist), (yyvsp[(3) - (5)].id).name);
        (yyval.namelist) = (yyvsp[(1) - (5)].namelist);
    ;}
    break;

  case 81:
#line 864 "yacc.y"
    {
        (yyval.namelist) = init_slist();
        insert_slist((yyval.namelist), (yyvsp[(1) - (1)].id).name);
        if(lflag)
            fprintf(yyout, "%s", init);
    ;}
    break;

  case 83:
#line 878 "yacc.y"
    {
        if(!check_assign_op((yyvsp[(1) - (3)].class_id).type, (yyvsp[(3) - (3)].exprs).type, (yyvsp[(2) - (3)].assignop))){
            YYABORT;
        }
    ;}
    break;

  case 84:
#line 883 "yacc.y"
    {
        int *a = (int*) malloc(sizeof(int)), *b = (int*) malloc(sizeof(int));
        check_namelist((yyvsp[(1) - (3)].class_id).namelist, global_table, local_table, class_table, NULL, -1, a, b);
        if(!check_assign_op((yyvsp[(1) - (3)].class_id).type, (yyvsp[(3) - (3)].exprs).type, (yyvsp[(2) - (3)].assignop))){
            YYABORT;
        }
    ;}
    break;

  case 85:
#line 890 "yacc.y"
    {
        struct idrec *entry = lookup(members, members, (yyvsp[(3) - (5)].id).name);
        if(entry == NULL)
        {
            printf("Error: Class has no member %s declared\n", (yyvsp[(3) - (5)].id).name);
            YYABORT;
        }
        if(!check_assign_op(entry -> type, (yyvsp[(5) - (5)].exprs).type, (yyvsp[(4) - (5)].assignop))){
            YYABORT;
        }
        if(members == NULL)
        {
            printf("Error: self must be used inside a class\n");
            YYABORT;
        }
    ;}
    break;

  case 86:
#line 906 "yacc.y"
    {
        if((yyvsp[(1) - (3)].class_id).dim != 0 && (yyvsp[(3) - (3)].exprs).dim != 0){
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

  case 87:
#line 918 "yacc.y"
    {
        int *a = (int*) malloc(sizeof(int)), *b = (int*) malloc(sizeof(int));
        check_namelist((yyvsp[(1) - (3)].class_id).namelist, global_table, local_table, class_table, NULL, -1, a, b);
        if((yyvsp[(1) - (3)].class_id).dim != 0 && (yyvsp[(3) - (3)].exprs).dim != 0){
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

  case 88:
#line 932 "yacc.y"
    {
        if(members == NULL)
        {
            printf("Error: self must be used inside a class\n");
            YYABORT;
        }
        struct idrec *entry = lookup(members, members, (yyvsp[(3) - (5)].id).name);
        if(entry == NULL)
        {
            printf("Error: Class has no member %s declared\n", (yyvsp[(3) - (5)].id).name);
            YYABORT;
        }
        if(entry -> dim != 0 && (yyvsp[(5) - (5)].exprs).dim != 0){
            if(entry -> dim != (yyvsp[(5) - (5)].exprs).dim){
                printf("Error: Dimension mismatch in assignment\n");
                printf("LHS is of dimension %i and RHS is of dimension %i\n", entry -> dim, (yyvsp[(5) - (5)].exprs).dim);
                YYABORT;
            }
        }
        else if(!check_assign_op(entry -> type, (yyvsp[(5) - (5)].exprs).type, 7)){
            YYABORT;
        }
    ;}
    break;

  case 90:
#line 959 "yacc.y"
    {
        (yyval.exprs).type = (yyvsp[(2) - (3)].exprs).type;
        (yyval.exprs).dim = (yyvsp[(2) - (3)].exprs).dim;
    ;}
    break;

  case 91:
#line 963 "yacc.y"
    {
        if((yyvsp[(5) - (5)].exprs).type != 3 || (yyvsp[(2) - (5)].exprs).type != 3){
            printf("Error: Type mismatch\n");
            YYABORT;
        }
        (yyval.exprs).type = (yyvsp[(2) - (5)].exprs).type;
        (yyval.exprs).dim = 0;
    ;}
    break;

  case 92:
#line 971 "yacc.y"
    {
        if(!check_rel_op((yyvsp[(2) - (5)].exprs).type, (yyvsp[(5) - (5)].exprs).type, (yyvsp[(4) - (5)].assignop))){
            YYABORT;
        }
        (yyval.exprs).type = 3;
        (yyval.exprs).dim = 0;
    ;}
    break;

  case 93:
#line 978 "yacc.y"
    {
        (yyval.exprs).type = check_arith_op((yyvsp[(2) - (5)].exprs).type, (yyvsp[(5) - (5)].exprs).type, (yyvsp[(4) - (5)].op_type));
        if((yyval.exprs).type == -1)
        {
            YYABORT;
        }
        (yyval.exprs).dim = 0;
    ;}
    break;

  case 94:
#line 986 "yacc.y"
    {
        if((yyvsp[(2) - (5)].exprs).type != 7 || (yyvsp[(5) - (5)].exprs).type != 7){
            printf("Error: Invalid operands for \n");
            YYABORT;
        }
        (yyval.exprs).type = (yyvsp[(2) - (5)].exprs).type; 
        (yyval.exprs).dim = 0;
    ;}
    break;

  case 95:
#line 994 "yacc.y"
    {
        (yyval.exprs).type = (yyvsp[(1) - (1)].exprs).type;
        (yyval.exprs).dim = (yyvsp[(1) - (1)].exprs).dim; 
    ;}
    break;

  case 96:
#line 1001 "yacc.y"
    {
        if((yyvsp[(1) - (3)].exprs).type != 3 || (yyvsp[(3) - (3)].exprs).type != 3 ){
            printf("Error: Type mismatch\n");
            YYABORT;
        }
        (yyval.exprs).type = 3;
        (yyval.exprs).dim = 0;
    ;}
    break;

  case 97:
#line 1009 "yacc.y"
    {
        if(!check_rel_op((yyvsp[(1) - (3)].exprs).type, (yyvsp[(3) - (3)].exprs).type, (yyvsp[(2) - (3)].assignop))){
            YYABORT;
        }
        (yyval.exprs).type = 3;
        (yyval.exprs).dim = 0;
    ;}
    break;

  case 98:
#line 1016 "yacc.y"
    {
        (yyval.exprs).type = check_arith_op((yyvsp[(1) - (3)].exprs).type, (yyvsp[(3) - (3)].exprs).type, (yyvsp[(2) - (3)].op_type));
        if((yyval.exprs).type == -1)
        {
            YYABORT;
        }
        (yyval.exprs).dim = 0;
    ;}
    break;

  case 99:
#line 1024 "yacc.y"
    {
        if((yyvsp[(1) - (3)].exprs).type != 7 || (yyvsp[(3) - (3)].exprs).type != 7){
            printf("Error: Invalid operands for \n");
            YYABORT;
        }
        (yyval.exprs).type = (yyvsp[(1) - (3)].exprs).type;
        (yyval.exprs).dim = 0;    
    ;}
    break;

  case 100:
#line 1032 "yacc.y"
    {
        (yyval.exprs).type = (yyvsp[(1) - (1)].exprs).type;
        (yyval.exprs).dim = (yyvsp[(1) - (1)].exprs).dim;
    ;}
    break;

  case 101:
#line 1039 "yacc.y"
    {
        (yyval.exprs).type = (yyvsp[(1) - (1)].type);
        (yyval.exprs).dim = 0;
    ;}
    break;

  case 102:
#line 1043 "yacc.y"
    {
        (yyval.exprs).type = 0;
        (yyval.exprs).dim = 0;
    ;}
    break;

  case 103:
#line 1047 "yacc.y"
    { 
        (yyval.exprs).type = 1;
        (yyval.exprs).dim = 0;
    ;}
    break;

  case 104:
#line 1051 "yacc.y"
    {
        (yyval.exprs).type = 2;   
        (yyval.exprs).dim = 0; 
    ;}
    break;

  case 105:
#line 1055 "yacc.y"
    {
        (yyval.exprs).type = 3;
        (yyval.exprs).dim = 0;
    ;}
    break;

  case 106:
#line 1059 "yacc.y"
    {
        (yyval.exprs).type = (yyvsp[(1) - (1)].exprs).type;
        (yyval.exprs).dim = (yyvsp[(1) - (1)].exprs).dim;
    ;}
    break;

  case 107:
#line 1063 "yacc.y"
    {
        if((yyvsp[(3) - (4)].exprs).type != 3){
            printf("Error: Not operator not defined for type %s\n", map_type[(yyvsp[(3) - (4)].exprs).type]); 
            YYABORT;
        }
        (yyval.exprs).type = 3;
        (yyval.exprs).dim = 0;
    ;}
    break;

  case 108:
#line 1071 "yacc.y"
    {
        if((yyvsp[(2) - (2)].class_id).type != 3){
            printf("Error: Not operator not defined for type %s\n", map_type[(yyvsp[(2) - (2)].class_id).type]); 
            YYABORT;
        }
        (yyval.exprs).type = 3;
        (yyval.exprs).dim = 0;
    ;}
    break;

  case 109:
#line 1079 "yacc.y"
    {
        int *a = (int*) malloc(sizeof(int)), *b = (int*) malloc(sizeof(int));
        if(check_namelist((yyvsp[(2) - (2)].class_id).namelist, global_table, local_table, class_table, NULL, -1, a, b) == false)
        {
            YYABORT;
        }
        if((yyvsp[(2) - (2)].class_id).type != 3){
            printf("Error: Not operator not defined for type %s\n", map_type[(yyvsp[(2) - (2)].class_id).type]); 
            YYABORT;
        }
        (yyval.exprs).type = 3;
        (yyval.exprs).dim = 0;
    ;}
    break;

  case 110:
#line 1092 "yacc.y"
    {
        (yyval.exprs).type = (yyvsp[(1) - (1)].class_id).type;
        (yyval.exprs).dim = (yyvsp[(1) - (1)].class_id).dim;
    ;}
    break;

  case 111:
#line 1096 "yacc.y"
    {
        int *a = (int*) malloc(sizeof(int)), *b = (int*) malloc(sizeof(int));
        if(check_namelist((yyvsp[(1) - (1)].class_id).namelist, global_table, local_table, class_table, NULL, -1, a, b) == false)
        {
            YYABORT;
        }
        (yyval.exprs).type = 3;
        (yyval.exprs).dim = 0;
    ;}
    break;

  case 112:
#line 1105 "yacc.y"
    {
        (yyval.exprs).type = (yyvsp[(1) - (1)].list).type;
        (yyval.exprs).dim = (yyvsp[(1) - (1)].list).dim;
    ;}
    break;

  case 113:
#line 1109 "yacc.y"
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
        (yyval.exprs).type = entry->type;
        (yyval.exprs).dim = entry->dim;
    ;}
    break;

  case 114:
#line 1124 "yacc.y"
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
        (yyval.exprs).type = entry->type;
        (yyval.exprs).dim = entry->dim - (yyvsp[(4) - (4)].list).dim;
    ;}
    break;

  case 115:
#line 1143 "yacc.y"
    {rflag = false;;}
    break;

  case 116:
#line 1144 "yacc.y"
    {rflag = false;;}
    break;

  case 117:
#line 1145 "yacc.y"
    {rflag = false;;}
    break;

  case 118:
#line 1146 "yacc.y"
    {rflag = false;;}
    break;

  case 119:
#line 1147 "yacc.y"
    {rflag = false;;}
    break;

  case 120:
#line 1148 "yacc.y"
    {rflag = false;;}
    break;

  case 121:
#line 1149 "yacc.y"
    {rflag = false;;}
    break;

  case 122:
#line 1150 "yacc.y"
    {rflag = false;;}
    break;

  case 123:
#line 1154 "yacc.y"
    {
        if((yyvsp[(3) - (4)].exprs).type != 3 && (yyvsp[(3) - (4)].exprs).type != 0){
            printf("Error: If condition must be bool\n");
            YYABORT;
        }
        rflag = false;
    ;}
    break;

  case 124:
#line 1165 "yacc.y"
    {scope++;;}
    break;

  case 125:
#line 1165 "yacc.y"
    {scope--;rflag = false;;}
    break;

  case 126:
#line 1166 "yacc.y"
    {rflag = false;;}
    break;

  case 127:
#line 1170 "yacc.y"
    {
        if((yyvsp[(4) - (5)].exprs).type != 3 && (yyvsp[(4) - (5)].exprs).type != 0){
            printf("Error: For condition must be bool\n");
            YYABORT;
        }
    ;}
    break;

  case 128:
#line 1176 "yacc.y"
    {
        if((yyvsp[(4) - (5)].exprs).type != 3 && (yyvsp[(4) - (5)].exprs).type != 0){
            printf("Error: For condition must be bool\n");
            YYABORT;
        }
    ;}
    break;

  case 129:
#line 1185 "yacc.y"
    {scope++;;}
    break;

  case 130:
#line 1185 "yacc.y"
    {scope--;rflag = false;;}
    break;

  case 131:
#line 1186 "yacc.y"
    {rflag = false;;}
    break;

  case 132:
#line 1190 "yacc.y"
    {
        if((yyvsp[(3) - (4)].exprs).type != 3 && (yyvsp[(3) - (4)].exprs).type != 0){
            printf("Error: While condition must be bool\n");
            YYABORT;
        }
    ;}
    break;

  case 134:
#line 1203 "yacc.y"
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

  case 135:
#line 1216 "yacc.y"
    {
        int *a = (int*) malloc(sizeof(int)), *b = (int*) malloc(sizeof(int));
        struct idrec *entry = lookup(global_table, local_table, (yyvsp[(1) - (4)].class_id).namelist -> head -> val);
        if(entry == NULL)
        {
            entry = lookup(params, members, (yyvsp[(1) - (4)].class_id).namelist -> head -> val);
            if(entry == NULL)
            {
                printf("Error: Variable %s not declared\n", (yyvsp[(1) - (4)].class_id).namelist -> head -> val);
                YYABORT;
            }
        }
        if(entry -> type != 14)
        {
            printf("Error: Variable %s is not a class\n", (yyvsp[(1) - (4)].class_id).namelist -> head -> val);
            YYABORT;
        }
        struct classrec *class = search_classtab(class_table, entry -> class_name);
        if(check_member_method((yyvsp[(1) - (4)].class_id).namelist -> head -> next -> val, (yyvsp[(1) - (4)].class_id).namelist -> head -> next -> next, class_table, class, (yyvsp[(3) - (4)].functions).params, (yyvsp[(3) - (4)].functions).num_params, a, b) == false)
        {
            YYABORT;
        }
        // if(check_namelist($1.namelist, global_table, local_table, class_table, $3.params, $3.num_params, a, b) == false)
        // {
        //     YYABORT;
        // }
        (yyval.exprs).type = *a;
        (yyval.exprs).dim = *b;
    ;}
    break;

  case 136:
#line 1248 "yacc.y"
    {
        (yyval.functions).params = (yyvsp[(1) - (3)].functions).params;
        struct idrec *entry = (struct idrec*) malloc(sizeof(struct idrec));
        entry -> type = (yyvsp[(3) - (3)].exprs).type;
        entry -> dim = (yyvsp[(3) - (3)].exprs).dim;
        insert_symtab((yyval.functions).params, entry);
        (yyval.functions).num_params = (yyvsp[(1) - (3)].functions).num_params + 1;
    ;}
    break;

  case 137:
#line 1256 "yacc.y"
    {
        (yyval.functions).params = init_symtab();
        struct idrec *entry = (struct idrec*) malloc(sizeof(struct idrec));
        entry -> type = (yyvsp[(1) - (1)].exprs).type;
        entry -> dim = (yyvsp[(1) - (1)].exprs).dim;
        insert_symtab((yyval.functions).params, entry);
        (yyval.functions).num_params = 1;
    ;}
    break;

  case 138:
#line 1264 "yacc.y"
    {
        (yyval.functions).params = init_symtab();
        (yyval.functions).num_params = 0;
    ;}
    break;

  case 139:
#line 1270 "yacc.y"
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

  case 140:
#line 1279 "yacc.y"
    {
        if(return_type != (yyvsp[(2) - (3)].exprs).type)
        {
            printf("Error: Mismatch in return type\n");
            printf("Returned %s while function returns %s\n", map_type[(yyvsp[(2) - (3)].exprs).type], map_type[return_type]);
            YYABORT;
        }
        rflag = true;
        printf("WTF\n");
    ;}
    break;

  case 141:
#line 1293 "yacc.y"
    {
        (yyval.list).type = (yyvsp[(4) - (4)].type);
        (yyval.list).dim = (yyvsp[(2) - (4)].list).dim;
        (yyval.list).class_name = NULL;
    ;}
    break;

  case 142:
#line 1298 "yacc.y"
    {lflag = 0;;}
    break;

  case 143:
#line 1298 "yacc.y"
    {
        (yyval.list).type = (yyvsp[(5) - (5)].type);
        (yyval.list).dim = (yyvsp[(2) - (5)].list).dim;
        (yyval.list).class_name = map_type[(yyvsp[(5) - (5)].type)];
    ;}
    break;

  case 144:
#line 1303 "yacc.y"
    {lflag = 0;;}
    break;

  case 145:
#line 1303 "yacc.y"
    {
        if(search_classtab(class_table, (yyvsp[(5) - (5)].id).name) == NULL)
        {
            printf("Error: Class %s not declared\n", (yyvsp[(5) - (5)].id).name);
            YYABORT;
        }
        (yyval.list).type = 14;
        (yyval.list).class_name = (yyvsp[(5) - (5)].id).name;
        (yyval.list).dim = (yyvsp[(2) - (5)].list).dim;
    ;}
    break;

  case 146:
#line 1316 "yacc.y"
    {
        (yyval.list).type = (yyvsp[(2) - (3)].list).type;
        (yyval.list).dim = (yyvsp[(2) - (3)].list).dim+1;
    ;}
    break;

  case 147:
#line 1323 "yacc.y"
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

  case 148:
#line 1332 "yacc.y"
    {
        if((yyvsp[(1) - (3)].list).type != (yyvsp[(3) - (3)].exprs).type){
            printf("Error: Type mismatch in list terminal\n");
            YYABORT;
        }
        (yyval.list).type = (yyvsp[(1) - (3)].list).type;
        (yyval.list).dim = (yyvsp[(1) - (3)].list).dim;
    ;}
    break;

  case 149:
#line 1343 "yacc.y"
    {
        if((yyvsp[(2) - (4)].exprs).type != 0){
            printf("Error: Array size must be an integer\n");
            YYABORT;
        }
        (yyval.list).dim = (yyvsp[(4) - (4)].list).dim + 1;
    ;}
    break;

  case 150:
#line 1350 "yacc.y"
    {
        if((yyvsp[(2) - (3)].exprs).type != 0){
            printf("Error: Array size must be an integer\n");
            YYABORT;
        }
        (yyval.list).dim = 1;
    ;}
    break;

  case 151:
#line 1357 "yacc.y"
    {
        (yyval.list).dim = (yyvsp[(1) - (1)].list).dim;
    ;}
    break;

  case 152:
#line 1362 "yacc.y"
    {
        (yyval.list).dim = (yyvsp[(1) - (3)].list).dim + 1;
    ;}
    break;

  case 153:
#line 1365 "yacc.y"
    {
        (yyval.list).dim = 1;
    ;}
    break;

  case 154:
#line 1370 "yacc.y"
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

  case 155:
#line 1382 "yacc.y"
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

  case 156:
#line 1399 "yacc.y"
    {
        (yyval.class_id).namelist = init_slist();
        insert_slist((yyval.class_id).namelist, (yyvsp[(1) - (3)].id).name);
        insert_slist((yyval.class_id).namelist, (yyvsp[(3) - (3)].id).name);   
    ;}
    break;

  case 157:
#line 1404 "yacc.y"
    {
        struct snode* temp = (struct snode*) malloc(sizeof(struct snode));
        temp -> val = (yyvsp[(1) - (3)].id).name;
        temp -> next = (yyvsp[(3) - (3)].class_id).namelist -> head;
        (yyvsp[(3) - (3)].class_id).namelist -> head = temp;
        (yyval.class_id).namelist = (yyvsp[(3) - (3)].class_id).namelist;        
    ;}
    break;

  case 158:
#line 1411 "yacc.y"
    {
        (yyval.class_id).namelist = init_slist();
        insert_slist((yyval.class_id).namelist, (yyvsp[(1) - (4)].id).name);
        insert_slist((yyval.class_id).namelist, (yyvsp[(3) - (4)].id).name);   
    ;}
    break;

  case 159:
#line 1416 "yacc.y"
    {
        (yyval.class_id).namelist = init_slist();
        insert_slist((yyval.class_id).namelist, (yyvsp[(1) - (4)].id).name);
        insert_slist((yyval.class_id).namelist, (yyvsp[(4) - (4)].id).name);   
    ;}
    break;

  case 160:
#line 1421 "yacc.y"
    {
        (yyval.class_id).namelist = init_slist();
        insert_slist((yyval.class_id).namelist, (yyvsp[(1) - (5)].id).name);
        insert_slist((yyval.class_id).namelist, (yyvsp[(4) - (5)].id).name);   
    ;}
    break;

  case 165:
#line 1440 "yacc.y"
    {(yyval.op_type) = 0;;}
    break;

  case 166:
#line 1441 "yacc.y"
    {(yyval.op_type) = 1;;}
    break;

  case 167:
#line 1442 "yacc.y"
    {(yyval.op_type) = 2;;}
    break;

  case 168:
#line 1443 "yacc.y"
    {(yyval.op_type) = 3;;}
    break;

  case 169:
#line 1444 "yacc.y"
    {(yyval.op_type) = 4;;}
    break;

  case 170:
#line 1448 "yacc.y"
    { (yyval.type) = 12;;}
    break;

  case 171:
#line 1449 "yacc.y"
    { (yyval.type) = 7;;}
    break;

  case 172:
#line 1450 "yacc.y"
    { (yyval.type) = 8;;}
    break;

  case 173:
#line 1451 "yacc.y"
    { (yyval.type) = 9;;}
    break;

  case 174:
#line 1452 "yacc.y"
    { (yyval.type) = 10;;}
    break;

  case 175:
#line 1453 "yacc.y"
    { (yyval.type) = 11;;}
    break;

  case 176:
#line 1454 "yacc.y"
    { (yyval.type) = 13;;}
    break;

  case 177:
#line 1458 "yacc.y"
    { (yyval.type) = 0;;}
    break;

  case 178:
#line 1459 "yacc.y"
    { (yyval.type) = 2;;}
    break;

  case 179:
#line 1460 "yacc.y"
    { (yyval.type) = 3;;}
    break;

  case 180:
#line 1461 "yacc.y"
    { (yyval.type) = 1;;}
    break;


/* Line 1267 of yacc.c.  */
#line 3689 "yacc.tab.c"
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


#line 1464 "yacc.y"



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

    fprintf(yyout, "#include \"../Phase3/teamScribe.h\"\n");
    yyparse();
    return 0;
}

