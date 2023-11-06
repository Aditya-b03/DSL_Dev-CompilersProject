/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
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



#line 99 "yacc.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "yacc.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_NUMBER = 3,                     /* NUMBER  */
  YYSYMBOL_STRING_LITERAL = 4,             /* STRING_LITERAL  */
  YYSYMBOL_BOOL_LITERAL = 5,               /* BOOL_LITERAL  */
  YYSYMBOL_CLASS = 6,                      /* CLASS  */
  YYSYMBOL_RETURN = 7,                     /* RETURN  */
  YYSYMBOL_INT = 8,                        /* INT  */
  YYSYMBOL_STRING = 9,                     /* STRING  */
  YYSYMBOL_BOOL = 10,                      /* BOOL  */
  YYSYMBOL_FLOAT = 11,                     /* FLOAT  */
  YYSYMBOL_VOID = 12,                      /* VOID  */
  YYSYMBOL_LIST = 13,                      /* LIST  */
  YYSYMBOL_DOCUMENT = 14,                  /* DOCUMENT  */
  YYSYMBOL_TEAM = 15,                      /* TEAM  */
  YYSYMBOL_MEMBERS = 16,                   /* MEMBERS  */
  YYSYMBOL_TASK = 17,                      /* TASK  */
  YYSYMBOL_EVENT = 18,                     /* EVENT  */
  YYSYMBOL_MEETING = 19,                   /* MEETING  */
  YYSYMBOL_CALENDAR = 20,                  /* CALENDAR  */
  YYSYMBOL_ADD = 21,                       /* ADD  */
  YYSYMBOL_SUB = 22,                       /* SUB  */
  YYSYMBOL_MUL = 23,                       /* MUL  */
  YYSYMBOL_DIV = 24,                       /* DIV  */
  YYSYMBOL_MOD = 25,                       /* MOD  */
  YYSYMBOL_UNARY_OP = 26,                  /* UNARY_OP  */
  YYSYMBOL_ASSIGN_OP = 27,                 /* ASSIGN_OP  */
  YYSYMBOL_REL_OP = 28,                    /* REL_OP  */
  YYSYMBOL_EQUALS = 29,                    /* EQUALS  */
  YYSYMBOL_AND = 30,                       /* AND  */
  YYSYMBOL_OR = 31,                        /* OR  */
  YYSYMBOL_NOT = 32,                       /* NOT  */
  YYSYMBOL_INTERSECTION_OP = 33,           /* INTERSECTION_OP  */
  YYSYMBOL_UNION_OP = 34,                  /* UNION_OP  */
  YYSYMBOL_FOR = 35,                       /* FOR  */
  YYSYMBOL_WHILE = 36,                     /* WHILE  */
  YYSYMBOL_IF = 37,                        /* IF  */
  YYSYMBOL_ELSE = 38,                      /* ELSE  */
  YYSYMBOL_IDENTIFIER = 39,                /* IDENTIFIER  */
  YYSYMBOL_SELF = 40,                      /* SELF  */
  YYSYMBOL_LSB = 41,                       /* LSB  */
  YYSYMBOL_RSB = 42,                       /* RSB  */
  YYSYMBOL_LCB = 43,                       /* LCB  */
  YYSYMBOL_RCB = 44,                       /* RCB  */
  YYSYMBOL_LPB = 45,                       /* LPB  */
  YYSYMBOL_RPB = 46,                       /* RPB  */
  YYSYMBOL_SEMICOLON = 47,                 /* SEMICOLON  */
  YYSYMBOL_COMMA = 48,                     /* COMMA  */
  YYSYMBOL_DOT = 49,                       /* DOT  */
  YYSYMBOL_COLON = 50,                     /* COLON  */
  YYSYMBOL_ARROW = 51,                     /* ARROW  */
  YYSYMBOL_STRUCT = 52,                    /* STRUCT  */
  YYSYMBOL_INCLUDE = 53,                   /* INCLUDE  */
  YYSYMBOL_TYPEDEF = 54,                   /* TYPEDEF  */
  YYSYMBOL_YYACCEPT = 55,                  /* $accept  */
  YYSYMBOL_start = 56,                     /* start  */
  YYSYMBOL_57_1 = 57,                      /* $@1  */
  YYSYMBOL_58_2 = 58,                      /* $@2  */
  YYSYMBOL_include_stmts = 59,             /* include_stmts  */
  YYSYMBOL_include_stmt = 60,              /* include_stmt  */
  YYSYMBOL_identifier = 61,                /* identifier  */
  YYSYMBOL_code = 62,                      /* code  */
  YYSYMBOL_struct_code = 63,               /* struct_code  */
  YYSYMBOL_struct_def = 64,                /* struct_def  */
  YYSYMBOL_struct_body = 65,               /* struct_body  */
  YYSYMBOL_function = 66,                  /* function  */
  YYSYMBOL_function_dec = 67,              /* function_dec  */
  YYSYMBOL_data_type_new = 68,             /* data_type_new  */
  YYSYMBOL_data_type_pr = 69,              /* data_type_pr  */
  YYSYMBOL_function_params = 70,           /* function_params  */
  YYSYMBOL_function_param = 71,            /* function_param  */
  YYSYMBOL_class = 72,                     /* class  */
  YYSYMBOL_class_dec = 73,                 /* class_dec  */
  YYSYMBOL_class_stmt = 74,                /* class_stmt  */
  YYSYMBOL_statements = 75,                /* statements  */
  YYSYMBOL_statement = 76,                 /* statement  */
  YYSYMBOL_ids = 77,                       /* ids  */
  YYSYMBOL_unary_stmt = 78,                /* unary_stmt  */
  YYSYMBOL_single_stmt = 79,               /* single_stmt  */
  YYSYMBOL_decl_stmt = 80,                 /* decl_stmt  */
  YYSYMBOL_list = 81,                      /* list  */
  YYSYMBOL_list_literal = 82,              /* list_literal  */
  YYSYMBOL_list_terminal = 83,             /* list_terminal  */
  YYSYMBOL_dim = 84,                       /* dim  */
  YYSYMBOL_id_list = 85,                   /* id_list  */
  YYSYMBOL_expr_stmt = 86,                 /* expr_stmt  */
  YYSYMBOL_expr_stmt_without_semicolon = 87, /* expr_stmt_without_semicolon  */
  YYSYMBOL_if_stmt = 88,                   /* if_stmt  */
  YYSYMBOL_for_stmt = 89,                  /* for_stmt  */
  YYSYMBOL_while_stmt = 90,                /* while_stmt  */
  YYSYMBOL_return_stmt = 91,               /* return_stmt  */
  YYSYMBOL_call_stmt = 92,                 /* call_stmt  */
  YYSYMBOL_call = 93,                      /* call  */
  YYSYMBOL_call_args = 94,                 /* call_args  */
  YYSYMBOL_nested_expr = 95,               /* nested_expr  */
  YYSYMBOL_expr = 96,                      /* expr  */
  YYSYMBOL_expr_terminal = 97,             /* expr_terminal  */
  YYSYMBOL_conj = 98,                      /* conj  */
  YYSYMBOL_set_op = 99,                    /* set_op  */
  YYSYMBOL_arith_op = 100                  /* arith_op  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1062

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  55
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  46
/* YYNRULES -- Number of rules.  */
#define YYNRULES  146
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  288

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   309


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
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
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    74,    74,    74,    80,    80,    88,    89,    93,    98,
      99,   103,   107,   111,   117,   118,   119,   120,   121,   125,
     129,   133,   134,   138,   142,   143,   144,   145,   146,   150,
     151,   152,   153,   154,   155,   156,   162,   163,   164,   165,
     171,   172,   173,   177,   178,   179,   180,   184,   188,   192,
     193,   194,   195,   199,   200,   201,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   217,   218,   222,   223,
     227,   228,   229,   230,   235,   252,   269,   270,   275,   276,
     277,   282,   287,   288,   293,   294,   295,   296,   301,   305,
     306,   307,   314,   319,   320,   321,   326,   327,   328,   329,
     330,   331,   332,   333,   338,   339,   340,   341,   346,   347,
     352,   353,   357,   362,   367,   368,   369,   370,   371,   376,
     377,   378,   379,   380,   381,   386,   387,   388,   389,   390,
     396,   397,   398,   399,   400,   401,   402,   403,   408,   409,
     413,   414,   419,   420,   421,   422,   423
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "NUMBER",
  "STRING_LITERAL", "BOOL_LITERAL", "CLASS", "RETURN", "INT", "STRING",
  "BOOL", "FLOAT", "VOID", "LIST", "DOCUMENT", "TEAM", "MEMBERS", "TASK",
  "EVENT", "MEETING", "CALENDAR", "ADD", "SUB", "MUL", "DIV", "MOD",
  "UNARY_OP", "ASSIGN_OP", "REL_OP", "EQUALS", "AND", "OR", "NOT",
  "INTERSECTION_OP", "UNION_OP", "FOR", "WHILE", "IF", "ELSE",
  "IDENTIFIER", "SELF", "LSB", "RSB", "LCB", "RCB", "LPB", "RPB",
  "SEMICOLON", "COMMA", "DOT", "COLON", "ARROW", "STRUCT", "INCLUDE",
  "TYPEDEF", "$accept", "start", "$@1", "$@2", "include_stmts",
  "include_stmt", "identifier", "code", "struct_code", "struct_def",
  "struct_body", "function", "function_dec", "data_type_new",
  "data_type_pr", "function_params", "function_param", "class",
  "class_dec", "class_stmt", "statements", "statement", "ids",
  "unary_stmt", "single_stmt", "decl_stmt", "list", "list_literal",
  "list_terminal", "dim", "id_list", "expr_stmt",
  "expr_stmt_without_semicolon", "if_stmt", "for_stmt", "while_stmt",
  "return_stmt", "call_stmt", "call", "call_args", "nested_expr", "expr",
  "expr_terminal", "conj", "set_op", "arith_op", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-250)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-3)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -41,    32,   -38,   776,  -250,    31,   761,  -250,    -1,  -250,
    -250,  -250,  -250,    22,    39,  -250,  -250,  -250,  -250,  -250,
    -250,  -250,    44,    47,  -250,   776,  -250,   776,    54,    63,
      81,   776,    90,   776,   106,  -250,  -250,  -250,  -250,   107,
     361,     7,   -25,    20,   115,  -250,  -250,  -250,   -12,    45,
      -4,   101,  -250,   988,  -250,    15,   188,   727,  -250,  -250,
    -250,    87,    38,   112,  -250,   803,   803,   -24,  -250,  -250,
    -250,   123,  -250,  1014,   794,   427,   803,   727,  -250,   144,
    -250,   413,   727,  -250,   727,  -250,    57,   203,   988,   143,
    -250,   988,   988,   154,   727,  -250,   151,   184,   200,    65,
    -250,   207,   803,  -250,   212,    66,   212,     1,  -250,   202,
    -250,   803,  -250,  -250,  -250,  -250,  -250,  -250,   803,  -250,
    -250,  -250,  -250,   803,   803,   803,  -250,   211,  -250,  -250,
    -250,  -250,    82,   228,   161,    69,   213,   218,   223,   165,
    -250,  -250,  -250,   232,    95,   235,   235,  -250,  -250,   235,
    -250,  -250,  -250,  -250,  -250,  -250,   229,   136,   174,   803,
     803,  -250,  -250,  -250,  -250,  -250,   185,  -250,  -250,  -250,
    -250,   727,  -250,   231,  -250,   212,  -250,  -250,   803,  1028,
     -19,   199,  -250,  -250,  -250,  -250,  -250,  -250,  -250,   803,
     235,   236,  -250,  -250,   237,  1001,   803,   803,   249,   462,
    -250,    23,   212,  -250,  -250,  -250,  -250,  -250,  -250,  -250,
    -250,  -250,  -250,   803,   803,   803,   803,   803,  -250,   803,
    -250,  -250,  -250,   803,   803,   239,   240,  -250,   250,   248,
     252,  -250,  -250,  -250,  -250,  -250,     8,  -250,   254,   256,
     890,   903,  -250,  -250,  -250,   803,   212,   212,  -250,   170,
    -250,  -250,  -250,  -250,  -250,   266,  -250,   263,   264,   504,
     212,   546,   841,   939,   952,  -250,   265,   273,  -250,  -250,
    -250,  -250,  -250,  -250,  -250,  -250,   854,   588,   630,   672,
    -250,  -250,  -250,  -250,  -250,  -250,   714,  -250
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,     0,    18,     1,     0,    18,     7,     0,    36,
      37,    38,    39,     0,     0,    29,    30,    31,    32,    33,
      34,    35,     0,     0,     5,    18,    19,    18,     0,     0,
       0,    18,     0,    18,     0,     8,     6,     3,    48,     0,
       0,     0,    91,     0,     0,    16,    15,    55,    91,     0,
      91,     0,    17,    52,    14,    91,     0,    42,   131,   132,
     133,     0,     9,     0,    87,     0,     0,    69,   130,   137,
     134,     0,   124,   129,     0,     0,     0,    42,    76,     0,
      22,     0,    42,    74,    42,    75,     9,    69,    52,     0,
      95,    52,    52,     0,    42,    77,     0,     0,     0,     0,
      41,     0,     0,   136,     0,    11,     0,     0,    82,     0,
      68,   118,    85,   142,   143,   144,   145,   146,     0,   138,
     139,   140,   141,     0,     0,     0,    86,     0,    80,    79,
      78,    89,     0,    88,     0,     0,     0,     0,     0,     9,
      55,    23,    63,     0,    69,     0,     0,    54,    56,     0,
      62,    57,    58,    59,    60,    61,     0,     0,     0,     0,
       0,    49,    47,    50,    51,    92,     0,    45,    43,    44,
      27,     0,    46,     0,    10,     0,    13,    81,     0,   119,
      69,     0,   115,   126,   125,   128,   127,    84,    26,     0,
       0,     0,    21,   110,     0,     0,     0,     0,    91,     0,
      67,     0,     0,   112,    24,    25,    93,    94,    28,    40,
     135,    12,    83,     0,     0,     0,     0,     0,   113,     0,
      90,    20,   111,     0,     0,     0,     0,    53,     0,     0,
       0,   121,   120,   123,   122,   117,    69,   114,     0,     0,
       0,     0,    65,    66,    64,     0,     0,     0,    55,    69,
     109,    70,    72,    71,    55,    97,   116,     0,     0,     0,
       0,     0,     0,     0,     0,   108,     0,    96,    55,   103,
      99,    55,   105,    55,   107,    73,     0,     0,     0,     0,
      55,   102,    98,   101,   104,   106,     0,   100
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -250,  -250,  -250,  -250,  -250,   307,   -52,   135,  -250,  -250,
    -250,   -45,  -250,   269,   292,   109,   145,  -250,  -250,   125,
    -129,  -250,  -250,     3,  -186,    -3,   325,  -250,  -250,   300,
     -11,   -22,     9,  -249,  -250,  -250,  -250,  -159,    29,  -250,
     -60,  -250,  -250,   139,   141,   142
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     1,     2,     3,     6,     7,    67,    24,    25,    26,
     134,    27,    28,   145,   146,    99,   100,    31,    32,    89,
      81,   147,   201,    68,   250,   148,   149,    69,   107,   105,
      43,   150,    93,   151,   152,   153,   154,   155,    70,   181,
      71,    72,    73,   123,   124,   125
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      33,    87,   110,    33,    76,   108,   109,   110,    88,   103,
     217,   199,    -2,   270,   127,     5,   131,    76,    49,    51,
      77,   111,    33,    56,    33,    76,   111,   282,    33,   144,
      33,    92,     4,    82,   110,    35,    87,   245,    38,    87,
      87,    84,   173,    88,    76,   177,    88,    88,    74,   178,
      91,   182,   174,   111,   176,   255,    90,    75,   183,   180,
      94,    39,   228,   184,   185,   186,    92,    78,    79,    92,
      92,   229,    58,    59,    60,   194,   269,   272,   274,    40,
      40,   253,   253,    42,    90,    91,    44,   104,    91,    91,
     281,    90,    83,    79,    90,    90,    42,    47,    40,   206,
     207,    61,    48,   253,   253,   253,   104,    74,    62,    63,
     156,   170,    65,   171,    66,   175,   193,   253,   212,   259,
      50,   110,   159,   211,   160,   261,    62,    63,   188,   220,
     171,   192,   102,    53,    49,    51,   225,   226,    56,   277,
     111,    37,   278,    87,   279,    55,   202,   144,    85,    79,
     230,   286,    57,   231,   232,   233,   234,   235,    80,   237,
      45,   106,    46,   238,   239,   112,    52,   236,    54,     9,
      10,    11,    12,   224,    14,    15,    16,    17,    18,    19,
      20,    21,   204,   133,   171,   256,   132,   162,   249,   249,
     167,   157,   223,   158,    87,    87,   110,   159,    90,   160,
     190,   165,    90,   166,   198,   191,    40,   144,   266,   144,
     249,   249,   249,   161,   104,   111,   163,   164,   252,   252,
     205,   260,   171,   168,   249,   144,   144,   144,   156,   110,
     159,   208,   160,   171,   144,    95,    79,   251,   251,   169,
     252,   252,   252,    90,    90,   218,   172,   219,   179,    90,
      90,    62,    63,   187,   252,   257,   258,   189,   195,   251,
     251,   251,    90,   196,    90,    90,    90,    90,   197,   156,
     156,   200,    29,   251,   198,    29,   203,   210,    76,    90,
      90,    90,    90,   221,   222,   240,   241,   243,   156,    90,
     156,   156,   156,   156,    29,    30,    29,   242,    30,   244,
      29,   246,    29,   247,   262,   156,   156,   156,   156,   263,
     264,   276,   275,    36,    41,   156,   209,    30,   214,    30,
     215,   216,    29,    30,     0,    30,    97,     0,    34,     0,
       0,    34,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   129,    30,    97,     0,     0,    98,
      34,    97,    34,    97,     0,     0,    34,    29,    34,     0,
      29,    29,     0,    97,    58,    59,    60,   130,     0,    98,
       0,     0,     0,     0,    98,     0,    98,     0,    34,     0,
      30,     0,   101,    30,    30,     0,    98,     0,     0,     0,
       0,     0,     0,    61,     0,     0,     0,     0,     0,     0,
      62,    63,   101,    64,    65,     0,    66,   101,     0,   101,
       0,     0,     0,    34,     0,     0,    34,    34,     0,   101,
     135,     9,    10,    11,    12,     0,    14,    15,    16,    17,
      18,    19,    20,    21,     0,     9,    10,    11,    12,     0,
      97,    15,    16,    17,    18,    19,    20,    21,   136,   137,
     138,     0,   139,    63,     0,     0,   140,   141,     0,     0,
     142,     0,     0,    98,     0,     0,   128,   143,     0,   135,
       9,    10,    11,    12,     0,    14,    15,    16,    17,    18,
      19,    20,    21,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   101,   136,   137,   138,
       0,   139,    63,     0,     0,   140,   227,     0,     0,   142,
       0,   135,     9,    10,    11,    12,   143,    14,    15,    16,
      17,    18,    19,    20,    21,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   136,
     137,   138,     0,   139,    63,     0,     0,   140,   265,     0,
       0,   142,     0,   135,     9,    10,    11,    12,   143,    14,
      15,    16,    17,    18,    19,    20,    21,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   136,   137,   138,     0,   139,    63,     0,     0,   140,
     267,     0,     0,   142,     0,   135,     9,    10,    11,    12,
     143,    14,    15,    16,    17,    18,    19,    20,    21,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   136,   137,   138,     0,   139,    63,     0,
       0,   140,   283,     0,     0,   142,     0,   135,     9,    10,
      11,    12,   143,    14,    15,    16,    17,    18,    19,    20,
      21,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   136,   137,   138,     0,   139,
      63,     0,     0,   140,   284,     0,     0,   142,     0,   135,
       9,    10,    11,    12,   143,    14,    15,    16,    17,    18,
      19,    20,    21,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   136,   137,   138,
       0,   139,    63,     0,     0,   140,   285,     0,     0,   142,
       0,   135,     9,    10,    11,    12,   143,    14,    15,    16,
      17,    18,    19,    20,    21,     9,    10,    11,    12,     0,
      14,    15,    16,    17,    18,    19,    20,    21,     0,   136,
     137,   138,     0,   139,    63,     0,     0,   140,   287,     0,
       0,   142,     0,     0,     0,     0,    96,     8,   143,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,     8,     0,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    58,    59,    60,
      22,     0,     0,     0,     0,     0,    58,    59,    60,     0,
       0,     0,     0,    23,     5,    22,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    61,     0,    23,     0,
       0,     0,     0,    62,    63,    61,   126,    65,     0,    66,
       0,     0,    62,    63,     0,     0,    65,     0,    66,     9,
      10,    11,    12,     0,    14,    15,    16,    17,    18,    19,
      20,    21,     9,    10,    11,    12,     0,    14,    15,    16,
      17,    18,    19,    20,    21,     0,     0,     0,   138,     0,
     139,    63,     0,     0,   268,     0,     0,     0,     0,     0,
       0,   138,     0,   139,    63,     0,     0,   280,     9,    10,
      11,    12,     0,    14,    15,    16,    17,    18,    19,    20,
      21,     9,    10,    11,    12,     0,    14,    15,    16,    17,
      18,    19,    20,    21,     0,     0,     0,     0,     0,   139,
      63,     0,     0,   248,     0,     0,     0,     0,     0,     0,
       0,     0,   139,    63,     0,     0,   254,     9,    10,    11,
      12,     0,    14,    15,    16,    17,    18,    19,    20,    21,
       9,    10,    11,    12,     0,    14,    15,    16,    17,    18,
      19,    20,    21,     0,     0,     0,     0,     0,   139,    63,
       0,     0,   271,     0,     0,     0,     0,     0,     0,     0,
       0,   139,    63,     0,     0,   273,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,     9,
      10,    11,    12,     0,    14,    15,    16,    17,    18,    19,
      20,    21,     0,     0,     0,     0,     0,    86,    63,     0,
       0,     0,     0,     0,     0,   113,   114,   115,   116,   117,
     139,    63,   118,     0,   119,   120,     0,   121,   122,   113,
     114,   115,   116,   117,     0,     0,   213,     0,   119,   120,
       0,   121,   122
};

static const yytype_int16 yycheck[] =
{
       3,    53,    26,     6,    29,    65,    66,    26,    53,    61,
      29,   140,    53,   262,    74,    53,    76,    29,    29,    30,
      45,    45,    25,    34,    27,    29,    45,   276,    31,    81,
      33,    53,     0,    45,    26,     4,    88,    29,    39,    91,
      92,    45,   102,    88,    29,    44,    91,    92,    41,    48,
      53,   111,   104,    45,   106,   241,    53,    50,   118,   111,
      45,    39,    39,   123,   124,   125,    88,    47,    48,    91,
      92,    48,     3,     4,     5,   135,   262,   263,   264,    41,
      41,   240,   241,    39,    81,    88,    39,    49,    91,    92,
     276,    88,    47,    48,    91,    92,    39,    43,    41,   159,
     160,    32,    39,   262,   263,   264,    49,    41,    39,    40,
      81,    46,    43,    48,    45,    49,    47,   276,   178,   248,
      39,    26,    27,   175,    29,   254,    39,    40,    46,   189,
      48,   134,    45,    43,   145,   146,   196,   197,   149,   268,
      45,     6,   271,   195,   273,    39,    51,   199,    47,    48,
     202,   280,    45,   213,   214,   215,   216,   217,    43,   219,
      25,    49,    27,   223,   224,    42,    31,   219,    33,     8,
       9,    10,    11,   195,    13,    14,    15,    16,    17,    18,
      19,    20,    46,    39,    48,   245,    77,    44,   240,   241,
      39,    82,   195,    84,   246,   247,    26,    27,   195,    29,
      39,    47,   199,    94,    39,    44,    41,   259,   260,   261,
     262,   263,   264,    88,    49,    45,    91,    92,   240,   241,
      46,    51,    48,    39,   276,   277,   278,   279,   199,    26,
      27,    46,    29,    48,   286,    47,    48,   240,   241,    39,
     262,   263,   264,   240,   241,    46,    39,    48,    46,   246,
     247,    39,    40,    42,   276,   246,   247,    29,    45,   262,
     263,   264,   259,    45,   261,   262,   263,   264,    45,   240,
     241,    39,     3,   276,    39,     6,    47,    46,    29,   276,
     277,   278,   279,    47,    47,    46,    46,    39,   259,   286,
     261,   262,   263,   264,    25,     3,    27,    47,     6,    47,
      31,    47,    33,    47,    38,   276,   277,   278,   279,    46,
      46,    38,    47,     6,    14,   286,   171,    25,   179,    27,
     179,   179,    53,    31,    -1,    33,    57,    -1,     3,    -1,
      -1,     6,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    75,    53,    77,    -1,    -1,    57,
      25,    82,    27,    84,    -1,    -1,    31,    88,    33,    -1,
      91,    92,    -1,    94,     3,     4,     5,    75,    -1,    77,
      -1,    -1,    -1,    -1,    82,    -1,    84,    -1,    53,    -1,
      88,    -1,    57,    91,    92,    -1,    94,    -1,    -1,    -1,
      -1,    -1,    -1,    32,    -1,    -1,    -1,    -1,    -1,    -1,
      39,    40,    77,    42,    43,    -1,    45,    82,    -1,    84,
      -1,    -1,    -1,    88,    -1,    -1,    91,    92,    -1,    94,
       7,     8,     9,    10,    11,    -1,    13,    14,    15,    16,
      17,    18,    19,    20,    -1,     8,     9,    10,    11,    -1,
     171,    14,    15,    16,    17,    18,    19,    20,    35,    36,
      37,    -1,    39,    40,    -1,    -1,    43,    44,    -1,    -1,
      47,    -1,    -1,   171,    -1,    -1,    39,    54,    -1,     7,
       8,     9,    10,    11,    -1,    13,    14,    15,    16,    17,
      18,    19,    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   171,    35,    36,    37,
      -1,    39,    40,    -1,    -1,    43,    44,    -1,    -1,    47,
      -1,     7,     8,     9,    10,    11,    54,    13,    14,    15,
      16,    17,    18,    19,    20,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,
      36,    37,    -1,    39,    40,    -1,    -1,    43,    44,    -1,
      -1,    47,    -1,     7,     8,     9,    10,    11,    54,    13,
      14,    15,    16,    17,    18,    19,    20,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    35,    36,    37,    -1,    39,    40,    -1,    -1,    43,
      44,    -1,    -1,    47,    -1,     7,     8,     9,    10,    11,
      54,    13,    14,    15,    16,    17,    18,    19,    20,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    35,    36,    37,    -1,    39,    40,    -1,
      -1,    43,    44,    -1,    -1,    47,    -1,     7,     8,     9,
      10,    11,    54,    13,    14,    15,    16,    17,    18,    19,
      20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    35,    36,    37,    -1,    39,
      40,    -1,    -1,    43,    44,    -1,    -1,    47,    -1,     7,
       8,     9,    10,    11,    54,    13,    14,    15,    16,    17,
      18,    19,    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,    36,    37,
      -1,    39,    40,    -1,    -1,    43,    44,    -1,    -1,    47,
      -1,     7,     8,     9,    10,    11,    54,    13,    14,    15,
      16,    17,    18,    19,    20,     8,     9,    10,    11,    -1,
      13,    14,    15,    16,    17,    18,    19,    20,    -1,    35,
      36,    37,    -1,    39,    40,    -1,    -1,    43,    44,    -1,
      -1,    47,    -1,    -1,    -1,    -1,    39,     6,    54,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,     6,    -1,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,     3,     4,     5,
      39,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,    -1,
      -1,    -1,    -1,    52,    53,    39,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    32,    -1,    52,    -1,
      -1,    -1,    -1,    39,    40,    32,    42,    43,    -1,    45,
      -1,    -1,    39,    40,    -1,    -1,    43,    -1,    45,     8,
       9,    10,    11,    -1,    13,    14,    15,    16,    17,    18,
      19,    20,     8,     9,    10,    11,    -1,    13,    14,    15,
      16,    17,    18,    19,    20,    -1,    -1,    -1,    37,    -1,
      39,    40,    -1,    -1,    43,    -1,    -1,    -1,    -1,    -1,
      -1,    37,    -1,    39,    40,    -1,    -1,    43,     8,     9,
      10,    11,    -1,    13,    14,    15,    16,    17,    18,    19,
      20,     8,     9,    10,    11,    -1,    13,    14,    15,    16,
      17,    18,    19,    20,    -1,    -1,    -1,    -1,    -1,    39,
      40,    -1,    -1,    43,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    39,    40,    -1,    -1,    43,     8,     9,    10,
      11,    -1,    13,    14,    15,    16,    17,    18,    19,    20,
       8,     9,    10,    11,    -1,    13,    14,    15,    16,    17,
      18,    19,    20,    -1,    -1,    -1,    -1,    -1,    39,    40,
      -1,    -1,    43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    39,    40,    -1,    -1,    43,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,     8,
       9,    10,    11,    -1,    13,    14,    15,    16,    17,    18,
      19,    20,    -1,    -1,    -1,    -1,    -1,    39,    40,    -1,
      -1,    -1,    -1,    -1,    -1,    21,    22,    23,    24,    25,
      39,    40,    28,    -1,    30,    31,    -1,    33,    34,    21,
      22,    23,    24,    25,    -1,    -1,    28,    -1,    30,    31,
      -1,    33,    34
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    56,    57,    58,     0,    53,    59,    60,     6,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    39,    52,    62,    63,    64,    66,    67,    68,
      69,    72,    73,    80,    81,     4,    60,    62,    39,    39,
      41,    84,    39,    85,    39,    62,    62,    43,    39,    85,
      39,    85,    62,    43,    62,    39,    85,    45,     3,     4,
       5,    32,    39,    40,    42,    43,    45,    61,    78,    82,
      93,    95,    96,    97,    41,    50,    29,    45,    47,    48,
      43,    75,    45,    47,    45,    47,    39,    61,    66,    74,
      78,    80,    86,    87,    45,    47,    39,    68,    69,    70,
      71,    81,    45,    61,    49,    84,    49,    83,    95,    95,
      26,    45,    42,    21,    22,    23,    24,    25,    28,    30,
      31,    33,    34,    98,    99,   100,    42,    95,    39,    68,
      69,    95,    70,    39,    65,     7,    35,    36,    37,    39,
      43,    44,    47,    54,    61,    68,    69,    76,    80,    81,
      86,    88,    89,    90,    91,    92,    93,    70,    70,    27,
      29,    74,    44,    74,    74,    47,    70,    39,    39,    39,
      46,    48,    39,    95,    61,    49,    61,    44,    48,    46,
      61,    94,    95,    95,    95,    95,    95,    42,    46,    29,
      39,    44,    80,    47,    95,    45,    45,    45,    39,    75,
      39,    77,    51,    47,    46,    46,    95,    95,    46,    71,
      46,    61,    95,    28,    98,    99,   100,    29,    46,    48,
      95,    47,    47,    80,    86,    95,    95,    44,    39,    48,
      61,    95,    95,    95,    95,    95,    61,    95,    95,    95,
      46,    46,    47,    39,    47,    29,    47,    47,    43,    61,
      79,    80,    86,    92,    43,    79,    95,    87,    87,    75,
      51,    75,    38,    46,    46,    44,    61,    44,    43,    79,
      88,    43,    79,    43,    79,    47,    38,    75,    75,    75,
      43,    79,    88,    44,    44,    44,    75,    44
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    55,    57,    56,    58,    56,    59,    59,    60,    61,
      61,    61,    61,    61,    62,    62,    62,    62,    62,    63,
      64,    65,    65,    66,    67,    67,    67,    67,    67,    68,
      68,    68,    68,    68,    68,    68,    69,    69,    69,    69,
      70,    70,    70,    71,    71,    71,    71,    72,    73,    74,
      74,    74,    74,    75,    75,    75,    76,    76,    76,    76,
      76,    76,    76,    76,    76,    76,    77,    77,    78,    78,
      79,    79,    79,    79,    80,    80,    80,    80,    81,    81,
      81,    82,    83,    83,    84,    84,    84,    84,    85,    85,
      85,    85,    86,    87,    87,    87,    88,    88,    88,    88,
      88,    88,    88,    88,    89,    89,    89,    89,    90,    90,
      91,    91,    92,    93,    94,    94,    94,    94,    94,    95,
      95,    95,    95,    95,    95,    96,    96,    96,    96,    96,
      97,    97,    97,    97,    97,    97,    97,    97,    98,    98,
      99,    99,   100,   100,   100,   100,   100
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     3,     0,     2,     2,     1,     2,     1,
       3,     2,     4,     3,     2,     2,     2,     2,     0,     1,
       6,     2,     0,     4,     5,     5,     5,     5,     5,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     1,     0,     2,     2,     2,     2,     4,     2,     2,
       2,     2,     0,     4,     2,     0,     1,     1,     1,     1,
       1,     1,     1,     1,     4,     4,     3,     1,     2,     1,
       1,     1,     1,     4,     3,     3,     3,     3,     4,     4,
       4,     3,     1,     3,     4,     3,     3,     2,     3,     3,
       5,     1,     2,     3,     3,     1,     7,     5,     9,     7,
      11,     9,     9,     7,    10,     8,    10,     8,     7,     5,
       2,     3,     2,     4,     3,     1,     5,     3,     0,     3,
       5,     5,     5,     5,     1,     3,     3,     3,     3,     1,
       1,     1,     1,     1,     1,     4,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* $@1: %empty  */
#line 74 "yacc.y"
      {
        global_table = init_symtab();
    }
#line 1541 "yacc.tab.c"
    break;

  case 3: /* start: $@1 include_stmts code  */
#line 77 "yacc.y"
                       {
        display_symtab(global_table);
    }
#line 1549 "yacc.tab.c"
    break;

  case 4: /* $@2: %empty  */
#line 80 "yacc.y"
      {
        global_table = init_symtab();
    }
#line 1557 "yacc.tab.c"
    break;

  case 5: /* start: $@2 code  */
#line 82 "yacc.y"
           {
        display_symtab(global_table);
    }
#line 1565 "yacc.tab.c"
    break;

  case 10: /* identifier: IDENTIFIER DOT identifier  */
#line 99 "yacc.y"
                                {


    }
#line 1574 "yacc.tab.c"
    break;

  case 11: /* identifier: IDENTIFIER dim  */
#line 103 "yacc.y"
                     {


    }
#line 1583 "yacc.tab.c"
    break;

  case 12: /* identifier: IDENTIFIER dim DOT identifier  */
#line 107 "yacc.y"
                                    {


    }
#line 1592 "yacc.tab.c"
    break;

  case 13: /* identifier: SELF DOT identifier  */
#line 111 "yacc.y"
                          {
        
    }
#line 1600 "yacc.tab.c"
    break;

  case 29: /* data_type_new: DOCUMENT  */
#line 150 "yacc.y"
                       { (yyval.type) = 12;}
#line 1606 "yacc.tab.c"
    break;

  case 30: /* data_type_new: TEAM  */
#line 151 "yacc.y"
           { (yyval.type) = 7;}
#line 1612 "yacc.tab.c"
    break;

  case 31: /* data_type_new: MEMBERS  */
#line 152 "yacc.y"
              { (yyval.type) = 8;}
#line 1618 "yacc.tab.c"
    break;

  case 32: /* data_type_new: TASK  */
#line 153 "yacc.y"
            { (yyval.type) = 9;}
#line 1624 "yacc.tab.c"
    break;

  case 33: /* data_type_new: EVENT  */
#line 154 "yacc.y"
            { (yyval.type) = 10;}
#line 1630 "yacc.tab.c"
    break;

  case 34: /* data_type_new: MEETING  */
#line 155 "yacc.y"
               { (yyval.type) = 11;}
#line 1636 "yacc.tab.c"
    break;

  case 35: /* data_type_new: CALENDAR  */
#line 156 "yacc.y"
               { (yyval.type) = 13;}
#line 1642 "yacc.tab.c"
    break;

  case 36: /* data_type_pr: INT  */
#line 162 "yacc.y"
                   { (yyval.type) = 0;}
#line 1648 "yacc.tab.c"
    break;

  case 37: /* data_type_pr: STRING  */
#line 163 "yacc.y"
             { (yyval.type) = 2;}
#line 1654 "yacc.tab.c"
    break;

  case 38: /* data_type_pr: BOOL  */
#line 164 "yacc.y"
            { (yyval.type) = 3;}
#line 1660 "yacc.tab.c"
    break;

  case 39: /* data_type_pr: FLOAT  */
#line 165 "yacc.y"
            { (yyval.type) = 1;}
#line 1666 "yacc.tab.c"
    break;

  case 74: /* decl_stmt: data_type_new id_list SEMICOLON  */
#line 235 "yacc.y"
                                           {
        struct snode* temp = (yyvsp[-1].namelist)->head;
        while(temp != NULL){
            struct idrec *entry = (struct idrec *)malloc(sizeof(struct idrec));
            entry->type = (yyvsp[-2].type);
            entry->arr = false;
            entry->scope = 0; // we have to change scope according to nested loops
            entry->name = temp->val;
            if(lookup(global_table,global_table, entry->name) == NULL){
                insert_symtab(global_table, entry);
            }
            else{
                printf("Error: Variable %s already declared\n", entry->name);
            }
            temp = temp->next;
        }
    }
#line 1688 "yacc.tab.c"
    break;

  case 75: /* decl_stmt: data_type_pr id_list SEMICOLON  */
#line 252 "yacc.y"
                                    {
        struct snode* temp = (yyvsp[-1].namelist)->head;
        while(temp != NULL){
            struct idrec *entry = (struct idrec *)malloc(sizeof(struct idrec));
            entry->type = (yyvsp[-2].type);
            entry->arr = false;
            entry->scope = 0; // we have to change scope according to nested loops
            entry->name = temp->val;
            if(lookup(global_table, global_table ,entry->name) == NULL){
            insert_symtab(global_table, entry);
            }
            else{
            printf("Error: Variable %s already declared\n", entry->name);
            }
            temp = temp->next;
        }   
    }
#line 1710 "yacc.tab.c"
    break;

  case 88: /* id_list: id_list COMMA IDENTIFIER  */
#line 301 "yacc.y"
                                 {
        insert_slist((yyvsp[-2].namelist), (yyvsp[0].id).name);
        (yyval.namelist) = (yyvsp[-2].namelist);
    }
#line 1719 "yacc.tab.c"
    break;

  case 91: /* id_list: IDENTIFIER  */
#line 307 "yacc.y"
                {
        (yyval.namelist) = init_slist();
        insert_slist((yyval.namelist), (yyvsp[0].id).name);   
    }
#line 1728 "yacc.tab.c"
    break;


#line 1732 "yacc.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
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

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 427 "yacc.y"



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
