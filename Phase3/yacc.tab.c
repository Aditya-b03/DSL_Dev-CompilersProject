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


#line 108 "yacc.tab.c"

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
  YYSYMBOL_INCLUDE = 53,                   /* INCLUDE  */
  YYSYMBOL_TYPEDEF = 54,                   /* TYPEDEF  */
  YYSYMBOL_YYACCEPT = 55,                  /* $accept  */
  YYSYMBOL_start = 56,                     /* start  */
  YYSYMBOL_57_1 = 57,                      /* $@1  */
  YYSYMBOL_58_2 = 58,                      /* $@2  */
  YYSYMBOL_include_stmts = 59,             /* include_stmts  */
  YYSYMBOL_include_stmt = 60,              /* include_stmt  */
  YYSYMBOL_code = 61,                      /* code  */
  YYSYMBOL_function = 62,                  /* function  */
  YYSYMBOL_63_3 = 63,                      /* $@3  */
  YYSYMBOL_64_4 = 64,                      /* $@4  */
  YYSYMBOL_function_dec = 65,              /* function_dec  */
  YYSYMBOL_function_params = 66,           /* function_params  */
  YYSYMBOL_function_param = 67,            /* function_param  */
  YYSYMBOL_class = 68,                     /* class  */
  YYSYMBOL_class_dec = 69,                 /* class_dec  */
  YYSYMBOL_class_stmt = 70,                /* class_stmt  */
  YYSYMBOL_class_function = 71,            /* class_function  */
  YYSYMBOL_72_5 = 72,                      /* $@5  */
  YYSYMBOL_73_6 = 73,                      /* $@6  */
  YYSYMBOL_class_function_dec = 74,        /* class_function_dec  */
  YYSYMBOL_class_decl_stmt = 75,           /* class_decl_stmt  */
  YYSYMBOL_statements = 76,                /* statements  */
  YYSYMBOL_77_7 = 77,                      /* $@7  */
  YYSYMBOL_statement = 78,                 /* statement  */
  YYSYMBOL_ids = 79,                       /* ids  */
  YYSYMBOL_unary_stmt = 80,                /* unary_stmt  */
  YYSYMBOL_single_stmt = 81,               /* single_stmt  */
  YYSYMBOL_decl_stmt = 82,                 /* decl_stmt  */
  YYSYMBOL_id_list = 83,                   /* id_list  */
  YYSYMBOL_expr_stmt = 84,                 /* expr_stmt  */
  YYSYMBOL_expr_stmt_without_semicolon = 85, /* expr_stmt_without_semicolon  */
  YYSYMBOL_nested_expr = 86,               /* nested_expr  */
  YYSYMBOL_expr = 87,                      /* expr  */
  YYSYMBOL_expr_terminal = 88,             /* expr_terminal  */
  YYSYMBOL_if_stmt = 89,                   /* if_stmt  */
  YYSYMBOL_if_expr = 90,                   /* if_expr  */
  YYSYMBOL_for_stmt = 91,                  /* for_stmt  */
  YYSYMBOL_92_8 = 92,                      /* $@8  */
  YYSYMBOL_for_exp = 93,                   /* for_exp  */
  YYSYMBOL_while_stmt = 94,                /* while_stmt  */
  YYSYMBOL_95_9 = 95,                      /* $@9  */
  YYSYMBOL_while_exp = 96,                 /* while_exp  */
  YYSYMBOL_call_stmt = 97,                 /* call_stmt  */
  YYSYMBOL_call = 98,                      /* call  */
  YYSYMBOL_call_args = 99,                 /* call_args  */
  YYSYMBOL_return_stmt = 100,              /* return_stmt  */
  YYSYMBOL_list = 101,                     /* list  */
  YYSYMBOL_102_10 = 102,                   /* $@10  */
  YYSYMBOL_103_11 = 103,                   /* $@11  */
  YYSYMBOL_104_12 = 104,                   /* $@12  */
  YYSYMBOL_list_literal = 105,             /* list_literal  */
  YYSYMBOL_list_terminal = 106,            /* list_terminal  */
  YYSYMBOL_dim = 107,                      /* dim  */
  YYSYMBOL_empty_dim = 108,                /* empty_dim  */
  YYSYMBOL_identifier = 109,               /* identifier  */
  YYSYMBOL_class_identifier = 110,         /* class_identifier  */
  YYSYMBOL_conj = 111,                     /* conj  */
  YYSYMBOL_set_op = 112,                   /* set_op  */
  YYSYMBOL_arith_op = 113,                 /* arith_op  */
  YYSYMBOL_data_type_new = 114,            /* data_type_new  */
  YYSYMBOL_data_type_pr = 115              /* data_type_pr  */
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
#define YYLAST   1007

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  55
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  61
/* YYNRULES -- Number of rules.  */
#define YYNRULES  180
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  354

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
       0,   110,   110,   110,   132,   132,   155,   156,   160,   164,
     165,   166,   167,   172,   177,   172,   199,   218,   238,   262,
     282,   306,   316,   321,   328,   339,   350,   367,   382,   401,
     410,   411,   412,   415,   420,   415,   442,   463,   484,   510,
     531,   555,   575,   597,   623,   650,   650,   651,   652,   656,
     657,   658,   659,   660,   661,   662,   663,   664,   665,   666,
     667,   668,   672,   673,   678,   685,   695,   696,   697,   698,
     699,   700,   701,   706,   730,   754,   783,   812,   819,   823,
     827,   838,   842,   847,   853,   869,   881,   894,   917,   921,
     925,   933,   940,   948,   956,   963,   971,   978,   986,   994,
    1001,  1005,  1009,  1013,  1017,  1021,  1025,  1033,  1041,  1053,
    1057,  1066,  1070,  1085,  1104,  1105,  1106,  1107,  1108,  1109,
    1110,  1111,  1115,  1126,  1126,  1127,  1131,  1137,  1146,  1146,
    1147,  1151,  1160,  1164,  1177,  1198,  1205,  1212,  1218,  1227,
    1240,  1240,  1246,  1246,  1252,  1252,  1266,  1273,  1282,  1293,
    1300,  1307,  1312,  1315,  1320,  1332,  1349,  1354,  1361,  1366,
    1371,  1380,  1381,  1385,  1386,  1390,  1391,  1392,  1393,  1394,
    1398,  1399,  1400,  1401,  1402,  1403,  1404,  1408,  1409,  1410,
    1411
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
  "SEMICOLON", "COMMA", "DOT", "COLON", "ARROW", "INCLUDE", "TYPEDEF",
  "$accept", "start", "$@1", "$@2", "include_stmts", "include_stmt",
  "code", "function", "$@3", "$@4", "function_dec", "function_params",
  "function_param", "class", "class_dec", "class_stmt", "class_function",
  "$@5", "$@6", "class_function_dec", "class_decl_stmt", "statements",
  "$@7", "statement", "ids", "unary_stmt", "single_stmt", "decl_stmt",
  "id_list", "expr_stmt", "expr_stmt_without_semicolon", "nested_expr",
  "expr", "expr_terminal", "if_stmt", "if_expr", "for_stmt", "$@8",
  "for_exp", "while_stmt", "$@9", "while_exp", "call_stmt", "call",
  "call_args", "return_stmt", "list", "$@10", "$@11", "$@12",
  "list_literal", "list_terminal", "dim", "empty_dim", "identifier",
  "class_identifier", "conj", "set_op", "arith_op", "data_type_new",
  "data_type_pr", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-284)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-145)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -15,    31,     3,   886,  -284,    64,   759,  -284,    63,  -284,
    -284,  -284,  -284,    69,    99,  -284,  -284,  -284,  -284,  -284,
    -284,  -284,   121,  -284,   886,  -284,   886,   127,   886,   125,
     126,   140,  -284,  -284,  -284,  -284,   138,   315,   141,   153,
     -20,   139,  -284,   157,  -284,   926,  -284,    14,   167,    15,
     201,    44,   241,   953,  -284,  -284,  -284,  -284,    54,    70,
     169,  -284,   456,   456,  -284,   185,  -284,   954,  -284,  -284,
     178,   -16,   113,   194,   456,   953,  -284,   172,  -284,   230,
     260,   210,   926,  -284,   926,   272,   288,   289,   953,  -284,
     953,  -284,   953,  -284,   291,   -30,  -284,   294,   303,   304,
      87,   456,  -284,  -284,   456,   314,   307,   322,  -284,    22,
     278,    99,  -284,  -284,  -284,  -284,  -284,   456,  -284,  -284,
    -284,  -284,   456,   456,   456,  -284,  -284,   456,   341,   215,
     323,  -284,  -284,   107,   232,  -284,   318,    46,   246,   317,
    -284,   324,  -284,    49,   259,    50,   268,    56,   275,   128,
     144,   159,  -284,  -284,   953,  -284,  -284,  -284,   319,  -284,
     162,    87,  -284,   331,    99,  -284,   456,   972,  -284,  -284,
    -284,  -284,  -284,   175,  -284,  -284,  -284,  -284,   456,   386,
     953,   953,  -284,  -284,  -284,   953,  -284,   953,  -284,   953,
    -284,  -284,  -284,  -284,  -284,  -284,  -284,   456,   307,    99,
    -284,  -284,   456,   456,   456,   456,  -284,  -284,    37,   326,
     328,   330,    86,   332,  -284,  -284,  -284,   338,  -284,  -284,
    -284,  -284,   333,  -284,   822,  -284,    94,  -284,   835,  -284,
     335,  -284,   344,    78,   112,   344,   344,   209,   212,  -284,
     217,   229,   235,  -284,  -284,  -284,  -284,  -284,  -284,  -284,
     339,   913,   456,   456,   356,   348,  -284,  -284,     8,  -284,
    -284,   350,  -284,  -284,  -284,   155,   151,   343,   117,   122,
    -284,  -284,  -284,   456,   456,   353,   456,   456,   353,  -284,
    -284,   467,  -284,  -284,  -284,  -284,   -26,   456,   456,   361,
     362,   273,   508,   364,   375,   549,   773,   353,   353,   871,
    -284,  -284,  -284,   368,   370,  -284,  -284,   371,   372,  -284,
     373,   377,  -284,  -284,   456,   456,  -284,  -284,  -284,   389,
    -284,  -284,  -284,   381,   384,   385,   387,  -284,  -284,   590,
    -284,  -284,  -284,  -284,  -284,  -284,  -284,  -284,   786,   631,
    -284,  -284,  -284,  -284,  -284,  -284,  -284,  -284,  -284,  -284,
     672,   713,  -284,  -284
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,     0,    12,     1,     0,    12,     7,     0,   177,
     178,   179,   180,     0,     0,   170,   171,   172,   173,   174,
     175,   176,     0,     5,    12,    13,    12,     0,    12,     0,
       0,     0,     8,     6,     3,    29,     0,     0,     0,   151,
      80,     0,    10,     0,    11,    32,     9,    80,     0,    80,
       0,    80,     0,    23,   101,   103,   104,   102,     0,   154,
       0,   153,     0,     0,   100,     0,    94,    99,   105,   111,
     109,   110,   142,     0,     0,    23,    75,     0,    14,     0,
       0,     0,    32,    33,    32,     0,     0,     0,    23,    76,
      23,    73,    23,    74,     0,     0,    22,     0,     0,     0,
     154,     0,   107,   108,   137,     0,   155,     0,   147,     0,
       0,   150,   165,   166,   167,   168,   169,     0,   161,   162,
     163,   164,     0,     0,     0,    64,    65,   137,     0,     0,
       0,   152,    78,     0,    77,    48,     0,    80,     0,     0,
      30,     0,    31,    80,     0,    80,     0,    80,     0,     0,
       0,     0,    26,    19,     0,    27,    24,    25,     0,   136,
       0,   156,   157,     0,   112,   146,     0,    89,   149,    96,
      95,    98,    97,     0,   141,   143,   145,    18,     0,     0,
      23,    23,    43,    28,    34,    23,    44,    23,    41,    23,
      42,    20,    16,    17,    21,   106,   133,     0,   158,   159,
     113,   148,     0,     0,     0,     0,   134,    79,     0,     0,
       0,     0,   154,     0,    45,    15,    56,     0,    47,    88,
      49,    55,     0,    50,     0,    51,     0,    52,     0,    54,
       0,    53,     0,     0,     0,     0,     0,     0,     0,    48,
       0,     0,     0,   135,   160,    91,    90,    93,    92,   138,
       0,     0,     0,     0,    80,     0,    48,    63,     0,    81,
      48,   115,    66,    68,    67,     0,     0,     0,     0,     0,
     128,   130,   132,     0,     0,     0,     0,     0,     0,    39,
      38,     0,    40,    36,    37,   139,   154,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      48,    82,    85,     0,     0,    83,    86,     0,     0,    35,
       0,     0,   131,   122,     0,     0,    46,    61,    62,   114,
      48,   121,   117,     0,     0,     0,     0,   123,   125,     0,
      57,    58,    59,    60,   126,   127,    84,    87,     0,     0,
      69,    70,    71,    72,    48,   129,    48,   120,   116,   119,
       0,     0,   124,   118
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -284,  -284,  -284,  -284,  -284,   430,    23,  -284,  -284,  -284,
    -284,   -70,   287,  -284,  -284,   222,  -284,  -284,  -284,  -284,
    -284,  -187,  -284,  -284,  -284,    41,  -224,    -3,   -22,  -192,
     219,   -35,  -284,  -284,  -283,  -284,  -284,  -284,  -284,  -284,
    -284,  -284,  -178,   118,   316,  -284,   285,  -284,  -284,  -284,
    -284,  -284,   -13,  -284,   -24,   -52,   281,   282,   283,     9,
     257
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     1,     2,     3,     6,     7,    23,    24,    43,   135,
      25,    95,    96,    26,    27,    81,    82,   141,   239,    83,
      84,   179,   256,   218,   258,    64,   261,   220,    41,   221,
     222,   159,    66,    67,   223,   224,   225,   344,   226,   227,
     300,   228,   229,    68,   160,   231,   232,   128,   129,   130,
      69,   109,   106,    39,    70,    71,   122,   123,   124,   235,
     236
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      28,    38,    65,    28,   271,   133,   103,    48,    50,    52,
      74,   126,    30,   322,   254,    30,    37,   153,   149,   154,
     150,    28,   151,    28,   105,    28,    75,   108,   110,    34,
     127,     4,   263,    30,   102,    30,   263,    30,    -2,   132,
      54,    55,    56,    57,    74,    74,   264,    42,   293,    44,
     264,    46,   281,   162,    86,   348,     5,   294,   138,   288,
      88,    90,    98,   144,   146,   148,   158,   165,    32,   292,
      58,   166,   321,   295,    74,   328,    74,    59,    60,    74,
      74,    62,   169,    63,    98,   249,    74,   170,   171,   172,
      92,    86,   181,    86,   100,   185,   187,    98,   168,    98,
     101,    98,   189,    35,   263,   125,   273,   263,   274,    36,
     237,   238,    37,   329,   347,   240,   104,   241,   264,   242,
     105,   264,  -140,  -140,  -140,  -140,   254,   234,    37,    37,
     275,   201,   104,   339,   100,   213,   105,   105,   175,   126,
     276,    37,   277,   207,   125,   273,   263,   274,   198,   126,
     276,   200,   277,  -144,   177,   233,   154,   350,   127,   351,
     264,    40,   243,    98,   278,    47,    49,   245,   246,   247,
     248,    45,   266,   250,   269,   191,   266,   154,   126,   276,
      51,   277,   125,   273,    53,   274,   244,    76,    77,    98,
      98,   192,    72,   154,    98,    73,    98,   127,    98,   269,
     265,    78,   268,   298,   265,   125,   193,   297,   154,   196,
      48,   197,   134,    50,    52,    89,    77,   289,   290,   107,
     219,   262,   206,   304,   197,   262,   308,   268,   111,   234,
      15,    16,    17,    18,    19,    20,    21,   131,   301,   302,
     234,   305,   306,   234,   266,   324,   326,   266,   287,    91,
      77,   303,   310,   311,   307,   139,   279,   233,   154,   280,
      31,   154,   178,    31,   282,   219,   154,   219,   233,   219,
     136,   233,   265,   323,   325,   265,   283,   234,   154,   336,
     337,    31,   284,    31,   154,    31,   266,   234,    29,    93,
      77,    29,   219,   262,   182,    77,   262,   230,   234,   234,
     137,   314,    87,   315,   140,   233,   142,   186,    77,    29,
      99,    29,   143,    29,   265,   233,   188,    77,    54,    55,
      56,    57,   219,   190,    77,   167,   233,   233,   145,   147,
      85,   152,    99,   219,   155,   262,   219,   219,    97,    87,
     219,    87,   230,   156,   157,    99,   230,    99,    58,    99,
       9,    10,    11,    12,   161,    59,    60,   163,    61,    62,
      97,    63,   164,   176,   180,   183,   195,    85,   184,    85,
     219,   199,   251,    97,   252,    97,   253,    97,   257,   219,
     219,   259,   255,   272,   254,   174,    74,   285,   291,   296,
     299,   219,   219,   100,   208,     9,    10,    11,    12,   230,
      14,    15,    16,    17,    18,    19,    20,    21,   312,   313,
     230,    99,   317,   230,   230,   318,   330,   230,   331,   332,
     333,   334,   209,   210,   211,   335,   212,   213,   338,   340,
     214,   215,   341,   342,   216,   343,    33,    99,    99,    97,
     217,   194,    99,   173,    99,   267,    99,   230,   203,   204,
     205,     0,     0,     0,     0,     0,   230,   230,     0,    54,
      55,    56,    57,     0,     0,    97,    97,     0,   230,   230,
      97,     0,    97,     0,    97,   208,     9,    10,    11,    12,
       0,    14,    15,    16,    17,    18,    19,    20,    21,    58,
       0,     0,     0,     0,     0,     0,    59,    60,     0,     0,
      62,     0,    63,   209,   210,   211,     0,   212,   213,     0,
       0,   214,   309,     0,     0,   216,   208,     9,    10,    11,
      12,   217,    14,    15,    16,    17,    18,    19,    20,    21,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   209,   210,   211,     0,   212,   213,
       0,     0,   214,   316,     0,     0,   216,   208,     9,    10,
      11,    12,   217,    14,    15,    16,    17,    18,    19,    20,
      21,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   209,   210,   211,     0,   212,
     213,     0,     0,   214,   319,     0,     0,   216,   208,     9,
      10,    11,    12,   217,    14,    15,    16,    17,    18,    19,
      20,    21,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   209,   210,   211,     0,
     212,   213,     0,     0,   214,   345,     0,     0,   216,   208,
       9,    10,    11,    12,   217,    14,    15,    16,    17,    18,
      19,    20,    21,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   209,   210,   211,
       0,   212,   213,     0,     0,   214,   349,     0,     0,   216,
     208,     9,    10,    11,    12,   217,    14,    15,    16,    17,
      18,    19,    20,    21,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   209,   210,
     211,     0,   212,   213,     0,     0,   214,   352,     0,     0,
     216,   208,     9,    10,    11,    12,   217,    14,    15,    16,
      17,    18,    19,    20,    21,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   209,
     210,   211,     0,   212,   213,     0,     0,   214,   353,     0,
       0,   216,     0,     0,     0,     0,     8,   217,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,     0,     9,    10,    11,    12,     0,    14,    15,    16,
      17,    18,    19,    20,    21,     9,    10,    11,    12,    22,
      14,    15,    16,    17,    18,    19,    20,    21,     0,     0,
       0,   211,     5,   212,   213,     0,     0,   320,     0,     0,
       0,     0,     0,     0,   211,     0,   212,   213,     0,     0,
     346,     9,    10,    11,    12,     0,    14,    15,    16,    17,
      18,    19,    20,    21,     9,    10,    11,    12,     0,    14,
      15,    16,    17,    18,    19,    20,    21,     0,     0,     0,
       0,     0,   212,   213,     0,     0,   260,     0,     0,     0,
       0,     0,     0,     0,     0,   212,   213,     0,     0,   270,
       9,    10,    11,    12,     0,    14,    15,    16,    17,    18,
      19,    20,    21,     8,     0,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,     0,     0,
       0,   212,   213,     0,     0,   327,     0,     0,     0,     0,
       0,     0,     9,    10,    11,    12,    22,    14,    15,    16,
      17,    18,    19,    20,    21,     9,    10,    11,    12,    79,
      14,    15,    16,    17,    18,    19,    20,    21,     0,     0,
       0,     0,     0,   286,   213,     0,     0,     0,     0,     0,
       0,     0,     9,    10,    11,    12,    80,    14,    15,    16,
      17,    18,    19,    20,    21,     0,   112,   113,   114,   115,
     116,     0,     0,   117,     0,   118,   119,     0,   120,   121,
       0,     0,     0,    94,   112,   113,   114,   115,   116,     0,
       0,   202,     0,   118,   119,     0,   120,   121
};

static const yytype_int16 yycheck[] =
{
       3,    14,    37,     6,   228,    75,    58,    29,    30,    31,
      30,    27,     3,   296,    40,     6,    42,    47,    88,    49,
      90,    24,    92,    26,    50,    28,    46,    62,    63,     6,
      46,     0,   224,    24,    58,    26,   228,    28,    53,    74,
       3,     4,     5,     6,    30,    30,   224,    24,    40,    26,
     228,    28,   239,   105,    45,   338,    53,    49,    80,   251,
      46,    46,    53,    85,    86,    87,   101,    45,     4,   256,
      33,    49,   296,   260,    30,   299,    30,    40,    41,    30,
      30,    44,   117,    46,    75,    48,    30,   122,   123,   124,
      46,    82,    46,    84,    40,    46,    46,    88,   111,    90,
      46,    92,    46,    40,   296,    27,    28,   299,    30,    40,
     180,   181,    42,   300,   338,   185,    46,   187,   296,   189,
      50,   299,     9,    10,    11,    12,    40,   179,    42,    42,
      52,   166,    46,   320,    40,    41,    50,    50,   129,    27,
      28,    42,    30,   178,    27,    28,   338,    30,   161,    27,
      28,   164,    30,    40,    47,   179,    49,   344,    46,   346,
     338,    40,   197,   154,    52,    40,    40,   202,   203,   204,
     205,    44,   224,   208,   226,    47,   228,    49,    27,    28,
      40,    30,    27,    28,    46,    30,   199,    48,    49,   180,
     181,    47,    51,    49,   185,    42,   187,    46,   189,   251,
     224,    44,   226,    52,   228,    27,    47,    52,    49,    47,
     232,    49,    40,   235,   236,    48,    49,   252,   253,    50,
     179,   224,    47,   275,    49,   228,   278,   251,    43,   281,
      15,    16,    17,    18,    19,    20,    21,    43,   273,   274,
     292,   276,   277,   295,   296,   297,   298,   299,   251,    48,
      49,   275,   287,   288,   278,    45,    47,   281,    49,    47,
       3,    49,    30,     6,    47,   224,    49,   226,   292,   228,
      40,   295,   296,   297,   298,   299,    47,   329,    49,   314,
     315,    24,    47,    26,    49,    28,   338,   339,     3,    48,
      49,     6,   251,   296,    48,    49,   299,   179,   350,   351,
      40,    28,    45,    30,    82,   329,    84,    48,    49,    24,
      53,    26,    40,    28,   338,   339,    48,    49,     3,     4,
       5,     6,   281,    48,    49,    47,   350,   351,    40,    40,
      45,    40,    75,   292,    40,   338,   295,   296,    53,    82,
     299,    84,   224,    40,    40,    88,   228,    90,    33,    92,
       9,    10,    11,    12,    40,    40,    41,    50,    43,    44,
      75,    46,    40,    40,    46,    48,    47,    82,    44,    84,
     329,    40,    46,    88,    46,    90,    46,    92,    40,   338,
     339,    48,    50,    48,    40,   128,    30,    48,    40,    39,
      47,   350,   351,    40,     8,     9,    10,    11,    12,   281,
      14,    15,    16,    17,    18,    19,    20,    21,    47,    47,
     292,   154,    48,   295,   296,    40,    48,   299,    48,    48,
      48,    48,    36,    37,    38,    48,    40,    41,    39,    48,
      44,    45,    48,    48,    48,    48,     6,   180,   181,   154,
      54,   154,   185,   127,   187,   226,   189,   329,   167,   167,
     167,    -1,    -1,    -1,    -1,    -1,   338,   339,    -1,     3,
       4,     5,     6,    -1,    -1,   180,   181,    -1,   350,   351,
     185,    -1,   187,    -1,   189,     8,     9,    10,    11,    12,
      -1,    14,    15,    16,    17,    18,    19,    20,    21,    33,
      -1,    -1,    -1,    -1,    -1,    -1,    40,    41,    -1,    -1,
      44,    -1,    46,    36,    37,    38,    -1,    40,    41,    -1,
      -1,    44,    45,    -1,    -1,    48,     8,     9,    10,    11,
      12,    54,    14,    15,    16,    17,    18,    19,    20,    21,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
      -1,    48,    -1,    -1,    -1,    -1,     7,    54,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    -1,     9,    10,    11,    12,    -1,    14,    15,    16,
      17,    18,    19,    20,    21,     9,    10,    11,    12,    40,
      14,    15,    16,    17,    18,    19,    20,    21,    -1,    -1,
      -1,    38,    53,    40,    41,    -1,    -1,    44,    -1,    -1,
      -1,    -1,    -1,    -1,    38,    -1,    40,    41,    -1,    -1,
      44,     9,    10,    11,    12,    -1,    14,    15,    16,    17,
      18,    19,    20,    21,     9,    10,    11,    12,    -1,    14,
      15,    16,    17,    18,    19,    20,    21,    -1,    -1,    -1,
      -1,    -1,    40,    41,    -1,    -1,    44,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    40,    41,    -1,    -1,    44,
       9,    10,    11,    12,    -1,    14,    15,    16,    17,    18,
      19,    20,    21,     7,    -1,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    -1,    -1,
      -1,    40,    41,    -1,    -1,    44,    -1,    -1,    -1,    -1,
      -1,    -1,     9,    10,    11,    12,    40,    14,    15,    16,
      17,    18,    19,    20,    21,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    -1,    -1,
      -1,    -1,    -1,    40,    41,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     9,    10,    11,    12,    40,    14,    15,    16,
      17,    18,    19,    20,    21,    -1,    22,    23,    24,    25,
      26,    -1,    -1,    29,    -1,    31,    32,    -1,    34,    35,
      -1,    -1,    -1,    40,    22,    23,    24,    25,    26,    -1,
      -1,    29,    -1,    31,    32,    -1,    34,    35
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    56,    57,    58,     0,    53,    59,    60,     7,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    40,    61,    62,    65,    68,    69,    82,   101,
     114,   115,     4,    60,    61,    40,    40,    42,   107,   108,
      40,    83,    61,    63,    61,    44,    61,    40,    83,    40,
      83,    40,    83,    46,     3,     4,     5,     6,    33,    40,
      41,    43,    44,    46,    80,    86,    87,    88,    98,   105,
     109,   110,    51,    42,    30,    46,    48,    49,    44,    13,
      40,    70,    71,    74,    75,   101,   114,   115,    46,    48,
      46,    48,    46,    48,    40,    66,    67,   101,   114,   115,
      40,    46,   109,   110,    46,    50,   107,    50,    86,   106,
      86,    43,    22,    23,    24,    25,    26,    29,    31,    32,
      34,    35,   111,   112,   113,    27,    27,    46,   102,   103,
     104,    43,    86,    66,    40,    64,    40,    40,    83,    45,
      70,    72,    70,    40,    83,    40,    83,    40,    83,    66,
      66,    66,    40,    47,    49,    40,    40,    40,    86,    86,
      99,    40,   110,    50,    40,    45,    49,    47,   107,    86,
      86,    86,    86,    99,   115,   114,    40,    47,    30,    76,
      46,    46,    48,    48,    44,    46,    48,    46,    48,    46,
      48,    47,    47,    47,    67,    47,    47,    49,   107,    40,
     107,    86,    29,   111,   112,   113,    47,    86,     8,    36,
      37,    38,    40,    41,    44,    45,    48,    54,    78,    80,
      82,    84,    85,    89,    90,    91,    93,    94,    96,    97,
      98,   100,   101,   109,   110,   114,   115,    66,    66,    73,
      66,    66,    66,    86,   107,    86,    86,    86,    86,    48,
      86,    46,    46,    46,    40,    50,    77,    40,    79,    48,
      44,    81,    82,    84,    97,   109,   110,    85,   109,   110,
      44,    81,    48,    28,    30,    52,    28,    30,    52,    47,
      47,    76,    47,    47,    47,    48,    40,    82,    84,    86,
      86,    40,    76,    40,    49,    76,    39,    52,    52,    47,
      95,    86,    86,   109,   110,    86,    86,   109,   110,    45,
      86,    86,    47,    47,    28,    30,    45,    48,    40,    45,
      44,    81,    89,   109,   110,   109,   110,    44,    81,    76,
      48,    48,    48,    48,    48,    48,    86,    86,    39,    76,
      48,    48,    48,    48,    92,    45,    44,    81,    89,    45,
      76,    76,    45,    45
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    55,    57,    56,    58,    56,    59,    59,    60,    61,
      61,    61,    61,    63,    64,    62,    65,    65,    65,    65,
      65,    66,    66,    66,    67,    67,    67,    67,    68,    69,
      70,    70,    70,    72,    73,    71,    74,    74,    74,    74,
      74,    75,    75,    75,    75,    77,    76,    76,    76,    78,
      78,    78,    78,    78,    78,    78,    78,    78,    78,    78,
      78,    78,    79,    79,    80,    80,    81,    81,    81,    81,
      81,    81,    81,    82,    82,    82,    82,    83,    83,    83,
      83,    84,    85,    85,    85,    85,    85,    85,    85,    86,
      86,    86,    86,    86,    86,    87,    87,    87,    87,    87,
      88,    88,    88,    88,    88,    88,    88,    88,    88,    88,
      88,    88,    88,    88,    89,    89,    89,    89,    89,    89,
      89,    89,    90,    92,    91,    91,    93,    93,    95,    94,
      94,    96,    97,    98,    98,    99,    99,    99,   100,   100,
     102,   101,   103,   101,   104,   101,   105,   106,   106,   107,
     107,   107,   108,   108,   109,   109,   110,   110,   110,   110,
     110,   111,   111,   112,   112,   113,   113,   113,   113,   113,
     114,   114,   114,   114,   114,   114,   114,   115,   115,   115,
     115
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     3,     0,     2,     2,     1,     2,     2,
       2,     2,     0,     0,     0,     6,     5,     5,     5,     5,
       5,     3,     1,     0,     2,     2,     2,     2,     5,     2,
       2,     2,     0,     0,     0,     6,     5,     5,     5,     5,
       5,     3,     3,     3,     3,     0,     5,     2,     0,     1,
       1,     1,     1,     1,     1,     1,     1,     4,     4,     4,
       4,     4,     3,     1,     2,     2,     1,     1,     1,     4,
       4,     4,     4,     3,     3,     3,     3,     3,     3,     5,
       1,     2,     3,     3,     5,     3,     3,     5,     1,     3,
       5,     5,     5,     5,     1,     3,     3,     3,     3,     1,
       1,     1,     1,     1,     1,     1,     4,     2,     2,     1,
       1,     1,     3,     4,     4,     2,     6,     4,     8,     6,
       6,     4,     4,     0,     7,     4,     5,     5,     0,     5,
       2,     4,     2,     4,     4,     3,     1,     0,     2,     3,
       0,     5,     0,     5,     0,     5,     3,     1,     3,     4,
       3,     1,     3,     2,     1,     2,     3,     3,     4,     4,
       5,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1
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
#line 110 "yacc.y"
      {
        global_table = init_symtab();
        function_table = init_functab();
        init_functab_entries(function_table);
        class_table = init_classtab();
        params = NULL;
        local_table = global_table;
        members = NULL;
        methods = NULL;
        scope = 0;
    }
#line 1600 "yacc.tab.c"
    break;

  case 3: /* start: $@1 include_stmts code  */
#line 121 "yacc.y"
                       {
        printf("Global Table : \n");
        display_symtab(global_table);
        printf("\n\nFunction Table : \n");
        display_functab(function_table);
        printf("\n\nClass Table : \n");
        display_classtab(class_table);
        free_symtab(global_table);
        free_functab(function_table);
        free_classtab(class_table);
    }
#line 1616 "yacc.tab.c"
    break;

  case 4: /* $@2: %empty  */
#line 132 "yacc.y"
      {
        global_table = init_symtab();
        function_table = init_functab();
        class_table = init_classtab();
        params = NULL;
        local_table = global_table;
        members = NULL;
        methods = NULL;
        scope = 0;
    }
#line 1631 "yacc.tab.c"
    break;

  case 5: /* start: $@2 code  */
#line 141 "yacc.y"
           {
        printf("Global Table : \n");
        display_symtab(global_table);
        printf("\n\nFunction Table : \n");
        display_functab(function_table);
        printf("\n\nClass Table : \n");
        display_classtab(class_table);
        free_symtab(global_table);
        free_functab(function_table);
        free_classtab(class_table);
    }
#line 1647 "yacc.tab.c"
    break;

  case 13: /* $@3: %empty  */
#line 172 "yacc.y"
                       {
            local_table = (yyvsp[0].functions).local_table;
            params = (yyvsp[0].functions).params;
            rflag = false;
            return_type = (yyvsp[0].functions).type;
        }
#line 1658 "yacc.tab.c"
    break;

  case 14: /* $@4: %empty  */
#line 177 "yacc.y"
              {scope++;}
#line 1664 "yacc.tab.c"
    break;

  case 15: /* function: function_dec $@3 LCB $@4 statements RCB  */
#line 177 "yacc.y"
                                        {
        struct funcrec *entry = (struct funcrec*) malloc(sizeof(struct funcrec));
        entry -> name = (yyvsp[-5].functions).name;
        entry -> type = (yyvsp[-5].functions).type;
        entry -> dim = (yyvsp[-5].functions).dim;
        entry -> params = (yyvsp[-5].functions).params;
        entry -> num_params = (yyvsp[-5].functions).num_params;
        entry -> next = NULL;
        entry -> local_table = (yyvsp[-5].functions).local_table;
        if(!rflag)
        {
            printf("Error: Function %s doesn't return a value on all control paths\n",entry -> name);
            YYABORT;
        }
        insert_functab(function_table, entry);
        local_table = global_table;
        params = NULL;
        scope--;
    }
#line 1688 "yacc.tab.c"
    break;

  case 16: /* function_dec: data_type_new IDENTIFIER LPB function_params RPB  */
#line 199 "yacc.y"
                                                               {
        struct funcrec *entry = (struct funcrec*) malloc(sizeof(struct funcrec));
        entry -> name = (yyvsp[-3].id).name;
        entry -> type = (yyvsp[-4].type);
        entry -> dim = 0;
        entry -> params = (yyvsp[-1].functions).params;
        entry -> num_params = (yyvsp[-1].functions).num_params;
        if(search_functab(function_table, entry,0) != NULL)
        {
            printf("Error: Function %s already declared\n", entry -> name);
            YYABORT;
        }
        (yyval.functions).type = (yyvsp[-4].type);
        (yyval.functions).dim = 0;
        (yyval.functions).name = (yyvsp[-3].id).name;
        (yyval.functions).params = (yyvsp[-1].functions).params;
        (yyval.functions).num_params = (yyvsp[-1].functions).num_params;
        (yyval.functions).local_table = init_symtab();
    }
#line 1712 "yacc.tab.c"
    break;

  case 17: /* function_dec: data_type_pr IDENTIFIER LPB function_params RPB  */
#line 218 "yacc.y"
                                                      {
        
        struct funcrec *entry = (struct funcrec *)malloc(sizeof(struct funcrec));
        entry -> name = (yyvsp[-3].id).name;
        entry -> type = (yyvsp[-4].type);
        entry -> params = (yyvsp[-1].functions).params;
        entry -> dim = 0;
        entry -> num_params = (yyvsp[-1].functions).num_params;
        if(search_functab(function_table, entry, 0) != NULL)
        {
            printf("Error: Function %s already declared\n", entry -> name);
            YYABORT;
        }
        (yyval.functions).type = (yyvsp[-4].type);
        (yyval.functions).dim = 0;
        (yyval.functions).name = (yyvsp[-3].id).name;
        (yyval.functions).params = (yyvsp[-1].functions).params;
        (yyval.functions).num_params = (yyvsp[-1].functions).num_params;
        (yyval.functions).local_table = init_symtab();
    }
#line 1737 "yacc.tab.c"
    break;

  case 18: /* function_dec: IDENTIFIER IDENTIFIER LPB function_params RPB  */
#line 238 "yacc.y"
                                                    {
        if(search_classtab(class_table, (yyvsp[-4].id).name) == NULL)
        {
            printf("Error: Class %s not declared\n", (yyvsp[-4].id).name);
            YYABORT;
        }
        struct funcrec *entry = (struct funcrec *)malloc(sizeof(struct funcrec));
        entry -> name = (yyvsp[-3].id).name;
        entry -> type = 14;
        entry -> dim = 0;
        entry -> params = (yyvsp[-1].functions).params;
        entry -> num_params = (yyvsp[-1].functions).num_params;
        if(search_functab(function_table, entry, 0) != NULL)
        {
            printf("Error: Function %s already declared\n", entry -> name);
            YYABORT;
        }
        (yyval.functions).type = 14;
        (yyval.functions).dim = 0;
        (yyval.functions).name = (yyvsp[-3].id).name;
        (yyval.functions).params = (yyvsp[-1].functions).params;
        (yyval.functions).num_params = (yyvsp[-1].functions).num_params;
        (yyval.functions).local_table = init_symtab();
    }
#line 1766 "yacc.tab.c"
    break;

  case 19: /* function_dec: VOID IDENTIFIER LPB function_params RPB  */
#line 262 "yacc.y"
                                              {
        struct funcrec *entry = (struct funcrec *)malloc(sizeof(struct funcrec));
        entry -> name = (yyvsp[-3].id).name;
        entry -> type = 4;
        entry -> dim = 0;
        entry -> params = (yyvsp[-1].functions).params;
        entry -> num_params = (yyvsp[-1].functions).num_params;
        if(search_functab(function_table, entry, 0) != NULL)
        {
            printf("Error: Function %s already declared\n", entry -> name);
            YYABORT;
        }
        (yyval.functions).type = 4;
        (yyval.functions).dim = 0;
        (yyval.functions).name = (yyvsp[-3].id).name;
        (yyval.functions).params = (yyvsp[-1].functions).params;
        (yyval.functions).num_params = (yyvsp[-1].functions).num_params;
        (yyval.functions).local_table = init_symtab();
    }
#line 1790 "yacc.tab.c"
    break;

  case 20: /* function_dec: list IDENTIFIER LPB function_params RPB  */
#line 282 "yacc.y"
                                              {
        struct funcrec *entry = (struct funcrec *)malloc(sizeof(struct funcrec));
        entry -> name = (yyvsp[-3].id).name;
        entry -> type = 5;
        entry -> dim = (yyvsp[-4].list).dim;
        entry -> params = (yyvsp[-1].functions).params;
        entry -> num_params = (yyvsp[-1].functions).num_params;
        entry -> next = NULL;
        entry -> local_table = init_symtab();
        if(search_functab(function_table, entry, 0) != NULL)
        {
            printf("Error: Function %s already declared\n", entry -> name);
            YYABORT;
        }
        (yyval.functions).type = (yyvsp[-4].list).type;
        (yyval.functions).dim = (yyvsp[-4].list).dim;
        (yyval.functions).name = (yyvsp[-3].id).name;
        (yyval.functions).params = (yyvsp[-1].functions).params;
        (yyval.functions).num_params = (yyvsp[-1].functions).num_params;
        (yyval.functions).local_table = init_symtab();
    }
#line 1816 "yacc.tab.c"
    break;

  case 21: /* function_params: function_params COMMA function_param  */
#line 306 "yacc.y"
                                                      {
        if(lookup((yyval.functions).params, (yyval.functions).params, (yyvsp[0].param)->name) != NULL)
        {
            printf("Error: Parameter %s already used\n", (yyvsp[0].param)->name);
            YYABORT;
        }
        (yyval.functions).params = (yyvsp[-2].functions).params;
        insert_symtab((yyval.functions).params, (yyvsp[0].param));
        (yyval.functions).num_params = (yyvsp[-2].functions).num_params + 1;
    }
#line 1831 "yacc.tab.c"
    break;

  case 22: /* function_params: function_param  */
#line 316 "yacc.y"
                     {
        (yyval.functions).params = init_symtab();
        insert_symtab((yyval.functions).params, (yyvsp[0].param));
        (yyval.functions).num_params = 1;
    }
#line 1841 "yacc.tab.c"
    break;

  case 23: /* function_params: %empty  */
#line 321 "yacc.y"
      {
        (yyval.functions).params = init_symtab();
        (yyval.functions).num_params = 0;
    }
#line 1850 "yacc.tab.c"
    break;

  case 24: /* function_param: data_type_new IDENTIFIER  */
#line 328 "yacc.y"
                                         {
        struct idrec *entry = (struct idrec *)malloc(sizeof(struct idrec));
        entry -> name = (yyvsp[0].id).name;
        entry -> type = (yyvsp[-1].type);
        entry -> arr = false;
        entry -> dim = 0;
        entry -> scope = 1;
        entry -> next = NULL;
        entry -> class_name = NULL;       
        (yyval.param) = entry;
    }
#line 1866 "yacc.tab.c"
    break;

  case 25: /* function_param: data_type_pr IDENTIFIER  */
#line 339 "yacc.y"
                              {
        struct idrec *entry = (struct idrec*) malloc(sizeof(struct idrec));
        entry -> name = (yyvsp[0].id).name;
        entry -> type = (yyvsp[-1].type);
        entry -> arr = false;
        entry -> dim = 0;
        entry -> scope = 1;
        entry -> next = NULL;
        entry -> class_name = NULL;       
        (yyval.param) = entry;
    }
#line 1882 "yacc.tab.c"
    break;

  case 26: /* function_param: IDENTIFIER IDENTIFIER  */
#line 350 "yacc.y"
                            {
        if(search_classtab(class_table, (yyvsp[-1].id).name) == NULL)
        {
            printf("Error: Class %s not declared\n", (yyvsp[-1].id).name);
            YYABORT;
        }
        struct idrec *entry = (struct idrec *)malloc(sizeof(struct idrec));
        entry -> name = (yyvsp[0].id).name;
        entry -> type = 14;
        entry -> arr = false;
        entry -> scope = 1;
        entry -> next = NULL;
        entry -> class_name = (yyvsp[-1].id).name;
        entry -> dim = 0;
        (yyval.param) = entry;
    }
#line 1903 "yacc.tab.c"
    break;

  case 27: /* function_param: list IDENTIFIER  */
#line 367 "yacc.y"
                      {
        struct idrec *entry = (struct idrec *)malloc(sizeof(struct idrec));
        entry -> name = (yyvsp[0].id).name;
        entry -> type = (yyvsp[-1].list).type;
        entry -> arr = true;
        entry -> scope = 1;
        entry -> next = NULL;
        entry -> class_name = NULL;
        entry -> dim = (yyvsp[-1].list).dim;
        (yyval.param) = entry;
    }
#line 1919 "yacc.tab.c"
    break;

  case 28: /* class: class_dec LCB class_stmt RCB SEMICOLON  */
#line 382 "yacc.y"
                                              {
        struct classrec *entry = (struct classrec *)malloc(sizeof(struct classrec));
        entry -> name = (yyvsp[-4].id).name;
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
    }
#line 1940 "yacc.tab.c"
    break;

  case 29: /* class_dec: CLASS IDENTIFIER  */
#line 401 "yacc.y"
                            {
        (yyval.id).name = (yyvsp[0].id).name;
        (yyvsp[0].id).type = 14;
        members = init_symtab();
        methods = init_functab();
    }
#line 1951 "yacc.tab.c"
    break;

  case 33: /* $@5: %empty  */
#line 415 "yacc.y"
                                   {
            local_table = (yyvsp[0].functions).local_table;
            params = (yyvsp[0].functions).params;
            rflag = true;
            return_type = (yyvsp[0].functions).type;
        }
#line 1962 "yacc.tab.c"
    break;

  case 34: /* $@6: %empty  */
#line 420 "yacc.y"
              {scope++;}
#line 1968 "yacc.tab.c"
    break;

  case 35: /* class_function: class_function_dec $@5 LCB $@6 statements RCB  */
#line 420 "yacc.y"
                                        {
        if(!rflag)
        {
            printf("Error: Method doesn't return a value on all control paths\n");
            YYABORT;
        }
        struct funcrec *entry = (struct funcrec*) malloc(sizeof(struct funcrec));
        entry -> name = (yyvsp[-5].functions).name;
        entry -> type = (yyvsp[-5].functions).type;
        entry -> dim = (yyvsp[-5].functions).dim;
        entry -> params = (yyvsp[-5].functions).params;
        entry -> num_params = (yyvsp[-5].functions).num_params;
        entry -> next = NULL;
        entry -> local_table = (yyvsp[-5].functions).local_table;
        insert_functab(methods, entry);
        local_table = NULL;
        params = NULL;
        scope--;
    }
#line 1992 "yacc.tab.c"
    break;

  case 36: /* class_function_dec: data_type_new IDENTIFIER LPB function_params RPB  */
#line 442 "yacc.y"
                                                                     {
        struct funcrec *entry = (struct funcrec*) malloc(sizeof(struct funcrec));
        entry -> name = (yyvsp[-3].id).name;
        entry -> type = (yyvsp[-4].type);
        entry -> dim = 0;
        entry -> params = (yyvsp[-1].functions).params;
        entry -> num_params = (yyvsp[-1].functions).num_params;
        entry -> next = NULL;
        entry -> local_table = init_symtab();
        if(search_functab(methods, entry, 0) != NULL)
        {
            printf("Error: Method %s already declared\n", entry -> name);
            YYABORT;
        }
        (yyval.functions).type = (yyvsp[-4].type);
        (yyval.functions).dim = 0;
        (yyval.functions).name = (yyvsp[-3].id).name;
        (yyval.functions).params = (yyvsp[-1].functions).params;
        (yyval.functions).num_params = (yyvsp[-1].functions).num_params;
        (yyval.functions).local_table = init_symtab();
    }
#line 2018 "yacc.tab.c"
    break;

  case 37: /* class_function_dec: data_type_pr IDENTIFIER LPB function_params RPB  */
#line 463 "yacc.y"
                                                      {
        struct funcrec *entry = (struct funcrec *)malloc(sizeof(struct funcrec));
        entry -> name = (yyvsp[-3].id).name;
        entry -> type = (yyvsp[-4].type);
        entry -> dim = 0;
        entry -> params = (yyvsp[-1].functions).params;
        entry -> num_params = (yyvsp[-1].functions).num_params;
        entry -> next = NULL;
        entry -> local_table = init_symtab();
        if(search_functab(methods, entry, 0) != NULL)
        {
            printf("Error: Method %s already declared\n", entry -> name);
            YYABORT;
        }
        (yyval.functions).type = (yyvsp[-4].type);
        (yyval.functions).dim = 0;
        (yyval.functions).name = (yyvsp[-3].id).name;
        (yyval.functions).params = (yyvsp[-1].functions).params;
        (yyval.functions).num_params = (yyvsp[-1].functions).num_params;
        (yyval.functions).local_table = init_symtab();
    }
#line 2044 "yacc.tab.c"
    break;

  case 38: /* class_function_dec: IDENTIFIER IDENTIFIER LPB function_params RPB  */
#line 484 "yacc.y"
                                                    {
        if(search_classtab(class_table, (yyvsp[-4].id).name) == NULL)
        {
            printf("Error: Class %s not declared\n", (yyvsp[-4].id).name);
            YYABORT;
        }
        struct funcrec *entry = (struct funcrec *)malloc(sizeof(struct funcrec));
        entry -> name = (yyvsp[-3].id).name;
        entry -> type = 14;
        entry -> dim = 0;
        entry -> params = (yyvsp[-1].functions).params;
        entry -> num_params = (yyvsp[-1].functions).num_params;
        entry -> next = NULL;
        entry -> local_table = init_symtab();
        if(search_functab(methods, entry, 0) != NULL)
        {
            printf("Error: Method %s already declared\n", entry -> name);
            YYABORT;
        }
        (yyval.functions).type = 14;
        (yyval.functions).dim = 0;
        (yyval.functions).name = (yyvsp[-3].id).name;
        (yyval.functions).params = (yyvsp[-1].functions).params;
        (yyval.functions).num_params = (yyvsp[-1].functions).num_params;
        (yyval.functions).local_table = init_symtab();
    }
#line 2075 "yacc.tab.c"
    break;

  case 39: /* class_function_dec: VOID IDENTIFIER LPB function_params RPB  */
#line 510 "yacc.y"
                                              {
        struct funcrec *entry = (struct funcrec *)malloc(sizeof(struct funcrec));
        entry -> name = (yyvsp[-3].id).name;
        entry -> type = 4;
        entry -> dim = 0;
        entry -> params = (yyvsp[-1].functions).params;
        entry -> num_params = (yyvsp[-1].functions).num_params;
        entry -> next = NULL;
        entry -> local_table = init_symtab();
        if(search_functab(methods, entry, 0) != NULL)
        {
            printf("Error: Method %s already declared\n", entry -> name);
            YYABORT;
        }
        (yyval.functions).type = 4;
        (yyval.functions).dim = 0;
        (yyval.functions).name = (yyvsp[-3].id).name;
        (yyval.functions).params = (yyvsp[-1].functions).params;
        (yyval.functions).num_params = (yyvsp[-1].functions).num_params;
        (yyval.functions).local_table = init_symtab();
    }
#line 2101 "yacc.tab.c"
    break;

  case 40: /* class_function_dec: list IDENTIFIER LPB function_params RPB  */
#line 531 "yacc.y"
                                              {
        struct funcrec *entry = (struct funcrec *)malloc(sizeof(struct funcrec));
        entry -> name = (yyvsp[-3].id).name;
        entry -> type = (yyvsp[-4].list).type;
        entry -> dim = (yyvsp[-4].list).dim;
        entry -> params = (yyvsp[-1].functions).params;
        entry -> num_params = (yyvsp[-1].functions).num_params;
        entry -> next = NULL;
        entry -> local_table = init_symtab();
        if(search_functab(methods, entry, 0) != NULL)
        {
            printf("Error: Method %s already declared\n", entry -> name);
            YYABORT;
        }
        (yyval.functions).type = (yyvsp[-4].list).type;
        (yyval.functions).dim = (yyvsp[-4].list).dim;
        (yyval.functions).name = (yyvsp[-3].id).name;
        (yyval.functions).params = (yyvsp[-1].functions).params;
        (yyval.functions).num_params = (yyvsp[-1].functions).num_params;
        (yyval.functions).local_table = init_symtab();
    }
#line 2127 "yacc.tab.c"
    break;

  case 41: /* class_decl_stmt: data_type_new id_list SEMICOLON  */
#line 555 "yacc.y"
                                                 {
        struct snode* temp = (yyvsp[-1].namelist)->head;
        while(temp != NULL){
            struct idrec *entry = (struct idrec *)malloc(sizeof(struct idrec));
            entry -> type = (yyvsp[-2].type);
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
    }
#line 2152 "yacc.tab.c"
    break;

  case 42: /* class_decl_stmt: data_type_pr id_list SEMICOLON  */
#line 575 "yacc.y"
                                    {
        
        struct snode* temp = (yyvsp[-1].namelist)->head;
        while(temp != NULL){
            struct idrec *entry = (struct idrec *)malloc(sizeof(struct idrec));
            entry -> type = (yyvsp[-2].type);
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
    }
#line 2179 "yacc.tab.c"
    break;

  case 43: /* class_decl_stmt: IDENTIFIER id_list SEMICOLON  */
#line 597 "yacc.y"
                                  {
        if(search_classtab(class_table, (yyvsp[-2].id).name) == NULL)
        {
            printf("Error: Class %s not declared\n", (yyvsp[-2].id).name);
            YYABORT;
        }
        struct snode* temp = (yyvsp[-1].namelist)->head;
        while(temp != NULL){
            struct idrec *entry = (struct idrec *)malloc(sizeof(struct idrec));
            entry -> type = 14;
            entry -> arr = false;
            entry -> scope = 1; 
            entry -> name = temp->val;
            entry -> next = NULL;
            entry -> class_name = (yyvsp[-2].id).name;
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
    }
#line 2210 "yacc.tab.c"
    break;

  case 44: /* class_decl_stmt: list id_list SEMICOLON  */
#line 623 "yacc.y"
                             {
        struct snode* temp = (yyvsp[-1].namelist)->head;
        while(temp != NULL){
            struct idrec *entry = (struct idrec *)malloc(sizeof(struct idrec));
            entry -> type = (yyvsp[-2].list).type;
            entry -> arr = true;
            entry -> scope = 1; 
            entry -> name = temp->val;
            entry->class_name = (yyvsp[-2].list).class_name;
            entry -> next = NULL;
            entry -> dim = (yyvsp[-2].list).dim;
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
    }
#line 2238 "yacc.tab.c"
    break;

  case 45: /* $@7: %empty  */
#line 650 "yacc.y"
                            {scope++;}
#line 2244 "yacc.tab.c"
    break;

  case 46: /* statements: statements LCB $@7 statements RCB  */
#line 650 "yacc.y"
                                                      {scope--;}
#line 2250 "yacc.tab.c"
    break;

  case 48: /* statements: %empty  */
#line 652 "yacc.y"
      {}
#line 2256 "yacc.tab.c"
    break;

  case 64: /* unary_stmt: identifier UNARY_OP  */
#line 678 "yacc.y"
                                {
        if((yyvsp[-1].class_id).type != 0 && (yyvsp[-1].class_id).type != 1){
            printf("Error: Unary operator not defined for type %s\n", map_type[(yyvsp[-1].class_id).type]); 
            YYABORT;
        }
        (yyval.type) = (yyvsp[-1].class_id).type;
    }
#line 2268 "yacc.tab.c"
    break;

  case 65: /* unary_stmt: class_identifier UNARY_OP  */
#line 685 "yacc.y"
                                {
        check_namelist((yyvsp[-1].class_id).namelist, global_table, local_table, class_table, NULL, -1);
        if((yyvsp[-1].class_id).type != 0 && (yyvsp[-1].class_id).type != 1){
            printf("Error: Unary operator not defined for type %s\n", map_type[(yyvsp[-1].class_id).type]); 
            YYABORT;
        }
    }
#line 2280 "yacc.tab.c"
    break;

  case 73: /* decl_stmt: data_type_new id_list SEMICOLON  */
#line 706 "yacc.y"
                                           {
        struct snode* temp = (yyvsp[-1].namelist)->head;
        while(temp != NULL){
            struct idrec *entry = (struct idrec*) malloc(sizeof(struct idrec));
            entry -> type = (yyvsp[-2].type);
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
    }
#line 2309 "yacc.tab.c"
    break;

  case 74: /* decl_stmt: data_type_pr id_list SEMICOLON  */
#line 730 "yacc.y"
                                    {
        struct snode* temp = (yyvsp[-1].namelist)->head;
        while(temp != NULL){
            struct idrec *entry = (struct idrec*) malloc(sizeof(struct idrec));
            entry -> type = (yyvsp[-2].type);
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
    }
#line 2338 "yacc.tab.c"
    break;

  case 75: /* decl_stmt: IDENTIFIER id_list SEMICOLON  */
#line 754 "yacc.y"
                                   {
        struct snode* temp = (yyvsp[-1].namelist)->head;
        if(search_classtab(class_table, (yyvsp[-2].id).name) == NULL)
        {
            printf("Error: Class %s not declared\n", (yyvsp[-2].id).name);
            YYABORT;
        }
        while(temp != NULL){
            struct idrec *entry = (struct idrec*) malloc(sizeof(struct idrec));
            entry -> type = 14;
            entry -> arr = false;
            entry -> scope = scope; 
            entry -> name = temp->val;
            entry -> class_name = (yyvsp[-2].id).name;
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
    }
#line 2372 "yacc.tab.c"
    break;

  case 76: /* decl_stmt: list id_list SEMICOLON  */
#line 783 "yacc.y"
                             {
        struct snode* temp = (yyvsp[-1].namelist)->head;
        while(temp != NULL){
            struct idrec *entry = (struct idrec*) malloc(sizeof(struct idrec));
            entry -> type = 5;
            entry -> arr = true;
            entry -> scope = scope; 
            entry -> name = temp->val;
            entry -> class_name = (yyvsp[-2].list).class_name;
            entry -> next = NULL;
            entry -> dim = (yyvsp[-2].list).dim;
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
    }
#line 2403 "yacc.tab.c"
    break;

  case 77: /* id_list: id_list COMMA IDENTIFIER  */
#line 812 "yacc.y"
                                 {
        insert_slist((yyvsp[-2].namelist), (yyvsp[0].id).name);
        (yyval.namelist) = (yyvsp[-2].namelist);
        printf("%s\n", init);
        if(lflag)
            fprintf(yyout, "%s", init);
    }
#line 2415 "yacc.tab.c"
    break;

  case 78: /* id_list: IDENTIFIER EQUALS nested_expr  */
#line 819 "yacc.y"
                                   {
        (yyval.namelist) = init_slist();
        insert_slist((yyval.namelist), (yyvsp[-2].id).name);
    }
#line 2424 "yacc.tab.c"
    break;

  case 79: /* id_list: id_list COMMA IDENTIFIER EQUALS nested_expr  */
#line 823 "yacc.y"
                                                 {
        (yyval.namelist) = init_slist();
        insert_slist((yyval.namelist), (yyvsp[-2].id).name);
    }
#line 2433 "yacc.tab.c"
    break;

  case 80: /* id_list: IDENTIFIER  */
#line 827 "yacc.y"
                {
        (yyval.namelist) = init_slist();
        insert_slist((yyval.namelist), (yyvsp[0].id).name);
        printf("%s\n", init);
        if(lflag)
            fprintf(yyout, "%s", init);
    }
#line 2445 "yacc.tab.c"
    break;

  case 82: /* expr_stmt_without_semicolon: identifier ASSIGN_OP nested_expr  */
#line 842 "yacc.y"
                                                              {
        if(!check_assign_op((yyvsp[-2].class_id).type, (yyvsp[0].exprs).type, (yyvsp[-1].assignop))){
            YYABORT;
        }
    }
#line 2455 "yacc.tab.c"
    break;

  case 83: /* expr_stmt_without_semicolon: class_identifier ASSIGN_OP nested_expr  */
#line 847 "yacc.y"
                                             {
        check_namelist((yyvsp[-2].class_id).namelist, global_table, local_table, class_table, NULL, -1);
        if(!check_assign_op((yyvsp[-2].class_id).type, (yyvsp[0].exprs).type, (yyvsp[-1].assignop))){
            YYABORT;
        }
    }
#line 2466 "yacc.tab.c"
    break;

  case 84: /* expr_stmt_without_semicolon: SELF DOT IDENTIFIER ASSIGN_OP nested_expr  */
#line 853 "yacc.y"
                                                {
        struct idrec *entry = lookup(members, members, (yyvsp[-2].id).name);
        if(entry == NULL)
        {
            printf("Error: Class has no member %s declared\n", (yyvsp[-2].id).name);
            YYABORT;
        }
        if(!check_assign_op(entry -> type, (yyvsp[0].exprs).type, (yyvsp[-1].assignop))){
            YYABORT;
        }
        if(members == NULL)
        {
            printf("Error: self must be used inside a class\n");
            YYABORT;
        }
    }
#line 2487 "yacc.tab.c"
    break;

  case 85: /* expr_stmt_without_semicolon: identifier EQUALS nested_expr  */
#line 869 "yacc.y"
                                    {
        if((yyvsp[-2].class_id).type == 5 && (yyvsp[0].exprs).type == 5){
            if((yyvsp[-2].class_id).dim != (yyvsp[0].exprs).dim){
                printf("Error: Dimension mismatch in assignment\n");
                printf("LHS is of dimension %i and RHS is of dimension %i\n", (yyvsp[-2].class_id).dim, (yyvsp[0].exprs).dim);
                YYABORT;
            }
        }
        else if(!check_assign_op((yyvsp[-2].class_id).type, (yyvsp[0].exprs).type, 7)){
            YYABORT;
        }
    }
#line 2504 "yacc.tab.c"
    break;

  case 86: /* expr_stmt_without_semicolon: class_identifier EQUALS nested_expr  */
#line 881 "yacc.y"
                                          {
        check_namelist((yyvsp[-2].class_id).namelist, global_table, local_table, class_table, NULL, -1);
        if((yyvsp[-2].class_id).type == 5 && (yyvsp[0].exprs).type == 5){
            if((yyvsp[-2].class_id).dim != (yyvsp[0].exprs).dim){
                printf("Error: Dimension mismatch in assignment\n");
                printf("LHS is of dimension %i and RHS is of dimension %i\n", (yyvsp[-2].class_id).dim, (yyvsp[0].exprs).dim);
                YYABORT;
            }
        }
        else if(!check_assign_op((yyvsp[-2].class_id).type, (yyvsp[0].exprs).type, 7)){
            YYABORT;
        }
    }
#line 2522 "yacc.tab.c"
    break;

  case 87: /* expr_stmt_without_semicolon: SELF DOT IDENTIFIER EQUALS nested_expr  */
#line 894 "yacc.y"
                                             {
        if(members == NULL)
        {
            printf("Error: self must be used inside a class\n");
            YYABORT;
        }
        struct idrec *entry = lookup(members, members, (yyvsp[-2].id).name);
        if(entry == NULL)
        {
            printf("Error: Class has no member %s declared\n", (yyvsp[-2].id).name);
            YYABORT;
        }
        if(entry -> type && (yyvsp[0].exprs).type == 5){
            if(entry -> dim != (yyvsp[0].exprs).dim){
                printf("Error: Dimension mismatch in assignment\n");
                printf("LHS is of dimension %i and RHS is of dimension %i\n", entry -> dim, (yyvsp[0].exprs).dim);
                YYABORT;
            }
        }
        else if(!check_assign_op(entry -> dim, (yyvsp[0].exprs).type, 7)){
            YYABORT;
        }
    }
#line 2550 "yacc.tab.c"
    break;

  case 89: /* nested_expr: LPB nested_expr RPB  */
#line 921 "yacc.y"
                                 {
        (yyval.exprs).type = (yyvsp[-1].exprs).type;
        (yyval.exprs).dim = (yyvsp[-1].exprs).dim;
    }
#line 2559 "yacc.tab.c"
    break;

  case 90: /* nested_expr: LPB nested_expr RPB conj nested_expr  */
#line 925 "yacc.y"
                                           {
        if((yyvsp[0].exprs).type != 3 || (yyvsp[-3].exprs).type != 3){
            printf("Error: Type mismatch\n");
            YYABORT;
        }
        (yyval.exprs).type = (yyvsp[-3].exprs).type;
        (yyval.exprs).dim = 0;
    }
#line 2572 "yacc.tab.c"
    break;

  case 91: /* nested_expr: LPB nested_expr RPB REL_OP nested_expr  */
#line 933 "yacc.y"
                                             {
        if(!check_rel_op((yyvsp[-3].exprs).type, (yyvsp[0].exprs).type, (yyvsp[-1].assignop))){
            YYABORT;
        }
        (yyval.exprs).type = 3;
        (yyval.exprs).dim = 0;
    }
#line 2584 "yacc.tab.c"
    break;

  case 92: /* nested_expr: LPB nested_expr RPB arith_op nested_expr  */
#line 940 "yacc.y"
                                               {
        (yyval.exprs).type = check_arith_op((yyvsp[-3].exprs).type, (yyvsp[0].exprs).type, (yyvsp[-1].op_type));
        if((yyval.exprs).type == -1)
        {
            YYABORT;
        }
        (yyval.exprs).dim = 0;
    }
#line 2597 "yacc.tab.c"
    break;

  case 93: /* nested_expr: LPB nested_expr RPB set_op nested_expr  */
#line 948 "yacc.y"
                                             {
        if((yyvsp[-3].exprs).type != 7 || (yyvsp[0].exprs).type != 7){
            printf("Error: Invalid operands for \n");
            YYABORT;
        }
        (yyval.exprs).type = (yyvsp[-3].exprs).type; 
        (yyval.exprs).dim = 0;
    }
#line 2610 "yacc.tab.c"
    break;

  case 94: /* nested_expr: expr  */
#line 956 "yacc.y"
           {
        (yyval.exprs).type = (yyvsp[0].exprs).type;
        (yyval.exprs).dim = (yyvsp[0].exprs).dim; 
    }
#line 2619 "yacc.tab.c"
    break;

  case 95: /* expr: expr_terminal conj nested_expr  */
#line 963 "yacc.y"
                                     {
        if((yyvsp[-2].exprs).type != 3 || (yyvsp[0].exprs).type != 3 ){
            printf("Error: Type mismatch\n");
            YYABORT;
        }
        (yyval.exprs).type = 3;
        (yyval.exprs).dim = 0;
    }
#line 2632 "yacc.tab.c"
    break;

  case 96: /* expr: expr_terminal REL_OP nested_expr  */
#line 971 "yacc.y"
                                       {
        if(!check_rel_op((yyvsp[-2].exprs).type, (yyvsp[0].exprs).type, (yyvsp[-1].assignop))){
            YYABORT;
        }
        (yyval.exprs).type = 3;
        (yyval.exprs).dim = 0;
    }
#line 2644 "yacc.tab.c"
    break;

  case 97: /* expr: expr_terminal arith_op nested_expr  */
#line 978 "yacc.y"
                                         {
        (yyval.exprs).type = check_arith_op((yyvsp[-2].exprs).type, (yyvsp[0].exprs).type, (yyvsp[-1].op_type));
        if((yyval.exprs).type == -1)
        {
            YYABORT;
        }
        (yyval.exprs).dim = 0;
    }
#line 2657 "yacc.tab.c"
    break;

  case 98: /* expr: expr_terminal set_op nested_expr  */
#line 986 "yacc.y"
                                       {
        if((yyvsp[-2].exprs).type != 7 || (yyvsp[0].exprs).type != 7){
            printf("Error: Invalid operands for \n");
            YYABORT;
        }
        (yyval.exprs).type = (yyvsp[-2].exprs).type;
        (yyval.exprs).dim = 0;    
    }
#line 2670 "yacc.tab.c"
    break;

  case 99: /* expr: expr_terminal  */
#line 994 "yacc.y"
                    {
        (yyval.exprs).type = (yyvsp[0].exprs).type;
        (yyval.exprs).dim = (yyvsp[0].exprs).dim;
    }
#line 2679 "yacc.tab.c"
    break;

  case 100: /* expr_terminal: unary_stmt  */
#line 1001 "yacc.y"
                          {
        (yyval.exprs).type = (yyvsp[0].type);
        (yyval.exprs).dim = 0;
    }
#line 2688 "yacc.tab.c"
    break;

  case 101: /* expr_terminal: NUMBER  */
#line 1005 "yacc.y"
            {
        (yyval.exprs).type = 0;
        (yyval.exprs).dim = 0;
    }
#line 2697 "yacc.tab.c"
    break;

  case 102: /* expr_terminal: DECIMAL  */
#line 1009 "yacc.y"
             { 
        (yyval.exprs).type = 1;
        (yyval.exprs).dim = 0;
    }
#line 2706 "yacc.tab.c"
    break;

  case 103: /* expr_terminal: STRING_LITERAL  */
#line 1013 "yacc.y"
                    {
        (yyval.exprs).type = 2;   
        (yyval.exprs).dim = 0; 
    }
#line 2715 "yacc.tab.c"
    break;

  case 104: /* expr_terminal: BOOL_LITERAL  */
#line 1017 "yacc.y"
                  {
        (yyval.exprs).type = 3;
        (yyval.exprs).dim = 0;
    }
#line 2724 "yacc.tab.c"
    break;

  case 105: /* expr_terminal: call  */
#line 1021 "yacc.y"
           {
        (yyval.exprs).type = (yyvsp[0].exprs).type;
        (yyval.exprs).dim = (yyvsp[0].exprs).dim;
    }
#line 2733 "yacc.tab.c"
    break;

  case 106: /* expr_terminal: NOT LPB nested_expr RPB  */
#line 1025 "yacc.y"
                              {
        if((yyvsp[-1].exprs).type != 3){
            printf("Error: Not operator not defined for type %s\n", map_type[(yyvsp[-1].exprs).type]); 
            YYABORT;
        }
        (yyval.exprs).type = 3;
        (yyval.exprs).dim = 0;
    }
#line 2746 "yacc.tab.c"
    break;

  case 107: /* expr_terminal: NOT identifier  */
#line 1033 "yacc.y"
                     {
        if((yyvsp[0].class_id).type != 3){
            printf("Error: Not operator not defined for type %s\n", map_type[(yyvsp[0].class_id).type]); 
            YYABORT;
        }
        (yyval.exprs).type = 3;
        (yyval.exprs).dim = 0;
    }
#line 2759 "yacc.tab.c"
    break;

  case 108: /* expr_terminal: NOT class_identifier  */
#line 1041 "yacc.y"
                           {
        if(check_namelist((yyvsp[0].class_id).namelist, global_table, local_table, class_table, NULL, -1) == false)
        {
            YYABORT;
        }
        if((yyvsp[0].class_id).type != 3){
            printf("Error: Not operator not defined for type %s\n", map_type[(yyvsp[0].class_id).type]); 
            YYABORT;
        }
        (yyval.exprs).type = 3;
        (yyval.exprs).dim = 0;
    }
#line 2776 "yacc.tab.c"
    break;

  case 109: /* expr_terminal: identifier  */
#line 1053 "yacc.y"
                 {
        (yyval.exprs).type = (yyvsp[0].class_id).type;
        (yyval.exprs).dim = (yyvsp[0].class_id).dim;
    }
#line 2785 "yacc.tab.c"
    break;

  case 110: /* expr_terminal: class_identifier  */
#line 1057 "yacc.y"
                      {
        display_slist((yyvsp[0].class_id).namelist);
        if(check_namelist((yyvsp[0].class_id).namelist, global_table, local_table, class_table, NULL, -1) == false)
        {
            YYABORT;
        }
        (yyval.exprs).type = 3;
        (yyval.exprs).dim = 0;
    }
#line 2799 "yacc.tab.c"
    break;

  case 111: /* expr_terminal: list_literal  */
#line 1066 "yacc.y"
                   {
        (yyval.exprs).type = 5;
        (yyval.exprs).dim = (yyvsp[0].list).dim;
    }
#line 2808 "yacc.tab.c"
    break;

  case 112: /* expr_terminal: SELF DOT IDENTIFIER  */
#line 1070 "yacc.y"
                          {
        if(members == NULL)
        {
            printf("Error: self must be used inside a class\n");
            YYABORT;
        }
        struct idrec *entry = lookup(members, members, (yyvsp[0].id).name);
        if(entry == NULL)
        {
            printf("Error: Variable %s not declared\n", (yyvsp[0].id).name);
            YYABORT;
        }
        (yyval.exprs).type = entry->type;
        (yyval.exprs).dim = entry->dim;
    }
#line 2828 "yacc.tab.c"
    break;

  case 113: /* expr_terminal: SELF DOT IDENTIFIER dim  */
#line 1085 "yacc.y"
                              {
        if(members == NULL)
        {
            printf("Error: self must be used inside a class\n");
            YYABORT;
        }
        struct idrec *entry = lookup(members, members, (yyvsp[-1].id).name);
        if(entry == NULL)
        {
            printf("Error: Variable %s not declared\n", (yyvsp[-1].id).name);
            YYABORT;
        }
        (yyval.exprs).type = entry->type;
        (yyval.exprs).dim = entry->dim - (yyvsp[0].list).dim;
    }
#line 2848 "yacc.tab.c"
    break;

  case 114: /* if_stmt: if_expr LCB statements RCB  */
#line 1104 "yacc.y"
                                    {rflag = false;}
#line 2854 "yacc.tab.c"
    break;

  case 115: /* if_stmt: if_expr single_stmt  */
#line 1105 "yacc.y"
                          {rflag = false;}
#line 2860 "yacc.tab.c"
    break;

  case 116: /* if_stmt: if_expr LCB statements RCB ELSE if_stmt  */
#line 1106 "yacc.y"
                                              {rflag = false;}
#line 2866 "yacc.tab.c"
    break;

  case 117: /* if_stmt: if_expr single_stmt ELSE if_stmt  */
#line 1107 "yacc.y"
                                       {rflag = false;}
#line 2872 "yacc.tab.c"
    break;

  case 118: /* if_stmt: if_expr LCB statements RCB ELSE LCB statements RCB  */
#line 1108 "yacc.y"
                                                         {rflag = false;}
#line 2878 "yacc.tab.c"
    break;

  case 119: /* if_stmt: if_expr single_stmt ELSE LCB statements RCB  */
#line 1109 "yacc.y"
                                                  {rflag = false;}
#line 2884 "yacc.tab.c"
    break;

  case 120: /* if_stmt: if_expr LCB statements RCB ELSE single_stmt  */
#line 1110 "yacc.y"
                                                  {rflag = false;}
#line 2890 "yacc.tab.c"
    break;

  case 121: /* if_stmt: if_expr single_stmt ELSE single_stmt  */
#line 1111 "yacc.y"
                                           {rflag = false;}
#line 2896 "yacc.tab.c"
    break;

  case 122: /* if_expr: IF LPB nested_expr RPB  */
#line 1115 "yacc.y"
                                {
        if((yyvsp[-1].exprs).type != 3){
            printf("Error: If condition must be bool\n");
            YYABORT;
        }
        rflag = false;
    }
#line 2908 "yacc.tab.c"
    break;

  case 123: /* $@8: %empty  */
#line 1126 "yacc.y"
                                                      {scope++;}
#line 2914 "yacc.tab.c"
    break;

  case 124: /* for_stmt: for_exp expr_stmt_without_semicolon RPB LCB $@8 statements RCB  */
#line 1126 "yacc.y"
                                                                                {scope--;rflag = false;}
#line 2920 "yacc.tab.c"
    break;

  case 125: /* for_stmt: for_exp expr_stmt_without_semicolon RPB single_stmt  */
#line 1127 "yacc.y"
                                                          {rflag = false;}
#line 2926 "yacc.tab.c"
    break;

  case 126: /* for_exp: FOR LPB decl_stmt nested_expr SEMICOLON  */
#line 1131 "yacc.y"
                                                 {
        if((yyvsp[-1].exprs).type != 3){
            printf("Error: For condition must be bool\n");
            YYABORT;
        }
    }
#line 2937 "yacc.tab.c"
    break;

  case 127: /* for_exp: FOR LPB expr_stmt nested_expr SEMICOLON  */
#line 1137 "yacc.y"
                                              {
        if((yyvsp[-1].exprs).type != 3){
            printf("Error: For condition must be bool\n");
            YYABORT;
        }
    }
#line 2948 "yacc.tab.c"
    break;

  case 128: /* $@9: %empty  */
#line 1146 "yacc.y"
                          {scope++;}
#line 2954 "yacc.tab.c"
    break;

  case 129: /* while_stmt: while_exp LCB $@9 statements RCB  */
#line 1146 "yacc.y"
                                                    {scope--;rflag = false;}
#line 2960 "yacc.tab.c"
    break;

  case 130: /* while_stmt: while_exp single_stmt  */
#line 1147 "yacc.y"
                            {rflag = false;}
#line 2966 "yacc.tab.c"
    break;

  case 131: /* while_exp: WHILE LPB nested_expr RPB  */
#line 1151 "yacc.y"
                                     {
        if((yyvsp[-1].exprs).type != 3){
            printf("Error: While condition must be bool\n");
            YYABORT;
        }
    }
#line 2977 "yacc.tab.c"
    break;

  case 133: /* call: IDENTIFIER LPB call_args RPB  */
#line 1164 "yacc.y"
                                   {
        struct funcrec *entry = (struct funcrec *)malloc(sizeof(struct funcrec));
        entry -> name = (yyvsp[-3].id).name;
        entry -> params = (yyvsp[-1].functions).params;
        entry -> num_params = (yyvsp[-1].functions).num_params;
        struct funcrec *func = search_functab(function_table, entry, 1);
        if(func == NULL)
        {
            YYABORT;
        }
        (yyval.exprs).type = func -> type;
        (yyval.exprs).dim = func -> dim;
    }
#line 2995 "yacc.tab.c"
    break;

  case 134: /* call: class_identifier LPB call_args RPB  */
#line 1177 "yacc.y"
                                         {
        if(check_namelist((yyvsp[-3].class_id).namelist, global_table, local_table, class_table, (yyvsp[-1].functions).params, (yyvsp[-1].functions).num_params) == false)
        {
            YYABORT;
        }
        struct funcrec *entry = (struct funcrec *)malloc(sizeof(struct funcrec));
        entry -> name = (yyvsp[-3].class_id).namelist->tail->val;
        entry -> params = (yyvsp[-1].functions).params;
        entry -> num_params = (yyvsp[-1].functions).num_params;
        struct funcrec *func = search_functab(methods, entry,1);
        if(func == NULL)
        {
            printf("Error: Method %s not declared\n", entry->name);
            YYABORT;
        }
        (yyval.exprs).type = func -> type;
        (yyval.exprs).dim = func -> dim;
    }
#line 3018 "yacc.tab.c"
    break;

  case 135: /* call_args: call_args COMMA nested_expr  */
#line 1198 "yacc.y"
                                       {
        (yyval.functions).params = (yyvsp[-2].functions).params;
        struct idrec *entry = (struct idrec*) malloc(sizeof(struct idrec));
        entry -> type = (yyvsp[0].exprs).type;
        insert_symtab((yyval.functions).params, entry);
        (yyval.functions).num_params = (yyvsp[-2].functions).num_params + 1;
    }
#line 3030 "yacc.tab.c"
    break;

  case 136: /* call_args: nested_expr  */
#line 1205 "yacc.y"
                  {
        (yyval.functions).params = init_symtab();
        struct idrec *entry = (struct idrec*) malloc(sizeof(struct idrec));
        entry -> type = (yyvsp[0].exprs).type;
        insert_symtab((yyval.functions).params, entry);
        (yyval.functions).num_params = 1;
    }
#line 3042 "yacc.tab.c"
    break;

  case 137: /* call_args: %empty  */
#line 1212 "yacc.y"
      {
        (yyval.functions).params = init_symtab();
        (yyval.functions).num_params = 0;
    }
#line 3051 "yacc.tab.c"
    break;

  case 138: /* return_stmt: RETURN SEMICOLON  */
#line 1218 "yacc.y"
                              {
        if(return_type != 4)
        {
            printf("Error: Mismatch in return type\n");
            printf("Returned void while function returns %s\n", map_type[return_type]);
            YYABORT;
        }
        rflag = true;
    }
#line 3065 "yacc.tab.c"
    break;

  case 139: /* return_stmt: RETURN nested_expr SEMICOLON  */
#line 1227 "yacc.y"
                                   {
        if(return_type != (yyvsp[-1].exprs).type)
        {
            printf("Error: Mismatch in return type\n");
            printf("Returned %s while function returns %s\n", map_type[(yyvsp[-1].exprs).type], map_type[return_type]);
            YYABORT;
        }
        rflag = true;
    }
#line 3079 "yacc.tab.c"
    break;

  case 140: /* $@10: %empty  */
#line 1240 "yacc.y"
                     {lflag = 0;}
#line 3085 "yacc.tab.c"
    break;

  case 141: /* list: LIST dim COLON $@10 data_type_pr  */
#line 1240 "yacc.y"
                                               {
        (yyval.list).type = (yyvsp[0].type);
        (yyval.list).dim = (yyvsp[-3].list).dim;
        (yyval.list).class_name = NULL;
        list_flag = 0;
    }
#line 3096 "yacc.tab.c"
    break;

  case 142: /* $@11: %empty  */
#line 1246 "yacc.y"
                     {lflag = 0;}
#line 3102 "yacc.tab.c"
    break;

  case 143: /* list: LIST dim COLON $@11 data_type_new  */
#line 1246 "yacc.y"
                                                {
        (yyval.list).type = (yyvsp[0].type);
        (yyval.list).dim = (yyvsp[-3].list).dim;
        (yyval.list).class_name = NULL;
        list_flag = 0;
    }
#line 3113 "yacc.tab.c"
    break;

  case 144: /* $@12: %empty  */
#line 1252 "yacc.y"
                     {lflag = 0;}
#line 3119 "yacc.tab.c"
    break;

  case 145: /* list: LIST dim COLON $@12 IDENTIFIER  */
#line 1252 "yacc.y"
                                             {
        if(search_classtab(class_table, (yyvsp[0].id).name) == NULL)
        {
            printf("Error: Class %s not declared\n", (yyvsp[0].id).name);
            YYABORT;
        }
        (yyval.list).type = 14;
        (yyval.list).class_name = (yyvsp[0].id).name;
        (yyval.list).dim = (yyvsp[-3].list).dim;
        list_flag = 1;
    }
#line 3135 "yacc.tab.c"
    break;

  case 146: /* list_literal: LCB list_terminal RCB  */
#line 1266 "yacc.y"
                                     {
        (yyval.list).type = 5;
        (yyval.list).dim = (yyvsp[-1].list).dim+1;
    }
#line 3144 "yacc.tab.c"
    break;

  case 147: /* list_terminal: nested_expr  */
#line 1273 "yacc.y"
                           {
        (yyval.list).type = (yyvsp[0].exprs).type;
        if((yyvsp[0].exprs).type == 5){
            (yyval.list).dim = (yyvsp[0].exprs).dim;
        }
        else{
            (yyval.list).dim = 0;
        }
    }
#line 3158 "yacc.tab.c"
    break;

  case 148: /* list_terminal: list_terminal COMMA nested_expr  */
#line 1282 "yacc.y"
                                      {
        if((yyvsp[-2].list).type != (yyvsp[0].exprs).type){
            printf("Error: Type mismatch in list terminal\n");
            YYABORT;
        }
        (yyval.list).type = (yyvsp[-2].list).type;
        (yyval.list).dim = (yyvsp[-2].list).dim;
    }
#line 3171 "yacc.tab.c"
    break;

  case 149: /* dim: LSB nested_expr RSB dim  */
#line 1293 "yacc.y"
                             {
        if((yyvsp[-2].exprs).type != 0){
            printf("Error: Array size must be an integer\n");
            YYABORT;
        }
        (yyval.list).dim = (yyvsp[0].list).dim + 1;
    }
#line 3183 "yacc.tab.c"
    break;

  case 150: /* dim: LSB nested_expr RSB  */
#line 1300 "yacc.y"
                          {
        if((yyvsp[-1].exprs).type != 0){
            printf("Error: Array size must be an integer\n");
            YYABORT;
        }
        (yyval.list).dim = 1;
    }
#line 3195 "yacc.tab.c"
    break;

  case 151: /* dim: empty_dim  */
#line 1307 "yacc.y"
                {
        (yyval.list).dim = (yyvsp[0].list).dim;
    }
#line 3203 "yacc.tab.c"
    break;

  case 152: /* empty_dim: empty_dim LSB RSB  */
#line 1312 "yacc.y"
                             {
        (yyval.list).dim = (yyvsp[-2].list).dim + 1;
    }
#line 3211 "yacc.tab.c"
    break;

  case 153: /* empty_dim: LSB RSB  */
#line 1315 "yacc.y"
              {
        (yyval.list).dim = 1;
    }
#line 3219 "yacc.tab.c"
    break;

  case 154: /* identifier: IDENTIFIER  */
#line 1320 "yacc.y"
                       {
        struct idrec *entry = lookup(global_table, local_table, (yyvsp[0].id).name);
        if(entry == NULL){
            entry = lookup(params, params, (yyvsp[0].id).name);
            if(entry == NULL){
                printf("Error: Variable %s not declared\n", (yyvsp[0].id).name);
                YYABORT;
            }
        }
        (yyval.class_id).type = entry -> type;
        (yyval.class_id).dim = entry -> dim;
    }
#line 3236 "yacc.tab.c"
    break;

  case 155: /* identifier: IDENTIFIER dim  */
#line 1332 "yacc.y"
                     {
        struct idrec *entry = lookup(global_table, local_table, (yyvsp[-1].id).name);
        if(entry == NULL){
            entry = lookup(params, params, (yyvsp[-1].id).name);
            if(entry == NULL){
                printf("Error: Variable %s not declared\n", (yyvsp[-1].id).name);
                YYABORT;
            }
            printf("Error: Variable %s not declared\n", (yyvsp[-1].id).name);
            YYABORT;
        }
        (yyval.class_id).type = entry->type;
        (yyval.class_id).dim = entry->dim - (yyvsp[0].list).dim;
    }
#line 3255 "yacc.tab.c"
    break;

  case 156: /* class_identifier: IDENTIFIER DOT IDENTIFIER  */
#line 1349 "yacc.y"
                                             {
        (yyval.class_id).namelist = init_slist();
        insert_slist((yyval.class_id).namelist, (yyvsp[-2].id).name);
        insert_slist((yyval.class_id).namelist, (yyvsp[0].id).name);   
    }
#line 3265 "yacc.tab.c"
    break;

  case 157: /* class_identifier: IDENTIFIER DOT class_identifier  */
#line 1354 "yacc.y"
                                      {
        struct snode* temp = (struct snode*) malloc(sizeof(struct snode));
        temp -> val = (yyvsp[-2].id).name;
        temp -> next = (yyvsp[0].class_id).namelist -> head;
        (yyvsp[0].class_id).namelist -> head = temp;
        (yyval.class_id).namelist = (yyvsp[0].class_id).namelist;        
    }
#line 3277 "yacc.tab.c"
    break;

  case 158: /* class_identifier: IDENTIFIER DOT IDENTIFIER dim  */
#line 1361 "yacc.y"
                                    {
        (yyval.class_id).namelist = init_slist();
        insert_slist((yyval.class_id).namelist, (yyvsp[-3].id).name);
        insert_slist((yyval.class_id).namelist, (yyvsp[-1].id).name);   
    }
#line 3287 "yacc.tab.c"
    break;

  case 159: /* class_identifier: IDENTIFIER dim DOT IDENTIFIER  */
#line 1366 "yacc.y"
                                    {
        (yyval.class_id).namelist = init_slist();
        insert_slist((yyval.class_id).namelist, (yyvsp[-3].id).name);
        insert_slist((yyval.class_id).namelist, (yyvsp[0].id).name);   
    }
#line 3297 "yacc.tab.c"
    break;

  case 160: /* class_identifier: IDENTIFIER dim DOT IDENTIFIER dim  */
#line 1371 "yacc.y"
                                        {
        (yyval.class_id).namelist = init_slist();
        insert_slist((yyval.class_id).namelist, (yyvsp[-4].id).name);
        insert_slist((yyval.class_id).namelist, (yyvsp[-1].id).name);   
    }
#line 3307 "yacc.tab.c"
    break;

  case 165: /* arith_op: ADD  */
#line 1390 "yacc.y"
              {(yyval.op_type) = 0;}
#line 3313 "yacc.tab.c"
    break;

  case 166: /* arith_op: SUB  */
#line 1391 "yacc.y"
          {(yyval.op_type) = 1;}
#line 3319 "yacc.tab.c"
    break;

  case 167: /* arith_op: MUL  */
#line 1392 "yacc.y"
          {(yyval.op_type) = 2;}
#line 3325 "yacc.tab.c"
    break;

  case 168: /* arith_op: DIV  */
#line 1393 "yacc.y"
          {(yyval.op_type) = 3;}
#line 3331 "yacc.tab.c"
    break;

  case 169: /* arith_op: MOD  */
#line 1394 "yacc.y"
          {(yyval.op_type) = 4;}
#line 3337 "yacc.tab.c"
    break;

  case 170: /* data_type_new: DOCUMENT  */
#line 1398 "yacc.y"
                       { (yyval.type) = 12;}
#line 3343 "yacc.tab.c"
    break;

  case 171: /* data_type_new: TEAM  */
#line 1399 "yacc.y"
           { (yyval.type) = 7;}
#line 3349 "yacc.tab.c"
    break;

  case 172: /* data_type_new: MEMBERS  */
#line 1400 "yacc.y"
              { (yyval.type) = 8;}
#line 3355 "yacc.tab.c"
    break;

  case 173: /* data_type_new: TASK  */
#line 1401 "yacc.y"
            { (yyval.type) = 9;}
#line 3361 "yacc.tab.c"
    break;

  case 174: /* data_type_new: EVENT  */
#line 1402 "yacc.y"
            { (yyval.type) = 10;}
#line 3367 "yacc.tab.c"
    break;

  case 175: /* data_type_new: MEETING  */
#line 1403 "yacc.y"
               { (yyval.type) = 11;}
#line 3373 "yacc.tab.c"
    break;

  case 176: /* data_type_new: CALENDAR  */
#line 1404 "yacc.y"
               { (yyval.type) = 13;}
#line 3379 "yacc.tab.c"
    break;

  case 177: /* data_type_pr: INT  */
#line 1408 "yacc.y"
                   { (yyval.type) = 0;}
#line 3385 "yacc.tab.c"
    break;

  case 178: /* data_type_pr: STRING  */
#line 1409 "yacc.y"
             { (yyval.type) = 2;}
#line 3391 "yacc.tab.c"
    break;

  case 179: /* data_type_pr: BOOL  */
#line 1410 "yacc.y"
            { (yyval.type) = 3;}
#line 3397 "yacc.tab.c"
    break;

  case 180: /* data_type_pr: FLOAT  */
#line 1411 "yacc.y"
            { (yyval.type) = 1;}
#line 3403 "yacc.tab.c"
    break;


#line 3407 "yacc.tab.c"

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

#line 1414 "yacc.y"



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
