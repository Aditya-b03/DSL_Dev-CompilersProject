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

#line 88 "yacc.tab.c"

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
  YYSYMBOL_include_stmts = 57,             /* include_stmts  */
  YYSYMBOL_include_stmt = 58,              /* include_stmt  */
  YYSYMBOL_identifier = 59,                /* identifier  */
  YYSYMBOL_code = 60,                      /* code  */
  YYSYMBOL_struct_code = 61,               /* struct_code  */
  YYSYMBOL_struct_def = 62,                /* struct_def  */
  YYSYMBOL_struct_body = 63,               /* struct_body  */
  YYSYMBOL_function = 64,                  /* function  */
  YYSYMBOL_function_dec = 65,              /* function_dec  */
  YYSYMBOL_data_type_new = 66,             /* data_type_new  */
  YYSYMBOL_data_type_pr = 67,              /* data_type_pr  */
  YYSYMBOL_function_params = 68,           /* function_params  */
  YYSYMBOL_function_param = 69,            /* function_param  */
  YYSYMBOL_class = 70,                     /* class  */
  YYSYMBOL_class_dec = 71,                 /* class_dec  */
  YYSYMBOL_class_stmt = 72,                /* class_stmt  */
  YYSYMBOL_statements = 73,                /* statements  */
  YYSYMBOL_statement = 74,                 /* statement  */
  YYSYMBOL_unary_stmt = 75,                /* unary_stmt  */
  YYSYMBOL_single_stmt = 76,               /* single_stmt  */
  YYSYMBOL_decl_stmt = 77,                 /* decl_stmt  */
  YYSYMBOL_list = 78,                      /* list  */
  YYSYMBOL_list_literal = 79,              /* list_literal  */
  YYSYMBOL_list_terminal = 80,             /* list_terminal  */
  YYSYMBOL_dim = 81,                       /* dim  */
  YYSYMBOL_id_list = 82,                   /* id_list  */
  YYSYMBOL_expr_stmt = 83,                 /* expr_stmt  */
  YYSYMBOL_if_stmt = 84,                   /* if_stmt  */
  YYSYMBOL_for_stmt = 85,                  /* for_stmt  */
  YYSYMBOL_while_stmt = 86,                /* while_stmt  */
  YYSYMBOL_return_stmt = 87,               /* return_stmt  */
  YYSYMBOL_call_stmt = 88,                 /* call_stmt  */
  YYSYMBOL_call = 89,                      /* call  */
  YYSYMBOL_call_args = 90,                 /* call_args  */
  YYSYMBOL_nested_expr = 91,               /* nested_expr  */
  YYSYMBOL_expr = 92,                      /* expr  */
  YYSYMBOL_expr_terminal = 93,             /* expr_terminal  */
  YYSYMBOL_conj = 94,                      /* conj  */
  YYSYMBOL_set_op = 95,                    /* set_op  */
  YYSYMBOL_arith_op = 96                   /* arith_op  */
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
#define YYFINAL  48
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   822

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  55
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  42
/* YYNRULES -- Number of rules.  */
#define YYNRULES  135
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  264

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
static const yytype_uint8 yyrline[] =
{
       0,    38,    38,    39,    42,    43,    46,    49,    50,    51,
      52,    55,    56,    57,    58,    59,    60,    63,    64,    67,
      70,    71,    74,    77,    78,    79,    80,    83,    84,    85,
      86,    87,    88,    89,    93,    94,    95,    96,   100,   101,
     102,   105,   106,   107,   110,   113,   116,   117,   118,   119,
     122,   123,   126,   127,   128,   129,   130,   131,   132,   133,
     136,   139,   140,   141,   144,   145,   146,   147,   150,   151,
     152,   155,   156,   157,   160,   161,   165,   166,   169,   170,
     171,   172,   173,   174,   177,   178,   181,   182,   183,   184,
     185,   186,   187,   188,   191,   192,   193,   194,   197,   198,
     201,   202,   205,   208,   211,   212,   213,   216,   217,   218,
     219,   220,   221,   224,   225,   226,   227,   228,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   242,   243,   246,
     247,   250,   251,   252,   253,   254
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
  "TYPEDEF", "$accept", "start", "include_stmts", "include_stmt",
  "identifier", "code", "struct_code", "struct_def", "struct_body",
  "function", "function_dec", "data_type_new", "data_type_pr",
  "function_params", "function_param", "class", "class_dec", "class_stmt",
  "statements", "statement", "unary_stmt", "single_stmt", "decl_stmt",
  "list", "list_literal", "list_terminal", "dim", "id_list", "expr_stmt",
  "if_stmt", "for_stmt", "while_stmt", "return_stmt", "call_stmt", "call",
  "call_args", "nested_expr", "expr", "expr_terminal", "conj", "set_op",
  "arith_op", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-230)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     264,    28,  -230,  -230,  -230,  -230,    37,   -27,  -230,  -230,
    -230,  -230,  -230,  -230,  -230,    61,   -29,    50,    82,    40,
     107,   264,  -230,   133,  -230,   330,  -230,   330,    74,    70,
      92,   330,    93,   330,   112,   330,  -230,   128,   174,   -34,
     -19,   152,   152,   150,   152,   161,  -230,  -230,  -230,  -230,
    -230,   167,    90,  -230,  -230,  -230,    25,   164,    42,   171,
    -230,   743,  -230,   180,   176,  -230,   770,   185,   240,   802,
      45,   770,    52,  -230,  -230,  -230,   200,  -230,  -230,  -230,
    -230,  -230,  -230,    66,    90,    34,  -230,  -230,   197,  -230,
     265,   378,   770,  -230,   770,  -230,   743,   201,   743,   743,
    -230,   211,   216,   223,    86,  -230,  -230,   222,  -230,  -230,
    -230,     9,  -230,  -230,    94,   237,   583,    90,  -230,   219,
    -230,    90,   244,  -230,  -230,  -230,  -230,  -230,  -230,    90,
    -230,  -230,  -230,  -230,    90,    90,    90,    19,   246,   247,
     249,    75,  -230,  -230,    36,   112,   112,  -230,  -230,  -230,
    -230,  -230,  -230,  -230,  -230,   253,   101,   109,  -230,  -230,
    -230,  -230,  -230,  -230,  -230,  -230,   770,  -230,  -230,     9,
     257,   -33,  -230,    45,   112,   259,  -230,   262,   771,   162,
    -230,  -230,  -230,  -230,  -230,  -230,   263,   344,    90,    90,
    -230,  -230,  -230,  -230,    21,  -230,  -230,   306,  -230,  -230,
    -230,  -230,    90,    90,    90,    90,  -230,    90,  -230,   266,
     268,   269,   271,  -230,  -230,  -230,  -230,  -230,  -230,    90,
     645,   681,   277,   274,  -230,  -230,  -230,  -230,  -230,  -230,
     273,   278,   152,   419,   433,   596,  -230,   199,   279,   280,
    -230,   285,  -230,  -230,  -230,   167,   694,   730,   632,   474,
    -230,  -230,  -230,  -230,  -230,  -230,  -230,  -230,   488,   529,
     543,  -230,  -230,  -230
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
      16,     0,    34,    35,    36,    37,     0,     0,    27,    28,
      29,    30,    31,    32,    33,     7,     0,     0,     0,     0,
       0,    16,     5,     0,     3,    16,    17,    16,     0,     0,
       0,    16,     0,    16,     0,    16,    45,     0,     0,     0,
      83,     0,     0,     0,     0,     0,     6,    18,     1,     4,
       2,     0,     0,    14,    13,    51,    83,     0,    83,     0,
      15,    49,    11,    83,     0,    12,    40,     0,     0,     0,
       0,    40,     7,     9,     8,    66,     0,    10,    21,    85,
     120,   121,   122,     0,     0,   119,   118,   123,     0,   112,
     117,     0,    40,    64,    40,    65,    49,     0,    49,    49,
      67,     0,     0,     0,     0,    39,    77,     0,    69,    68,
      70,     0,    82,    79,     0,    78,     0,     0,   126,     0,
      60,   106,   124,    84,   131,   132,   133,   134,   135,     0,
     127,   128,   129,   130,     0,     0,     0,     0,     0,     0,
       0,     7,    22,    59,     0,     0,     0,    50,    52,    58,
      53,    54,    55,    56,    57,     0,     0,     0,    46,    44,
      47,    48,    43,    41,    42,    26,     0,    76,    74,     0,
       0,     0,    25,     0,     0,     0,    20,     0,   107,     0,
     105,   114,   113,   116,   115,   100,     0,     0,     0,     0,
     102,    23,    24,    38,     0,    72,    71,     0,    81,    80,
      19,   125,     0,     0,     0,     0,   103,     0,   101,     0,
       0,     0,    71,    75,   109,   108,   111,   110,   104,     0,
       0,     0,     0,     0,    51,    99,    61,    63,    62,    51,
      87,     0,     0,     0,     0,     0,    73,     0,     0,     0,
      98,    86,    51,    93,    89,    60,     0,     0,     0,     0,
      51,    97,    51,    95,    51,    92,    88,    91,     0,     0,
       0,    96,    94,    90
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -230,  -230,  -230,   291,     0,   123,  -230,   305,  -230,   -43,
    -230,    47,   236,   -58,   163,  -230,  -230,    73,  -127,  -230,
      95,  -218,   -59,   282,   -69,   168,   248,   -25,   -53,  -229,
    -230,  -230,  -230,   -83,   -18,  -230,    49,  -230,  -230,   153,
     178,   187
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,    20,    21,    22,    85,    24,    25,    26,   116,    27,
      28,   145,   146,   104,   105,    31,    32,    97,    91,   147,
      86,   225,    33,    34,   170,   171,    39,    43,    35,   150,
     151,   152,   153,   154,    87,   179,    88,    89,    90,   134,
     135,   136
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      23,   112,    98,   230,    57,    59,   244,    68,    99,    64,
      70,   196,   168,   114,    38,   197,    69,   243,    96,   256,
      44,    23,    80,    81,    82,    23,    71,    23,   251,   253,
     255,    23,   148,    23,   156,    23,   157,    98,   149,    98,
      98,    73,    74,    99,    77,    99,    99,    29,    80,    81,
      82,    83,   169,    96,    70,    96,    96,   176,    72,    16,
     120,    23,    51,    52,    84,   212,   185,    36,    29,   197,
      92,    70,    29,   155,    29,    38,    37,    83,    29,   121,
      29,   121,    29,   118,    72,    16,    46,    94,   111,    45,
      84,   144,    17,    80,    81,    82,    23,   233,    23,    23,
      40,    41,   234,    42,   198,    72,    16,    48,    29,    56,
      41,   117,    42,   102,    63,   249,   108,    55,   102,   113,
      57,    59,    83,   258,    41,   259,    42,   260,   209,    72,
      16,    58,   165,   119,   166,    84,    61,   228,   228,   102,
     172,   102,   166,    29,    50,    29,    29,   191,    53,   166,
      54,    63,   228,   231,    60,   192,    62,   166,    65,    51,
      52,   226,   226,   228,   228,   228,   177,   227,   227,   158,
     180,   160,   161,    66,   148,   148,   226,    67,   181,   239,
     149,   149,   227,   182,   183,   184,   186,   226,   226,   226,
     148,    72,    16,   227,   227,   227,   149,    75,    76,   148,
     148,   148,   155,   155,    78,   149,   149,   149,   206,    70,
     207,    93,    76,   102,    79,   155,   155,   155,    95,    76,
     144,   144,   199,   100,    76,   245,    52,   106,   155,   155,
     155,   155,   237,   144,   144,   144,    30,   210,   211,   115,
     155,   155,   155,   107,   123,   159,   144,   144,   144,   144,
     162,   214,   215,   216,   217,   163,   218,    30,   144,   144,
     144,    30,   164,    30,   167,   178,   173,    30,   223,    30,
       1,    30,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    68,   124,   125,   126,   127,
     128,   187,   188,   129,   189,   130,   131,    30,   132,   133,
     190,   195,   103,    15,    16,   109,   200,   103,   201,   213,
     208,   235,    49,   219,   220,   221,    17,    18,    19,   222,
     111,   232,   236,   248,    47,   246,   247,   238,   103,   193,
     103,   203,    30,   122,    30,    30,     1,   194,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,   110,     2,     3,     4,     5,   204,     7,     8,     9,
      10,    11,    12,    13,    14,   205,     0,     0,     0,    15,
      16,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    17,   174,    19,   137,     2,     3,     4,     5,
       0,     7,     8,     9,    10,    11,    12,    13,    14,     0,
       0,     0,   103,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   138,   139,   140,     0,   141,    16,     0,
       0,     0,   142,     0,     0,   143,   137,     2,     3,     4,
       5,     0,     7,     8,     9,    10,    11,    12,    13,    14,
     137,     2,     3,     4,     5,     0,     7,     8,     9,    10,
      11,    12,    13,    14,   138,   139,   140,     0,   141,    16,
       0,     0,     0,   240,     0,     0,   143,     0,   138,   139,
     140,     0,   141,    16,     0,     0,     0,   241,     0,     0,
     143,   137,     2,     3,     4,     5,     0,     7,     8,     9,
      10,    11,    12,    13,    14,   137,     2,     3,     4,     5,
       0,     7,     8,     9,    10,    11,    12,    13,    14,   138,
     139,   140,     0,   141,    16,     0,     0,     0,   257,     0,
       0,   143,     0,   138,   139,   140,     0,   141,    16,     0,
       0,     0,   261,     0,     0,   143,   137,     2,     3,     4,
       5,     0,     7,     8,     9,    10,    11,    12,    13,    14,
     137,     2,     3,     4,     5,     0,     7,     8,     9,    10,
      11,    12,    13,    14,   138,   139,   140,     0,   141,    16,
       0,     0,     0,   262,     0,     0,   143,     0,   138,   139,
     140,     0,   141,    16,     0,     0,     0,   263,     0,     0,
     143,     2,     3,     4,     5,     0,     7,     8,     9,    10,
      11,    12,    13,    14,     2,     3,     4,     5,     0,     7,
       8,     9,    10,    11,    12,    13,    14,     0,     0,     0,
       0,     0,   174,     0,     0,     0,     0,   175,     0,     0,
       0,     0,     0,   140,     0,   141,    16,     0,     0,   242,
       2,     3,     4,     5,     0,     7,     8,     9,    10,    11,
      12,    13,    14,     2,     3,     4,     5,     0,     7,     8,
       9,    10,    11,    12,    13,    14,     0,     0,     0,   140,
       0,   141,    16,     0,     0,   254,     0,     0,     0,     0,
       0,     0,     0,     0,   141,    16,     0,     0,   224,     2,
       3,     4,     5,     0,     7,     8,     9,    10,    11,    12,
      13,    14,     2,     3,     4,     5,     0,     7,     8,     9,
      10,    11,    12,    13,    14,     0,     0,     0,     0,     0,
     141,    16,     0,     0,   229,     0,     0,     0,     0,     0,
       0,     0,     0,   141,    16,     0,     0,   250,     2,     3,
       4,     5,     0,     7,     8,     9,    10,    11,    12,    13,
      14,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,     0,     0,     0,     0,     0,   141,
      16,     0,     0,   252,     0,     0,     0,     0,     2,     3,
       4,     5,    15,    16,     8,     9,    10,    11,    12,    13,
      14,     0,   124,   125,   126,   127,   128,     0,     0,   202,
       0,   130,   131,     0,   132,   133,     0,     0,     0,   101,
       2,     3,     4,     5,     0,     7,     8,     9,    10,    11,
      12,    13,    14
};

static const yytype_int16 yycheck[] =
{
       0,    70,    61,   221,    29,    30,   235,    41,    61,    34,
      29,    44,     3,    71,    41,    48,    50,   235,    61,   248,
      49,    21,     3,     4,     5,    25,    45,    27,   246,   247,
     248,    31,    91,    33,    92,    35,    94,    96,    91,    98,
      99,    41,    42,    96,    44,    98,    99,     0,     3,     4,
       5,    32,    43,    96,    29,    98,    99,   116,    39,    40,
      26,    61,    26,    27,    45,    44,    47,    39,    21,    48,
      45,    29,    25,    91,    27,    41,    39,    32,    31,    45,
      33,    45,    35,    83,    39,    40,     4,    45,    43,    39,
      45,    91,    52,     3,     4,     5,    96,   224,    98,    99,
      39,    49,   229,    51,   173,    39,    40,     0,    61,    39,
      49,    45,    51,    66,    39,   242,    69,    43,    71,    70,
     145,   146,    32,   250,    49,   252,    51,   254,   187,    39,
      40,    39,    46,    84,    48,    45,    43,   220,   221,    92,
      46,    94,    48,    96,    21,    98,    99,    46,    25,    48,
      27,    39,   235,   222,    31,    46,    33,    48,    35,    26,
      27,   220,   221,   246,   247,   248,   117,   220,   221,    96,
     121,    98,    99,    45,   233,   234,   235,     3,   129,   232,
     233,   234,   235,   134,   135,   136,   137,   246,   247,   248,
     249,    39,    40,   246,   247,   248,   249,    47,    48,   258,
     259,   260,   220,   221,    43,   258,   259,   260,    46,    29,
      48,    47,    48,   166,    47,   233,   234,   235,    47,    48,
     220,   221,   173,    47,    48,    26,    27,    42,   246,   247,
     248,   249,   232,   233,   234,   235,     0,   188,   189,    39,
     258,   259,   260,     3,    47,    44,   246,   247,   248,   249,
      39,   202,   203,   204,   205,    39,   207,    21,   258,   259,
     260,    25,    39,    27,    42,    46,    29,    31,   219,    33,
       6,    35,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    41,    21,    22,    23,    24,
      25,    45,    45,    28,    45,    30,    31,    61,    33,    34,
      47,    44,    66,    39,    40,    69,    47,    71,    46,     3,
      47,    38,    21,    47,    46,    46,    52,    53,    54,    48,
      43,    47,    44,    38,    19,    46,    46,   232,    92,   166,
      94,   178,    96,    85,    98,    99,     6,   169,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    69,     8,     9,    10,    11,   178,    13,    14,    15,
      16,    17,    18,    19,    20,   178,    -1,    -1,    -1,    39,
      40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    52,    39,    54,     7,     8,     9,    10,    11,
      -1,    13,    14,    15,    16,    17,    18,    19,    20,    -1,
      -1,    -1,   166,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    35,    36,    37,    -1,    39,    40,    -1,
      -1,    -1,    44,    -1,    -1,    47,     7,     8,     9,    10,
      11,    -1,    13,    14,    15,    16,    17,    18,    19,    20,
       7,     8,     9,    10,    11,    -1,    13,    14,    15,    16,
      17,    18,    19,    20,    35,    36,    37,    -1,    39,    40,
      -1,    -1,    -1,    44,    -1,    -1,    47,    -1,    35,    36,
      37,    -1,    39,    40,    -1,    -1,    -1,    44,    -1,    -1,
      47,     7,     8,     9,    10,    11,    -1,    13,    14,    15,
      16,    17,    18,    19,    20,     7,     8,     9,    10,    11,
      -1,    13,    14,    15,    16,    17,    18,    19,    20,    35,
      36,    37,    -1,    39,    40,    -1,    -1,    -1,    44,    -1,
      -1,    47,    -1,    35,    36,    37,    -1,    39,    40,    -1,
      -1,    -1,    44,    -1,    -1,    47,     7,     8,     9,    10,
      11,    -1,    13,    14,    15,    16,    17,    18,    19,    20,
       7,     8,     9,    10,    11,    -1,    13,    14,    15,    16,
      17,    18,    19,    20,    35,    36,    37,    -1,    39,    40,
      -1,    -1,    -1,    44,    -1,    -1,    47,    -1,    35,    36,
      37,    -1,    39,    40,    -1,    -1,    -1,    44,    -1,    -1,
      47,     8,     9,    10,    11,    -1,    13,    14,    15,    16,
      17,    18,    19,    20,     8,     9,    10,    11,    -1,    13,
      14,    15,    16,    17,    18,    19,    20,    -1,    -1,    -1,
      -1,    -1,    39,    -1,    -1,    -1,    -1,    44,    -1,    -1,
      -1,    -1,    -1,    37,    -1,    39,    40,    -1,    -1,    43,
       8,     9,    10,    11,    -1,    13,    14,    15,    16,    17,
      18,    19,    20,     8,     9,    10,    11,    -1,    13,    14,
      15,    16,    17,    18,    19,    20,    -1,    -1,    -1,    37,
      -1,    39,    40,    -1,    -1,    43,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    39,    40,    -1,    -1,    43,     8,
       9,    10,    11,    -1,    13,    14,    15,    16,    17,    18,
      19,    20,     8,     9,    10,    11,    -1,    13,    14,    15,
      16,    17,    18,    19,    20,    -1,    -1,    -1,    -1,    -1,
      39,    40,    -1,    -1,    43,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    39,    40,    -1,    -1,    43,     8,     9,
      10,    11,    -1,    13,    14,    15,    16,    17,    18,    19,
      20,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    -1,    -1,    -1,    -1,    -1,    39,
      40,    -1,    -1,    43,    -1,    -1,    -1,    -1,     8,     9,
      10,    11,    39,    40,    14,    15,    16,    17,    18,    19,
      20,    -1,    21,    22,    23,    24,    25,    -1,    -1,    28,
      -1,    30,    31,    -1,    33,    34,    -1,    -1,    -1,    39,
       8,     9,    10,    11,    -1,    13,    14,    15,    16,    17,
      18,    19,    20
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     6,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    39,    40,    52,    53,    54,
      56,    57,    58,    59,    60,    61,    62,    64,    65,    66,
      67,    70,    71,    77,    78,    83,    39,    39,    41,    81,
      39,    49,    51,    82,    49,    39,     4,    62,     0,    58,
      60,    26,    27,    60,    60,    43,    39,    82,    39,    82,
      60,    43,    60,    39,    82,    60,    45,     3,    41,    50,
      29,    45,    39,    59,    59,    47,    48,    59,    43,    47,
       3,     4,     5,    32,    45,    59,    75,    89,    91,    92,
      93,    73,    45,    47,    45,    47,    64,    72,    77,    83,
      47,    39,    66,    67,    68,    69,    42,     3,    66,    67,
      78,    43,    79,    91,    68,    39,    63,    45,    59,    91,
      26,    45,    81,    47,    21,    22,    23,    24,    25,    28,
      30,    31,    33,    34,    94,    95,    96,     7,    35,    36,
      37,    39,    44,    47,    59,    66,    67,    74,    77,    83,
      84,    85,    86,    87,    88,    89,    68,    68,    72,    44,
      72,    72,    39,    39,    39,    46,    48,    42,     3,    43,
      79,    80,    46,    29,    39,    44,    77,    91,    46,    90,
      91,    91,    91,    91,    91,    47,    91,    45,    45,    45,
      47,    46,    46,    69,    80,    44,    44,    48,    79,    91,
      47,    46,    28,    94,    95,    96,    46,    48,    47,    77,
      91,    91,    44,     3,    91,    91,    91,    91,    91,    47,
      46,    46,    48,    91,    43,    76,    77,    83,    88,    43,
      76,    79,    47,    73,    73,    38,    44,    59,    75,    83,
      44,    44,    43,    76,    84,    26,    46,    46,    38,    73,
      43,    76,    43,    76,    43,    76,    84,    44,    73,    73,
      73,    44,    44,    44
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    55,    56,    56,    57,    57,    58,    59,    59,    59,
      59,    60,    60,    60,    60,    60,    60,    61,    61,    62,
      63,    63,    64,    65,    65,    65,    65,    66,    66,    66,
      66,    66,    66,    66,    67,    67,    67,    67,    68,    68,
      68,    69,    69,    69,    70,    71,    72,    72,    72,    72,
      73,    73,    74,    74,    74,    74,    74,    74,    74,    74,
      75,    76,    76,    76,    77,    77,    77,    77,    78,    78,
      78,    79,    79,    79,    80,    80,    81,    81,    82,    82,
      82,    82,    82,    82,    83,    83,    84,    84,    84,    84,
      84,    84,    84,    84,    85,    85,    85,    85,    86,    86,
      87,    87,    88,    89,    90,    90,    90,    91,    91,    91,
      91,    91,    91,    92,    92,    92,    92,    92,    93,    93,
      93,    93,    93,    93,    93,    93,    93,    94,    94,    95,
      95,    96,    96,    96,    96,    96
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     1,     2,     1,     2,     1,     3,     3,
       3,     2,     2,     2,     2,     2,     0,     1,     2,     6,
       2,     0,     4,     5,     5,     5,     5,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     1,
       0,     2,     2,     2,     4,     2,     2,     2,     2,     0,
       2,     0,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     1,     1,     1,     3,     3,     3,     3,     4,     4,
       4,     3,     3,     7,     1,     3,     4,     3,     3,     3,
       5,     5,     3,     1,     4,     3,     7,     5,     9,     7,
      11,     9,     9,     7,    11,     9,    11,     9,     7,     5,
       2,     3,     2,     4,     3,     1,     0,     3,     5,     5,
       5,     5,     1,     3,     3,     3,     3,     1,     1,     1,
       1,     1,     1,     1,     2,     4,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1
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

#line 1464 "yacc.tab.c"

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

#line 257 "yacc.y"


// error handling
void yyerror(char *s) {
    fprintf(yyout," : invalid statement");
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
        char suffix = (char)malloc(100*sizeof(char));
        i = filestart;
        while(argv[1][i] != '.'){
            suffix[i-filestart] = argv[1][i];
            i++;
        }

        // append suffix to outfile and C_outfile name
        char outfile = (char)malloc(100*sizeof(char));
        char C_outfile = (char)malloc(100*sizeof(char));
        sprintf(outfile,"TP2/seq_tokens_%s.txt",suffix);
        sprintf(C_outfile,"TP2/parsed_%s.parsed",suffix);
        

        // open the respective files
        yyout = fopen(C_outfile, "w+");
        tf = fopen(outfile , "w+");

        fprintf(tf,"Name : Aditya Bacharwar\n");
        fprintf(tf,"ID : Es21btech11003\n");
        fprintf(tf,"Input File: %s.clike\n\n", suffix);

    }
    yyparse();
    return 0;
}
