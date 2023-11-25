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
  YYSYMBOL_PUBLIC = 42,                    /* PUBLIC  */
  YYSYMBOL_LSB = 43,                       /* LSB  */
  YYSYMBOL_RSB = 44,                       /* RSB  */
  YYSYMBOL_LCB = 45,                       /* LCB  */
  YYSYMBOL_RCB = 46,                       /* RCB  */
  YYSYMBOL_LPB = 47,                       /* LPB  */
  YYSYMBOL_RPB = 48,                       /* RPB  */
  YYSYMBOL_SEMICOLON = 49,                 /* SEMICOLON  */
  YYSYMBOL_COMMA = 50,                     /* COMMA  */
  YYSYMBOL_DOT = 51,                       /* DOT  */
  YYSYMBOL_COLON = 52,                     /* COLON  */
  YYSYMBOL_ARROW = 53,                     /* ARROW  */
  YYSYMBOL_INCLUDE = 54,                   /* INCLUDE  */
  YYSYMBOL_TYPEDEF = 55,                   /* TYPEDEF  */
  YYSYMBOL_YYACCEPT = 56,                  /* $accept  */
  YYSYMBOL_start = 57,                     /* start  */
  YYSYMBOL_58_1 = 58,                      /* $@1  */
  YYSYMBOL_59_2 = 59,                      /* $@2  */
  YYSYMBOL_include_stmts = 60,             /* include_stmts  */
  YYSYMBOL_include_stmt = 61,              /* include_stmt  */
  YYSYMBOL_code = 62,                      /* code  */
  YYSYMBOL_function = 63,                  /* function  */
  YYSYMBOL_64_3 = 64,                      /* $@3  */
  YYSYMBOL_65_4 = 65,                      /* $@4  */
  YYSYMBOL_function_dec = 66,              /* function_dec  */
  YYSYMBOL_function_params = 67,           /* function_params  */
  YYSYMBOL_function_param = 68,            /* function_param  */
  YYSYMBOL_class = 69,                     /* class  */
  YYSYMBOL_class_dec = 70,                 /* class_dec  */
  YYSYMBOL_class_stmt = 71,                /* class_stmt  */
  YYSYMBOL_class_function = 72,            /* class_function  */
  YYSYMBOL_73_5 = 73,                      /* $@5  */
  YYSYMBOL_74_6 = 74,                      /* $@6  */
  YYSYMBOL_class_function_dec = 75,        /* class_function_dec  */
  YYSYMBOL_class_decl_stmt = 76,           /* class_decl_stmt  */
  YYSYMBOL_statements = 77,                /* statements  */
  YYSYMBOL_78_7 = 78,                      /* $@7  */
  YYSYMBOL_statement = 79,                 /* statement  */
  YYSYMBOL_ids = 80,                       /* ids  */
  YYSYMBOL_unary_stmt = 81,                /* unary_stmt  */
  YYSYMBOL_single_stmt = 82,               /* single_stmt  */
  YYSYMBOL_decl_stmt = 83,                 /* decl_stmt  */
  YYSYMBOL_id_list = 84,                   /* id_list  */
  YYSYMBOL_expr_stmt = 85,                 /* expr_stmt  */
  YYSYMBOL_expr_stmt_without_semicolon = 86, /* expr_stmt_without_semicolon  */
  YYSYMBOL_nested_expr = 87,               /* nested_expr  */
  YYSYMBOL_expr = 88,                      /* expr  */
  YYSYMBOL_expr_terminal = 89,             /* expr_terminal  */
  YYSYMBOL_if_stmt = 90,                   /* if_stmt  */
  YYSYMBOL_if_expr = 91,                   /* if_expr  */
  YYSYMBOL_for_stmt = 92,                  /* for_stmt  */
  YYSYMBOL_93_8 = 93,                      /* $@8  */
  YYSYMBOL_for_exp = 94,                   /* for_exp  */
  YYSYMBOL_while_stmt = 95,                /* while_stmt  */
  YYSYMBOL_96_9 = 96,                      /* $@9  */
  YYSYMBOL_while_exp = 97,                 /* while_exp  */
  YYSYMBOL_call_stmt = 98,                 /* call_stmt  */
  YYSYMBOL_call = 99,                      /* call  */
  YYSYMBOL_call_args = 100,                /* call_args  */
  YYSYMBOL_return_stmt = 101,              /* return_stmt  */
  YYSYMBOL_list = 102,                     /* list  */
  YYSYMBOL_103_10 = 103,                   /* $@10  */
  YYSYMBOL_104_11 = 104,                   /* $@11  */
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
#define YYLAST   1066

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  56
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  60
/* YYNRULES -- Number of rules.  */
#define YYNRULES  180
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  356

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
       0,   110,   110,   110,   147,   147,   185,   186,   190,   194,
     195,   196,   197,   202,   210,   202,   232,   251,   270,   294,
     314,   338,   348,   353,   360,   371,   382,   399,   414,   433,
     442,   443,   444,   445,   448,   456,   448,   478,   499,   520,
     546,   567,   591,   611,   633,   659,   686,   686,   687,   688,
     692,   693,   694,   695,   696,   697,   698,   699,   700,   701,
     702,   703,   704,   708,   709,   714,   721,   732,   733,   734,
     735,   736,   737,   738,   743,   767,   791,   820,   849,   855,
     859,   863,   873,   877,   882,   889,   905,   917,   931,   954,
     958,   962,   970,   977,   985,   993,  1000,  1008,  1015,  1023,
    1031,  1038,  1042,  1046,  1050,  1054,  1058,  1062,  1070,  1078,
    1091,  1095,  1104,  1108,  1123,  1142,  1143,  1144,  1145,  1146,
    1147,  1148,  1149,  1153,  1164,  1164,  1165,  1169,  1175,  1184,
    1184,  1185,  1189,  1198,  1202,  1215,  1247,  1255,  1263,  1269,
    1278,  1291,  1296,  1296,  1301,  1301,  1314,  1321,  1330,  1341,
    1348,  1355,  1360,  1363,  1368,  1380,  1397,  1402,  1409,  1414,
    1419,  1428,  1429,  1433,  1434,  1438,  1439,  1440,  1441,  1442,
    1446,  1447,  1448,  1449,  1450,  1451,  1452,  1456,  1457,  1458,
    1459
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
  "IDENTIFIER", "SELF", "PUBLIC", "LSB", "RSB", "LCB", "RCB", "LPB", "RPB",
  "SEMICOLON", "COMMA", "DOT", "COLON", "ARROW", "INCLUDE", "TYPEDEF",
  "$accept", "start", "$@1", "$@2", "include_stmts", "include_stmt",
  "code", "function", "$@3", "$@4", "function_dec", "function_params",
  "function_param", "class", "class_dec", "class_stmt", "class_function",
  "$@5", "$@6", "class_function_dec", "class_decl_stmt", "statements",
  "$@7", "statement", "ids", "unary_stmt", "single_stmt", "decl_stmt",
  "id_list", "expr_stmt", "expr_stmt_without_semicolon", "nested_expr",
  "expr", "expr_terminal", "if_stmt", "if_expr", "for_stmt", "$@8",
  "for_exp", "while_stmt", "$@9", "while_exp", "call_stmt", "call",
  "call_args", "return_stmt", "list", "$@10", "$@11", "list_literal",
  "list_terminal", "dim", "empty_dim", "identifier", "class_identifier",
  "conj", "set_op", "arith_op", "data_type_new", "data_type_pr", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-295)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-145)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
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

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
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

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     1,     2,     3,     6,     7,    23,    24,    43,   136,
      25,    96,    97,    26,    27,    82,    83,   143,   241,    84,
      85,   180,   258,   220,   260,    64,   263,   222,    41,   223,
     224,   161,    66,    67,   225,   226,   227,   346,   228,   229,
     302,   230,   231,    68,   162,   233,   234,   129,   130,    69,
     110,   107,    39,    70,    71,   123,   124,   125,   237,   238
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
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

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
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

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
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

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
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
        init_member_class(class_table);
        params = NULL;
        local_table = global_table;
        members = NULL;
        methods = NULL;
        scope = 0;
    }
#line 1611 "yacc.tab.c"
    break;

  case 3: /* start: $@1 include_stmts code  */
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
    }
#line 1641 "yacc.tab.c"
    break;

  case 4: /* $@2: %empty  */
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
    }
#line 1658 "yacc.tab.c"
    break;

  case 5: /* start: $@2 code  */
#line 158 "yacc.y"
           {
        printf("Global Table : \n");
        display_symtab(global_table);
        printf("\n\nFunction Table : \n");
        display_functab(function_table);
        printf("\n\nClass Table : \n");
        display_classtab(class_table);
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
    }
#line 1687 "yacc.tab.c"
    break;

  case 13: /* $@3: %empty  */
#line 202 "yacc.y"
                       {
            local_table = (yyvsp[0].functions).local_table;
            params = (yyvsp[0].functions).params;
            if((yyvsp[0].functions).type == 4)
                rflag = true;
            else
                rflag = false;
            return_type = (yyvsp[0].functions).type;
        }
#line 1701 "yacc.tab.c"
    break;

  case 14: /* $@4: %empty  */
#line 210 "yacc.y"
              {scope++;}
#line 1707 "yacc.tab.c"
    break;

  case 15: /* function: function_dec $@3 LCB $@4 statements RCB  */
#line 210 "yacc.y"
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
#line 1731 "yacc.tab.c"
    break;

  case 16: /* function_dec: data_type_new IDENTIFIER LPB function_params RPB  */
#line 232 "yacc.y"
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
#line 1755 "yacc.tab.c"
    break;

  case 17: /* function_dec: data_type_pr IDENTIFIER LPB function_params RPB  */
#line 251 "yacc.y"
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
#line 1779 "yacc.tab.c"
    break;

  case 18: /* function_dec: IDENTIFIER IDENTIFIER LPB function_params RPB  */
#line 270 "yacc.y"
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
#line 1808 "yacc.tab.c"
    break;

  case 19: /* function_dec: VOID IDENTIFIER LPB function_params RPB  */
#line 294 "yacc.y"
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
#line 1832 "yacc.tab.c"
    break;

  case 20: /* function_dec: list IDENTIFIER LPB function_params RPB  */
#line 314 "yacc.y"
                                              {
        struct funcrec *entry = (struct funcrec *)malloc(sizeof(struct funcrec));
        entry -> name = (yyvsp[-3].id).name;
        entry -> type = (yyvsp[-4].list).type;
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
#line 1858 "yacc.tab.c"
    break;

  case 21: /* function_params: function_params COMMA function_param  */
#line 338 "yacc.y"
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
#line 1873 "yacc.tab.c"
    break;

  case 22: /* function_params: function_param  */
#line 348 "yacc.y"
                     {
        (yyval.functions).params = init_symtab();
        insert_symtab((yyval.functions).params, (yyvsp[0].param));
        (yyval.functions).num_params = 1;
    }
#line 1883 "yacc.tab.c"
    break;

  case 23: /* function_params: %empty  */
#line 353 "yacc.y"
      {
        (yyval.functions).params = init_symtab();
        (yyval.functions).num_params = 0;
    }
#line 1892 "yacc.tab.c"
    break;

  case 24: /* function_param: data_type_new IDENTIFIER  */
#line 360 "yacc.y"
                                         {
        struct idrec *entry = (struct idrec *)malloc(sizeof(struct idrec));
        entry -> name = (yyvsp[0].id).name;
        entry -> type = (yyvsp[-1].type);
        entry -> arr = false;
        entry -> dim = 0;
        entry -> scope = 1;
        entry -> next = NULL;
        entry -> class_name = map_type[(yyvsp[-1].type)];       
        (yyval.param) = entry;
    }
#line 1908 "yacc.tab.c"
    break;

  case 25: /* function_param: data_type_pr IDENTIFIER  */
#line 371 "yacc.y"
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
#line 1924 "yacc.tab.c"
    break;

  case 26: /* function_param: IDENTIFIER IDENTIFIER  */
#line 382 "yacc.y"
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
#line 1945 "yacc.tab.c"
    break;

  case 27: /* function_param: list IDENTIFIER  */
#line 399 "yacc.y"
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
#line 1961 "yacc.tab.c"
    break;

  case 28: /* class: class_dec LCB class_stmt RCB SEMICOLON  */
#line 414 "yacc.y"
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
#line 1982 "yacc.tab.c"
    break;

  case 29: /* class_dec: CLASS IDENTIFIER  */
#line 433 "yacc.y"
                            {
        (yyval.id).name = (yyvsp[0].id).name;
        (yyvsp[0].id).type = 14;
        members = init_symtab();
        methods = init_functab();
    }
#line 1993 "yacc.tab.c"
    break;

  case 34: /* $@5: %empty  */
#line 448 "yacc.y"
                                   {
            local_table = (yyvsp[0].functions).local_table;
            params = (yyvsp[0].functions).params;
            if((yyvsp[0].functions).type == 4)
                rflag = true;
            else
                rflag = false;
            return_type = (yyvsp[0].functions).type;
        }
#line 2007 "yacc.tab.c"
    break;

  case 35: /* $@6: %empty  */
#line 456 "yacc.y"
              {scope++;}
#line 2013 "yacc.tab.c"
    break;

  case 36: /* class_function: class_function_dec $@5 LCB $@6 statements RCB  */
#line 456 "yacc.y"
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
#line 2037 "yacc.tab.c"
    break;

  case 37: /* class_function_dec: data_type_new IDENTIFIER LPB function_params RPB  */
#line 478 "yacc.y"
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
#line 2063 "yacc.tab.c"
    break;

  case 38: /* class_function_dec: data_type_pr IDENTIFIER LPB function_params RPB  */
#line 499 "yacc.y"
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
#line 2089 "yacc.tab.c"
    break;

  case 39: /* class_function_dec: IDENTIFIER IDENTIFIER LPB function_params RPB  */
#line 520 "yacc.y"
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
#line 2120 "yacc.tab.c"
    break;

  case 40: /* class_function_dec: VOID IDENTIFIER LPB function_params RPB  */
#line 546 "yacc.y"
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
#line 2146 "yacc.tab.c"
    break;

  case 41: /* class_function_dec: list IDENTIFIER LPB function_params RPB  */
#line 567 "yacc.y"
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
#line 2172 "yacc.tab.c"
    break;

  case 42: /* class_decl_stmt: data_type_new id_list SEMICOLON  */
#line 591 "yacc.y"
                                                 {
        struct snode* temp = (yyvsp[-1].namelist)->head;
        while(temp != NULL){
            struct idrec *entry = (struct idrec *)malloc(sizeof(struct idrec));
            entry -> type = (yyvsp[-2].type);
            entry -> arr = false;
            entry -> scope = 1; 
            entry -> name = temp->val;
            entry -> class_name = map_type[(yyvsp[-2].type)];
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
#line 2197 "yacc.tab.c"
    break;

  case 43: /* class_decl_stmt: data_type_pr id_list SEMICOLON  */
#line 611 "yacc.y"
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
#line 2224 "yacc.tab.c"
    break;

  case 44: /* class_decl_stmt: IDENTIFIER id_list SEMICOLON  */
#line 633 "yacc.y"
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
#line 2255 "yacc.tab.c"
    break;

  case 45: /* class_decl_stmt: list id_list SEMICOLON  */
#line 659 "yacc.y"
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
#line 2283 "yacc.tab.c"
    break;

  case 46: /* $@7: %empty  */
#line 686 "yacc.y"
                            {scope++;}
#line 2289 "yacc.tab.c"
    break;

  case 47: /* statements: statements LCB $@7 statements RCB  */
#line 686 "yacc.y"
                                                      {scope--;}
#line 2295 "yacc.tab.c"
    break;

  case 49: /* statements: %empty  */
#line 688 "yacc.y"
      {}
#line 2301 "yacc.tab.c"
    break;

  case 65: /* unary_stmt: identifier UNARY_OP  */
#line 714 "yacc.y"
                                {
        if((yyvsp[-1].class_id).type != 0 && (yyvsp[-1].class_id).type != 1){
            printf("Error: Unary operator not defined for type %s\n", map_type[(yyvsp[-1].class_id).type]); 
            YYABORT;
        }
        (yyval.type) = (yyvsp[-1].class_id).type;
    }
#line 2313 "yacc.tab.c"
    break;

  case 66: /* unary_stmt: class_identifier UNARY_OP  */
#line 721 "yacc.y"
                                {
        int *a = (int*) malloc(sizeof(int)), *b = (int*) malloc(sizeof(int));
        check_namelist((yyvsp[-1].class_id).namelist, global_table, local_table, class_table, NULL, -1, a, b);
        if((yyvsp[-1].class_id).type != 0 && (yyvsp[-1].class_id).type != 1){
            printf("Error: Unary operator not defined for type %s\n", map_type[(yyvsp[-1].class_id).type]); 
            YYABORT;
        }
    }
#line 2326 "yacc.tab.c"
    break;

  case 74: /* decl_stmt: data_type_new id_list SEMICOLON  */
#line 743 "yacc.y"
                                           {
        struct snode* temp = (yyvsp[-1].namelist)->head;
        while(temp != NULL){
            struct idrec *entry = (struct idrec*) malloc(sizeof(struct idrec));
            entry -> type = (yyvsp[-2].type);
            entry -> arr = false;
            entry -> scope = scope; 
            entry -> name = temp->val;
            entry -> class_name = map_type[(yyvsp[-2].type)];
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
#line 2355 "yacc.tab.c"
    break;

  case 75: /* decl_stmt: data_type_pr id_list SEMICOLON  */
#line 767 "yacc.y"
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
#line 2384 "yacc.tab.c"
    break;

  case 76: /* decl_stmt: IDENTIFIER id_list SEMICOLON  */
#line 791 "yacc.y"
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
#line 2418 "yacc.tab.c"
    break;

  case 77: /* decl_stmt: list id_list SEMICOLON  */
#line 820 "yacc.y"
                             {
        struct snode* temp = (yyvsp[-1].namelist)->head;
        while(temp != NULL){
            struct idrec *entry = (struct idrec*) malloc(sizeof(struct idrec));
            entry -> type = (yyvsp[-2].list).type;
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
#line 2449 "yacc.tab.c"
    break;

  case 78: /* id_list: id_list COMMA IDENTIFIER  */
#line 849 "yacc.y"
                                 {
        insert_slist((yyvsp[-2].namelist), (yyvsp[0].id).name);
        (yyval.namelist) = (yyvsp[-2].namelist);
        if(lflag)
            fprintf(yyout, "%s", init);
    }
#line 2460 "yacc.tab.c"
    break;

  case 79: /* id_list: IDENTIFIER EQUALS nested_expr  */
#line 855 "yacc.y"
                                   {
        (yyval.namelist) = init_slist();
        insert_slist((yyval.namelist), (yyvsp[-2].id).name);
    }
#line 2469 "yacc.tab.c"
    break;

  case 80: /* id_list: id_list COMMA IDENTIFIER EQUALS nested_expr  */
#line 859 "yacc.y"
                                                 {
        insert_slist((yyvsp[-4].namelist), (yyvsp[-2].id).name);
        (yyval.namelist) = (yyvsp[-4].namelist);
    }
#line 2478 "yacc.tab.c"
    break;

  case 81: /* id_list: IDENTIFIER  */
#line 863 "yacc.y"
                {
        (yyval.namelist) = init_slist();
        insert_slist((yyval.namelist), (yyvsp[0].id).name);
        if(lflag)
            fprintf(yyout, "%s", init);
    }
#line 2489 "yacc.tab.c"
    break;

  case 83: /* expr_stmt_without_semicolon: identifier ASSIGN_OP nested_expr  */
#line 877 "yacc.y"
                                                              {
        if(!check_assign_op((yyvsp[-2].class_id).type, (yyvsp[0].exprs).type, (yyvsp[-1].assignop))){
            YYABORT;
        }
    }
#line 2499 "yacc.tab.c"
    break;

  case 84: /* expr_stmt_without_semicolon: class_identifier ASSIGN_OP nested_expr  */
#line 882 "yacc.y"
                                             {
        int *a = (int*) malloc(sizeof(int)), *b = (int*) malloc(sizeof(int));
        check_namelist((yyvsp[-2].class_id).namelist, global_table, local_table, class_table, NULL, -1, a, b);
        if(!check_assign_op((yyvsp[-2].class_id).type, (yyvsp[0].exprs).type, (yyvsp[-1].assignop))){
            YYABORT;
        }
    }
#line 2511 "yacc.tab.c"
    break;

  case 85: /* expr_stmt_without_semicolon: SELF DOT IDENTIFIER ASSIGN_OP nested_expr  */
#line 889 "yacc.y"
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
#line 2532 "yacc.tab.c"
    break;

  case 86: /* expr_stmt_without_semicolon: identifier EQUALS nested_expr  */
#line 905 "yacc.y"
                                    {
        if((yyvsp[-2].class_id).dim != 0 && (yyvsp[0].exprs).dim != 0){
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
#line 2549 "yacc.tab.c"
    break;

  case 87: /* expr_stmt_without_semicolon: class_identifier EQUALS nested_expr  */
#line 917 "yacc.y"
                                          {
        int *a = (int*) malloc(sizeof(int)), *b = (int*) malloc(sizeof(int));
        check_namelist((yyvsp[-2].class_id).namelist, global_table, local_table, class_table, NULL, -1, a, b);
        if((yyvsp[-2].class_id).dim != 0 && (yyvsp[0].exprs).dim != 0){
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
#line 2568 "yacc.tab.c"
    break;

  case 88: /* expr_stmt_without_semicolon: SELF DOT IDENTIFIER EQUALS nested_expr  */
#line 931 "yacc.y"
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
        if(entry -> dim != 0 && (yyvsp[0].exprs).dim != 0){
            if(entry -> dim != (yyvsp[0].exprs).dim){
                printf("Error: Dimension mismatch in assignment\n");
                printf("LHS is of dimension %i and RHS is of dimension %i\n", entry -> dim, (yyvsp[0].exprs).dim);
                YYABORT;
            }
        }
        else if(!check_assign_op(entry -> type, (yyvsp[0].exprs).type, 7)){
            YYABORT;
        }
    }
#line 2596 "yacc.tab.c"
    break;

  case 90: /* nested_expr: LPB nested_expr RPB  */
#line 958 "yacc.y"
                                 {
        (yyval.exprs).type = (yyvsp[-1].exprs).type;
        (yyval.exprs).dim = (yyvsp[-1].exprs).dim;
    }
#line 2605 "yacc.tab.c"
    break;

  case 91: /* nested_expr: LPB nested_expr RPB conj nested_expr  */
#line 962 "yacc.y"
                                           {
        if((yyvsp[0].exprs).type != 3 || (yyvsp[-3].exprs).type != 3){
            printf("Error: Type mismatch\n");
            YYABORT;
        }
        (yyval.exprs).type = (yyvsp[-3].exprs).type;
        (yyval.exprs).dim = 0;
    }
#line 2618 "yacc.tab.c"
    break;

  case 92: /* nested_expr: LPB nested_expr RPB REL_OP nested_expr  */
#line 970 "yacc.y"
                                             {
        if(!check_rel_op((yyvsp[-3].exprs).type, (yyvsp[0].exprs).type, (yyvsp[-1].assignop))){
            YYABORT;
        }
        (yyval.exprs).type = 3;
        (yyval.exprs).dim = 0;
    }
#line 2630 "yacc.tab.c"
    break;

  case 93: /* nested_expr: LPB nested_expr RPB arith_op nested_expr  */
#line 977 "yacc.y"
                                               {
        (yyval.exprs).type = check_arith_op((yyvsp[-3].exprs).type, (yyvsp[0].exprs).type, (yyvsp[-1].op_type));
        if((yyval.exprs).type == -1)
        {
            YYABORT;
        }
        (yyval.exprs).dim = 0;
    }
#line 2643 "yacc.tab.c"
    break;

  case 94: /* nested_expr: LPB nested_expr RPB set_op nested_expr  */
#line 985 "yacc.y"
                                             {
        if((yyvsp[-3].exprs).type != 7 || (yyvsp[0].exprs).type != 7){
            printf("Error: Invalid operands for \n");
            YYABORT;
        }
        (yyval.exprs).type = (yyvsp[-3].exprs).type; 
        (yyval.exprs).dim = 0;
    }
#line 2656 "yacc.tab.c"
    break;

  case 95: /* nested_expr: expr  */
#line 993 "yacc.y"
           {
        (yyval.exprs).type = (yyvsp[0].exprs).type;
        (yyval.exprs).dim = (yyvsp[0].exprs).dim; 
    }
#line 2665 "yacc.tab.c"
    break;

  case 96: /* expr: expr_terminal conj nested_expr  */
#line 1000 "yacc.y"
                                     {
        if((yyvsp[-2].exprs).type != 3 || (yyvsp[0].exprs).type != 3 ){
            printf("Error: Type mismatch\n");
            YYABORT;
        }
        (yyval.exprs).type = 3;
        (yyval.exprs).dim = 0;
    }
#line 2678 "yacc.tab.c"
    break;

  case 97: /* expr: expr_terminal REL_OP nested_expr  */
#line 1008 "yacc.y"
                                       {
        if(!check_rel_op((yyvsp[-2].exprs).type, (yyvsp[0].exprs).type, (yyvsp[-1].assignop))){
            YYABORT;
        }
        (yyval.exprs).type = 3;
        (yyval.exprs).dim = 0;
    }
#line 2690 "yacc.tab.c"
    break;

  case 98: /* expr: expr_terminal arith_op nested_expr  */
#line 1015 "yacc.y"
                                         {
        (yyval.exprs).type = check_arith_op((yyvsp[-2].exprs).type, (yyvsp[0].exprs).type, (yyvsp[-1].op_type));
        if((yyval.exprs).type == -1)
        {
            YYABORT;
        }
        (yyval.exprs).dim = 0;
    }
#line 2703 "yacc.tab.c"
    break;

  case 99: /* expr: expr_terminal set_op nested_expr  */
#line 1023 "yacc.y"
                                       {
        if((yyvsp[-2].exprs).type != 7 || (yyvsp[0].exprs).type != 7){
            printf("Error: Invalid operands for \n");
            YYABORT;
        }
        (yyval.exprs).type = (yyvsp[-2].exprs).type;
        (yyval.exprs).dim = 0;    
    }
#line 2716 "yacc.tab.c"
    break;

  case 100: /* expr: expr_terminal  */
#line 1031 "yacc.y"
                    {
        (yyval.exprs).type = (yyvsp[0].exprs).type;
        (yyval.exprs).dim = (yyvsp[0].exprs).dim;
    }
#line 2725 "yacc.tab.c"
    break;

  case 101: /* expr_terminal: unary_stmt  */
#line 1038 "yacc.y"
                          {
        (yyval.exprs).type = (yyvsp[0].type);
        (yyval.exprs).dim = 0;
    }
#line 2734 "yacc.tab.c"
    break;

  case 102: /* expr_terminal: NUMBER  */
#line 1042 "yacc.y"
            {
        (yyval.exprs).type = 0;
        (yyval.exprs).dim = 0;
    }
#line 2743 "yacc.tab.c"
    break;

  case 103: /* expr_terminal: DECIMAL  */
#line 1046 "yacc.y"
             { 
        (yyval.exprs).type = 1;
        (yyval.exprs).dim = 0;
    }
#line 2752 "yacc.tab.c"
    break;

  case 104: /* expr_terminal: STRING_LITERAL  */
#line 1050 "yacc.y"
                    {
        (yyval.exprs).type = 2;   
        (yyval.exprs).dim = 0; 
    }
#line 2761 "yacc.tab.c"
    break;

  case 105: /* expr_terminal: BOOL_LITERAL  */
#line 1054 "yacc.y"
                  {
        (yyval.exprs).type = 3;
        (yyval.exprs).dim = 0;
    }
#line 2770 "yacc.tab.c"
    break;

  case 106: /* expr_terminal: call  */
#line 1058 "yacc.y"
           {
        (yyval.exprs).type = (yyvsp[0].exprs).type;
        (yyval.exprs).dim = (yyvsp[0].exprs).dim;
    }
#line 2779 "yacc.tab.c"
    break;

  case 107: /* expr_terminal: NOT LPB nested_expr RPB  */
#line 1062 "yacc.y"
                              {
        if((yyvsp[-1].exprs).type != 3){
            printf("Error: Not operator not defined for type %s\n", map_type[(yyvsp[-1].exprs).type]); 
            YYABORT;
        }
        (yyval.exprs).type = 3;
        (yyval.exprs).dim = 0;
    }
#line 2792 "yacc.tab.c"
    break;

  case 108: /* expr_terminal: NOT identifier  */
#line 1070 "yacc.y"
                     {
        if((yyvsp[0].class_id).type != 3){
            printf("Error: Not operator not defined for type %s\n", map_type[(yyvsp[0].class_id).type]); 
            YYABORT;
        }
        (yyval.exprs).type = 3;
        (yyval.exprs).dim = 0;
    }
#line 2805 "yacc.tab.c"
    break;

  case 109: /* expr_terminal: NOT class_identifier  */
#line 1078 "yacc.y"
                           {
        int *a = (int*) malloc(sizeof(int)), *b = (int*) malloc(sizeof(int));
        if(check_namelist((yyvsp[0].class_id).namelist, global_table, local_table, class_table, NULL, -1, a, b) == false)
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
#line 2823 "yacc.tab.c"
    break;

  case 110: /* expr_terminal: identifier  */
#line 1091 "yacc.y"
                 {
        (yyval.exprs).type = (yyvsp[0].class_id).type;
        (yyval.exprs).dim = (yyvsp[0].class_id).dim;
    }
#line 2832 "yacc.tab.c"
    break;

  case 111: /* expr_terminal: class_identifier  */
#line 1095 "yacc.y"
                      {
        int *a = (int*) malloc(sizeof(int)), *b = (int*) malloc(sizeof(int));
        if(check_namelist((yyvsp[0].class_id).namelist, global_table, local_table, class_table, NULL, -1, a, b) == false)
        {
            YYABORT;
        }
        (yyval.exprs).type = 3;
        (yyval.exprs).dim = 0;
    }
#line 2846 "yacc.tab.c"
    break;

  case 112: /* expr_terminal: list_literal  */
#line 1104 "yacc.y"
                   {
        (yyval.exprs).type = (yyvsp[0].list).type;
        (yyval.exprs).dim = (yyvsp[0].list).dim;
    }
#line 2855 "yacc.tab.c"
    break;

  case 113: /* expr_terminal: SELF DOT IDENTIFIER  */
#line 1108 "yacc.y"
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
#line 2875 "yacc.tab.c"
    break;

  case 114: /* expr_terminal: SELF DOT IDENTIFIER dim  */
#line 1123 "yacc.y"
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
#line 2895 "yacc.tab.c"
    break;

  case 115: /* if_stmt: if_expr LCB statements RCB  */
#line 1142 "yacc.y"
                                    {rflag = false;}
#line 2901 "yacc.tab.c"
    break;

  case 116: /* if_stmt: if_expr single_stmt  */
#line 1143 "yacc.y"
                          {rflag = false;}
#line 2907 "yacc.tab.c"
    break;

  case 117: /* if_stmt: if_expr LCB statements RCB ELSE if_stmt  */
#line 1144 "yacc.y"
                                              {rflag = false;}
#line 2913 "yacc.tab.c"
    break;

  case 118: /* if_stmt: if_expr single_stmt ELSE if_stmt  */
#line 1145 "yacc.y"
                                       {rflag = false;}
#line 2919 "yacc.tab.c"
    break;

  case 119: /* if_stmt: if_expr LCB statements RCB ELSE LCB statements RCB  */
#line 1146 "yacc.y"
                                                         {rflag = false;}
#line 2925 "yacc.tab.c"
    break;

  case 120: /* if_stmt: if_expr single_stmt ELSE LCB statements RCB  */
#line 1147 "yacc.y"
                                                  {rflag = false;}
#line 2931 "yacc.tab.c"
    break;

  case 121: /* if_stmt: if_expr LCB statements RCB ELSE single_stmt  */
#line 1148 "yacc.y"
                                                  {rflag = false;}
#line 2937 "yacc.tab.c"
    break;

  case 122: /* if_stmt: if_expr single_stmt ELSE single_stmt  */
#line 1149 "yacc.y"
                                           {rflag = false;}
#line 2943 "yacc.tab.c"
    break;

  case 123: /* if_expr: IF LPB nested_expr RPB  */
#line 1153 "yacc.y"
                                {
        if((yyvsp[-1].exprs).type != 3 && (yyvsp[-1].exprs).type != 0){
            printf("Error: If condition must be bool\n");
            YYABORT;
        }
        rflag = false;
    }
#line 2955 "yacc.tab.c"
    break;

  case 124: /* $@8: %empty  */
#line 1164 "yacc.y"
                                                      {scope++;}
#line 2961 "yacc.tab.c"
    break;

  case 125: /* for_stmt: for_exp expr_stmt_without_semicolon RPB LCB $@8 statements RCB  */
#line 1164 "yacc.y"
                                                                                {scope--;rflag = false;}
#line 2967 "yacc.tab.c"
    break;

  case 126: /* for_stmt: for_exp expr_stmt_without_semicolon RPB single_stmt  */
#line 1165 "yacc.y"
                                                          {rflag = false;}
#line 2973 "yacc.tab.c"
    break;

  case 127: /* for_exp: FOR LPB decl_stmt nested_expr SEMICOLON  */
#line 1169 "yacc.y"
                                                 {
        if((yyvsp[-1].exprs).type != 3 && (yyvsp[-1].exprs).type != 0){
            printf("Error: For condition must be bool\n");
            YYABORT;
        }
    }
#line 2984 "yacc.tab.c"
    break;

  case 128: /* for_exp: FOR LPB expr_stmt nested_expr SEMICOLON  */
#line 1175 "yacc.y"
                                              {
        if((yyvsp[-1].exprs).type != 3 && (yyvsp[-1].exprs).type != 0){
            printf("Error: For condition must be bool\n");
            YYABORT;
        }
    }
#line 2995 "yacc.tab.c"
    break;

  case 129: /* $@9: %empty  */
#line 1184 "yacc.y"
                          {scope++;}
#line 3001 "yacc.tab.c"
    break;

  case 130: /* while_stmt: while_exp LCB $@9 statements RCB  */
#line 1184 "yacc.y"
                                                    {scope--;rflag = false;}
#line 3007 "yacc.tab.c"
    break;

  case 131: /* while_stmt: while_exp single_stmt  */
#line 1185 "yacc.y"
                            {rflag = false;}
#line 3013 "yacc.tab.c"
    break;

  case 132: /* while_exp: WHILE LPB nested_expr RPB  */
#line 1189 "yacc.y"
                                     {
        if((yyvsp[-1].exprs).type != 3 && (yyvsp[-1].exprs).type != 0){
            printf("Error: While condition must be bool\n");
            YYABORT;
        }
    }
#line 3024 "yacc.tab.c"
    break;

  case 134: /* call: IDENTIFIER LPB call_args RPB  */
#line 1202 "yacc.y"
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
#line 3042 "yacc.tab.c"
    break;

  case 135: /* call: class_identifier LPB call_args RPB  */
#line 1215 "yacc.y"
                                         {
        int *a = (int*) malloc(sizeof(int)), *b = (int*) malloc(sizeof(int));
        struct idrec *entry = lookup(global_table, local_table, (yyvsp[-3].class_id).namelist -> head -> val);
        if(entry == NULL)
        {
            entry = lookup(params, members, (yyvsp[-3].class_id).namelist -> head -> val);
            if(entry == NULL)
            {
                printf("Error: Variable %s not declared\n", (yyvsp[-3].class_id).namelist -> head -> val);
                YYABORT;
            }
        }
        if(entry -> type < 7)
        {
            printf("Error: Variable %s is not a class\n", (yyvsp[-3].class_id).namelist -> head -> val);
            YYABORT;
        }
        struct classrec *class = search_classtab(class_table, entry -> class_name);
        if(check_member_method((yyvsp[-3].class_id).namelist -> head -> next -> val, (yyvsp[-3].class_id).namelist -> head -> next -> next, class_table, class, (yyvsp[-1].functions).params, (yyvsp[-1].functions).num_params, a, b) == false)
        {
            YYABORT;
        }
        // if(check_namelist($1.namelist, global_table, local_table, class_table, $3.params, $3.num_params, a, b) == false)
        // {
        //     YYABORT;
        // }
        (yyval.exprs).type = *a;
        (yyval.exprs).dim = *b;
    }
#line 3076 "yacc.tab.c"
    break;

  case 136: /* call_args: call_args COMMA nested_expr  */
#line 1247 "yacc.y"
                                       {
        (yyval.functions).params = (yyvsp[-2].functions).params;
        struct idrec *entry = (struct idrec*) malloc(sizeof(struct idrec));
        entry -> type = (yyvsp[0].exprs).type;
        entry -> dim = (yyvsp[0].exprs).dim;
        insert_symtab((yyval.functions).params, entry);
        (yyval.functions).num_params = (yyvsp[-2].functions).num_params + 1;
    }
#line 3089 "yacc.tab.c"
    break;

  case 137: /* call_args: nested_expr  */
#line 1255 "yacc.y"
                  {
        (yyval.functions).params = init_symtab();
        struct idrec *entry = (struct idrec*) malloc(sizeof(struct idrec));
        entry -> type = (yyvsp[0].exprs).type;
        entry -> dim = (yyvsp[0].exprs).dim;
        insert_symtab((yyval.functions).params, entry);
        (yyval.functions).num_params = 1;
    }
#line 3102 "yacc.tab.c"
    break;

  case 138: /* call_args: %empty  */
#line 1263 "yacc.y"
      {
        (yyval.functions).params = init_symtab();
        (yyval.functions).num_params = 0;
    }
#line 3111 "yacc.tab.c"
    break;

  case 139: /* return_stmt: RETURN SEMICOLON  */
#line 1269 "yacc.y"
                              {
        if(return_type != 4)
        {
            printf("Error: Mismatch in return type\n");
            printf("Returned void while function returns %s\n", map_type[return_type]);
            YYABORT;
        }
        rflag = true;
    }
#line 3125 "yacc.tab.c"
    break;

  case 140: /* return_stmt: RETURN nested_expr SEMICOLON  */
#line 1278 "yacc.y"
                                   {
        if(return_type != (yyvsp[-1].exprs).type)
        {
            printf("Error: Mismatch in return type\n");
            printf("Returned %s while function returns %s\n", map_type[(yyvsp[-1].exprs).type], map_type[return_type]);
            YYABORT;
        }
        rflag = true;
    }
#line 3139 "yacc.tab.c"
    break;

  case 141: /* list: LIST dim COLON data_type_pr  */
#line 1291 "yacc.y"
                                  {
        (yyval.list).type = (yyvsp[0].type);
        (yyval.list).dim = (yyvsp[-2].list).dim;
        (yyval.list).class_name = NULL;
    }
#line 3149 "yacc.tab.c"
    break;

  case 142: /* $@10: %empty  */
#line 1296 "yacc.y"
                     {lflag = 0;}
#line 3155 "yacc.tab.c"
    break;

  case 143: /* list: LIST dim COLON $@10 data_type_new  */
#line 1296 "yacc.y"
                                                {
        (yyval.list).type = (yyvsp[0].type);
        (yyval.list).dim = (yyvsp[-3].list).dim;
        (yyval.list).class_name = map_type[(yyvsp[0].type)];
    }
#line 3165 "yacc.tab.c"
    break;

  case 144: /* $@11: %empty  */
#line 1301 "yacc.y"
                     {lflag = 0;}
#line 3171 "yacc.tab.c"
    break;

  case 145: /* list: LIST dim COLON $@11 IDENTIFIER  */
#line 1301 "yacc.y"
                                             {
        if(search_classtab(class_table, (yyvsp[0].id).name) == NULL)
        {
            printf("Error: Class %s not declared\n", (yyvsp[0].id).name);
            YYABORT;
        }
        (yyval.list).type = 14;
        (yyval.list).class_name = (yyvsp[0].id).name;
        (yyval.list).dim = (yyvsp[-3].list).dim;
    }
#line 3186 "yacc.tab.c"
    break;

  case 146: /* list_literal: LCB list_terminal RCB  */
#line 1314 "yacc.y"
                                     {
        (yyval.list).type = (yyvsp[-1].list).type;
        (yyval.list).dim = (yyvsp[-1].list).dim+1;
    }
#line 3195 "yacc.tab.c"
    break;

  case 147: /* list_terminal: nested_expr  */
#line 1321 "yacc.y"
                           {
        (yyval.list).type = (yyvsp[0].exprs).type;
        if((yyvsp[0].exprs).type == 5){
            (yyval.list).dim = (yyvsp[0].exprs).dim;
        }
        else{
            (yyval.list).dim = 0;
        }
    }
#line 3209 "yacc.tab.c"
    break;

  case 148: /* list_terminal: list_terminal COMMA nested_expr  */
#line 1330 "yacc.y"
                                      {
        if((yyvsp[-2].list).type != (yyvsp[0].exprs).type){
            printf("Error: Type mismatch in list terminal\n");
            YYABORT;
        }
        (yyval.list).type = (yyvsp[-2].list).type;
        (yyval.list).dim = (yyvsp[-2].list).dim;
    }
#line 3222 "yacc.tab.c"
    break;

  case 149: /* dim: LSB nested_expr RSB dim  */
#line 1341 "yacc.y"
                             {
        if((yyvsp[-2].exprs).type != 0){
            printf("Error: Array size must be an integer\n");
            YYABORT;
        }
        (yyval.list).dim = (yyvsp[0].list).dim + 1;
    }
#line 3234 "yacc.tab.c"
    break;

  case 150: /* dim: LSB nested_expr RSB  */
#line 1348 "yacc.y"
                          {
        if((yyvsp[-1].exprs).type != 0){
            printf("Error: Array size must be an integer\n");
            YYABORT;
        }
        (yyval.list).dim = 1;
    }
#line 3246 "yacc.tab.c"
    break;

  case 151: /* dim: empty_dim  */
#line 1355 "yacc.y"
                {
        (yyval.list).dim = (yyvsp[0].list).dim;
    }
#line 3254 "yacc.tab.c"
    break;

  case 152: /* empty_dim: empty_dim LSB RSB  */
#line 1360 "yacc.y"
                             {
        (yyval.list).dim = (yyvsp[-2].list).dim + 1;
    }
#line 3262 "yacc.tab.c"
    break;

  case 153: /* empty_dim: LSB RSB  */
#line 1363 "yacc.y"
              {
        (yyval.list).dim = 1;
    }
#line 3270 "yacc.tab.c"
    break;

  case 154: /* identifier: IDENTIFIER  */
#line 1368 "yacc.y"
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
#line 3287 "yacc.tab.c"
    break;

  case 155: /* identifier: IDENTIFIER dim  */
#line 1380 "yacc.y"
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
#line 3306 "yacc.tab.c"
    break;

  case 156: /* class_identifier: IDENTIFIER DOT IDENTIFIER  */
#line 1397 "yacc.y"
                                             {
        (yyval.class_id).namelist = init_slist();
        insert_slist((yyval.class_id).namelist, (yyvsp[-2].id).name);
        insert_slist((yyval.class_id).namelist, (yyvsp[0].id).name);   
    }
#line 3316 "yacc.tab.c"
    break;

  case 157: /* class_identifier: IDENTIFIER DOT class_identifier  */
#line 1402 "yacc.y"
                                      {
        struct snode* temp = (struct snode*) malloc(sizeof(struct snode));
        temp -> val = (yyvsp[-2].id).name;
        temp -> next = (yyvsp[0].class_id).namelist -> head;
        (yyvsp[0].class_id).namelist -> head = temp;
        (yyval.class_id).namelist = (yyvsp[0].class_id).namelist;        
    }
#line 3328 "yacc.tab.c"
    break;

  case 158: /* class_identifier: IDENTIFIER DOT IDENTIFIER dim  */
#line 1409 "yacc.y"
                                    {
        (yyval.class_id).namelist = init_slist();
        insert_slist((yyval.class_id).namelist, (yyvsp[-3].id).name);
        insert_slist((yyval.class_id).namelist, (yyvsp[-1].id).name);   
    }
#line 3338 "yacc.tab.c"
    break;

  case 159: /* class_identifier: IDENTIFIER dim DOT IDENTIFIER  */
#line 1414 "yacc.y"
                                    {
        (yyval.class_id).namelist = init_slist();
        insert_slist((yyval.class_id).namelist, (yyvsp[-3].id).name);
        insert_slist((yyval.class_id).namelist, (yyvsp[0].id).name);   
    }
#line 3348 "yacc.tab.c"
    break;

  case 160: /* class_identifier: IDENTIFIER dim DOT IDENTIFIER dim  */
#line 1419 "yacc.y"
                                        {
        (yyval.class_id).namelist = init_slist();
        insert_slist((yyval.class_id).namelist, (yyvsp[-4].id).name);
        insert_slist((yyval.class_id).namelist, (yyvsp[-1].id).name);   
    }
#line 3358 "yacc.tab.c"
    break;

  case 165: /* arith_op: ADD  */
#line 1438 "yacc.y"
              {(yyval.op_type) = 0;}
#line 3364 "yacc.tab.c"
    break;

  case 166: /* arith_op: SUB  */
#line 1439 "yacc.y"
          {(yyval.op_type) = 1;}
#line 3370 "yacc.tab.c"
    break;

  case 167: /* arith_op: MUL  */
#line 1440 "yacc.y"
          {(yyval.op_type) = 2;}
#line 3376 "yacc.tab.c"
    break;

  case 168: /* arith_op: DIV  */
#line 1441 "yacc.y"
          {(yyval.op_type) = 3;}
#line 3382 "yacc.tab.c"
    break;

  case 169: /* arith_op: MOD  */
#line 1442 "yacc.y"
          {(yyval.op_type) = 4;}
#line 3388 "yacc.tab.c"
    break;

  case 170: /* data_type_new: DOCUMENT  */
#line 1446 "yacc.y"
                       { (yyval.type) = 12;}
#line 3394 "yacc.tab.c"
    break;

  case 171: /* data_type_new: TEAM  */
#line 1447 "yacc.y"
           { (yyval.type) = 7;}
#line 3400 "yacc.tab.c"
    break;

  case 172: /* data_type_new: MEMBERS  */
#line 1448 "yacc.y"
              { (yyval.type) = 8;}
#line 3406 "yacc.tab.c"
    break;

  case 173: /* data_type_new: TASK  */
#line 1449 "yacc.y"
            { (yyval.type) = 9;}
#line 3412 "yacc.tab.c"
    break;

  case 174: /* data_type_new: EVENT  */
#line 1450 "yacc.y"
            { (yyval.type) = 10;}
#line 3418 "yacc.tab.c"
    break;

  case 175: /* data_type_new: MEETING  */
#line 1451 "yacc.y"
               { (yyval.type) = 11;}
#line 3424 "yacc.tab.c"
    break;

  case 176: /* data_type_new: CALENDAR  */
#line 1452 "yacc.y"
               { (yyval.type) = 13;}
#line 3430 "yacc.tab.c"
    break;

  case 177: /* data_type_pr: INT  */
#line 1456 "yacc.y"
                   { (yyval.type) = 0;}
#line 3436 "yacc.tab.c"
    break;

  case 178: /* data_type_pr: STRING  */
#line 1457 "yacc.y"
             { (yyval.type) = 2;}
#line 3442 "yacc.tab.c"
    break;

  case 179: /* data_type_pr: BOOL  */
#line 1458 "yacc.y"
            { (yyval.type) = 3;}
#line 3448 "yacc.tab.c"
    break;

  case 180: /* data_type_pr: FLOAT  */
#line 1459 "yacc.y"
            { (yyval.type) = 1;}
#line 3454 "yacc.tab.c"
    break;


#line 3458 "yacc.tab.c"

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

#line 1462 "yacc.y"



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
