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
  YYSYMBOL_DECIMAL = 6,                    /* DECIMAL  */
  YYSYMBOL_CLASS = 7,                      /* CLASS  */
  YYSYMBOL_RETURN = 8,                     /* RETURN  */
  YYSYMBOL_INT = 9,                        /* INT  */
  YYSYMBOL_STRING = 10,                    /* STRING  */
  YYSYMBOL_BOOL = 11,                      /* BOOL  */
  YYSYMBOL_FLOAT = 12,                     /* FLOAT  */
  YYSYMBOL_VOID = 13,                      /* VOID  */
  YYSYMBOL_LIST = 14,                      /* LIST  */
  YYSYMBOL_DOCUMENT = 15,                  /* DOCUMENT  */
  YYSYMBOL_TEAM = 16,                      /* TEAM  */
  YYSYMBOL_MEMBERS = 17,                   /* MEMBERS  */
  YYSYMBOL_TASK = 18,                      /* TASK  */
  YYSYMBOL_EVENT = 19,                     /* EVENT  */
  YYSYMBOL_MEETING = 20,                   /* MEETING  */
  YYSYMBOL_CALENDAR = 21,                  /* CALENDAR  */
  YYSYMBOL_ADD = 22,                       /* ADD  */
  YYSYMBOL_SUB = 23,                       /* SUB  */
  YYSYMBOL_MUL = 24,                       /* MUL  */
  YYSYMBOL_DIV = 25,                       /* DIV  */
  YYSYMBOL_MOD = 26,                       /* MOD  */
  YYSYMBOL_UNARY_OP = 27,                  /* UNARY_OP  */
  YYSYMBOL_ASSIGN_OP = 28,                 /* ASSIGN_OP  */
  YYSYMBOL_REL_OP = 29,                    /* REL_OP  */
  YYSYMBOL_EQUALS = 30,                    /* EQUALS  */
  YYSYMBOL_AND = 31,                       /* AND  */
  YYSYMBOL_OR = 32,                        /* OR  */
  YYSYMBOL_NOT = 33,                       /* NOT  */
  YYSYMBOL_INTERSECTION_OP = 34,           /* INTERSECTION_OP  */
  YYSYMBOL_UNION_OP = 35,                  /* UNION_OP  */
  YYSYMBOL_FOR = 36,                       /* FOR  */
  YYSYMBOL_WHILE = 37,                     /* WHILE  */
  YYSYMBOL_IF = 38,                        /* IF  */
  YYSYMBOL_ELSE = 39,                      /* ELSE  */
  YYSYMBOL_IDENTIFIER = 40,                /* IDENTIFIER  */
  YYSYMBOL_SELF = 41,                      /* SELF  */
  YYSYMBOL_LSB = 42,                       /* LSB  */
  YYSYMBOL_RSB = 43,                       /* RSB  */
  YYSYMBOL_LCB = 44,                       /* LCB  */
  YYSYMBOL_RCB = 45,                       /* RCB  */
  YYSYMBOL_LPB = 46,                       /* LPB  */
  YYSYMBOL_RPB = 47,                       /* RPB  */
  YYSYMBOL_SEMICOLON = 48,                 /* SEMICOLON  */
  YYSYMBOL_COMMA = 49,                     /* COMMA  */
  YYSYMBOL_DOT = 50,                       /* DOT  */
  YYSYMBOL_COLON = 51,                     /* COLON  */
  YYSYMBOL_ARROW = 52,                     /* ARROW  */
  YYSYMBOL_STRUCT = 53,                    /* STRUCT  */
  YYSYMBOL_INCLUDE = 54,                   /* INCLUDE  */
  YYSYMBOL_TYPEDEF = 55,                   /* TYPEDEF  */
  YYSYMBOL_YYACCEPT = 56,                  /* $accept  */
  YYSYMBOL_start = 57,                     /* start  */
  YYSYMBOL_58_1 = 58,                      /* $@1  */
  YYSYMBOL_59_2 = 59,                      /* $@2  */
  YYSYMBOL_include_stmts = 60,             /* include_stmts  */
  YYSYMBOL_include_stmt = 61,              /* include_stmt  */
  YYSYMBOL_identifier = 62,                /* identifier  */
  YYSYMBOL_code = 63,                      /* code  */
  YYSYMBOL_struct_code = 64,               /* struct_code  */
  YYSYMBOL_struct_def = 65,                /* struct_def  */
  YYSYMBOL_struct_body = 66,               /* struct_body  */
  YYSYMBOL_function = 67,                  /* function  */
  YYSYMBOL_function_dec = 68,              /* function_dec  */
  YYSYMBOL_data_type_new = 69,             /* data_type_new  */
  YYSYMBOL_data_type_pr = 70,              /* data_type_pr  */
  YYSYMBOL_function_params = 71,           /* function_params  */
  YYSYMBOL_function_param = 72,            /* function_param  */
  YYSYMBOL_class = 73,                     /* class  */
  YYSYMBOL_class_dec = 74,                 /* class_dec  */
  YYSYMBOL_class_stmt = 75,                /* class_stmt  */
  YYSYMBOL_statements = 76,                /* statements  */
  YYSYMBOL_statement = 77,                 /* statement  */
  YYSYMBOL_ids = 78,                       /* ids  */
  YYSYMBOL_unary_stmt = 79,                /* unary_stmt  */
  YYSYMBOL_single_stmt = 80,               /* single_stmt  */
  YYSYMBOL_decl_stmt = 81,                 /* decl_stmt  */
  YYSYMBOL_list = 82,                      /* list  */
  YYSYMBOL_list_literal = 83,              /* list_literal  */
  YYSYMBOL_list_terminal = 84,             /* list_terminal  */
  YYSYMBOL_dim = 85,                       /* dim  */
  YYSYMBOL_id_list = 86,                   /* id_list  */
  YYSYMBOL_expr_stmt = 87,                 /* expr_stmt  */
  YYSYMBOL_expr_stmt_without_semicolon = 88, /* expr_stmt_without_semicolon  */
  YYSYMBOL_if_stmt = 89,                   /* if_stmt  */
  YYSYMBOL_for_stmt = 90,                  /* for_stmt  */
  YYSYMBOL_while_stmt = 91,                /* while_stmt  */
  YYSYMBOL_return_stmt = 92,               /* return_stmt  */
  YYSYMBOL_call_stmt = 93,                 /* call_stmt  */
  YYSYMBOL_call = 94,                      /* call  */
  YYSYMBOL_call_args = 95,                 /* call_args  */
  YYSYMBOL_nested_expr = 96,               /* nested_expr  */
  YYSYMBOL_expr = 97,                      /* expr  */
  YYSYMBOL_expr_terminal = 98,             /* expr_terminal  */
  YYSYMBOL_conj = 99,                      /* conj  */
  YYSYMBOL_set_op = 100,                   /* set_op  */
  YYSYMBOL_arith_op = 101                  /* arith_op  */
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
#define YYLAST   1096

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  56
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  46
/* YYNRULES -- Number of rules.  */
#define YYNRULES  147
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  289

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   310


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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    84,    84,    84,    92,    92,   102,   103,   107,   112,
     119,   123,   127,   131,   137,   138,   139,   140,   141,   145,
     149,   153,   154,   158,   164,   180,   196,   197,   213,   217,
     218,   219,   220,   221,   222,   223,   229,   230,   231,   232,
     238,   242,   246,   253,   262,   271,   272,   276,   280,   284,
     285,   286,   287,   291,   292,   295,   299,   300,   301,   302,
     303,   304,   305,   306,   307,   308,   311,   312,   316,   322,
     326,   327,   328,   329,   334,   351,   368,   369,   374,   375,
     376,   381,   386,   387,   392,   393,   394,   395,   400,   404,
     405,   406,   413,   418,   419,   420,   425,   426,   427,   428,
     429,   430,   431,   432,   437,   438,   439,   440,   445,   446,
     451,   452,   456,   461,   466,   467,   468,   469,   470,   475,
     476,   477,   478,   479,   480,   485,   486,   487,   488,   489,
     496,   499,   502,   505,   508,   511,   512,   513,   514,   519,
     520,   524,   525,   530,   531,   532,   533,   534
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
  "STRING_LITERAL", "BOOL_LITERAL", "DECIMAL", "CLASS", "RETURN", "INT",
  "STRING", "BOOL", "FLOAT", "VOID", "LIST", "DOCUMENT", "TEAM", "MEMBERS",
  "TASK", "EVENT", "MEETING", "CALENDAR", "ADD", "SUB", "MUL", "DIV",
  "MOD", "UNARY_OP", "ASSIGN_OP", "REL_OP", "EQUALS", "AND", "OR", "NOT",
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

#define YYPACT_NINF (-239)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-3)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -42,    51,     3,   787,  -239,    91,   772,  -239,    59,  -239,
    -239,  -239,  -239,    63,    64,  -239,  -239,  -239,  -239,  -239,
    -239,  -239,    72,    81,  -239,   787,  -239,   787,    79,    87,
     111,   787,   119,   787,   126,  -239,  -239,  -239,  -239,   127,
      74,   -28,   -25,   129,   151,  -239,  -239,  -239,   -12,   133,
       7,   140,  -239,  1008,  -239,    14,   155,   738,  -239,  -239,
    -239,  -239,   130,    32,   148,  -239,   810,   810,   -26,  -239,
    -239,  -239,   165,  -239,   807,   366,  1054,   810,   738,  -239,
     177,  -239,   431,   738,  -239,   738,  -239,    84,   172,  1008,
     173,  -239,  1008,  1008,   171,   738,  -239,   182,   183,   184,
      26,  -239,   185,   810,  -239,   166,    46,   166,    -9,  -239,
     186,  -239,   810,  -239,  -239,  -239,  -239,  -239,  -239,   810,
    -239,  -239,  -239,  -239,   810,   810,   810,  -239,   187,  -239,
    -239,  -239,  -239,    62,   202,   848,   341,   188,   189,   191,
     100,  -239,  -239,  -239,   200,   101,   201,   201,  -239,  -239,
     201,  -239,  -239,  -239,  -239,  -239,  -239,   197,    86,   112,
     810,   810,  -239,  -239,  -239,  -239,  -239,   138,  -239,  -239,
    -239,  -239,   738,  -239,   203,  -239,   166,  -239,  -239,   810,
    1061,   -17,   145,  -239,  -239,  -239,  -239,  -239,  -239,  -239,
     810,   201,   206,  -239,  -239,   207,  1041,   810,   810,   218,
     473,  -239,     6,   166,  -239,  -239,  -239,  -239,  -239,  -239,
    -239,  -239,  -239,  -239,   810,   810,   810,   810,   810,  -239,
     810,  -239,  -239,  -239,   810,   810,   204,   210,  -239,   211,
     209,   215,  -239,  -239,  -239,  -239,  -239,   -11,  -239,   216,
     223,   910,   946,  -239,  -239,  -239,   810,   166,   166,  -239,
     116,  -239,  -239,  -239,  -239,  -239,   219,  -239,   229,   230,
     515,   166,   557,   861,   959,   995,  -239,   231,   227,  -239,
    -239,  -239,  -239,  -239,  -239,  -239,  -239,   897,   599,   641,
     683,  -239,  -239,  -239,  -239,  -239,  -239,   725,  -239
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
      91,     0,    17,    52,    14,    91,     0,    42,   131,   133,
     134,   132,     0,     9,     0,    87,     0,     0,    69,   130,
     138,   135,     0,   124,   129,     0,     0,     0,    42,    76,
       0,    22,     0,    42,    74,    42,    75,     9,    69,    52,
       0,    95,    52,    52,     0,    42,    77,     0,     0,     0,
       0,    41,     0,     0,   137,     0,    11,     0,     0,    82,
       0,    68,   118,    85,   143,   144,   145,   146,   147,     0,
     139,   140,   141,   142,     0,     0,     0,    86,     0,    80,
      79,    78,    89,     0,    88,     0,     0,     0,     0,     0,
       9,    55,    23,    63,     0,    69,     0,     0,    54,    56,
       0,    62,    57,    58,    59,    60,    61,     0,     0,     0,
       0,     0,    49,    47,    50,    51,    92,     0,    45,    43,
      44,    27,     0,    46,     0,    10,     0,    13,    81,     0,
     119,    69,     0,   115,   126,   125,   128,   127,    84,    26,
       0,     0,     0,    21,   110,     0,     0,     0,     0,    91,
       0,    67,     0,     0,   112,    24,    25,    93,    94,    28,
      40,   136,    12,    83,     0,     0,     0,     0,     0,   113,
       0,    90,    20,   111,     0,     0,     0,     0,    53,     0,
       0,     0,   121,   120,   123,   122,   117,    69,   114,     0,
       0,     0,     0,    65,    66,    64,     0,     0,     0,    55,
      69,   109,    70,    72,    71,    55,    97,   116,     0,     0,
       0,     0,     0,     0,     0,     0,   108,     0,    96,    55,
     103,    99,    55,   105,    55,   107,    73,     0,     0,     0,
       0,    55,   102,    98,   101,   104,   106,     0,   100
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -239,  -239,  -239,  -239,  -239,   274,   -51,    77,  -239,  -239,
    -239,   -44,  -239,   272,   301,    89,   109,  -239,  -239,    -8,
    -133,  -239,  -239,     5,  -238,    -3,   335,  -239,  -239,   273,
      33,   -21,   -32,  -230,  -239,  -239,  -239,  -172,    31,  -239,
     -60,  -239,  -239,   106,   108,   110
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     1,     2,     3,     6,     7,    68,    24,    25,    26,
     135,    27,    28,   146,   147,   100,   101,    31,    32,    90,
      82,   148,   202,    69,   251,   149,   150,    70,   108,   106,
      43,   151,    94,   152,   153,   154,   155,   156,    71,   182,
      72,    73,    74,   124,   125,   126
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      33,   111,    88,    33,   256,    77,   109,   110,   200,    89,
     111,   104,    -2,   218,    75,   128,   111,   132,    77,   246,
     112,    78,    33,    76,    33,   270,   273,   275,    33,   112,
      33,   145,    93,   271,    83,   112,   178,    77,    88,   282,
     179,    88,    88,   174,    77,    89,   229,   283,    89,    89,
      92,     4,   183,    85,   175,   230,   177,     5,    91,   184,
      95,   181,    49,    51,   185,   186,   187,    56,    93,   254,
     254,    93,    93,   171,    40,   172,   195,    58,    59,    60,
      61,   162,   105,    37,   164,   165,    92,    91,    75,    92,
      92,   254,   254,   254,    91,    35,   176,    91,    91,    38,
     207,   208,    45,    39,    46,   254,    40,    62,    52,   189,
      54,   172,    42,   157,    63,    64,   260,    65,    66,   213,
      67,    44,   262,    47,    42,   212,    40,    48,   111,   160,
     221,   161,   193,   205,   105,   172,   278,   226,   227,   279,
     199,   280,    40,   111,   160,    88,   161,   112,   287,   145,
     105,    50,   231,   203,   232,   233,   234,   235,   236,   206,
     238,   172,   112,    53,   239,   240,    55,   133,   261,   237,
      63,    64,   158,    57,   159,   225,   103,    79,    80,    49,
      51,    84,    80,    56,   167,   209,   257,   172,    86,    80,
     250,   250,   219,   224,   220,    81,    88,    88,   107,   111,
     160,    91,   161,    96,    80,    91,    63,    64,   113,   145,
     267,   145,   250,   250,   250,   258,   259,   134,   163,   166,
     253,   253,   168,   169,   170,   173,   250,   145,   145,   145,
     188,   157,   190,   180,   196,   197,   145,   198,   252,   252,
     201,   199,   253,   253,   253,   204,    91,    91,    77,   244,
     211,   241,    91,    91,   222,   223,   253,   242,   263,   243,
     252,   252,   252,   245,   247,    91,   277,    91,    91,    91,
      91,   248,   157,   157,   252,    29,   264,   265,    29,   276,
      36,   210,    91,    91,    91,    91,   215,    41,   216,     0,
     217,   157,    91,   157,   157,   157,   157,    29,     0,    29,
       0,     0,     0,    29,    30,    29,     0,    30,   157,   157,
     157,   157,     0,     0,     0,     0,     0,     0,   157,     0,
       0,     0,     0,     0,     0,    29,    30,     0,    30,    98,
       0,     0,    30,     0,    30,     0,     0,     0,    34,     0,
       0,    34,     0,     0,    58,    59,    60,    61,   130,     0,
      98,     0,     0,     0,    30,    98,     0,    98,    99,     0,
      34,    29,    34,     0,    29,    29,    34,    98,    34,    58,
      59,    60,    61,     0,    62,     0,     0,   131,     0,    99,
       0,    63,    64,     0,    99,    66,    99,    67,    34,   194,
      30,     0,   102,    30,    30,     0,    99,     0,     0,    62,
       0,     0,     0,     0,     0,     0,    63,    64,     0,   127,
      66,     0,    67,   102,     0,     0,     0,     0,   102,     0,
     102,     0,     0,     0,    34,     0,     0,    34,    34,     0,
     102,     0,     0,     0,     0,     0,     0,     0,     0,   136,
       9,    10,    11,    12,    98,    14,    15,    16,    17,    18,
      19,    20,    21,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   137,   138,   139,
       0,   140,    64,    99,     0,   141,   142,     0,     0,   143,
       0,   136,     9,    10,    11,    12,   144,    14,    15,    16,
      17,    18,    19,    20,    21,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   102,     0,   137,
     138,   139,     0,   140,    64,     0,     0,   141,   228,     0,
       0,   143,     0,   136,     9,    10,    11,    12,   144,    14,
      15,    16,    17,    18,    19,    20,    21,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   137,   138,   139,     0,   140,    64,     0,     0,   141,
     266,     0,     0,   143,     0,   136,     9,    10,    11,    12,
     144,    14,    15,    16,    17,    18,    19,    20,    21,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   137,   138,   139,     0,   140,    64,     0,
       0,   141,   268,     0,     0,   143,     0,   136,     9,    10,
      11,    12,   144,    14,    15,    16,    17,    18,    19,    20,
      21,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   137,   138,   139,     0,   140,
      64,     0,     0,   141,   284,     0,     0,   143,     0,   136,
       9,    10,    11,    12,   144,    14,    15,    16,    17,    18,
      19,    20,    21,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   137,   138,   139,
       0,   140,    64,     0,     0,   141,   285,     0,     0,   143,
       0,   136,     9,    10,    11,    12,   144,    14,    15,    16,
      17,    18,    19,    20,    21,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   137,
     138,   139,     0,   140,    64,     0,     0,   141,   286,     0,
       0,   143,     0,   136,     9,    10,    11,    12,   144,    14,
      15,    16,    17,    18,    19,    20,    21,     9,    10,    11,
      12,     0,    14,    15,    16,    17,    18,    19,    20,    21,
       0,   137,   138,   139,     0,   140,    64,     0,     0,   141,
     288,     0,     0,   143,     0,     0,     0,     0,    97,     8,
     144,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,     8,     0,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,     0,
       0,     0,    22,    58,    59,    60,    61,     0,     0,     0,
       0,     0,     0,     0,     0,    23,     5,    22,     0,   114,
     115,   116,   117,   118,     0,     0,   119,     0,   120,   121,
      23,   122,   123,    62,     0,     0,     0,     0,     0,     0,
      63,    64,     0,     0,    66,     0,    67,     9,    10,    11,
      12,     0,    14,    15,    16,    17,    18,    19,    20,    21,
       9,    10,    11,    12,     0,    14,    15,    16,    17,    18,
      19,    20,    21,     0,     0,     0,     0,     0,   191,     0,
       0,     0,     0,   192,     0,     0,     0,     0,     0,   139,
       0,   140,    64,     0,     0,   269,     9,    10,    11,    12,
       0,    14,    15,    16,    17,    18,    19,    20,    21,     9,
      10,    11,    12,     0,    14,    15,    16,    17,    18,    19,
      20,    21,     0,     0,     0,   139,     0,   140,    64,     0,
       0,   281,     0,     0,     0,     0,     0,     0,     0,     0,
     140,    64,     0,     0,   249,     9,    10,    11,    12,     0,
      14,    15,    16,    17,    18,    19,    20,    21,     9,    10,
      11,    12,     0,    14,    15,    16,    17,    18,    19,    20,
      21,     0,     0,     0,     0,     0,   140,    64,     0,     0,
     255,     0,     0,     0,     0,     0,     0,     0,     0,   140,
      64,     0,     0,   272,     9,    10,    11,    12,     0,    14,
      15,    16,    17,    18,    19,    20,    21,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
       0,     0,     0,     0,     0,   140,    64,     0,     0,   274,
       0,     0,     0,     0,     0,     0,     0,     0,    87,    64,
       9,    10,    11,    12,     0,    14,    15,    16,    17,    18,
      19,    20,    21,     9,    10,    11,    12,     0,     0,    15,
      16,    17,    18,    19,    20,    21,     0,     0,     0,     0,
       0,   140,    64,   114,   115,   116,   117,   118,     0,     0,
     214,     0,   120,   121,   129,   122,   123
};

static const yytype_int16 yycheck[] =
{
       3,    27,    53,     6,   242,    30,    66,    67,   141,    53,
      27,    62,    54,    30,    42,    75,    27,    77,    30,    30,
      46,    46,    25,    51,    27,   263,   264,   265,    31,    46,
      33,    82,    53,   263,    46,    46,    45,    30,    89,   277,
      49,    92,    93,   103,    30,    89,    40,   277,    92,    93,
      53,     0,   112,    46,   105,    49,   107,    54,    53,   119,
      46,   112,    29,    30,   124,   125,   126,    34,    89,   241,
     242,    92,    93,    47,    42,    49,   136,     3,     4,     5,
       6,    89,    50,     6,    92,    93,    89,    82,    42,    92,
      93,   263,   264,   265,    89,     4,    50,    92,    93,    40,
     160,   161,    25,    40,    27,   277,    42,    33,    31,    47,
      33,    49,    40,    82,    40,    41,   249,    43,    44,   179,
      46,    40,   255,    44,    40,   176,    42,    40,    27,    28,
     190,    30,   135,    47,    50,    49,   269,   197,   198,   272,
      40,   274,    42,    27,    28,   196,    30,    46,   281,   200,
      50,    40,   203,    52,   214,   215,   216,   217,   218,    47,
     220,    49,    46,    44,   224,   225,    40,    78,    52,   220,
      40,    41,    83,    46,    85,   196,    46,    48,    49,   146,
     147,    48,    49,   150,    95,    47,   246,    49,    48,    49,
     241,   242,    47,   196,    49,    44,   247,   248,    50,    27,
      28,   196,    30,    48,    49,   200,    40,    41,    43,   260,
     261,   262,   263,   264,   265,   247,   248,    40,    45,    48,
     241,   242,    40,    40,    40,    40,   277,   278,   279,   280,
      43,   200,    30,    47,    46,    46,   287,    46,   241,   242,
      40,    40,   263,   264,   265,    48,   241,   242,    30,    40,
      47,    47,   247,   248,    48,    48,   277,    47,    39,    48,
     263,   264,   265,    48,    48,   260,    39,   262,   263,   264,
     265,    48,   241,   242,   277,     3,    47,    47,     6,    48,
       6,   172,   277,   278,   279,   280,   180,    14,   180,    -1,
     180,   260,   287,   262,   263,   264,   265,    25,    -1,    27,
      -1,    -1,    -1,    31,     3,    33,    -1,     6,   277,   278,
     279,   280,    -1,    -1,    -1,    -1,    -1,    -1,   287,    -1,
      -1,    -1,    -1,    -1,    -1,    53,    25,    -1,    27,    57,
      -1,    -1,    31,    -1,    33,    -1,    -1,    -1,     3,    -1,
      -1,     6,    -1,    -1,     3,     4,     5,     6,    76,    -1,
      78,    -1,    -1,    -1,    53,    83,    -1,    85,    57,    -1,
      25,    89,    27,    -1,    92,    93,    31,    95,    33,     3,
       4,     5,     6,    -1,    33,    -1,    -1,    76,    -1,    78,
      -1,    40,    41,    -1,    83,    44,    85,    46,    53,    48,
      89,    -1,    57,    92,    93,    -1,    95,    -1,    -1,    33,
      -1,    -1,    -1,    -1,    -1,    -1,    40,    41,    -1,    43,
      44,    -1,    46,    78,    -1,    -1,    -1,    -1,    83,    -1,
      85,    -1,    -1,    -1,    89,    -1,    -1,    92,    93,    -1,
      95,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     8,
       9,    10,    11,    12,   172,    14,    15,    16,    17,    18,
      19,    20,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    36,    37,    38,
      -1,    40,    41,   172,    -1,    44,    45,    -1,    -1,    48,
      -1,     8,     9,    10,    11,    12,    55,    14,    15,    16,
      17,    18,    19,    20,    21,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   172,    -1,    36,
      37,    38,    -1,    40,    41,    -1,    -1,    44,    45,    -1,
      -1,    48,    -1,     8,     9,    10,    11,    12,    55,    14,
      15,    16,    17,    18,    19,    20,    21,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    36,    37,    38,    -1,    40,    41,    -1,    -1,    44,
      45,    -1,    -1,    48,    -1,     8,     9,    10,    11,    12,
      55,    14,    15,    16,    17,    18,    19,    20,    21,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    36,    37,    38,    -1,    40,    41,    -1,
      -1,    44,    45,    -1,    -1,    48,    -1,     8,     9,    10,
      11,    12,    55,    14,    15,    16,    17,    18,    19,    20,
      21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    36,    37,    38,    -1,    40,
      41,    -1,    -1,    44,    45,    -1,    -1,    48,    -1,     8,
       9,    10,    11,    12,    55,    14,    15,    16,    17,    18,
      19,    20,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    36,    37,    38,
      -1,    40,    41,    -1,    -1,    44,    45,    -1,    -1,    48,
      -1,     8,     9,    10,    11,    12,    55,    14,    15,    16,
      17,    18,    19,    20,    21,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    36,
      37,    38,    -1,    40,    41,    -1,    -1,    44,    45,    -1,
      -1,    48,    -1,     8,     9,    10,    11,    12,    55,    14,
      15,    16,    17,    18,    19,    20,    21,     9,    10,    11,
      12,    -1,    14,    15,    16,    17,    18,    19,    20,    21,
      -1,    36,    37,    38,    -1,    40,    41,    -1,    -1,    44,
      45,    -1,    -1,    48,    -1,    -1,    -1,    -1,    40,     7,
      55,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,     7,    -1,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    -1,
      -1,    -1,    40,     3,     4,     5,     6,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    53,    54,    40,    -1,    22,
      23,    24,    25,    26,    -1,    -1,    29,    -1,    31,    32,
      53,    34,    35,    33,    -1,    -1,    -1,    -1,    -1,    -1,
      40,    41,    -1,    -1,    44,    -1,    46,     9,    10,    11,
      12,    -1,    14,    15,    16,    17,    18,    19,    20,    21,
       9,    10,    11,    12,    -1,    14,    15,    16,    17,    18,
      19,    20,    21,    -1,    -1,    -1,    -1,    -1,    40,    -1,
      -1,    -1,    -1,    45,    -1,    -1,    -1,    -1,    -1,    38,
      -1,    40,    41,    -1,    -1,    44,     9,    10,    11,    12,
      -1,    14,    15,    16,    17,    18,    19,    20,    21,     9,
      10,    11,    12,    -1,    14,    15,    16,    17,    18,    19,
      20,    21,    -1,    -1,    -1,    38,    -1,    40,    41,    -1,
      -1,    44,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      40,    41,    -1,    -1,    44,     9,    10,    11,    12,    -1,
      14,    15,    16,    17,    18,    19,    20,    21,     9,    10,
      11,    12,    -1,    14,    15,    16,    17,    18,    19,    20,
      21,    -1,    -1,    -1,    -1,    -1,    40,    41,    -1,    -1,
      44,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,
      41,    -1,    -1,    44,     9,    10,    11,    12,    -1,    14,
      15,    16,    17,    18,    19,    20,    21,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      -1,    -1,    -1,    -1,    -1,    40,    41,    -1,    -1,    44,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    41,
       9,    10,    11,    12,    -1,    14,    15,    16,    17,    18,
      19,    20,    21,     9,    10,    11,    12,    -1,    -1,    15,
      16,    17,    18,    19,    20,    21,    -1,    -1,    -1,    -1,
      -1,    40,    41,    22,    23,    24,    25,    26,    -1,    -1,
      29,    -1,    31,    32,    40,    34,    35
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    57,    58,    59,     0,    54,    60,    61,     7,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    40,    53,    63,    64,    65,    67,    68,    69,
      70,    73,    74,    81,    82,     4,    61,    63,    40,    40,
      42,    85,    40,    86,    40,    63,    63,    44,    40,    86,
      40,    86,    63,    44,    63,    40,    86,    46,     3,     4,
       5,     6,    33,    40,    41,    43,    44,    46,    62,    79,
      83,    94,    96,    97,    98,    42,    51,    30,    46,    48,
      49,    44,    76,    46,    48,    46,    48,    40,    62,    67,
      75,    79,    81,    87,    88,    46,    48,    40,    69,    70,
      71,    72,    82,    46,    62,    50,    85,    50,    84,    96,
      96,    27,    46,    43,    22,    23,    24,    25,    26,    29,
      31,    32,    34,    35,    99,   100,   101,    43,    96,    40,
      69,    70,    96,    71,    40,    66,     8,    36,    37,    38,
      40,    44,    45,    48,    55,    62,    69,    70,    77,    81,
      82,    87,    89,    90,    91,    92,    93,    94,    71,    71,
      28,    30,    75,    45,    75,    75,    48,    71,    40,    40,
      40,    47,    49,    40,    96,    62,    50,    62,    45,    49,
      47,    62,    95,    96,    96,    96,    96,    96,    43,    47,
      30,    40,    45,    81,    48,    96,    46,    46,    46,    40,
      76,    40,    78,    52,    48,    47,    47,    96,    96,    47,
      72,    47,    62,    96,    29,    99,   100,   101,    30,    47,
      49,    96,    48,    48,    81,    87,    96,    96,    45,    40,
      49,    62,    96,    96,    96,    96,    96,    62,    96,    96,
      96,    47,    47,    48,    40,    48,    30,    48,    48,    44,
      62,    80,    81,    87,    93,    44,    80,    96,    88,    88,
      76,    52,    76,    39,    47,    47,    45,    62,    45,    44,
      80,    89,    44,    80,    44,    80,    48,    39,    76,    76,
      76,    44,    80,    89,    45,    45,    45,    76,    45
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    56,    58,    57,    59,    57,    60,    60,    61,    62,
      62,    62,    62,    62,    63,    63,    63,    63,    63,    64,
      65,    66,    66,    67,    68,    68,    68,    68,    68,    69,
      69,    69,    69,    69,    69,    69,    70,    70,    70,    70,
      71,    71,    71,    72,    72,    72,    72,    73,    74,    75,
      75,    75,    75,    76,    76,    76,    77,    77,    77,    77,
      77,    77,    77,    77,    77,    77,    78,    78,    79,    79,
      80,    80,    80,    80,    81,    81,    81,    81,    82,    82,
      82,    83,    84,    84,    85,    85,    85,    85,    86,    86,
      86,    86,    87,    88,    88,    88,    89,    89,    89,    89,
      89,    89,    89,    89,    90,    90,    90,    90,    91,    91,
      92,    92,    93,    94,    95,    95,    95,    95,    95,    96,
      96,    96,    96,    96,    96,    97,    97,    97,    97,    97,
      98,    98,    98,    98,    98,    98,    98,    98,    98,    99,
      99,   100,   100,   101,   101,   101,   101,   101
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
       1,     1,     1,     1,     1,     1,     4,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1
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
#line 84 "yacc.y"
      {
        global_table = init_symtab();
        function_table = init_functab();
    }
#line 1550 "yacc.tab.c"
    break;

  case 3: /* start: $@1 include_stmts code  */
#line 88 "yacc.y"
                       {
        display_symtab(global_table);
        display_functab(function_table);
    }
#line 1559 "yacc.tab.c"
    break;

  case 4: /* $@2: %empty  */
#line 92 "yacc.y"
      {
        global_table = init_symtab();
        function_table = init_functab();
    }
#line 1568 "yacc.tab.c"
    break;

  case 5: /* start: $@2 code  */
#line 95 "yacc.y"
           {
        display_symtab(global_table);
        display_functab(function_table);
    }
#line 1577 "yacc.tab.c"
    break;

  case 9: /* identifier: IDENTIFIER  */
#line 112 "yacc.y"
                      {
        struct idrec *entry = lookup(global_table, global_table, (yyvsp[0].id).name);
        if(entry == NULL){
            printf("Error: Variable %s not declared\n", (yyvsp[0].id).name);
        }
        (yyval.type) = entry->type;
    }
#line 1589 "yacc.tab.c"
    break;

  case 10: /* identifier: IDENTIFIER DOT identifier  */
#line 119 "yacc.y"
                                {
        // IDENTIFIER is object ; identifier is member // check it in class implementation

    }
#line 1598 "yacc.tab.c"
    break;

  case 11: /* identifier: IDENTIFIER dim  */
#line 123 "yacc.y"
                     {


    }
#line 1607 "yacc.tab.c"
    break;

  case 12: /* identifier: IDENTIFIER dim DOT identifier  */
#line 127 "yacc.y"
                                    {


    }
#line 1616 "yacc.tab.c"
    break;

  case 13: /* identifier: SELF DOT identifier  */
#line 131 "yacc.y"
                          {
        
    }
#line 1624 "yacc.tab.c"
    break;

  case 23: /* function: function_dec LCB statements RCB  */
#line 158 "yacc.y"
                                         {
        (yyvsp[-1].stmt).local_table = (yyvsp[-3].params).params;
    }
#line 1632 "yacc.tab.c"
    break;

  case 24: /* function_dec: data_type_new IDENTIFIER LPB function_params RPB  */
#line 164 "yacc.y"
                                                               {
        struct funcrec *entry = (struct funcrec *)malloc(sizeof(struct funcrec));
        entry->name = (yyvsp[-3].id).name;
        entry->type = (yyvsp[-4].type);
        entry->params = (yyvsp[-1].params).params;
        entry->num_params = (yyvsp[-1].params).num_params;
        entry->next = NULL;
        entry->local_table = init_symtab();
        if(lookup_functab(function_table, entry) == NULL){
            insert_functab(function_table, entry);
        }
        else{
            printf("Error: Function %s already declared\n", entry->name);
        }
        (yyval.params).params = (yyvsp[-1].params).params;
}
#line 1653 "yacc.tab.c"
    break;

  case 25: /* function_dec: data_type_pr IDENTIFIER LPB function_params RPB  */
#line 180 "yacc.y"
                                                     {
        struct funcrec *entry = (struct funcrec *)malloc(sizeof(struct funcrec));
        entry->name = (yyvsp[-3].id).name;
        entry->type = (yyvsp[-4].type);
        entry->params = (yyvsp[-1].params).params;
        entry->num_params = (yyvsp[-1].params).num_params;
        entry->next = NULL;
        entry->local_table = init_symtab();
        if(lookup_functab(function_table, entry) == NULL){
            insert_functab(function_table, entry);
        }
        else{
            printf("Error: Function %s already declared\n", entry->name);
        } 
        (yyval.params).params = (yyvsp[-1].params).params;
    }
#line 1674 "yacc.tab.c"
    break;

  case 27: /* function_dec: VOID IDENTIFIER LPB function_params RPB  */
#line 197 "yacc.y"
                                             {
        struct funcrec *entry = (struct funcrec *)malloc(sizeof(struct funcrec));
        entry->name = (yyvsp[-3].id).name;
        entry->type = 4;
        entry->params = (yyvsp[-1].params).params;
        entry->num_params = (yyvsp[-1].params).num_params;
        entry->next = NULL;
        entry->local_table = init_symtab();
        if(lookup_functab(function_table, entry) == NULL){
            insert_functab(function_table, entry);
        }
        else{
            printf("Error: Function %s already declared\n", entry->name);
        } 
        (yyval.params).params = (yyvsp[-1].params).params;
    }
#line 1695 "yacc.tab.c"
    break;

  case 29: /* data_type_new: DOCUMENT  */
#line 217 "yacc.y"
                       { (yyval.type) = 12;}
#line 1701 "yacc.tab.c"
    break;

  case 30: /* data_type_new: TEAM  */
#line 218 "yacc.y"
           { (yyval.type) = 7;}
#line 1707 "yacc.tab.c"
    break;

  case 31: /* data_type_new: MEMBERS  */
#line 219 "yacc.y"
              { (yyval.type) = 8;}
#line 1713 "yacc.tab.c"
    break;

  case 32: /* data_type_new: TASK  */
#line 220 "yacc.y"
            { (yyval.type) = 9;}
#line 1719 "yacc.tab.c"
    break;

  case 33: /* data_type_new: EVENT  */
#line 221 "yacc.y"
            { (yyval.type) = 10;}
#line 1725 "yacc.tab.c"
    break;

  case 34: /* data_type_new: MEETING  */
#line 222 "yacc.y"
               { (yyval.type) = 11;}
#line 1731 "yacc.tab.c"
    break;

  case 35: /* data_type_new: CALENDAR  */
#line 223 "yacc.y"
               { (yyval.type) = 13;}
#line 1737 "yacc.tab.c"
    break;

  case 36: /* data_type_pr: INT  */
#line 229 "yacc.y"
                   { (yyval.type) = 0;}
#line 1743 "yacc.tab.c"
    break;

  case 37: /* data_type_pr: STRING  */
#line 230 "yacc.y"
             { (yyval.type) = 2;}
#line 1749 "yacc.tab.c"
    break;

  case 38: /* data_type_pr: BOOL  */
#line 231 "yacc.y"
            { (yyval.type) = 3;}
#line 1755 "yacc.tab.c"
    break;

  case 39: /* data_type_pr: FLOAT  */
#line 232 "yacc.y"
            { (yyval.type) = 1;}
#line 1761 "yacc.tab.c"
    break;

  case 40: /* function_params: function_params COMMA function_param  */
#line 238 "yacc.y"
                                                     {
        (yyval.params).params = (yyvsp[-2].params).params;
        (yyval.params).num_params = (yyvsp[-2].params).num_params + 1;
    }
#line 1770 "yacc.tab.c"
    break;

  case 41: /* function_params: function_param  */
#line 242 "yacc.y"
                    {
        (yyval.params).params = init_symtab();
        (yyval.params).num_params = 1;
    }
#line 1779 "yacc.tab.c"
    break;

  case 42: /* function_params: %empty  */
#line 246 "yacc.y"
     {
        (yyval.params).params = init_symtab();
        (yyval.params).num_params = 0;
    }
#line 1788 "yacc.tab.c"
    break;

  case 43: /* function_param: data_type_new IDENTIFIER  */
#line 253 "yacc.y"
                                        {
        struct idrec *entry = (struct idrec *)malloc(sizeof(struct idrec));
        entry->name = (yyvsp[0].id).name;
        entry->type = (yyvsp[-1].type);
        entry->arr = false;
        entry->scope = 0;
        insert_symtab((yyval.params).params, entry);

}
#line 1802 "yacc.tab.c"
    break;

  case 44: /* function_param: data_type_pr IDENTIFIER  */
#line 262 "yacc.y"
                             {
        struct idrec *entry = (struct idrec *)malloc(sizeof(struct idrec));
        entry->name = (yyvsp[0].id).name;
        entry->type = (yyvsp[-1].type);
        entry->arr = false;
        entry->scope = 0;
        insert_symtab((yyval.params).params, entry);
        (yyval.params).num_params++;
    }
#line 1816 "yacc.tab.c"
    break;

  case 45: /* function_param: IDENTIFIER IDENTIFIER  */
#line 271 "yacc.y"
                            {}
#line 1822 "yacc.tab.c"
    break;

  case 46: /* function_param: list IDENTIFIER  */
#line 272 "yacc.y"
                      {}
#line 1828 "yacc.tab.c"
    break;

  case 54: /* statements: statements statement  */
#line 292 "yacc.y"
                          {
        (yyvsp[0].stmt).local_table = (yyvsp[-1].stmt).local_table;
    }
#line 1836 "yacc.tab.c"
    break;

  case 56: /* statement: decl_stmt  */
#line 299 "yacc.y"
                     {(yyvsp[0].stmt).local_table = (yyval.stmt).local_table;}
#line 1842 "yacc.tab.c"
    break;

  case 68: /* unary_stmt: identifier UNARY_OP  */
#line 316 "yacc.y"
                                {
        if((yyvsp[-1].type) != 0 || (yyvsp[-1].type) != 1){
            printf("Error: Unary operator not defined for this type\n");
        }
        (yyval.type) = (yyvsp[-1].type);
}
#line 1853 "yacc.tab.c"
    break;

  case 69: /* unary_stmt: identifier  */
#line 322 "yacc.y"
                 {}
#line 1859 "yacc.tab.c"
    break;

  case 74: /* decl_stmt: data_type_new id_list SEMICOLON  */
#line 334 "yacc.y"
                                           {
        struct snode* temp = (yyvsp[-1].namelist)->head;
        while(temp != NULL){
            struct idrec *entry = (struct idrec *)malloc(sizeof(struct idrec));
            entry->type = (yyvsp[-2].type);
            entry->arr = false;
            entry->scope = 0; // we have to change scope according to nested loops
            entry->name = temp->val;
            if(lookup(global_table,(yyval.stmt).local_table, entry->name) == NULL){
                insert_symtab(global_table, entry);
            }
            else{
                printf("Error: Variable %s already declared\n", entry->name);
            }
            temp = temp->next;
        }
    }
#line 1881 "yacc.tab.c"
    break;

  case 75: /* decl_stmt: data_type_pr id_list SEMICOLON  */
#line 351 "yacc.y"
                                    {
        struct snode* temp = (yyvsp[-1].namelist)->head;
        while(temp != NULL){
            struct idrec *entry = (struct idrec *)malloc(sizeof(struct idrec));
            entry->type = (yyvsp[-2].type);
            entry->arr = false;
            entry->scope = 0; // we have to change scope according to nested loops
            entry->name = temp->val;
            if(lookup(global_table, (yyval.stmt).local_table ,entry->name) == NULL){
            insert_symtab(global_table, entry);
            }
            else{
            printf("Error: Variable %s already declared\n", entry->name);
            }
            temp = temp->next;
        }   
    }
#line 1903 "yacc.tab.c"
    break;

  case 88: /* id_list: id_list COMMA IDENTIFIER  */
#line 400 "yacc.y"
                                 {
        insert_slist((yyvsp[-2].namelist), (yyvsp[0].id).name);
        (yyval.namelist) = (yyvsp[-2].namelist);
    }
#line 1912 "yacc.tab.c"
    break;

  case 91: /* id_list: IDENTIFIER  */
#line 406 "yacc.y"
                {
        (yyval.namelist) = init_slist();
        insert_slist((yyval.namelist), (yyvsp[0].id).name);   
    }
#line 1921 "yacc.tab.c"
    break;

  case 130: /* expr_terminal: unary_stmt  */
#line 496 "yacc.y"
                          {
        (yyval.type) = (yyvsp[0].type);
    }
#line 1929 "yacc.tab.c"
    break;

  case 131: /* expr_terminal: NUMBER  */
#line 499 "yacc.y"
            {
        (yyval.type) = 0;
    }
#line 1937 "yacc.tab.c"
    break;

  case 132: /* expr_terminal: DECIMAL  */
#line 502 "yacc.y"
             { 
        (yyval.type) = 1;
    }
#line 1945 "yacc.tab.c"
    break;

  case 133: /* expr_terminal: STRING_LITERAL  */
#line 505 "yacc.y"
                    {
        (yyval.type) = 2;    
    }
#line 1953 "yacc.tab.c"
    break;

  case 134: /* expr_terminal: BOOL_LITERAL  */
#line 508 "yacc.y"
                  {
        (yyval.type) = 3;
    }
#line 1961 "yacc.tab.c"
    break;


#line 1965 "yacc.tab.c"

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

#line 538 "yacc.y"



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
