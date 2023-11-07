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
    struct symtab *local_table;


#line 98 "yacc.tab.c"

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
  YYSYMBOL_code = 62,                      /* code  */
  YYSYMBOL_struct_code = 63,               /* struct_code  */
  YYSYMBOL_struct_def = 64,                /* struct_def  */
  YYSYMBOL_struct_body = 65,               /* struct_body  */
  YYSYMBOL_function = 66,                  /* function  */
  YYSYMBOL_67_3 = 67,                      /* $@3  */
  YYSYMBOL_function_dec = 68,              /* function_dec  */
  YYSYMBOL_function_params = 69,           /* function_params  */
  YYSYMBOL_function_param = 70,            /* function_param  */
  YYSYMBOL_class = 71,                     /* class  */
  YYSYMBOL_class_dec = 72,                 /* class_dec  */
  YYSYMBOL_class_stmt = 73,                /* class_stmt  */
  YYSYMBOL_statements = 74,                /* statements  */
  YYSYMBOL_statement = 75,                 /* statement  */
  YYSYMBOL_ids = 76,                       /* ids  */
  YYSYMBOL_unary_stmt = 77,                /* unary_stmt  */
  YYSYMBOL_single_stmt = 78,               /* single_stmt  */
  YYSYMBOL_decl_stmt = 79,                 /* decl_stmt  */
  YYSYMBOL_id_list = 80,                   /* id_list  */
  YYSYMBOL_expr_stmt = 81,                 /* expr_stmt  */
  YYSYMBOL_expr_stmt_without_semicolon = 82, /* expr_stmt_without_semicolon  */
  YYSYMBOL_nested_expr = 83,               /* nested_expr  */
  YYSYMBOL_expr = 84,                      /* expr  */
  YYSYMBOL_expr_terminal = 85,             /* expr_terminal  */
  YYSYMBOL_if_stmt = 86,                   /* if_stmt  */
  YYSYMBOL_for_stmt = 87,                  /* for_stmt  */
  YYSYMBOL_while_stmt = 88,                /* while_stmt  */
  YYSYMBOL_call_stmt = 89,                 /* call_stmt  */
  YYSYMBOL_call = 90,                      /* call  */
  YYSYMBOL_call_args = 91,                 /* call_args  */
  YYSYMBOL_return_stmt = 92,               /* return_stmt  */
  YYSYMBOL_list = 93,                      /* list  */
  YYSYMBOL_list_literal = 94,              /* list_literal  */
  YYSYMBOL_list_terminal = 95,             /* list_terminal  */
  YYSYMBOL_dim = 96,                       /* dim  */
  YYSYMBOL_identifier = 97,                /* identifier  */
  YYSYMBOL_conj = 98,                      /* conj  */
  YYSYMBOL_set_op = 99,                    /* set_op  */
  YYSYMBOL_arith_op = 100,                 /* arith_op  */
  YYSYMBOL_data_type_new = 101,            /* data_type_new  */
  YYSYMBOL_data_type_pr = 102              /* data_type_pr  */
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
#define YYLAST   1106

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  56
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  47
/* YYNRULES -- Number of rules.  */
#define YYNRULES  146
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  284

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
       0,    83,    83,    83,    91,    91,   101,   104,   108,   112,
     115,   116,   117,   118,   123,   127,   131,   132,   137,   137,
     153,   172,   190,   191,   209,   213,   217,   221,   228,   236,
     244,   245,   250,   254,   258,   259,   260,   261,   266,   270,
     274,   279,   282,   285,   288,   291,   294,   297,   300,   303,
     304,   308,   309,   314,   324,   325,   326,   327,   333,   350,
     368,   369,   373,   377,   378,   379,   387,   391,   392,   393,
     397,   398,   399,   400,   401,   402,   406,   407,   408,   409,
     410,   416,   419,   422,   425,   428,   431,   432,   433,   434,
     435,   441,   442,   443,   444,   445,   446,   447,   448,   454,
     455,   456,   457,   461,   462,   467,   471,   476,   477,   478,
     482,   483,   489,   490,   491,   495,   499,   500,   504,   505,
     506,   507,   511,   518,   522,   526,   530,   537,   538,   542,
     543,   547,   548,   549,   550,   551,   555,   556,   557,   558,
     559,   560,   561,   565,   566,   567,   568
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
  "include_stmt", "code", "struct_code", "struct_def", "struct_body",
  "function", "$@3", "function_dec", "function_params", "function_param",
  "class", "class_dec", "class_stmt", "statements", "statement", "ids",
  "unary_stmt", "single_stmt", "decl_stmt", "id_list", "expr_stmt",
  "expr_stmt_without_semicolon", "nested_expr", "expr", "expr_terminal",
  "if_stmt", "for_stmt", "while_stmt", "call_stmt", "call", "call_args",
  "return_stmt", "list", "list_literal", "list_terminal", "dim",
  "identifier", "conj", "set_op", "arith_op", "data_type_new",
  "data_type_pr", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-226)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-3)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -42,    43,    -5,   799,  -226,    82,   784,  -226,    35,  -226,
    -226,  -226,  -226,    56,    58,  -226,  -226,  -226,  -226,  -226,
    -226,  -226,    63,    75,  -226,   799,  -226,   799,  -226,   799,
      78,   799,    98,   112,   119,  -226,  -226,  -226,  -226,    80,
     432,    18,   -26,    86,   137,  -226,  -226,   140,  -226,  1020,
    -226,    12,   107,    41,   128,    48,   138,   750,  -226,  -226,
    -226,  -226,    84,   -34,   142,  -226,   139,   139,  -226,   150,
    -226,   343,  -226,  -226,    11,   822,  1066,   139,   750,  -226,
     154,  -226,  -226,   -35,  1020,   152,  -226,  1020,  1020,   151,
      90,   750,  -226,   750,  -226,   750,  -226,   158,    92,  -226,
     162,   163,   164,   139,  -226,   148,    71,   148,  -226,     5,
     161,  -226,  -226,  -226,  -226,  -226,  -226,   139,  -226,  -226,
    -226,  -226,   139,   139,   139,  -226,   139,  -226,   166,  -226,
    -226,  -226,  -226,   113,   175,   860,   443,  -226,  -226,  -226,
    -226,  -226,   139,   139,   117,   120,   121,  -226,  -226,   750,
    -226,  -226,  -226,   173,  -226,   148,  -226,  -226,   139,   819,
    -226,  -226,  -226,  -226,  -226,   126,  -226,  -226,   139,   170,
     174,  -226,   170,   170,   170,    26,   177,   178,   179,    66,
    -226,  -226,  -226,   193,  -226,  -226,  -226,  -226,  -226,  -226,
    -226,   186,  -226,    52,  -226,  -226,  -226,  -226,  -226,  -226,
    -226,  -226,  -226,   139,   139,   139,   139,  -226,   139,  -226,
     207,  -226,  -226,   190,  1053,   139,   139,   485,  -226,    28,
    -226,   148,  -226,  -226,  -226,  -226,  -226,  -226,   139,   139,
     194,   197,  -226,   198,   209,   202,   203,   204,   922,   958,
    -226,  -226,  -226,   148,   148,  -226,  -226,  -226,  -226,  -226,
     101,  -226,   206,   211,   213,   527,   148,   569,   873,   971,
    1007,  -226,   217,   214,  -226,  -226,  -226,  -226,  -226,  -226,
    -226,  -226,   909,   611,   653,   695,  -226,  -226,  -226,  -226,
    -226,  -226,   737,  -226
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,     0,    13,     1,     0,    13,     7,     0,   143,
     144,   145,   146,     0,     0,   136,   137,   138,   139,   140,
     141,   142,     0,     0,     5,    13,    14,    13,    18,    13,
       0,    13,     0,     0,     0,     8,     6,     3,    33,     0,
       0,     0,    65,     0,     0,    11,    10,     0,    12,    37,
       9,    65,     0,    65,     0,    65,     0,    27,    82,    84,
      85,    83,     0,   122,     0,   121,     0,     0,    81,     0,
      75,    80,    86,    90,    89,     0,     0,     0,    27,    60,
       0,    17,    40,   122,    37,     0,    69,    37,    37,     0,
       0,    27,    61,    27,    58,    27,    59,     0,     0,    26,
       0,     0,     0,     0,    88,     0,   124,     0,   116,     0,
       0,   119,   131,   132,   133,   134,   135,     0,   127,   128,
     129,   130,     0,     0,     0,    53,   109,   120,     0,   114,
     113,   112,    63,     0,    62,     0,     0,    34,    32,    35,
      36,    66,     0,     0,     0,     0,     0,    30,    23,     0,
      31,    28,    29,     0,   123,     0,   126,   115,     0,    70,
      77,    76,    79,    78,   108,     0,   118,    22,     0,     0,
       0,    16,     0,     0,     0,     0,     0,     0,     0,   122,
      40,    19,    48,     0,    39,    41,    47,    42,    43,    44,
      46,     0,    45,     0,    67,    68,    24,    20,    21,    25,
      87,   125,   117,     0,     0,     0,     0,   106,     0,    64,
      65,    15,   110,     0,     0,     0,     0,     0,    52,     0,
     105,     0,    72,    71,    74,    73,   107,   111,     0,     0,
       0,     0,    38,     0,     0,     0,     0,     0,     0,     0,
      50,    51,    49,     0,     0,    40,   104,    54,    56,    55,
       0,    40,    92,     0,     0,     0,     0,     0,     0,     0,
       0,   103,     0,    91,    40,    98,    94,    40,   100,    40,
     102,    57,     0,     0,     0,     0,    40,    97,    93,    96,
      99,   101,     0,    95
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -226,  -226,  -226,  -226,  -226,   248,    -4,  -226,  -226,  -226,
     -48,  -226,  -226,   -30,   118,  -226,  -226,    49,  -162,  -226,
    -226,     4,  -149,    -3,   -23,   -32,   -53,   205,  -226,  -226,
    -221,  -226,  -226,  -225,   167,  -226,  -226,   307,  -226,  -226,
     252,   -43,   109,   115,   116,    70,   267
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     1,     2,     3,     6,     7,    24,    25,    26,   135,
      27,    47,    28,    98,    99,    29,    30,    85,   136,   184,
     219,    68,   246,   185,    43,   186,    89,    69,    70,    71,
     187,   188,   189,   190,    72,   165,   192,   172,    73,   109,
     106,    74,   122,   123,   124,   173,   174
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      31,    84,    37,    31,    77,    42,    90,    40,    40,    52,
      54,    56,    -2,   249,   249,   105,   105,    88,   217,   104,
      78,    45,    31,    46,    31,    48,    31,    50,    31,    58,
      59,    60,    61,   249,   249,   249,    84,   266,   125,    84,
      84,    90,    77,     4,    90,    90,    87,   249,   133,     5,
     157,   278,    88,    86,   158,    88,    88,   126,    91,    62,
      75,   144,   154,   145,   156,   146,    63,    64,   233,    76,
      66,    77,    67,    33,   212,    38,    33,   234,    77,   125,
     142,    87,   143,   255,    87,    87,    35,    93,    86,   257,
     252,    86,    86,   193,    95,    33,    39,    33,   126,    33,
      40,    33,   273,    42,   221,   274,   210,   275,    40,   265,
     268,   270,   201,    75,   282,    44,   105,   125,   142,    33,
     143,   155,    49,   277,    63,    64,    57,   101,   125,   142,
     103,   143,   171,   137,    79,    80,   139,   140,    51,   148,
      86,   149,    58,    59,    60,    61,   130,   126,   101,    52,
      54,    56,    53,   256,    33,    92,    80,    33,    33,    55,
     167,   101,   149,   101,   196,   101,   149,   197,   198,   149,
     149,    90,    62,   207,   193,   208,    94,    80,   235,    63,
      64,    81,   229,    66,    82,    67,    96,    80,    63,    64,
     253,   254,   107,   111,   134,   250,   250,   138,   147,   141,
      90,    90,   150,   151,   152,   168,   248,   248,   159,   166,
     210,   228,   193,   262,   193,   250,   250,   250,    86,   101,
     200,    86,   211,   214,   215,   216,   248,   248,   248,   250,
     193,   193,   193,   218,   220,   247,   247,    77,   227,   193,
     248,   238,    86,    86,   239,   258,   240,    86,    86,   241,
     242,   243,   244,   272,    36,   247,   247,   247,   259,    86,
     260,    86,    86,    86,    86,   271,    41,   199,   204,   247,
      34,   108,   110,    34,   205,   206,    86,    86,    86,    86,
     128,     0,   132,     0,     0,     0,    86,     0,     0,     0,
       0,     0,    34,     0,    34,     0,    34,     0,    34,     0,
       0,     0,     0,   191,     0,     0,     0,     0,   153,     0,
      32,     0,     0,    32,     0,     0,    34,     0,     0,     0,
       0,     0,   160,     0,   102,     0,     0,   161,   162,   163,
       0,   164,    32,     0,    32,     0,    32,     0,    32,     0,
       0,     0,     0,   131,     0,   102,     0,   194,   195,     0,
       0,    34,     0,     0,    34,    34,    32,     0,   102,     0,
     102,     0,   102,   202,   100,   112,   113,   114,   115,   116,
       0,     0,   117,   209,   118,   119,     0,   120,   121,     0,
     213,     0,     0,     0,   191,   100,     0,     0,     0,     0,
       0,    32,     0,     0,    32,    32,     0,     0,   100,     0,
     100,     0,   100,     0,     0,   191,   191,     0,   222,   223,
     224,   225,     0,   226,     0,     0,   102,     0,     0,     0,
     230,   231,   191,     0,   191,   191,   191,   191,     0,     0,
       0,     0,     0,   236,   237,    58,    59,    60,    61,   191,
     191,   191,   191,     0,     0,     0,     0,     0,     0,   191,
       0,   175,     9,    10,    11,    12,   100,    14,    15,    16,
      17,    18,    19,    20,    21,    62,     0,     0,     0,     0,
       0,     0,    63,    64,     0,    65,    66,     0,    67,   176,
     177,   178,     0,   179,    64,     0,     0,   180,   181,     0,
       0,   182,     0,   175,     9,    10,    11,    12,   183,    14,
      15,    16,    17,    18,    19,    20,    21,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   176,   177,   178,     0,   179,    64,     0,     0,   180,
     232,     0,     0,   182,     0,   175,     9,    10,    11,    12,
     183,    14,    15,    16,    17,    18,    19,    20,    21,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   176,   177,   178,     0,   179,    64,     0,
       0,   180,   261,     0,     0,   182,     0,   175,     9,    10,
      11,    12,   183,    14,    15,    16,    17,    18,    19,    20,
      21,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   176,   177,   178,     0,   179,
      64,     0,     0,   180,   263,     0,     0,   182,     0,   175,
       9,    10,    11,    12,   183,    14,    15,    16,    17,    18,
      19,    20,    21,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   176,   177,   178,
       0,   179,    64,     0,     0,   180,   279,     0,     0,   182,
       0,   175,     9,    10,    11,    12,   183,    14,    15,    16,
      17,    18,    19,    20,    21,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   176,
     177,   178,     0,   179,    64,     0,     0,   180,   280,     0,
       0,   182,     0,   175,     9,    10,    11,    12,   183,    14,
      15,    16,    17,    18,    19,    20,    21,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   176,   177,   178,     0,   179,    64,     0,     0,   180,
     281,     0,     0,   182,     0,   175,     9,    10,    11,    12,
     183,    14,    15,    16,    17,    18,    19,    20,    21,     9,
      10,    11,    12,     0,    14,    15,    16,    17,    18,    19,
      20,    21,     0,   176,   177,   178,     0,   179,    64,     0,
       0,   180,   283,     0,     0,   182,     0,     0,     0,     0,
      97,     8,   183,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,     8,     0,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,     0,     0,     0,    22,    58,    59,    60,    61,     0,
       0,     0,     0,     0,     0,     0,     0,    23,     5,    22,
       0,   112,   113,   114,   115,   116,     0,     0,   203,     0,
     118,   119,    23,   120,   121,    62,     0,     0,     0,     0,
       0,     0,    63,    64,     0,   127,    66,     0,    67,     9,
      10,    11,    12,     0,    14,    15,    16,    17,    18,    19,
      20,    21,     9,    10,    11,    12,     0,    14,    15,    16,
      17,    18,    19,    20,    21,     0,     0,     0,     0,     0,
     169,     0,     0,     0,     0,   170,     0,     0,     0,     0,
       0,   178,     0,   179,    64,     0,     0,   264,     9,    10,
      11,    12,     0,    14,    15,    16,    17,    18,    19,    20,
      21,     9,    10,    11,    12,     0,    14,    15,    16,    17,
      18,    19,    20,    21,     0,     0,     0,   178,     0,   179,
      64,     0,     0,   276,     0,     0,     0,     0,     0,     0,
       0,     0,   179,    64,     0,     0,   245,     9,    10,    11,
      12,     0,    14,    15,    16,    17,    18,    19,    20,    21,
       9,    10,    11,    12,     0,    14,    15,    16,    17,    18,
      19,    20,    21,     0,     0,     0,     0,     0,   179,    64,
       0,     0,   251,     0,     0,     0,     0,     0,     0,     0,
       0,   179,    64,     0,     0,   267,     9,    10,    11,    12,
       0,    14,    15,    16,    17,    18,    19,    20,    21,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,     0,     0,     0,     0,     0,   179,    64,     0,
       0,   269,     0,     0,     0,     0,     0,     0,     0,     0,
      83,    64,     9,    10,    11,    12,     0,    14,    15,    16,
      17,    18,    19,    20,    21,     9,    10,    11,    12,     0,
       0,    15,    16,    17,    18,    19,    20,    21,     0,     0,
       0,     0,     0,   179,    64,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   129
};

static const yytype_int16 yycheck[] =
{
       3,    49,     6,     6,    30,    40,    49,    42,    42,    32,
      33,    34,    54,   238,   239,    50,    50,    49,   180,    62,
      46,    25,    25,    27,    27,    29,    29,    31,    31,     3,
       4,     5,     6,   258,   259,   260,    84,   258,    27,    87,
      88,    84,    30,     0,    87,    88,    49,   272,    78,    54,
      45,   272,    84,    49,    49,    87,    88,    46,    46,    33,
      42,    91,   105,    93,   107,    95,    40,    41,    40,    51,
      44,    30,    46,     3,    48,    40,     6,    49,    30,    27,
      28,    84,    30,   245,    87,    88,     4,    46,    84,   251,
     239,    87,    88,   136,    46,    25,    40,    27,    46,    29,
      42,    31,   264,    40,    52,   267,    40,   269,    42,   258,
     259,   260,   155,    42,   276,    40,    50,    27,    28,    49,
      30,    50,    44,   272,    40,    41,    46,    57,    27,    28,
      46,    30,   135,    84,    48,    49,    87,    88,    40,    47,
     136,    49,     3,     4,     5,     6,    76,    46,    78,   172,
     173,   174,    40,    52,    84,    48,    49,    87,    88,    40,
      47,    91,    49,    93,    47,    95,    49,    47,    47,    49,
      49,   214,    33,    47,   217,    49,    48,    49,   221,    40,
      41,    44,   214,    44,    44,    46,    48,    49,    40,    41,
     243,   244,    50,    43,    40,   238,   239,    45,    40,    48,
     243,   244,    40,    40,    40,    30,   238,   239,    47,    43,
      40,   214,   255,   256,   257,   258,   259,   260,   214,   149,
      47,   217,    48,    46,    46,    46,   258,   259,   260,   272,
     273,   274,   275,    40,    48,   238,   239,    30,    48,   282,
     272,    47,   238,   239,    47,    39,    48,   243,   244,    40,
      48,    48,    48,    39,     6,   258,   259,   260,    47,   255,
      47,   257,   258,   259,   260,    48,    14,   149,   159,   272,
       3,    66,    67,     6,   159,   159,   272,   273,   274,   275,
      75,    -1,    77,    -1,    -1,    -1,   282,    -1,    -1,    -1,
      -1,    -1,    25,    -1,    27,    -1,    29,    -1,    31,    -1,
      -1,    -1,    -1,   136,    -1,    -1,    -1,    -1,   103,    -1,
       3,    -1,    -1,     6,    -1,    -1,    49,    -1,    -1,    -1,
      -1,    -1,   117,    -1,    57,    -1,    -1,   122,   123,   124,
      -1,   126,    25,    -1,    27,    -1,    29,    -1,    31,    -1,
      -1,    -1,    -1,    76,    -1,    78,    -1,   142,   143,    -1,
      -1,    84,    -1,    -1,    87,    88,    49,    -1,    91,    -1,
      93,    -1,    95,   158,    57,    22,    23,    24,    25,    26,
      -1,    -1,    29,   168,    31,    32,    -1,    34,    35,    -1,
     175,    -1,    -1,    -1,   217,    78,    -1,    -1,    -1,    -1,
      -1,    84,    -1,    -1,    87,    88,    -1,    -1,    91,    -1,
      93,    -1,    95,    -1,    -1,   238,   239,    -1,   203,   204,
     205,   206,    -1,   208,    -1,    -1,   149,    -1,    -1,    -1,
     215,   216,   255,    -1,   257,   258,   259,   260,    -1,    -1,
      -1,    -1,    -1,   228,   229,     3,     4,     5,     6,   272,
     273,   274,   275,    -1,    -1,    -1,    -1,    -1,    -1,   282,
      -1,     8,     9,    10,    11,    12,   149,    14,    15,    16,
      17,    18,    19,    20,    21,    33,    -1,    -1,    -1,    -1,
      -1,    -1,    40,    41,    -1,    43,    44,    -1,    46,    36,
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
      15,    16,    17,    18,    19,    20,    21,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    36,    37,    38,    -1,    40,    41,    -1,    -1,    44,
      45,    -1,    -1,    48,    -1,     8,     9,    10,    11,    12,
      55,    14,    15,    16,    17,    18,    19,    20,    21,     9,
      10,    11,    12,    -1,    14,    15,    16,    17,    18,    19,
      20,    21,    -1,    36,    37,    38,    -1,    40,    41,    -1,
      -1,    44,    45,    -1,    -1,    48,    -1,    -1,    -1,    -1,
      40,     7,    55,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,     7,    -1,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    -1,    -1,    -1,    40,     3,     4,     5,     6,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,    54,    40,
      -1,    22,    23,    24,    25,    26,    -1,    -1,    29,    -1,
      31,    32,    53,    34,    35,    33,    -1,    -1,    -1,    -1,
      -1,    -1,    40,    41,    -1,    43,    44,    -1,    46,     9,
      10,    11,    12,    -1,    14,    15,    16,    17,    18,    19,
      20,    21,     9,    10,    11,    12,    -1,    14,    15,    16,
      17,    18,    19,    20,    21,    -1,    -1,    -1,    -1,    -1,
      40,    -1,    -1,    -1,    -1,    45,    -1,    -1,    -1,    -1,
      -1,    38,    -1,    40,    41,    -1,    -1,    44,     9,    10,
      11,    12,    -1,    14,    15,    16,    17,    18,    19,    20,
      21,     9,    10,    11,    12,    -1,    14,    15,    16,    17,
      18,    19,    20,    21,    -1,    -1,    -1,    38,    -1,    40,
      41,    -1,    -1,    44,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    40,    41,    -1,    -1,    44,     9,    10,    11,
      12,    -1,    14,    15,    16,    17,    18,    19,    20,    21,
       9,    10,    11,    12,    -1,    14,    15,    16,    17,    18,
      19,    20,    21,    -1,    -1,    -1,    -1,    -1,    40,    41,
      -1,    -1,    44,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    40,    41,    -1,    -1,    44,     9,    10,    11,    12,
      -1,    14,    15,    16,    17,    18,    19,    20,    21,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    -1,    -1,    -1,    -1,    -1,    40,    41,    -1,
      -1,    44,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      40,    41,     9,    10,    11,    12,    -1,    14,    15,    16,
      17,    18,    19,    20,    21,     9,    10,    11,    12,    -1,
      -1,    15,    16,    17,    18,    19,    20,    21,    -1,    -1,
      -1,    -1,    -1,    40,    41,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    40
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    57,    58,    59,     0,    54,    60,    61,     7,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    40,    53,    62,    63,    64,    66,    68,    71,
      72,    79,    93,   101,   102,     4,    61,    62,    40,    40,
      42,    96,    40,    80,    40,    62,    62,    67,    62,    44,
      62,    40,    80,    40,    80,    40,    80,    46,     3,     4,
       5,     6,    33,    40,    41,    43,    44,    46,    77,    83,
      84,    85,    90,    94,    97,    42,    51,    30,    46,    48,
      49,    44,    44,    40,    66,    73,    77,    79,    81,    82,
      97,    46,    48,    46,    48,    46,    48,    40,    69,    70,
      93,   101,   102,    46,    97,    50,    96,    50,    83,    95,
      83,    43,    22,    23,    24,    25,    26,    29,    31,    32,
      34,    35,    98,    99,   100,    27,    46,    43,    83,    40,
     101,   102,    83,    69,    40,    65,    74,    73,    45,    73,
      73,    48,    28,    30,    69,    69,    69,    40,    47,    49,
      40,    40,    40,    83,    97,    50,    97,    45,    49,    47,
      83,    83,    83,    83,    83,    91,    43,    47,    30,    40,
      45,    79,    93,   101,   102,     8,    36,    37,    38,    40,
      44,    45,    48,    55,    75,    79,    81,    86,    87,    88,
      89,    90,    92,    97,    83,    83,    47,    47,    47,    70,
      47,    97,    83,    29,    98,    99,   100,    47,    49,    83,
      40,    48,    48,    83,    46,    46,    46,    74,    40,    76,
      48,    52,    83,    83,    83,    83,    83,    48,    79,    81,
      83,    83,    45,    40,    49,    97,    83,    83,    47,    47,
      48,    40,    48,    48,    48,    44,    78,    79,    81,    89,
      97,    44,    78,    82,    82,    74,    52,    74,    39,    47,
      47,    45,    97,    45,    44,    78,    86,    44,    78,    44,
      78,    48,    39,    74,    74,    74,    44,    78,    86,    45,
      45,    45,    74,    45
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    56,    58,    57,    59,    57,    60,    60,    61,    62,
      62,    62,    62,    62,    63,    64,    65,    65,    67,    66,
      68,    68,    68,    68,    68,    69,    69,    69,    70,    70,
      70,    70,    71,    72,    73,    73,    73,    73,    74,    74,
      74,    75,    75,    75,    75,    75,    75,    75,    75,    75,
      75,    76,    76,    77,    78,    78,    78,    78,    79,    79,
      79,    79,    80,    80,    80,    80,    81,    82,    82,    82,
      83,    83,    83,    83,    83,    83,    84,    84,    84,    84,
      84,    85,    85,    85,    85,    85,    85,    85,    85,    85,
      85,    86,    86,    86,    86,    86,    86,    86,    86,    87,
      87,    87,    87,    88,    88,    89,    90,    91,    91,    91,
      92,    92,    93,    93,    93,    94,    95,    95,    96,    96,
      96,    96,    97,    97,    97,    97,    97,    98,    98,    99,
      99,   100,   100,   100,   100,   100,   101,   101,   101,   101,
     101,   101,   101,   102,   102,   102,   102
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     3,     0,     2,     2,     1,     2,     2,
       2,     2,     2,     0,     1,     6,     2,     0,     0,     5,
       5,     5,     5,     5,     5,     3,     1,     0,     2,     2,
       2,     2,     4,     2,     2,     2,     2,     0,     4,     2,
       0,     1,     1,     1,     1,     1,     1,     1,     1,     4,
       4,     3,     1,     2,     1,     1,     1,     4,     3,     3,
       3,     3,     3,     3,     5,     1,     2,     3,     3,     1,
       3,     5,     5,     5,     5,     1,     3,     3,     3,     3,
       1,     1,     1,     1,     1,     1,     1,     4,     2,     1,
       1,     7,     5,     9,     7,    11,     9,     9,     7,    10,
       8,    10,     8,     7,     5,     2,     4,     3,     1,     0,
       2,     3,     4,     4,     4,     3,     1,     3,     4,     3,
       3,     2,     1,     3,     2,     4,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
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
#line 83 "yacc.y"
      {
        global_table = init_symtab();
        function_table = init_functab();
    }
#line 1552 "yacc.tab.c"
    break;

  case 3: /* start: $@1 include_stmts code  */
#line 87 "yacc.y"
                       {
        display_symtab(global_table);
        display_functab(function_table);
    }
#line 1561 "yacc.tab.c"
    break;

  case 4: /* $@2: %empty  */
#line 91 "yacc.y"
      {
        global_table = init_symtab();
        function_table = init_functab();
    }
#line 1570 "yacc.tab.c"
    break;

  case 5: /* start: $@2 code  */
#line 94 "yacc.y"
           {
        display_symtab(global_table);
        display_functab(function_table);
    }
#line 1579 "yacc.tab.c"
    break;

  case 6: /* include_stmts: include_stmts include_stmt  */
#line 101 "yacc.y"
                                          {

    }
#line 1587 "yacc.tab.c"
    break;

  case 9: /* code: decl_stmt code  */
#line 112 "yacc.y"
                     {
        (yyvsp[-1].stmt).scope = 0;
    }
#line 1595 "yacc.tab.c"
    break;

  case 13: /* code: %empty  */
#line 118 "yacc.y"
      {}
#line 1601 "yacc.tab.c"
    break;

  case 18: /* $@3: %empty  */
#line 137 "yacc.y"
                       {
            local_table = (yyvsp[0].functions).local_table;
        }
#line 1609 "yacc.tab.c"
    break;

  case 19: /* function: function_dec $@3 LCB statements RCB  */
#line 139 "yacc.y"
                             {
        struct funcrec *entry = (struct funcrec*) malloc(sizeof(struct funcrec));
        entry->name = (yyvsp[-4].functions).name;
        entry->type = (yyvsp[-4].functions).type;
        entry->params = (yyvsp[-4].functions).params;
        entry->num_params = (yyvsp[-4].functions).num_params;
        entry->next = NULL;
        entry->local_table = (yyvsp[-4].functions).local_table;
        insert_functab(function_table, entry);
        local_table = NULL;
    }
#line 1625 "yacc.tab.c"
    break;

  case 20: /* function_dec: data_type_new IDENTIFIER LPB function_params RPB  */
#line 153 "yacc.y"
                                                               {
        struct funcrec *entry = (struct funcrec*) malloc(sizeof(struct funcrec));
        entry->name = (yyvsp[-3].id).name;
        entry->type = (yyvsp[-4].type);
        entry->params = (yyvsp[-1].functions).params;
        entry->num_params = (yyvsp[-1].functions).num_params;
        entry->next = NULL;
        entry->local_table = init_symtab();
        if(lookup_functab(function_table, entry) != NULL)
        {
            // terminate the program
            printf("Error: Function %s already declared\n", entry->name);
        }
        (yyval.functions).type = (yyvsp[-4].type);
        (yyval.functions).name = (yyvsp[-3].id).name;
        (yyval.functions).params = (yyvsp[-1].functions).params;
        (yyval.functions).num_params = (yyvsp[-1].functions).num_params;
        (yyval.functions).local_table = init_symtab();
    }
#line 1649 "yacc.tab.c"
    break;

  case 21: /* function_dec: data_type_pr IDENTIFIER LPB function_params RPB  */
#line 172 "yacc.y"
                                                      {
        struct funcrec *entry = (struct funcrec *)malloc(sizeof(struct funcrec));
        entry->name = (yyvsp[-3].id).name;
        entry->type = (yyvsp[-4].type);
        entry->params = (yyvsp[-1].functions).params;
        entry->num_params = (yyvsp[-1].functions).num_params;
        entry->next = NULL;
        entry->local_table = init_symtab();
        if(lookup_functab(function_table, entry) != NULL)
        {
            printf("Error: Function %s already declared\n", entry->name);
        }
        (yyval.functions).type = (yyvsp[-4].type);
        (yyval.functions).name = (yyvsp[-3].id).name;
        (yyval.functions).params = (yyvsp[-1].functions).params;
        (yyval.functions).num_params = (yyvsp[-1].functions).num_params;
        (yyval.functions).local_table = init_symtab();
    }
#line 1672 "yacc.tab.c"
    break;

  case 23: /* function_dec: VOID IDENTIFIER LPB function_params RPB  */
#line 191 "yacc.y"
                                              {
        struct funcrec *entry = (struct funcrec *)malloc(sizeof(struct funcrec));
        entry->name = (yyvsp[-3].id).name;
        entry->type = 4;
        entry->params = (yyvsp[-1].functions).params;
        entry->num_params = (yyvsp[-1].functions).num_params;
        entry->next = NULL;
        entry->local_table = init_symtab();
        if(lookup_functab(function_table, entry) != NULL)
        {
            printf("Error: Function %s already declared\n", entry->name);
        }
        (yyval.functions).type = 4;
        (yyval.functions).name = (yyvsp[-3].id).name;
        (yyval.functions).params = (yyvsp[-1].functions).params;
        (yyval.functions).num_params = (yyvsp[-1].functions).num_params;
        (yyval.functions).local_table = init_symtab();
    }
#line 1695 "yacc.tab.c"
    break;

  case 25: /* function_params: function_params COMMA function_param  */
#line 213 "yacc.y"
                                                      {
        (yyval.functions).params = (yyvsp[-2].functions).params;
        (yyval.functions).num_params = (yyvsp[-2].functions).num_params + 1;
    }
#line 1704 "yacc.tab.c"
    break;

  case 26: /* function_params: function_param  */
#line 217 "yacc.y"
                     {
        (yyval.functions).params = init_symtab();
        (yyval.functions).num_params = 1;
    }
#line 1713 "yacc.tab.c"
    break;

  case 27: /* function_params: %empty  */
#line 221 "yacc.y"
      {
        (yyval.functions).params = init_symtab();
        (yyval.functions).num_params = 0;
    }
#line 1722 "yacc.tab.c"
    break;

  case 28: /* function_param: data_type_new IDENTIFIER  */
#line 228 "yacc.y"
                                         {
        struct idrec *entry = (struct idrec *)malloc(sizeof(struct idrec));
        entry->name = (yyvsp[0].id).name;
        entry->type = (yyvsp[-1].type);
        entry->arr = false;
        entry->scope = 1;
        insert_symtab((yyval.functions).params, entry);
    }
#line 1735 "yacc.tab.c"
    break;

  case 29: /* function_param: data_type_pr IDENTIFIER  */
#line 236 "yacc.y"
                              {
        struct idrec *entry = (struct idrec *)malloc(sizeof(struct idrec));
        entry->name = (yyvsp[0].id).name;
        entry->type = (yyvsp[-1].type);
        entry->arr = false;
        entry->scope = 1;
        insert_symtab((yyval.functions).params, entry);
    }
#line 1748 "yacc.tab.c"
    break;

  case 30: /* function_param: IDENTIFIER IDENTIFIER  */
#line 244 "yacc.y"
                            {}
#line 1754 "yacc.tab.c"
    break;

  case 31: /* function_param: list IDENTIFIER  */
#line 245 "yacc.y"
                      {}
#line 1760 "yacc.tab.c"
    break;

  case 38: /* statements: statements LCB statements RCB  */
#line 266 "yacc.y"
                                           {
        (yyvsp[-3].stmt).scope = (yyval.stmt).scope;
        (yyvsp[-1].stmt).scope = (yyval.stmt).scope + 1;
    }
#line 1769 "yacc.tab.c"
    break;

  case 39: /* statements: statements statement  */
#line 270 "yacc.y"
                          {
        (yyvsp[-1].stmt).scope = (yyval.stmt).scope;
        (yyvsp[0].stmt).scope = (yyval.stmt).scope;
    }
#line 1778 "yacc.tab.c"
    break;

  case 40: /* statements: %empty  */
#line 274 "yacc.y"
      {
    }
#line 1785 "yacc.tab.c"
    break;

  case 41: /* statement: decl_stmt  */
#line 279 "yacc.y"
                     {
        (yyvsp[0].stmt).scope = (yyval.stmt).scope;
    }
#line 1793 "yacc.tab.c"
    break;

  case 42: /* statement: if_stmt  */
#line 282 "yacc.y"
              {

    }
#line 1801 "yacc.tab.c"
    break;

  case 43: /* statement: for_stmt  */
#line 285 "yacc.y"
               {

    }
#line 1809 "yacc.tab.c"
    break;

  case 44: /* statement: while_stmt  */
#line 288 "yacc.y"
                 {

    }
#line 1817 "yacc.tab.c"
    break;

  case 45: /* statement: return_stmt  */
#line 291 "yacc.y"
                  {

    }
#line 1825 "yacc.tab.c"
    break;

  case 46: /* statement: call_stmt  */
#line 294 "yacc.y"
                {

    }
#line 1833 "yacc.tab.c"
    break;

  case 47: /* statement: expr_stmt  */
#line 297 "yacc.y"
                {

    }
#line 1841 "yacc.tab.c"
    break;

  case 48: /* statement: SEMICOLON  */
#line 300 "yacc.y"
                {

    }
#line 1849 "yacc.tab.c"
    break;

  case 53: /* unary_stmt: identifier UNARY_OP  */
#line 314 "yacc.y"
                                {
        // check id in symbol table
        if((yyvsp[-1].type) != 0 || (yyvsp[-1].type) != 1){
            printf("Error: Unary operator not defined for this type\n"); //Why?
        }
        (yyval.type) = (yyvsp[-1].type);
    }
#line 1861 "yacc.tab.c"
    break;

  case 58: /* decl_stmt: data_type_new id_list SEMICOLON  */
#line 333 "yacc.y"
                                           {
        struct snode* temp = (yyvsp[-1].namelist)->head;
        while(temp != NULL){
            struct idrec *entry = (struct idrec *)malloc(sizeof(struct idrec));
            entry->type = (yyvsp[-2].type);
            entry->arr = false;
            entry->scope = (yyval.stmt).scope; // we have to change scope according to nested loops
            entry->name = temp->val;
            if(lookup(global_table, local_table, entry->name) == NULL){
                insert_symtab(global_table, entry);
            }
            else{
                printf("Error: Variable %s already declared\n", entry->name);
            }
            temp = temp->next;
        }
    }
#line 1883 "yacc.tab.c"
    break;

  case 59: /* decl_stmt: data_type_pr id_list SEMICOLON  */
#line 350 "yacc.y"
                                    {
        struct snode* temp = (yyvsp[-1].namelist)->head;
        while(temp != NULL){
            struct idrec *entry = (struct idrec *)malloc(sizeof(struct idrec));
            entry->type = (yyvsp[-2].type);
            entry->arr = false;
            entry->scope = 0; // we have to change scope according to nested loops
            entry->name = temp->val;
            if(lookup(global_table, local_table ,entry->name) == NULL){
                insert_symtab(global_table, entry);
            }
            else{
                printf("Error: Variable %s already declared\n", entry->name);
            }
            temp = temp->next;
        }
        printf("WTF\n");   
    }
#line 1906 "yacc.tab.c"
    break;

  case 62: /* id_list: id_list COMMA IDENTIFIER  */
#line 373 "yacc.y"
                                 {
        insert_slist((yyvsp[-2].namelist), (yyvsp[0].id).name);
        (yyval.namelist) = (yyvsp[-2].namelist);
    }
#line 1915 "yacc.tab.c"
    break;

  case 65: /* id_list: IDENTIFIER  */
#line 379 "yacc.y"
                {
        (yyval.namelist) = init_slist();
        insert_slist((yyval.namelist), (yyvsp[0].id).name);   
    }
#line 1924 "yacc.tab.c"
    break;

  case 81: /* expr_terminal: unary_stmt  */
#line 416 "yacc.y"
                          {
        (yyval.type) = (yyvsp[0].type);
    }
#line 1932 "yacc.tab.c"
    break;

  case 82: /* expr_terminal: NUMBER  */
#line 419 "yacc.y"
            {
        (yyval.type) = 0;
    }
#line 1940 "yacc.tab.c"
    break;

  case 83: /* expr_terminal: DECIMAL  */
#line 422 "yacc.y"
             { 
        (yyval.type) = 1;
    }
#line 1948 "yacc.tab.c"
    break;

  case 84: /* expr_terminal: STRING_LITERAL  */
#line 425 "yacc.y"
                    {
        (yyval.type) = 2;    
    }
#line 1956 "yacc.tab.c"
    break;

  case 85: /* expr_terminal: BOOL_LITERAL  */
#line 428 "yacc.y"
                  {
        (yyval.type) = 3;
    }
#line 1964 "yacc.tab.c"
    break;

  case 122: /* identifier: IDENTIFIER  */
#line 511 "yacc.y"
                      {
        struct idrec *entry = lookup(global_table, global_table, (yyvsp[0].id).name);
        if(entry == NULL){
            printf("Error: Variable %s not declared\n", (yyvsp[0].id).name);
        }
        (yyval.type) = entry->type;
    }
#line 1976 "yacc.tab.c"
    break;

  case 123: /* identifier: IDENTIFIER DOT identifier  */
#line 518 "yacc.y"
                                {
        // IDENTIFIER is object ; identifier is member // check it in class implementation

    }
#line 1985 "yacc.tab.c"
    break;

  case 124: /* identifier: IDENTIFIER dim  */
#line 522 "yacc.y"
                     {


    }
#line 1994 "yacc.tab.c"
    break;

  case 125: /* identifier: IDENTIFIER dim DOT identifier  */
#line 526 "yacc.y"
                                    {


    }
#line 2003 "yacc.tab.c"
    break;

  case 126: /* identifier: SELF DOT identifier  */
#line 530 "yacc.y"
                          {
        
    }
#line 2011 "yacc.tab.c"
    break;

  case 136: /* data_type_new: DOCUMENT  */
#line 555 "yacc.y"
                       { (yyval.type) = 12;}
#line 2017 "yacc.tab.c"
    break;

  case 137: /* data_type_new: TEAM  */
#line 556 "yacc.y"
           { (yyval.type) = 7;}
#line 2023 "yacc.tab.c"
    break;

  case 138: /* data_type_new: MEMBERS  */
#line 557 "yacc.y"
              { (yyval.type) = 8;}
#line 2029 "yacc.tab.c"
    break;

  case 139: /* data_type_new: TASK  */
#line 558 "yacc.y"
            { (yyval.type) = 9;}
#line 2035 "yacc.tab.c"
    break;

  case 140: /* data_type_new: EVENT  */
#line 559 "yacc.y"
            { (yyval.type) = 10;}
#line 2041 "yacc.tab.c"
    break;

  case 141: /* data_type_new: MEETING  */
#line 560 "yacc.y"
               { (yyval.type) = 11;}
#line 2047 "yacc.tab.c"
    break;

  case 142: /* data_type_new: CALENDAR  */
#line 561 "yacc.y"
               { (yyval.type) = 13;}
#line 2053 "yacc.tab.c"
    break;

  case 143: /* data_type_pr: INT  */
#line 565 "yacc.y"
                   { (yyval.type) = 0;}
#line 2059 "yacc.tab.c"
    break;

  case 144: /* data_type_pr: STRING  */
#line 566 "yacc.y"
             { (yyval.type) = 2;}
#line 2065 "yacc.tab.c"
    break;

  case 145: /* data_type_pr: BOOL  */
#line 567 "yacc.y"
            { (yyval.type) = 3;}
#line 2071 "yacc.tab.c"
    break;

  case 146: /* data_type_pr: FLOAT  */
#line 568 "yacc.y"
            { (yyval.type) = 1;}
#line 2077 "yacc.tab.c"
    break;


#line 2081 "yacc.tab.c"

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

#line 571 "yacc.y"



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
