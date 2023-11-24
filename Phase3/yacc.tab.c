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
    struct classtab *class_table;
    struct symtab *members;
    struct functab *methods;
    struct symtab *params;

    int scope;
    bool rflag;
    int return_type;


#line 105 "yacc.tab.c"

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
  YYSYMBOL_list_literal = 102,             /* list_literal  */
  YYSYMBOL_list_terminal = 103,            /* list_terminal  */
  YYSYMBOL_dim = 104,                      /* dim  */
  YYSYMBOL_empty_dim = 105,                /* empty_dim  */
  YYSYMBOL_identifier = 106,               /* identifier  */
  YYSYMBOL_class_identifier = 107,         /* class_identifier  */
  YYSYMBOL_conj = 108,                     /* conj  */
  YYSYMBOL_set_op = 109,                   /* set_op  */
  YYSYMBOL_arith_op = 110,                 /* arith_op  */
  YYSYMBOL_data_type_new = 111,            /* data_type_new  */
  YYSYMBOL_data_type_pr = 112              /* data_type_pr  */
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
#define YYLAST   1031

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  55
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  58
/* YYNRULES -- Number of rules.  */
#define YYNRULES  177
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  350

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
       0,   107,   107,   107,   129,   129,   152,   153,   157,   161,
     162,   163,   164,   169,   174,   169,   196,   215,   235,   259,
     279,   303,   313,   318,   325,   336,   347,   364,   379,   398,
     407,   408,   409,   412,   417,   412,   439,   460,   481,   507,
     528,   552,   572,   594,   620,   645,   645,   646,   647,   651,
     652,   653,   654,   655,   656,   657,   658,   659,   660,   661,
     662,   663,   667,   668,   673,   680,   690,   691,   692,   693,
     694,   695,   696,   701,   725,   749,   778,   805,   809,   814,
     818,   826,   830,   835,   841,   857,   869,   882,   905,   909,
     913,   921,   928,   936,   944,   951,   959,   966,   974,   982,
     989,   993,   997,  1001,  1005,  1009,  1013,  1021,  1029,  1041,
    1045,  1054,  1058,  1073,  1092,  1093,  1094,  1095,  1096,  1097,
    1098,  1099,  1103,  1114,  1114,  1115,  1119,  1125,  1134,  1134,
    1135,  1139,  1148,  1152,  1165,  1186,  1193,  1200,  1206,  1215,
    1228,  1233,  1238,  1251,  1258,  1267,  1278,  1285,  1292,  1297,
    1300,  1305,  1317,  1334,  1339,  1346,  1351,  1356,  1365,  1366,
    1370,  1371,  1375,  1376,  1377,  1378,  1379,  1383,  1384,  1385,
    1386,  1387,  1388,  1389,  1393,  1394,  1395,  1396
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
  "call_args", "return_stmt", "list", "list_literal", "list_terminal",
  "dim", "empty_dim", "identifier", "class_identifier", "conj", "set_op",
  "arith_op", "data_type_new", "data_type_pr", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-289)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-3)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -10,    36,     1,   919,  -289,    53,   764,  -289,   -14,  -289,
    -289,  -289,  -289,    40,    39,  -289,  -289,  -289,  -289,  -289,
    -289,  -289,    59,  -289,   919,  -289,   919,    83,   919,    63,
      74,    90,  -289,  -289,  -289,  -289,    93,   116,    94,   112,
       2,   156,  -289,   117,  -289,   965,  -289,    15,   163,    25,
     197,    26,   217,   978,  -289,  -289,  -289,  -289,   -28,    67,
     129,  -289,   783,   783,  -289,   142,  -289,   152,  -289,  -289,
     140,   -17,   991,   145,   783,   978,  -289,   153,  -289,   168,
     192,   175,   965,  -289,   965,   222,   245,   257,   978,  -289,
     978,  -289,   978,  -289,   260,    95,  -289,   262,   268,   287,
      91,   783,  -289,  -289,   783,   289,   201,   290,  -289,   -12,
     246,    39,  -289,  -289,  -289,  -289,  -289,   783,  -289,  -289,
    -289,  -289,   783,   783,   783,  -289,  -289,   783,  -289,  -289,
    -289,  -289,  -289,   106,   274,  -289,   278,    55,   242,  -289,
    -289,   295,  -289,    60,   264,    70,   266,    77,   284,   124,
     177,   180,  -289,  -289,   978,  -289,  -289,  -289,   297,  -289,
     181,    91,  -289,   300,    39,  -289,   783,   326,  -289,  -289,
    -289,  -289,  -289,   184,  -289,   783,   378,   978,   978,  -289,
    -289,   978,  -289,   978,  -289,   978,  -289,  -289,  -289,  -289,
    -289,  -289,  -289,   783,   201,    39,  -289,  -289,   783,   783,
     783,   783,  -289,  -289,    64,   296,   301,   308,   157,   309,
    -289,  -289,  -289,   322,  -289,  -289,  -289,  -289,   316,  -289,
     834,  -289,   -27,  -289,   870,  -289,   318,  -289,   327,    22,
     -11,   327,   327,   205,   208,  -289,   211,   214,   225,  -289,
    -289,  -289,  -289,  -289,  -289,  -289,   324,   932,   783,   783,
     340,   334,  -289,  -289,    89,  -289,  -289,   337,  -289,  -289,
    -289,    66,    32,   331,   164,   188,  -289,  -289,  -289,   783,
     783,   339,   783,   783,   339,  -289,  -289,   472,  -289,  -289,
    -289,  -289,    86,   783,   783,   335,   344,   250,   513,   352,
     361,   554,   781,   339,   339,   883,  -289,  -289,  -289,   354,
     355,  -289,  -289,   356,   360,  -289,   362,   364,  -289,  -289,
     783,   783,  -289,  -289,  -289,   381,  -289,  -289,  -289,   369,
     373,   376,   377,  -289,  -289,   595,  -289,  -289,  -289,  -289,
    -289,  -289,  -289,  -289,   821,   636,  -289,  -289,  -289,  -289,
    -289,  -289,  -289,  -289,  -289,  -289,   677,   718,  -289,  -289
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,     0,    12,     1,     0,    12,     7,     0,   174,
     175,   176,   177,     0,     0,   167,   168,   169,   170,   171,
     172,   173,     0,     5,    12,    13,    12,     0,    12,     0,
       0,     0,     8,     6,     3,    29,     0,     0,     0,   148,
      80,     0,    10,     0,    11,    32,     9,    80,     0,    80,
       0,    80,     0,    23,   101,   103,   104,   102,     0,   151,
       0,   150,     0,     0,   100,     0,    94,    99,   105,   111,
     109,   110,     0,     0,     0,    23,    75,     0,    14,     0,
       0,     0,    32,    33,    32,     0,     0,     0,    23,    76,
      23,    73,    23,    74,     0,     0,    22,     0,     0,     0,
     151,     0,   107,   108,   137,     0,   152,     0,   144,     0,
       0,   147,   162,   163,   164,   165,   166,     0,   158,   159,
     160,   161,     0,     0,     0,    64,    65,   137,   142,   141,
     140,   149,    78,     0,    77,    48,     0,    80,     0,    28,
      30,     0,    31,    80,     0,    80,     0,    80,     0,     0,
       0,     0,    26,    19,     0,    27,    24,    25,     0,   136,
       0,   153,   154,     0,   112,   143,     0,    89,   146,    96,
      95,    98,    97,     0,    18,     0,     0,    23,    23,    43,
      34,    23,    44,    23,    41,    23,    42,    20,    16,    17,
      21,   106,   133,     0,   155,   156,   113,   145,     0,     0,
       0,     0,   134,    79,     0,     0,     0,     0,   151,     0,
      45,    15,    56,     0,    47,    88,    49,    55,     0,    50,
       0,    51,     0,    52,     0,    54,     0,    53,     0,     0,
       0,     0,     0,     0,     0,    48,     0,     0,     0,   135,
     157,    91,    90,    93,    92,   138,     0,     0,     0,     0,
      80,     0,    48,    63,     0,    81,    48,   115,    66,    68,
      67,     0,     0,     0,     0,     0,   128,   130,   132,     0,
       0,     0,     0,     0,     0,    39,    38,     0,    40,    36,
      37,   139,   151,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    48,    82,    85,     0,
       0,    83,    86,     0,     0,    35,     0,     0,   131,   122,
       0,     0,    46,    61,    62,   114,    48,   121,   117,     0,
       0,     0,     0,   123,   125,     0,    57,    58,    59,    60,
     126,   127,    84,    87,     0,     0,    69,    70,    71,    72,
      48,   129,    48,   120,   116,   119,     0,     0,   124,   118
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -289,  -289,  -289,  -289,  -289,   421,    16,  -289,  -289,  -289,
    -289,   228,   275,  -289,  -289,   204,  -289,  -289,  -289,  -289,
    -289,  -205,  -289,  -289,  -289,  -145,  -219,    -3,   -22,  -209,
     206,   -35,  -289,  -289,  -288,  -289,  -289,  -289,  -289,  -289,
    -289,  -289,  -200,   160,   306,  -289,   293,  -289,  -289,   -13,
    -289,   -24,   -52,   272,   273,   276,   253,   281
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     1,     2,     3,     6,     7,    23,    24,    43,   135,
      25,    95,    96,    26,    27,    81,    82,   141,   235,    83,
      84,   176,   252,   214,   254,    64,   257,   216,    41,   217,
     218,   159,    66,    67,   219,   220,   221,   340,   222,   223,
     296,   224,   225,    68,   160,   227,   228,    69,   109,   106,
      39,    70,    71,   122,   123,   124,   231,   232
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      28,    38,    65,    28,   318,   267,   103,    48,    50,    52,
     126,   259,   100,   100,   209,   259,   126,   272,   101,   273,
     260,    28,    34,    28,   260,    28,    35,   108,   110,   127,
     277,   215,    74,   165,   102,   127,     4,   166,   284,   132,
      42,   274,    44,    -2,    46,    74,   344,   288,    75,   125,
     269,   291,   270,   162,     5,    74,    74,    32,   138,   126,
     272,    88,   273,   144,   146,   148,   158,    54,    55,    56,
      57,    90,    92,   317,   271,   215,   324,   215,   127,   215,
      36,    37,   169,   259,   294,    74,   259,   170,   171,   172,
      74,   325,   260,   125,   269,   260,   270,    58,   168,    40,
      74,   178,   215,    47,    59,    60,   181,    74,    62,    37,
      63,   335,   245,   104,    49,   343,   183,   105,   293,    54,
      55,    56,    57,   185,   230,   259,   250,    45,    37,   289,
      51,   197,   215,    37,   260,   346,   105,   347,   290,    53,
     203,   105,   153,   215,   154,    72,   215,   215,   194,    58,
     215,   196,   229,   174,    73,   154,    59,    60,   239,    61,
      62,    78,    63,   241,   242,   243,   244,   125,   262,   246,
     265,   187,   262,   154,   112,   113,   114,   115,   116,   107,
     215,   117,   240,   118,   119,   111,   120,   121,   131,   215,
     215,   125,   269,   134,   270,   265,   261,   250,   264,    37,
     261,   215,   215,   104,    76,    77,    48,   105,   136,    50,
      52,    89,    77,   285,   286,   126,   272,   258,   273,   300,
     139,   258,   304,   264,   188,   230,   154,   189,   192,   154,
     193,   202,   137,   193,   297,   298,   230,   301,   302,   230,
     262,   320,   322,   262,   283,    91,    77,   299,   306,   307,
     303,   163,   275,   229,   154,   276,    30,   154,   278,    30,
     154,   279,   143,   154,   229,    93,    77,   229,   261,   319,
     321,   261,   280,   230,   154,   332,   333,    30,   310,    30,
     311,    30,   262,   230,    31,   145,   140,    31,   142,   258,
     179,    77,   258,   167,   230,   230,    29,   147,    86,    29,
     152,   229,   155,   133,   175,    31,    98,    31,   156,    31,
     261,   229,   182,    77,   184,    77,   149,    29,   150,    29,
     151,    29,   229,   229,   177,   129,    87,   157,    98,   161,
     164,   258,   186,    77,    99,    86,   226,    86,    85,   180,
     195,    98,   247,    98,   191,    98,    97,   248,   112,   113,
     114,   115,   116,   130,   249,   198,    99,   118,   119,   251,
     120,   121,   253,    87,   255,    87,   268,   250,    97,    99,
      74,    99,   281,    99,   287,    85,   292,    85,   295,   100,
     226,    97,   308,    97,   226,    97,   204,     9,    10,    11,
      12,   309,    14,    15,    16,    17,    18,    19,    20,    21,
     313,   314,   326,   327,   328,   233,   234,    98,   329,   236,
     330,   237,   331,   238,   205,   206,   207,   336,   208,   209,
     334,   337,   210,   211,   338,   339,   212,    33,   263,   190,
      98,    98,   213,   173,    98,    99,    98,   226,    98,   199,
     200,     0,     0,   201,     0,     0,     0,    97,   226,     0,
       0,   226,   226,     0,     0,   226,     0,     0,    99,    99,
       0,     0,    99,     0,    99,     0,    99,     0,     0,     0,
      97,    97,     0,     0,    97,     0,    97,     0,    97,     0,
     204,     9,    10,    11,    12,   226,    14,    15,    16,    17,
      18,    19,    20,    21,   226,   226,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   226,   226,   205,   206,
     207,     0,   208,   209,     0,     0,   210,   305,     0,     0,
     212,   204,     9,    10,    11,    12,   213,    14,    15,    16,
      17,    18,    19,    20,    21,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   205,
     206,   207,     0,   208,   209,     0,     0,   210,   312,     0,
       0,   212,   204,     9,    10,    11,    12,   213,    14,    15,
      16,    17,    18,    19,    20,    21,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     205,   206,   207,     0,   208,   209,     0,     0,   210,   315,
       0,     0,   212,   204,     9,    10,    11,    12,   213,    14,
      15,    16,    17,    18,    19,    20,    21,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   205,   206,   207,     0,   208,   209,     0,     0,   210,
     341,     0,     0,   212,   204,     9,    10,    11,    12,   213,
      14,    15,    16,    17,    18,    19,    20,    21,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   205,   206,   207,     0,   208,   209,     0,     0,
     210,   345,     0,     0,   212,   204,     9,    10,    11,    12,
     213,    14,    15,    16,    17,    18,    19,    20,    21,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   205,   206,   207,     0,   208,   209,     0,
       0,   210,   348,     0,     0,   212,   204,     9,    10,    11,
      12,   213,    14,    15,    16,    17,    18,    19,    20,    21,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   205,   206,   207,     0,   208,   209,
       0,     0,   210,   349,     0,     0,   212,     0,     0,     0,
       0,     8,   213,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    54,    55,    56,    57,
       9,    10,    11,    12,     0,    14,    15,    16,    17,    18,
      19,    20,    21,     0,    22,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    58,     5,     0,   207,
       0,   208,   209,    59,    60,   316,     0,    62,     0,    63,
       9,    10,    11,    12,     0,    14,    15,    16,    17,    18,
      19,    20,    21,     9,    10,    11,    12,     0,    14,    15,
      16,    17,    18,    19,    20,    21,     0,     0,     0,   207,
       0,   208,   209,     0,     0,   342,     0,     0,     0,     0,
       0,     0,     0,     0,   208,   209,     0,     0,   256,     9,
      10,    11,    12,     0,    14,    15,    16,    17,    18,    19,
      20,    21,     9,    10,    11,    12,     0,    14,    15,    16,
      17,    18,    19,    20,    21,     0,     0,     0,     0,     0,
     208,   209,     0,     0,   266,     0,     0,     0,     0,     0,
       0,     0,     0,   208,   209,     0,     8,   323,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,     9,    10,    11,    12,     0,    14,    15,    16,    17,
      18,    19,    20,    21,     0,     0,     0,     0,     0,    22,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   282,   209,     9,    10,    11,    12,    79,    14,
      15,    16,    17,    18,    19,    20,    21,     9,    10,    11,
      12,     0,    14,    15,    16,    17,    18,    19,    20,    21,
       9,    10,    11,    12,     0,    80,    15,    16,    17,    18,
      19,    20,    21,     0,     0,     0,     0,     0,    94,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   128
};

static const yytype_int16 yycheck[] =
{
       3,    14,    37,     6,   292,   224,    58,    29,    30,    31,
      27,   220,    40,    40,    41,   224,    27,    28,    46,    30,
     220,    24,     6,    26,   224,    28,    40,    62,    63,    46,
     235,   176,    30,    45,    58,    46,     0,    49,   247,    74,
      24,    52,    26,    53,    28,    30,   334,   252,    46,    27,
      28,   256,    30,   105,    53,    30,    30,     4,    80,    27,
      28,    46,    30,    85,    86,    87,   101,     3,     4,     5,
       6,    46,    46,   292,    52,   220,   295,   222,    46,   224,
      40,    42,   117,   292,    52,    30,   295,   122,   123,   124,
      30,   296,   292,    27,    28,   295,    30,    33,   111,    40,
      30,    46,   247,    40,    40,    41,    46,    30,    44,    42,
      46,   316,    48,    46,    40,   334,    46,    50,    52,     3,
       4,     5,     6,    46,   176,   334,    40,    44,    42,    40,
      40,   166,   277,    42,   334,   340,    50,   342,    49,    46,
     175,    50,    47,   288,    49,    51,   291,   292,   161,    33,
     295,   164,   176,    47,    42,    49,    40,    41,   193,    43,
      44,    44,    46,   198,   199,   200,   201,    27,   220,   204,
     222,    47,   224,    49,    22,    23,    24,    25,    26,    50,
     325,    29,   195,    31,    32,    43,    34,    35,    43,   334,
     335,    27,    28,    40,    30,   247,   220,    40,   222,    42,
     224,   346,   347,    46,    48,    49,   228,    50,    40,   231,
     232,    48,    49,   248,   249,    27,    28,   220,    30,   271,
      45,   224,   274,   247,    47,   277,    49,    47,    47,    49,
      49,    47,    40,    49,   269,   270,   288,   272,   273,   291,
     292,   293,   294,   295,   247,    48,    49,   271,   283,   284,
     274,    50,    47,   277,    49,    47,     3,    49,    47,     6,
      49,    47,    40,    49,   288,    48,    49,   291,   292,   293,
     294,   295,    47,   325,    49,   310,   311,    24,    28,    26,
      30,    28,   334,   335,     3,    40,    82,     6,    84,   292,
      48,    49,   295,    47,   346,   347,     3,    40,    45,     6,
      40,   325,    40,    75,    30,    24,    53,    26,    40,    28,
     334,   335,    48,    49,    48,    49,    88,    24,    90,    26,
      92,    28,   346,   347,    46,    72,    45,    40,    75,    40,
      40,   334,    48,    49,    53,    82,   176,    84,    45,    44,
      40,    88,    46,    90,    47,    92,    53,    46,    22,    23,
      24,    25,    26,    72,    46,    29,    75,    31,    32,    50,
      34,    35,    40,    82,    48,    84,    48,    40,    75,    88,
      30,    90,    48,    92,    40,    82,    39,    84,    47,    40,
     220,    88,    47,    90,   224,    92,     8,     9,    10,    11,
      12,    47,    14,    15,    16,    17,    18,    19,    20,    21,
      48,    40,    48,    48,    48,   177,   178,   154,    48,   181,
      48,   183,    48,   185,    36,    37,    38,    48,    40,    41,
      39,    48,    44,    45,    48,    48,    48,     6,   222,   154,
     177,   178,    54,   127,   181,   154,   183,   277,   185,   167,
     167,    -1,    -1,   167,    -1,    -1,    -1,   154,   288,    -1,
      -1,   291,   292,    -1,    -1,   295,    -1,    -1,   177,   178,
      -1,    -1,   181,    -1,   183,    -1,   185,    -1,    -1,    -1,
     177,   178,    -1,    -1,   181,    -1,   183,    -1,   185,    -1,
       8,     9,    10,    11,    12,   325,    14,    15,    16,    17,
      18,    19,    20,    21,   334,   335,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   346,   347,    36,    37,
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
      45,    -1,    -1,    48,     8,     9,    10,    11,    12,    54,
      14,    15,    16,    17,    18,    19,    20,    21,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    36,    37,    38,    -1,    40,    41,    -1,    -1,
      44,    45,    -1,    -1,    48,     8,     9,    10,    11,    12,
      54,    14,    15,    16,    17,    18,    19,    20,    21,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    36,    37,    38,    -1,    40,    41,    -1,
      -1,    44,    45,    -1,    -1,    48,     8,     9,    10,    11,
      12,    54,    14,    15,    16,    17,    18,    19,    20,    21,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    36,    37,    38,    -1,    40,    41,
      -1,    -1,    44,    45,    -1,    -1,    48,    -1,    -1,    -1,
      -1,     7,    54,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,     3,     4,     5,     6,
       9,    10,    11,    12,    -1,    14,    15,    16,    17,    18,
      19,    20,    21,    -1,    40,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    33,    53,    -1,    38,
      -1,    40,    41,    40,    41,    44,    -1,    44,    -1,    46,
       9,    10,    11,    12,    -1,    14,    15,    16,    17,    18,
      19,    20,    21,     9,    10,    11,    12,    -1,    14,    15,
      16,    17,    18,    19,    20,    21,    -1,    -1,    -1,    38,
      -1,    40,    41,    -1,    -1,    44,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    41,    -1,    -1,    44,     9,
      10,    11,    12,    -1,    14,    15,    16,    17,    18,    19,
      20,    21,     9,    10,    11,    12,    -1,    14,    15,    16,
      17,    18,    19,    20,    21,    -1,    -1,    -1,    -1,    -1,
      40,    41,    -1,    -1,    44,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    40,    41,    -1,     7,    44,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,     9,    10,    11,    12,    -1,    14,    15,    16,    17,
      18,    19,    20,    21,    -1,    -1,    -1,    -1,    -1,    40,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    40,    41,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,     9,    10,    11,
      12,    -1,    14,    15,    16,    17,    18,    19,    20,    21,
       9,    10,    11,    12,    -1,    40,    15,    16,    17,    18,
      19,    20,    21,    -1,    -1,    -1,    -1,    -1,    40,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    40
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
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
      34,    35,   108,   109,   110,    27,    27,    46,    40,   111,
     112,    43,    86,    66,    40,    64,    40,    40,    83,    45,
      70,    72,    70,    40,    83,    40,    83,    40,    83,    66,
      66,    66,    40,    47,    49,    40,    40,    40,    86,    86,
      99,    40,   107,    50,    40,    45,    49,    47,   104,    86,
      86,    86,    86,    99,    47,    30,    76,    46,    46,    48,
      44,    46,    48,    46,    48,    46,    48,    47,    47,    47,
      67,    47,    47,    49,   104,    40,   104,    86,    29,   108,
     109,   110,    47,    86,     8,    36,    37,    38,    40,    41,
      44,    45,    48,    54,    78,    80,    82,    84,    85,    89,
      90,    91,    93,    94,    96,    97,    98,   100,   101,   106,
     107,   111,   112,    66,    66,    73,    66,    66,    66,    86,
     104,    86,    86,    86,    86,    48,    86,    46,    46,    46,
      40,    50,    77,    40,    79,    48,    44,    81,    82,    84,
      97,   106,   107,    85,   106,   107,    44,    81,    48,    28,
      30,    52,    28,    30,    52,    47,    47,    76,    47,    47,
      47,    48,    40,    82,    84,    86,    86,    40,    76,    40,
      49,    76,    39,    52,    52,    47,    95,    86,    86,   106,
     107,    86,    86,   106,   107,    45,    86,    86,    47,    47,
      28,    30,    45,    48,    40,    45,    44,    81,    89,   106,
     107,   106,   107,    44,    81,    76,    48,    48,    48,    48,
      48,    48,    86,    86,    39,    76,    48,    48,    48,    48,
      92,    45,    44,    81,    89,    45,    76,    76,    45,    45
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
     101,   101,   101,   102,   103,   103,   104,   104,   104,   105,
     105,   106,   106,   107,   107,   107,   107,   107,   108,   108,
     109,   109,   110,   110,   110,   110,   110,   111,   111,   111,
     111,   111,   111,   111,   112,   112,   112,   112
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     3,     0,     2,     2,     1,     2,     2,
       2,     2,     0,     0,     0,     6,     5,     5,     5,     5,
       5,     3,     1,     0,     2,     2,     2,     2,     4,     2,
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
       4,     4,     4,     3,     1,     3,     4,     3,     1,     3,
       2,     1,     2,     3,     3,     4,     4,     5,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
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
#line 107 "yacc.y"
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
#line 1591 "yacc.tab.c"
    break;

  case 3: /* start: $@1 include_stmts code  */
#line 118 "yacc.y"
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
#line 1607 "yacc.tab.c"
    break;

  case 4: /* $@2: %empty  */
#line 129 "yacc.y"
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
#line 1622 "yacc.tab.c"
    break;

  case 5: /* start: $@2 code  */
#line 138 "yacc.y"
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
#line 1638 "yacc.tab.c"
    break;

  case 13: /* $@3: %empty  */
#line 169 "yacc.y"
                       {
            local_table = (yyvsp[0].functions).local_table;
            params = (yyvsp[0].functions).params;
            rflag = false;
            return_type = (yyvsp[0].functions).type;
        }
#line 1649 "yacc.tab.c"
    break;

  case 14: /* $@4: %empty  */
#line 174 "yacc.y"
              {scope++;}
#line 1655 "yacc.tab.c"
    break;

  case 15: /* function: function_dec $@3 LCB $@4 statements RCB  */
#line 174 "yacc.y"
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
#line 1679 "yacc.tab.c"
    break;

  case 16: /* function_dec: data_type_new IDENTIFIER LPB function_params RPB  */
#line 196 "yacc.y"
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
#line 1703 "yacc.tab.c"
    break;

  case 17: /* function_dec: data_type_pr IDENTIFIER LPB function_params RPB  */
#line 215 "yacc.y"
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
#line 1728 "yacc.tab.c"
    break;

  case 18: /* function_dec: IDENTIFIER IDENTIFIER LPB function_params RPB  */
#line 235 "yacc.y"
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
#line 1757 "yacc.tab.c"
    break;

  case 19: /* function_dec: VOID IDENTIFIER LPB function_params RPB  */
#line 259 "yacc.y"
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
#line 1781 "yacc.tab.c"
    break;

  case 20: /* function_dec: list IDENTIFIER LPB function_params RPB  */
#line 279 "yacc.y"
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
#line 1807 "yacc.tab.c"
    break;

  case 21: /* function_params: function_params COMMA function_param  */
#line 303 "yacc.y"
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
#line 1822 "yacc.tab.c"
    break;

  case 22: /* function_params: function_param  */
#line 313 "yacc.y"
                     {
        (yyval.functions).params = init_symtab();
        insert_symtab((yyval.functions).params, (yyvsp[0].param));
        (yyval.functions).num_params = 1;
    }
#line 1832 "yacc.tab.c"
    break;

  case 23: /* function_params: %empty  */
#line 318 "yacc.y"
      {
        (yyval.functions).params = init_symtab();
        (yyval.functions).num_params = 0;
    }
#line 1841 "yacc.tab.c"
    break;

  case 24: /* function_param: data_type_new IDENTIFIER  */
#line 325 "yacc.y"
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
#line 1857 "yacc.tab.c"
    break;

  case 25: /* function_param: data_type_pr IDENTIFIER  */
#line 336 "yacc.y"
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
#line 1873 "yacc.tab.c"
    break;

  case 26: /* function_param: IDENTIFIER IDENTIFIER  */
#line 347 "yacc.y"
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
#line 1894 "yacc.tab.c"
    break;

  case 27: /* function_param: list IDENTIFIER  */
#line 364 "yacc.y"
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
#line 1910 "yacc.tab.c"
    break;

  case 28: /* class: class_dec LCB class_stmt RCB  */
#line 379 "yacc.y"
                                   {
        struct classrec *entry = (struct classrec *)malloc(sizeof(struct classrec));
        entry -> name = (yyvsp[-3].id).name;
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
#line 1931 "yacc.tab.c"
    break;

  case 29: /* class_dec: CLASS IDENTIFIER  */
#line 398 "yacc.y"
                            {
        (yyval.id).name = (yyvsp[0].id).name;
        (yyvsp[0].id).type = 14;
        members = init_symtab();
        methods = init_functab();
    }
#line 1942 "yacc.tab.c"
    break;

  case 33: /* $@5: %empty  */
#line 412 "yacc.y"
                                   {
            local_table = (yyvsp[0].functions).local_table;
            params = (yyvsp[0].functions).params;
            rflag = true;
            return_type = (yyvsp[0].functions).type;
        }
#line 1953 "yacc.tab.c"
    break;

  case 34: /* $@6: %empty  */
#line 417 "yacc.y"
              {scope++;}
#line 1959 "yacc.tab.c"
    break;

  case 35: /* class_function: class_function_dec $@5 LCB $@6 statements RCB  */
#line 417 "yacc.y"
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
#line 1983 "yacc.tab.c"
    break;

  case 36: /* class_function_dec: data_type_new IDENTIFIER LPB function_params RPB  */
#line 439 "yacc.y"
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
#line 2009 "yacc.tab.c"
    break;

  case 37: /* class_function_dec: data_type_pr IDENTIFIER LPB function_params RPB  */
#line 460 "yacc.y"
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
#line 2035 "yacc.tab.c"
    break;

  case 38: /* class_function_dec: IDENTIFIER IDENTIFIER LPB function_params RPB  */
#line 481 "yacc.y"
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
#line 2066 "yacc.tab.c"
    break;

  case 39: /* class_function_dec: VOID IDENTIFIER LPB function_params RPB  */
#line 507 "yacc.y"
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
#line 2092 "yacc.tab.c"
    break;

  case 40: /* class_function_dec: list IDENTIFIER LPB function_params RPB  */
#line 528 "yacc.y"
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
#line 2118 "yacc.tab.c"
    break;

  case 41: /* class_decl_stmt: data_type_new id_list SEMICOLON  */
#line 552 "yacc.y"
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
#line 2143 "yacc.tab.c"
    break;

  case 42: /* class_decl_stmt: data_type_pr id_list SEMICOLON  */
#line 572 "yacc.y"
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
#line 2170 "yacc.tab.c"
    break;

  case 43: /* class_decl_stmt: IDENTIFIER id_list SEMICOLON  */
#line 594 "yacc.y"
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
#line 2201 "yacc.tab.c"
    break;

  case 44: /* class_decl_stmt: list id_list SEMICOLON  */
#line 620 "yacc.y"
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
    }
#line 2227 "yacc.tab.c"
    break;

  case 45: /* $@7: %empty  */
#line 645 "yacc.y"
                            {scope++;}
#line 2233 "yacc.tab.c"
    break;

  case 46: /* statements: statements LCB $@7 statements RCB  */
#line 645 "yacc.y"
                                                      {scope--;}
#line 2239 "yacc.tab.c"
    break;

  case 48: /* statements: %empty  */
#line 647 "yacc.y"
      {}
#line 2245 "yacc.tab.c"
    break;

  case 64: /* unary_stmt: identifier UNARY_OP  */
#line 673 "yacc.y"
                                {
        if((yyvsp[-1].class_id).type != 0 && (yyvsp[-1].class_id).type != 1){
            printf("Error: Unary operator not defined for type %s\n", map_type[(yyvsp[-1].class_id).type]); 
            YYABORT;
        }
        (yyval.type) = (yyvsp[-1].class_id).type;
    }
#line 2257 "yacc.tab.c"
    break;

  case 65: /* unary_stmt: class_identifier UNARY_OP  */
#line 680 "yacc.y"
                                {
        check_namelist((yyvsp[-1].class_id).namelist, global_table, local_table, class_table, NULL, -1);
        if((yyvsp[-1].class_id).type != 0 && (yyvsp[-1].class_id).type != 1){
            printf("Error: Unary operator not defined for type %s\n", map_type[(yyvsp[-1].class_id).type]); 
            YYABORT;
        }
    }
#line 2269 "yacc.tab.c"
    break;

  case 73: /* decl_stmt: data_type_new id_list SEMICOLON  */
#line 701 "yacc.y"
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
#line 2298 "yacc.tab.c"
    break;

  case 74: /* decl_stmt: data_type_pr id_list SEMICOLON  */
#line 725 "yacc.y"
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
#line 2327 "yacc.tab.c"
    break;

  case 75: /* decl_stmt: IDENTIFIER id_list SEMICOLON  */
#line 749 "yacc.y"
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
#line 2361 "yacc.tab.c"
    break;

  case 76: /* decl_stmt: list id_list SEMICOLON  */
#line 778 "yacc.y"
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
    }
#line 2390 "yacc.tab.c"
    break;

  case 77: /* id_list: id_list COMMA IDENTIFIER  */
#line 805 "yacc.y"
                                 {
        insert_slist((yyvsp[-2].namelist), (yyvsp[0].id).name);
        (yyval.namelist) = (yyvsp[-2].namelist);
    }
#line 2399 "yacc.tab.c"
    break;

  case 78: /* id_list: IDENTIFIER EQUALS nested_expr  */
#line 809 "yacc.y"
                                   {
        // check nested expr type
        (yyval.namelist) = init_slist();
        insert_slist((yyval.namelist), (yyvsp[-2].id).name);
    }
#line 2409 "yacc.tab.c"
    break;

  case 79: /* id_list: id_list COMMA IDENTIFIER EQUALS nested_expr  */
#line 814 "yacc.y"
                                                 {
        (yyval.namelist) = init_slist();
        insert_slist((yyval.namelist), (yyvsp[-2].id).name);
    }
#line 2418 "yacc.tab.c"
    break;

  case 80: /* id_list: IDENTIFIER  */
#line 818 "yacc.y"
                {
        (yyval.namelist) = init_slist();
        insert_slist((yyval.namelist), (yyvsp[0].id).name);   
    }
#line 2427 "yacc.tab.c"
    break;

  case 82: /* expr_stmt_without_semicolon: identifier ASSIGN_OP nested_expr  */
#line 830 "yacc.y"
                                                              {
        if(!check_assign_op((yyvsp[-2].class_id).type, (yyvsp[0].exprs).type, (yyvsp[-1].assignop))){
            YYABORT;
        }
    }
#line 2437 "yacc.tab.c"
    break;

  case 83: /* expr_stmt_without_semicolon: class_identifier ASSIGN_OP nested_expr  */
#line 835 "yacc.y"
                                             {
        check_namelist((yyvsp[-2].class_id).namelist, global_table, local_table, class_table, NULL, -1);
        if(!check_assign_op((yyvsp[-2].class_id).type, (yyvsp[0].exprs).type, (yyvsp[-1].assignop))){
            YYABORT;
        }
    }
#line 2448 "yacc.tab.c"
    break;

  case 84: /* expr_stmt_without_semicolon: SELF DOT IDENTIFIER ASSIGN_OP nested_expr  */
#line 841 "yacc.y"
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
#line 2469 "yacc.tab.c"
    break;

  case 85: /* expr_stmt_without_semicolon: identifier EQUALS nested_expr  */
#line 857 "yacc.y"
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
#line 2486 "yacc.tab.c"
    break;

  case 86: /* expr_stmt_without_semicolon: class_identifier EQUALS nested_expr  */
#line 869 "yacc.y"
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
#line 2504 "yacc.tab.c"
    break;

  case 87: /* expr_stmt_without_semicolon: SELF DOT IDENTIFIER EQUALS nested_expr  */
#line 882 "yacc.y"
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
#line 2532 "yacc.tab.c"
    break;

  case 89: /* nested_expr: LPB nested_expr RPB  */
#line 909 "yacc.y"
                                 {
        (yyval.exprs).type = (yyvsp[-1].exprs).type;
        (yyval.exprs).dim = (yyvsp[-1].exprs).dim;
    }
#line 2541 "yacc.tab.c"
    break;

  case 90: /* nested_expr: LPB nested_expr RPB conj nested_expr  */
#line 913 "yacc.y"
                                           {
        if((yyvsp[0].exprs).type != 3 || (yyvsp[-3].exprs).type != 3){
            printf("Error: Type mismatch\n");
            YYABORT;
        }
        (yyval.exprs).type = (yyvsp[-3].exprs).type;
        (yyval.exprs).dim = 0;
    }
#line 2554 "yacc.tab.c"
    break;

  case 91: /* nested_expr: LPB nested_expr RPB REL_OP nested_expr  */
#line 921 "yacc.y"
                                             {
        if(!check_rel_op((yyvsp[-3].exprs).type, (yyvsp[0].exprs).type, (yyvsp[-1].assignop))){
            YYABORT;
        }
        (yyval.exprs).type = 3;
        (yyval.exprs).dim = 0;
    }
#line 2566 "yacc.tab.c"
    break;

  case 92: /* nested_expr: LPB nested_expr RPB arith_op nested_expr  */
#line 928 "yacc.y"
                                               {
        (yyval.exprs).type = check_arith_op((yyvsp[-3].exprs).type, (yyvsp[0].exprs).type, (yyvsp[-1].op_type));
        if((yyval.exprs).type == -1)
        {
            YYABORT;
        }
        (yyval.exprs).dim = 0;
    }
#line 2579 "yacc.tab.c"
    break;

  case 93: /* nested_expr: LPB nested_expr RPB set_op nested_expr  */
#line 936 "yacc.y"
                                             {
        if((yyvsp[-3].exprs).type != 7 || (yyvsp[0].exprs).type != 7){
            printf("Error: Invalid operands for \n");
            YYABORT;
        }
        (yyval.exprs).type = (yyvsp[-3].exprs).type; 
        (yyval.exprs).dim = 0;
    }
#line 2592 "yacc.tab.c"
    break;

  case 94: /* nested_expr: expr  */
#line 944 "yacc.y"
           {
        (yyval.exprs).type = (yyvsp[0].exprs).type;
        (yyval.exprs).dim = (yyvsp[0].exprs).dim; 
    }
#line 2601 "yacc.tab.c"
    break;

  case 95: /* expr: expr_terminal conj nested_expr  */
#line 951 "yacc.y"
                                     {
        if((yyvsp[-2].exprs).type != 3 || (yyvsp[0].exprs).type != 3 ){
            printf("Error: Type mismatch\n");
            YYABORT;
        }
        (yyval.exprs).type = 3;
        (yyval.exprs).dim = 0;
    }
#line 2614 "yacc.tab.c"
    break;

  case 96: /* expr: expr_terminal REL_OP nested_expr  */
#line 959 "yacc.y"
                                       {
        if(!check_rel_op((yyvsp[-2].exprs).type, (yyvsp[0].exprs).type, (yyvsp[-1].assignop))){
            YYABORT;
        }
        (yyval.exprs).type = 3;
        (yyval.exprs).dim = 0;
    }
#line 2626 "yacc.tab.c"
    break;

  case 97: /* expr: expr_terminal arith_op nested_expr  */
#line 966 "yacc.y"
                                         {
        (yyval.exprs).type = check_arith_op((yyvsp[-2].exprs).type, (yyvsp[0].exprs).type, (yyvsp[-1].op_type));
        if((yyval.exprs).type == -1)
        {
            YYABORT;
        }
        (yyval.exprs).dim = 0;
    }
#line 2639 "yacc.tab.c"
    break;

  case 98: /* expr: expr_terminal set_op nested_expr  */
#line 974 "yacc.y"
                                       {
        if((yyvsp[-2].exprs).type != 7 || (yyvsp[0].exprs).type != 7){
            printf("Error: Invalid operands for \n");
            YYABORT;
        }
        (yyval.exprs).type = (yyvsp[-2].exprs).type;
        (yyval.exprs).dim = 0;    
    }
#line 2652 "yacc.tab.c"
    break;

  case 99: /* expr: expr_terminal  */
#line 982 "yacc.y"
                    {
        (yyval.exprs).type = (yyvsp[0].exprs).type;
        (yyval.exprs).dim = (yyvsp[0].exprs).dim;
    }
#line 2661 "yacc.tab.c"
    break;

  case 100: /* expr_terminal: unary_stmt  */
#line 989 "yacc.y"
                          {
        (yyval.exprs).type = (yyvsp[0].type);
        (yyval.exprs).dim = 0;
    }
#line 2670 "yacc.tab.c"
    break;

  case 101: /* expr_terminal: NUMBER  */
#line 993 "yacc.y"
            {
        (yyval.exprs).type = 0;
        (yyval.exprs).dim = 0;
    }
#line 2679 "yacc.tab.c"
    break;

  case 102: /* expr_terminal: DECIMAL  */
#line 997 "yacc.y"
             { 
        (yyval.exprs).type = 1;
        (yyval.exprs).dim = 0;
    }
#line 2688 "yacc.tab.c"
    break;

  case 103: /* expr_terminal: STRING_LITERAL  */
#line 1001 "yacc.y"
                    {
        (yyval.exprs).type = 2;   
        (yyval.exprs).dim = 0; 
    }
#line 2697 "yacc.tab.c"
    break;

  case 104: /* expr_terminal: BOOL_LITERAL  */
#line 1005 "yacc.y"
                  {
        (yyval.exprs).type = 3;
        (yyval.exprs).dim = 0;
    }
#line 2706 "yacc.tab.c"
    break;

  case 105: /* expr_terminal: call  */
#line 1009 "yacc.y"
           {
        (yyval.exprs).type = (yyvsp[0].exprs).type;
        (yyval.exprs).dim = (yyvsp[0].exprs).dim;
    }
#line 2715 "yacc.tab.c"
    break;

  case 106: /* expr_terminal: NOT LPB nested_expr RPB  */
#line 1013 "yacc.y"
                              {
        if((yyvsp[-1].exprs).type != 3){
            printf("Error: Not operator not defined for type %s\n", map_type[(yyvsp[-1].exprs).type]); 
            YYABORT;
        }
        (yyval.exprs).type = 3;
        (yyval.exprs).dim = 0;
    }
#line 2728 "yacc.tab.c"
    break;

  case 107: /* expr_terminal: NOT identifier  */
#line 1021 "yacc.y"
                     {
        if((yyvsp[0].class_id).type != 3){
            printf("Error: Not operator not defined for type %s\n", map_type[(yyvsp[0].class_id).type]); 
            YYABORT;
        }
        (yyval.exprs).type = 3;
        (yyval.exprs).dim = 0;
    }
#line 2741 "yacc.tab.c"
    break;

  case 108: /* expr_terminal: NOT class_identifier  */
#line 1029 "yacc.y"
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
#line 2758 "yacc.tab.c"
    break;

  case 109: /* expr_terminal: identifier  */
#line 1041 "yacc.y"
                 {
        (yyval.exprs).type = (yyvsp[0].class_id).type;
        (yyval.exprs).dim = (yyvsp[0].class_id).dim;
    }
#line 2767 "yacc.tab.c"
    break;

  case 110: /* expr_terminal: class_identifier  */
#line 1045 "yacc.y"
                      {
        display_slist((yyvsp[0].class_id).namelist);
        if(check_namelist((yyvsp[0].class_id).namelist, global_table, local_table, class_table, NULL, -1) == false)
        {
            YYABORT;
        }
        (yyval.exprs).type = 3;
        (yyval.exprs).dim = 0;
    }
#line 2781 "yacc.tab.c"
    break;

  case 111: /* expr_terminal: list_literal  */
#line 1054 "yacc.y"
                   {
        (yyval.exprs).type = 5;
        (yyval.exprs).dim = (yyvsp[0].list).dim;
    }
#line 2790 "yacc.tab.c"
    break;

  case 112: /* expr_terminal: SELF DOT IDENTIFIER  */
#line 1058 "yacc.y"
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
#line 2810 "yacc.tab.c"
    break;

  case 113: /* expr_terminal: SELF DOT IDENTIFIER dim  */
#line 1073 "yacc.y"
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
#line 2830 "yacc.tab.c"
    break;

  case 114: /* if_stmt: if_expr LCB statements RCB  */
#line 1092 "yacc.y"
                                    {rflag = false;}
#line 2836 "yacc.tab.c"
    break;

  case 115: /* if_stmt: if_expr single_stmt  */
#line 1093 "yacc.y"
                          {rflag = false;}
#line 2842 "yacc.tab.c"
    break;

  case 116: /* if_stmt: if_expr LCB statements RCB ELSE if_stmt  */
#line 1094 "yacc.y"
                                              {rflag = false;}
#line 2848 "yacc.tab.c"
    break;

  case 117: /* if_stmt: if_expr single_stmt ELSE if_stmt  */
#line 1095 "yacc.y"
                                       {rflag = false;}
#line 2854 "yacc.tab.c"
    break;

  case 118: /* if_stmt: if_expr LCB statements RCB ELSE LCB statements RCB  */
#line 1096 "yacc.y"
                                                         {rflag = false;}
#line 2860 "yacc.tab.c"
    break;

  case 119: /* if_stmt: if_expr single_stmt ELSE LCB statements RCB  */
#line 1097 "yacc.y"
                                                  {rflag = false;}
#line 2866 "yacc.tab.c"
    break;

  case 120: /* if_stmt: if_expr LCB statements RCB ELSE single_stmt  */
#line 1098 "yacc.y"
                                                  {rflag = false;}
#line 2872 "yacc.tab.c"
    break;

  case 121: /* if_stmt: if_expr single_stmt ELSE single_stmt  */
#line 1099 "yacc.y"
                                           {rflag = false;}
#line 2878 "yacc.tab.c"
    break;

  case 122: /* if_expr: IF LPB nested_expr RPB  */
#line 1103 "yacc.y"
                                {
        if((yyvsp[-1].exprs).type != 3){
            printf("Error: If condition must be bool\n");
            YYABORT;
        }
        rflag = false;
    }
#line 2890 "yacc.tab.c"
    break;

  case 123: /* $@8: %empty  */
#line 1114 "yacc.y"
                                                      {scope++;}
#line 2896 "yacc.tab.c"
    break;

  case 124: /* for_stmt: for_exp expr_stmt_without_semicolon RPB LCB $@8 statements RCB  */
#line 1114 "yacc.y"
                                                                                {scope--;rflag = false;}
#line 2902 "yacc.tab.c"
    break;

  case 125: /* for_stmt: for_exp expr_stmt_without_semicolon RPB single_stmt  */
#line 1115 "yacc.y"
                                                          {rflag = false;}
#line 2908 "yacc.tab.c"
    break;

  case 126: /* for_exp: FOR LPB decl_stmt nested_expr SEMICOLON  */
#line 1119 "yacc.y"
                                                 {
        if((yyvsp[-1].exprs).type != 3){
            printf("Error: For condition must be bool\n");
            YYABORT;
        }
    }
#line 2919 "yacc.tab.c"
    break;

  case 127: /* for_exp: FOR LPB expr_stmt nested_expr SEMICOLON  */
#line 1125 "yacc.y"
                                              {
        if((yyvsp[-1].exprs).type != 3){
            printf("Error: For condition must be bool\n");
            YYABORT;
        }
    }
#line 2930 "yacc.tab.c"
    break;

  case 128: /* $@9: %empty  */
#line 1134 "yacc.y"
                          {scope++;}
#line 2936 "yacc.tab.c"
    break;

  case 129: /* while_stmt: while_exp LCB $@9 statements RCB  */
#line 1134 "yacc.y"
                                                    {scope--;rflag = false;}
#line 2942 "yacc.tab.c"
    break;

  case 130: /* while_stmt: while_exp single_stmt  */
#line 1135 "yacc.y"
                            {rflag = false;}
#line 2948 "yacc.tab.c"
    break;

  case 131: /* while_exp: WHILE LPB nested_expr RPB  */
#line 1139 "yacc.y"
                                     {
        if((yyvsp[-1].exprs).type != 3){
            printf("Error: While condition must be bool\n");
            YYABORT;
        }
    }
#line 2959 "yacc.tab.c"
    break;

  case 133: /* call: IDENTIFIER LPB call_args RPB  */
#line 1152 "yacc.y"
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
#line 2977 "yacc.tab.c"
    break;

  case 134: /* call: class_identifier LPB call_args RPB  */
#line 1165 "yacc.y"
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
#line 3000 "yacc.tab.c"
    break;

  case 135: /* call_args: call_args COMMA nested_expr  */
#line 1186 "yacc.y"
                                       {
        (yyval.functions).params = (yyvsp[-2].functions).params;
        struct idrec *entry = (struct idrec*) malloc(sizeof(struct idrec));
        entry -> type = (yyvsp[0].exprs).type;
        insert_symtab((yyval.functions).params, entry);
        (yyval.functions).num_params = (yyvsp[-2].functions).num_params + 1;
    }
#line 3012 "yacc.tab.c"
    break;

  case 136: /* call_args: nested_expr  */
#line 1193 "yacc.y"
                  {
        (yyval.functions).params = init_symtab();
        struct idrec *entry = (struct idrec*) malloc(sizeof(struct idrec));
        entry -> type = (yyvsp[0].exprs).type;
        insert_symtab((yyval.functions).params, entry);
        (yyval.functions).num_params = 1;
    }
#line 3024 "yacc.tab.c"
    break;

  case 137: /* call_args: %empty  */
#line 1200 "yacc.y"
      {
        (yyval.functions).params = init_symtab();
        (yyval.functions).num_params = 0;
    }
#line 3033 "yacc.tab.c"
    break;

  case 138: /* return_stmt: RETURN SEMICOLON  */
#line 1206 "yacc.y"
                              {
        if(return_type != 4)
        {
            printf("Error: Mismatch in return type\n");
            printf("Returned void while function returns %s\n", map_type[return_type]);
            YYABORT;
        }
        rflag = true;
    }
#line 3047 "yacc.tab.c"
    break;

  case 139: /* return_stmt: RETURN nested_expr SEMICOLON  */
#line 1215 "yacc.y"
                                   {
        if(return_type != (yyvsp[-1].exprs).type)
        {
            printf("Error: Mismatch in return type\n");
            printf("Returned %s while function returns %s\n", map_type[(yyvsp[-1].exprs).type], map_type[return_type]);
            YYABORT;
        }
        rflag = true;
    }
#line 3061 "yacc.tab.c"
    break;

  case 140: /* list: LIST dim COLON data_type_pr  */
#line 1228 "yacc.y"
                                  {
        (yyval.list).type = (yyvsp[0].type);
        (yyval.list).dim = (yyvsp[-2].list).dim;
        (yyval.list).class_name = NULL;
    }
#line 3071 "yacc.tab.c"
    break;

  case 141: /* list: LIST dim COLON data_type_new  */
#line 1233 "yacc.y"
                                   {
        (yyval.list).type = (yyvsp[0].type);
        (yyval.list).dim = (yyvsp[-2].list).dim;
        (yyval.list).class_name = NULL;
    }
#line 3081 "yacc.tab.c"
    break;

  case 142: /* list: LIST dim COLON IDENTIFIER  */
#line 1238 "yacc.y"
                                {
        if(search_classtab(class_table, (yyvsp[0].id).name) == NULL)
        {
            printf("Error: Class %s not declared\n", (yyvsp[0].id).name);
            YYABORT;
        }
        (yyval.list).type = 14;
        (yyval.list).class_name = (yyvsp[0].id).name;
        (yyval.list).dim = (yyvsp[-2].list).dim;
    }
#line 3096 "yacc.tab.c"
    break;

  case 143: /* list_literal: LCB list_terminal RCB  */
#line 1251 "yacc.y"
                                     {
        (yyval.list).type = 5;
        (yyval.list).dim = (yyvsp[-1].list).dim+1;
    }
#line 3105 "yacc.tab.c"
    break;

  case 144: /* list_terminal: nested_expr  */
#line 1258 "yacc.y"
                           {
        (yyval.list).type = (yyvsp[0].exprs).type;
        if((yyvsp[0].exprs).type == 5){
            (yyval.list).dim = (yyvsp[0].exprs).dim;
        }
        else{
            (yyval.list).dim = 0;
        }
    }
#line 3119 "yacc.tab.c"
    break;

  case 145: /* list_terminal: list_terminal COMMA nested_expr  */
#line 1267 "yacc.y"
                                      {
        if((yyvsp[-2].list).type != (yyvsp[0].exprs).type){
            printf("Error: Type mismatch in list terminal\n");
            YYABORT;
        }
        (yyval.list).type = (yyvsp[-2].list).type;
        (yyval.list).dim = (yyvsp[-2].list).dim;
    }
#line 3132 "yacc.tab.c"
    break;

  case 146: /* dim: LSB nested_expr RSB dim  */
#line 1278 "yacc.y"
                             {
        if((yyvsp[-2].exprs).type != 0){
            printf("Error: Array size must be an integer\n");
            YYABORT;
        }
        (yyval.list).dim = (yyvsp[0].list).dim + 1;
    }
#line 3144 "yacc.tab.c"
    break;

  case 147: /* dim: LSB nested_expr RSB  */
#line 1285 "yacc.y"
                          {
        if((yyvsp[-1].exprs).type != 0){
            printf("Error: Array size must be an integer\n");
            YYABORT;
        }
        (yyval.list).dim = 1;
    }
#line 3156 "yacc.tab.c"
    break;

  case 148: /* dim: empty_dim  */
#line 1292 "yacc.y"
                {
        (yyval.list).dim = (yyvsp[0].list).dim;
    }
#line 3164 "yacc.tab.c"
    break;

  case 149: /* empty_dim: empty_dim LSB RSB  */
#line 1297 "yacc.y"
                             {
        (yyval.list).dim = (yyvsp[-2].list).dim + 1;
    }
#line 3172 "yacc.tab.c"
    break;

  case 150: /* empty_dim: LSB RSB  */
#line 1300 "yacc.y"
              {
        (yyval.list).dim = 1;
    }
#line 3180 "yacc.tab.c"
    break;

  case 151: /* identifier: IDENTIFIER  */
#line 1305 "yacc.y"
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
#line 3197 "yacc.tab.c"
    break;

  case 152: /* identifier: IDENTIFIER dim  */
#line 1317 "yacc.y"
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
#line 3216 "yacc.tab.c"
    break;

  case 153: /* class_identifier: IDENTIFIER DOT IDENTIFIER  */
#line 1334 "yacc.y"
                                             {
        (yyval.class_id).namelist = init_slist();
        insert_slist((yyval.class_id).namelist, (yyvsp[-2].id).name);
        insert_slist((yyval.class_id).namelist, (yyvsp[0].id).name);   
    }
#line 3226 "yacc.tab.c"
    break;

  case 154: /* class_identifier: IDENTIFIER DOT class_identifier  */
#line 1339 "yacc.y"
                                      {
        struct snode* temp = (struct snode*) malloc(sizeof(struct snode));
        temp -> val = (yyvsp[-2].id).name;
        temp -> next = (yyvsp[0].class_id).namelist -> head;
        (yyvsp[0].class_id).namelist -> head = temp;
        (yyval.class_id).namelist = (yyvsp[0].class_id).namelist;        
    }
#line 3238 "yacc.tab.c"
    break;

  case 155: /* class_identifier: IDENTIFIER DOT IDENTIFIER dim  */
#line 1346 "yacc.y"
                                    {
        (yyval.class_id).namelist = init_slist();
        insert_slist((yyval.class_id).namelist, (yyvsp[-3].id).name);
        insert_slist((yyval.class_id).namelist, (yyvsp[-1].id).name);   
    }
#line 3248 "yacc.tab.c"
    break;

  case 156: /* class_identifier: IDENTIFIER dim DOT IDENTIFIER  */
#line 1351 "yacc.y"
                                    {
        (yyval.class_id).namelist = init_slist();
        insert_slist((yyval.class_id).namelist, (yyvsp[-3].id).name);
        insert_slist((yyval.class_id).namelist, (yyvsp[0].id).name);   
    }
#line 3258 "yacc.tab.c"
    break;

  case 157: /* class_identifier: IDENTIFIER dim DOT IDENTIFIER dim  */
#line 1356 "yacc.y"
                                        {
        (yyval.class_id).namelist = init_slist();
        insert_slist((yyval.class_id).namelist, (yyvsp[-4].id).name);
        insert_slist((yyval.class_id).namelist, (yyvsp[-1].id).name);   
    }
#line 3268 "yacc.tab.c"
    break;

  case 162: /* arith_op: ADD  */
#line 1375 "yacc.y"
              {(yyval.op_type) = 0;}
#line 3274 "yacc.tab.c"
    break;

  case 163: /* arith_op: SUB  */
#line 1376 "yacc.y"
          {(yyval.op_type) = 1;}
#line 3280 "yacc.tab.c"
    break;

  case 164: /* arith_op: MUL  */
#line 1377 "yacc.y"
          {(yyval.op_type) = 2;}
#line 3286 "yacc.tab.c"
    break;

  case 165: /* arith_op: DIV  */
#line 1378 "yacc.y"
          {(yyval.op_type) = 3;}
#line 3292 "yacc.tab.c"
    break;

  case 166: /* arith_op: MOD  */
#line 1379 "yacc.y"
          {(yyval.op_type) = 4;}
#line 3298 "yacc.tab.c"
    break;

  case 167: /* data_type_new: DOCUMENT  */
#line 1383 "yacc.y"
                       { (yyval.type) = 12;}
#line 3304 "yacc.tab.c"
    break;

  case 168: /* data_type_new: TEAM  */
#line 1384 "yacc.y"
           { (yyval.type) = 7;}
#line 3310 "yacc.tab.c"
    break;

  case 169: /* data_type_new: MEMBERS  */
#line 1385 "yacc.y"
              { (yyval.type) = 8;}
#line 3316 "yacc.tab.c"
    break;

  case 170: /* data_type_new: TASK  */
#line 1386 "yacc.y"
            { (yyval.type) = 9;}
#line 3322 "yacc.tab.c"
    break;

  case 171: /* data_type_new: EVENT  */
#line 1387 "yacc.y"
            { (yyval.type) = 10;}
#line 3328 "yacc.tab.c"
    break;

  case 172: /* data_type_new: MEETING  */
#line 1388 "yacc.y"
               { (yyval.type) = 11;}
#line 3334 "yacc.tab.c"
    break;

  case 173: /* data_type_new: CALENDAR  */
#line 1389 "yacc.y"
               { (yyval.type) = 13;}
#line 3340 "yacc.tab.c"
    break;

  case 174: /* data_type_pr: INT  */
#line 1393 "yacc.y"
                   { (yyval.type) = 0;}
#line 3346 "yacc.tab.c"
    break;

  case 175: /* data_type_pr: STRING  */
#line 1394 "yacc.y"
             { (yyval.type) = 2;}
#line 3352 "yacc.tab.c"
    break;

  case 176: /* data_type_pr: BOOL  */
#line 1395 "yacc.y"
            { (yyval.type) = 3;}
#line 3358 "yacc.tab.c"
    break;

  case 177: /* data_type_pr: FLOAT  */
#line 1396 "yacc.y"
            { (yyval.type) = 1;}
#line 3364 "yacc.tab.c"
    break;


#line 3368 "yacc.tab.c"

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

#line 1399 "yacc.y"



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
