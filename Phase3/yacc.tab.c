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


#line 101 "yacc.tab.c"

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
  YYSYMBOL_class_function = 74,            /* class_function  */
  YYSYMBOL_75_4 = 75,                      /* $@4  */
  YYSYMBOL_class_function_dec = 76,        /* class_function_dec  */
  YYSYMBOL_class_decl_stmt = 77,           /* class_decl_stmt  */
  YYSYMBOL_statements = 78,                /* statements  */
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
  YYSYMBOL_for_stmt = 91,                  /* for_stmt  */
  YYSYMBOL_while_stmt = 92,                /* while_stmt  */
  YYSYMBOL_call_stmt = 93,                 /* call_stmt  */
  YYSYMBOL_call = 94,                      /* call  */
  YYSYMBOL_call_args = 95,                 /* call_args  */
  YYSYMBOL_return_stmt = 96,               /* return_stmt  */
  YYSYMBOL_list = 97,                      /* list  */
  YYSYMBOL_list_literal = 98,              /* list_literal  */
  YYSYMBOL_list_terminal = 99,             /* list_terminal  */
  YYSYMBOL_dim = 100,                      /* dim  */
  YYSYMBOL_identifier = 101,               /* identifier  */
  YYSYMBOL_conj = 102,                     /* conj  */
  YYSYMBOL_set_op = 103,                   /* set_op  */
  YYSYMBOL_arith_op = 104,                 /* arith_op  */
  YYSYMBOL_data_type_new = 105,            /* data_type_new  */
  YYSYMBOL_data_type_pr = 106              /* data_type_pr  */
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
#define YYLAST   1120

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  56
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  51
/* YYNRULES -- Number of rules.  */
#define YYNRULES  156
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  319

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
       0,    86,    86,    86,    99,    99,   115,   118,   122,   126,
     129,   130,   131,   132,   137,   141,   145,   146,   151,   151,
     167,   187,   206,   207,   225,   229,   233,   237,   244,   252,
     260,   272,   277,   294,   302,   303,   304,   307,   307,   323,
     342,   360,   361,   379,   383,   400,   418,   435,   440,   444,
     448,   453,   456,   459,   462,   465,   468,   471,   474,   477,
     478,   482,   483,   488,   498,   499,   500,   501,   507,   524,
     541,   542,   546,   550,   551,   552,   560,   564,   565,   566,
     570,   571,   572,   573,   574,   575,   579,   580,   581,   582,
     583,   589,   592,   595,   598,   601,   604,   605,   606,   607,
     608,   614,   615,   616,   617,   618,   619,   620,   621,   627,
     628,   629,   630,   634,   635,   640,   644,   649,   650,   651,
     655,   656,   662,   663,   664,   668,   672,   673,   677,   678,
     679,   680,   684,   691,   695,   699,   703,   710,   711,   715,
     716,   720,   721,   722,   723,   724,   728,   729,   730,   731,
     732,   733,   734,   738,   739,   740,   741
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
  "class", "class_dec", "class_stmt", "class_function", "$@4",
  "class_function_dec", "class_decl_stmt", "statements", "statement",
  "ids", "unary_stmt", "single_stmt", "decl_stmt", "id_list", "expr_stmt",
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

#define YYPACT_NINF (-292)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-3)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -37,    60,    -6,   833,  -292,    85,   396,  -292,    41,  -292,
    -292,  -292,  -292,    52,    67,  -292,  -292,  -292,  -292,  -292,
    -292,  -292,    81,    90,  -292,   833,  -292,   833,  -292,   833,
     116,   833,   135,   142,   145,  -292,  -292,  -292,  -292,   153,
     269,    72,   -26,    54,   170,  -292,  -292,   196,  -292,   799,
    -292,   -21,   102,   -17,   107,   -11,   154,  1050,  -292,  -292,
    -292,  -292,    91,    -4,   156,  -292,   852,   852,  -292,   177,
    -292,  1071,  -292,  -292,   -19,   353,  1064,   852,  1050,  -292,
     182,  -292,  -292,   201,   203,   199,   799,  -292,   799,   205,
     210,   213,  1050,  -292,  1050,  -292,  1050,  -292,   214,   -35,
    -292,   218,   220,   222,   852,  -292,   168,     0,   168,  -292,
       4,   217,  -292,  -292,  -292,  -292,  -292,  -292,   852,  -292,
    -292,  -292,  -292,   852,   852,   852,  -292,   852,  -292,   223,
    -292,  -292,  -292,  -292,    21,   246,   850,   450,   234,    10,
     162,  -292,  -292,   237,  -292,    25,   176,    37,   178,    66,
     187,    73,    96,    99,  -292,  -292,  1050,  -292,  -292,  -292,
     235,  -292,   168,  -292,  -292,   852,  1085,  -292,  -292,  -292,
    -292,  -292,   100,  -292,  -292,   852,   243,   238,  -292,   243,
     243,   243,   339,   241,   248,   249,    77,  -292,  -292,  -292,
     244,  -292,  -292,  -292,  -292,   251,  -292,  -292,  -292,  -292,
     252,  -292,     6,  1050,  1050,  -292,  -292,  1050,  -292,  1050,
    -292,  1050,  -292,  -292,  -292,  -292,  -292,  -292,  -292,  -292,
     852,   852,   852,   852,  -292,   852,  -292,   259,  -292,  -292,
     260,  1037,   852,   852,   492,  -292,    76,  -292,  -292,   852,
     852,   168,   112,   117,   534,   120,   148,   151,  -292,  -292,
    -292,  -292,  -292,  -292,   852,   852,   111,   264,   272,  -292,
     268,   256,  -292,  -292,   273,  -292,  -292,  -292,  -292,  -292,
    -292,   275,   283,   939,   952,  -292,  -292,  -292,   168,   168,
    -292,  -292,  -292,  -292,  -292,    83,  -292,   294,   288,   293,
     576,   168,   618,   890,   988,  1001,  -292,   298,   302,  -292,
    -292,  -292,  -292,  -292,  -292,  -292,  -292,   903,   660,   702,
     744,  -292,  -292,  -292,  -292,  -292,  -292,   786,  -292
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,     0,    13,     1,     0,    13,     7,     0,   153,
     154,   155,   156,     0,     0,   146,   147,   148,   149,   150,
     151,   152,     0,     0,     5,    13,    14,    13,    18,    13,
       0,    13,     0,     0,     0,     8,     6,     3,    33,     0,
       0,     0,    75,     0,     0,    11,    10,     0,    12,    36,
       9,    75,     0,    75,     0,    75,     0,    27,    92,    94,
      95,    93,     0,   132,     0,   131,     0,     0,    91,     0,
      85,    90,    96,   100,    99,     0,     0,     0,    27,    70,
       0,    17,    50,     0,     0,     0,    36,    37,    36,     0,
       0,     0,    27,    71,    27,    68,    27,    69,     0,     0,
      26,     0,     0,     0,     0,    98,     0,   134,     0,   126,
       0,     0,   129,   141,   142,   143,   144,   145,     0,   137,
     138,   139,   140,     0,     0,     0,    63,   119,   130,     0,
     124,   123,   122,    73,     0,    72,     0,     0,     0,    75,
       0,    32,    34,     0,    35,    75,     0,    75,     0,    75,
       0,     0,     0,     0,    30,    23,     0,    31,    28,    29,
       0,   133,     0,   136,   125,     0,    80,    87,    86,    89,
      88,   118,     0,   128,    22,     0,     0,     0,    16,     0,
       0,     0,     0,     0,     0,     0,   132,    50,    19,    58,
       0,    49,    79,    51,    57,     0,    52,    53,    54,    56,
       0,    55,     0,    27,    27,    46,    50,    27,    47,    27,
      44,    27,    45,    24,    20,    21,    25,    97,   135,   127,
       0,     0,     0,     0,   116,     0,    74,    75,    15,   120,
       0,     0,     0,     0,     0,    62,     0,    76,   115,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    82,    81,
      84,    83,   117,   121,     0,     0,     0,     0,     0,    48,
       0,     0,    77,    78,     0,    42,    41,    38,    43,    39,
      40,     0,     0,     0,     0,    60,    61,    59,     0,     0,
      50,   114,    64,    66,    65,     0,    50,   102,     0,     0,
       0,     0,     0,     0,     0,     0,   113,     0,   101,    50,
     108,   104,    50,   110,    50,   112,    67,     0,     0,     0,
       0,    50,   107,   103,   106,   109,   111,     0,   105
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -292,  -292,  -292,  -292,  -292,   301,    53,  -292,  -292,  -292,
    -292,  -292,  -292,    94,   191,  -292,  -292,   119,  -292,  -292,
    -292,  -292,  -115,  -292,  -292,  -116,  -200,    -3,   -27,  -208,
     -41,   202,  -292,  -292,  -291,  -292,  -292,  -263,    44,  -292,
    -292,   236,  -292,  -292,   334,   -61,   183,   184,   189,    12,
      48
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     1,     2,     3,     6,     7,    24,    25,    26,   136,
      27,    47,    28,    99,   100,    29,    30,    85,    86,   143,
      87,    88,   137,   191,   236,    68,   281,   193,    43,   194,
     195,    69,    70,    71,   196,   197,   198,   199,    72,   172,
     201,   179,    73,   110,   107,    74,   123,   124,   125,   180,
     181
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      31,   105,   301,    31,    77,    52,    54,    56,   126,    77,
     284,   284,   155,    77,   156,    33,   313,    -2,    33,    77,
      78,   192,    31,   255,    31,    92,    31,   127,    31,    94,
     284,   284,   284,   126,   239,    96,   240,    33,    40,    33,
      77,    33,    75,    33,   284,   161,   106,   163,     5,   164,
     162,    34,   127,   165,    34,    77,   204,   140,   241,    37,
       4,    90,   146,   148,   150,   283,   283,    77,   174,   102,
     156,   207,   234,    34,   287,    34,   202,    34,    45,    34,
      46,    38,    48,   209,    50,   283,   283,   283,   131,    35,
     102,   244,    39,   300,   303,   305,    77,    91,    90,   283,
      90,   218,    79,    80,   102,   103,   102,   312,   102,    40,
     126,   239,   211,   240,    75,   192,   260,   227,   192,    40,
     213,    42,   156,    76,   132,   261,   103,   106,   192,   127,
      44,    63,    64,   178,    91,   291,    91,   104,   126,   239,
     103,   240,   103,   214,   103,   156,   215,   224,   156,   225,
      93,    80,    52,    54,    56,    95,    80,   192,   192,   265,
      49,   156,   192,   192,   266,   290,   156,   268,   102,   156,
     256,   292,   134,   202,   192,    51,   192,   192,   192,   192,
     264,   200,    53,   202,   308,    55,   151,   309,   152,   310,
     153,   192,   192,   192,   192,   269,   317,   156,   270,    57,
     156,   192,    97,    80,   103,   142,   108,   144,    63,    64,
     205,    80,   285,   285,    81,   102,   102,   256,   256,   102,
     112,   102,   135,   102,   208,    80,   210,    80,   254,   202,
     297,   202,   285,   285,   285,   212,    80,   288,   289,    32,
      82,   138,    32,   139,   141,   145,   285,   202,   202,   202,
     147,   103,   103,   149,   154,   103,   202,   103,   157,   103,
     158,    32,   159,    32,   166,    32,   173,    32,   109,   111,
     282,   282,    58,    59,    60,    61,   175,   129,   200,   133,
     203,   206,   217,   227,   235,    89,   228,   231,   200,    77,
     282,   282,   282,   101,   232,   233,   276,   242,   243,   237,
     238,   245,    62,   246,   282,   247,   160,    36,   253,    63,
      64,   273,    65,    66,   101,    67,   275,   200,   200,   274,
     167,   277,    89,   278,    89,   168,   169,   170,   101,   171,
     101,   279,   101,   293,   200,   294,   200,   200,   200,   200,
     295,   307,    58,    59,    60,    61,   306,   216,    41,   221,
     222,   200,   200,   200,   200,   223,    58,    59,    60,    61,
       0,   200,     0,     0,     0,     0,     0,   219,     0,     0,
       0,     0,    62,     0,     0,     0,     0,   226,     0,    63,
      64,     0,     0,    66,   230,    67,    62,   229,     0,     0,
       0,     0,   101,    63,    64,     0,   128,    66,     0,    67,
       0,     0,     0,     8,     0,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,     0,     0,
       0,     0,   248,   249,   250,   251,     0,   252,     0,     0,
       0,     0,     0,     0,   257,   258,    22,     0,     0,   101,
     101,   262,   263,   101,     0,   101,     0,   101,     0,    23,
       5,     0,     0,     0,     0,     0,   271,   272,   182,     9,
      10,    11,    12,     0,    14,    15,    16,    17,    18,    19,
      20,    21,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   183,   184,   185,     0,
     186,    64,     0,     0,   187,   188,     0,     0,   189,     0,
     182,     9,    10,    11,    12,   190,    14,    15,    16,    17,
      18,    19,    20,    21,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   183,   184,
     185,     0,   186,    64,     0,     0,   187,   259,     0,     0,
     189,     0,   182,     9,    10,    11,    12,   190,    14,    15,
      16,    17,    18,    19,    20,    21,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     183,   184,   185,     0,   186,    64,     0,     0,   187,   267,
       0,     0,   189,     0,   182,     9,    10,    11,    12,   190,
      14,    15,    16,    17,    18,    19,    20,    21,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   183,   184,   185,     0,   186,    64,     0,     0,
     187,   296,     0,     0,   189,     0,   182,     9,    10,    11,
      12,   190,    14,    15,    16,    17,    18,    19,    20,    21,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   183,   184,   185,     0,   186,    64,
       0,     0,   187,   298,     0,     0,   189,     0,   182,     9,
      10,    11,    12,   190,    14,    15,    16,    17,    18,    19,
      20,    21,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   183,   184,   185,     0,
     186,    64,     0,     0,   187,   314,     0,     0,   189,     0,
     182,     9,    10,    11,    12,   190,    14,    15,    16,    17,
      18,    19,    20,    21,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   183,   184,
     185,     0,   186,    64,     0,     0,   187,   315,     0,     0,
     189,     0,   182,     9,    10,    11,    12,   190,    14,    15,
      16,    17,    18,    19,    20,    21,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     183,   184,   185,     0,   186,    64,     0,     0,   187,   316,
       0,     0,   189,     0,   182,     9,    10,    11,    12,   190,
      14,    15,    16,    17,    18,    19,    20,    21,     9,    10,
      11,    12,    83,    14,    15,    16,    17,    18,    19,    20,
      21,     0,   183,   184,   185,     0,   186,    64,     0,     0,
     187,   318,     0,     0,   189,     0,     0,     0,     0,    84,
       8,   190,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    58,    59,    60,    61,     9,
      10,    11,    12,     0,    14,    15,    16,    17,    18,    19,
      20,    21,     0,    22,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    62,    23,     0,     0,     0,
     176,     0,    63,    64,     0,   177,    66,     0,    67,     9,
      10,    11,    12,     0,    14,    15,    16,    17,    18,    19,
      20,    21,     9,    10,    11,    12,     0,    14,    15,    16,
      17,    18,    19,    20,    21,     0,     0,     0,   185,     0,
     186,    64,     0,     0,   299,     0,     0,     0,     0,     0,
       0,   185,     0,   186,    64,     0,     0,   311,     9,    10,
      11,    12,     0,    14,    15,    16,    17,    18,    19,    20,
      21,     9,    10,    11,    12,     0,    14,    15,    16,    17,
      18,    19,    20,    21,     0,     0,     0,     0,     0,   186,
      64,     0,     0,   280,     0,     0,     0,     0,     0,     0,
       0,     0,   186,    64,     0,     0,   286,     9,    10,    11,
      12,     0,    14,    15,    16,    17,    18,    19,    20,    21,
       9,    10,    11,    12,     0,    14,    15,    16,    17,    18,
      19,    20,    21,     0,     0,     0,     0,     0,   186,    64,
       0,     0,   302,     0,     0,     0,     0,     0,     0,     0,
       0,   186,    64,     0,     0,   304,     9,    10,    11,    12,
       0,    14,    15,    16,    17,    18,    19,    20,    21,     9,
      10,    11,    12,     0,    14,    15,    16,    17,    18,    19,
      20,    21,     0,     9,    10,    11,    12,   186,    64,    15,
      16,    17,    18,    19,    20,    21,     0,     0,     0,     0,
      98,     0,     0,   113,   114,   115,   116,   117,     0,     0,
     118,     0,   119,   120,   130,   121,   122,   113,   114,   115,
     116,   117,     0,     0,   220,     0,   119,   120,     0,   121,
     122
};

static const yytype_int16 yycheck[] =
{
       3,    62,   293,     6,    30,    32,    33,    34,    27,    30,
     273,   274,    47,    30,    49,     3,   307,    54,     6,    30,
      46,   137,    25,   231,    27,    46,    29,    46,    31,    46,
     293,   294,   295,    27,    28,    46,    30,    25,    42,    27,
      30,    29,    42,    31,   307,   106,    50,   108,    54,    45,
      50,     3,    46,    49,     6,    30,    46,    84,    52,     6,
       0,    49,    89,    90,    91,   273,   274,    30,    47,    57,
      49,    46,   187,    25,   274,    27,   137,    29,    25,    31,
      27,    40,    29,    46,    31,   293,   294,   295,    76,     4,
      78,   206,    40,   293,   294,   295,    30,    49,    86,   307,
      88,   162,    48,    49,    92,    57,    94,   307,    96,    42,
      27,    28,    46,    30,    42,   231,    40,    40,   234,    42,
      47,    40,    49,    51,    76,    49,    78,    50,   244,    46,
      40,    40,    41,   136,    86,    52,    88,    46,    27,    28,
      92,    30,    94,    47,    96,    49,    47,    47,    49,    49,
      48,    49,   179,   180,   181,    48,    49,   273,   274,    47,
      44,    49,   278,   279,    47,   280,    49,    47,   156,    49,
     231,   286,    78,   234,   290,    40,   292,   293,   294,   295,
     241,   137,    40,   244,   299,    40,    92,   302,    94,   304,
      96,   307,   308,   309,   310,    47,   311,    49,    47,    46,
      49,   317,    48,    49,   156,    86,    50,    88,    40,    41,
      48,    49,   273,   274,    44,   203,   204,   278,   279,   207,
      43,   209,    40,   211,    48,    49,    48,    49,   231,   290,
     291,   292,   293,   294,   295,    48,    49,   278,   279,     3,
      44,    40,     6,    40,    45,    40,   307,   308,   309,   310,
      40,   203,   204,    40,    40,   207,   317,   209,    40,   211,
      40,    25,    40,    27,    47,    29,    43,    31,    66,    67,
     273,   274,     3,     4,     5,     6,    30,    75,   234,    77,
      46,    44,    47,    40,    40,    49,    48,    46,   244,    30,
     293,   294,   295,    57,    46,    46,    40,   203,   204,    48,
      48,   207,    33,   209,   307,   211,   104,     6,    48,    40,
      41,    47,    43,    44,    78,    46,    48,   273,   274,    47,
     118,    48,    86,    48,    88,   123,   124,   125,    92,   127,
      94,    48,    96,    39,   290,    47,   292,   293,   294,   295,
      47,    39,     3,     4,     5,     6,    48,   156,    14,   166,
     166,   307,   308,   309,   310,   166,     3,     4,     5,     6,
      -1,   317,    -1,    -1,    -1,    -1,    -1,   165,    -1,    -1,
      -1,    -1,    33,    -1,    -1,    -1,    -1,   175,    -1,    40,
      41,    -1,    -1,    44,   182,    46,    33,    48,    -1,    -1,
      -1,    -1,   156,    40,    41,    -1,    43,    44,    -1,    46,
      -1,    -1,    -1,     7,    -1,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    -1,    -1,
      -1,    -1,   220,   221,   222,   223,    -1,   225,    -1,    -1,
      -1,    -1,    -1,    -1,   232,   233,    40,    -1,    -1,   203,
     204,   239,   240,   207,    -1,   209,    -1,   211,    -1,    53,
      54,    -1,    -1,    -1,    -1,    -1,   254,   255,     8,     9,
      10,    11,    12,    -1,    14,    15,    16,    17,    18,    19,
      20,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    36,    37,    38,    -1,
      40,    41,    -1,    -1,    44,    45,    -1,    -1,    48,    -1,
       8,     9,    10,    11,    12,    55,    14,    15,    16,    17,
      18,    19,    20,    21,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    36,    37,
      38,    -1,    40,    41,    -1,    -1,    44,    45,    -1,    -1,
      48,    -1,     8,     9,    10,    11,    12,    55,    14,    15,
      16,    17,    18,    19,    20,    21,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      36,    37,    38,    -1,    40,    41,    -1,    -1,    44,    45,
      -1,    -1,    48,    -1,     8,     9,    10,    11,    12,    55,
      14,    15,    16,    17,    18,    19,    20,    21,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    36,    37,    38,    -1,    40,    41,    -1,    -1,
      44,    45,    -1,    -1,    48,    -1,     8,     9,    10,    11,
      12,    55,    14,    15,    16,    17,    18,    19,    20,    21,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    36,    37,    38,    -1,    40,    41,
      -1,    -1,    44,    45,    -1,    -1,    48,    -1,     8,     9,
      10,    11,    12,    55,    14,    15,    16,    17,    18,    19,
      20,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    36,    37,    38,    -1,
      40,    41,    -1,    -1,    44,    45,    -1,    -1,    48,    -1,
       8,     9,    10,    11,    12,    55,    14,    15,    16,    17,
      18,    19,    20,    21,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    36,    37,
      38,    -1,    40,    41,    -1,    -1,    44,    45,    -1,    -1,
      48,    -1,     8,     9,    10,    11,    12,    55,    14,    15,
      16,    17,    18,    19,    20,    21,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      36,    37,    38,    -1,    40,    41,    -1,    -1,    44,    45,
      -1,    -1,    48,    -1,     8,     9,    10,    11,    12,    55,
      14,    15,    16,    17,    18,    19,    20,    21,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    -1,    36,    37,    38,    -1,    40,    41,    -1,    -1,
      44,    45,    -1,    -1,    48,    -1,    -1,    -1,    -1,    40,
       7,    55,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,     3,     4,     5,     6,     9,
      10,    11,    12,    -1,    14,    15,    16,    17,    18,    19,
      20,    21,    -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    53,    -1,    -1,    -1,
      40,    -1,    40,    41,    -1,    45,    44,    -1,    46,     9,
      10,    11,    12,    -1,    14,    15,    16,    17,    18,    19,
      20,    21,     9,    10,    11,    12,    -1,    14,    15,    16,
      17,    18,    19,    20,    21,    -1,    -1,    -1,    38,    -1,
      40,    41,    -1,    -1,    44,    -1,    -1,    -1,    -1,    -1,
      -1,    38,    -1,    40,    41,    -1,    -1,    44,     9,    10,
      11,    12,    -1,    14,    15,    16,    17,    18,    19,    20,
      21,     9,    10,    11,    12,    -1,    14,    15,    16,    17,
      18,    19,    20,    21,    -1,    -1,    -1,    -1,    -1,    40,
      41,    -1,    -1,    44,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    40,    41,    -1,    -1,    44,     9,    10,    11,
      12,    -1,    14,    15,    16,    17,    18,    19,    20,    21,
       9,    10,    11,    12,    -1,    14,    15,    16,    17,    18,
      19,    20,    21,    -1,    -1,    -1,    -1,    -1,    40,    41,
      -1,    -1,    44,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    40,    41,    -1,    -1,    44,     9,    10,    11,    12,
      -1,    14,    15,    16,    17,    18,    19,    20,    21,     9,
      10,    11,    12,    -1,    14,    15,    16,    17,    18,    19,
      20,    21,    -1,     9,    10,    11,    12,    40,    41,    15,
      16,    17,    18,    19,    20,    21,    -1,    -1,    -1,    -1,
      40,    -1,    -1,    22,    23,    24,    25,    26,    -1,    -1,
      29,    -1,    31,    32,    40,    34,    35,    22,    23,    24,
      25,    26,    -1,    -1,    29,    -1,    31,    32,    -1,    34,
      35
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    57,    58,    59,     0,    54,    60,    61,     7,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    40,    53,    62,    63,    64,    66,    68,    71,
      72,    83,    97,   105,   106,     4,    61,    62,    40,    40,
      42,   100,    40,    84,    40,    62,    62,    67,    62,    44,
      62,    40,    84,    40,    84,    40,    84,    46,     3,     4,
       5,     6,    33,    40,    41,    43,    44,    46,    81,    87,
      88,    89,    94,    98,   101,    42,    51,    30,    46,    48,
      49,    44,    44,    13,    40,    73,    74,    76,    77,    97,
     105,   106,    46,    48,    46,    48,    46,    48,    40,    69,
      70,    97,   105,   106,    46,   101,    50,   100,    50,    87,
      99,    87,    43,    22,    23,    24,    25,    26,    29,    31,
      32,    34,    35,   102,   103,   104,    27,    46,    43,    87,
      40,   105,   106,    87,    69,    40,    65,    78,    40,    40,
      84,    45,    73,    75,    73,    40,    84,    40,    84,    40,
      84,    69,    69,    69,    40,    47,    49,    40,    40,    40,
      87,   101,    50,   101,    45,    49,    47,    87,    87,    87,
      87,    87,    95,    43,    47,    30,    40,    45,    83,    97,
     105,   106,     8,    36,    37,    38,    40,    44,    45,    48,
      55,    79,    81,    83,    85,    86,    90,    91,    92,    93,
      94,    96,   101,    46,    46,    48,    44,    46,    48,    46,
      48,    46,    48,    47,    47,    47,    70,    47,   101,    87,
      29,   102,   103,   104,    47,    49,    87,    40,    48,    48,
      87,    46,    46,    46,    78,    40,    80,    48,    48,    28,
      30,    52,    69,    69,    78,    69,    69,    69,    87,    87,
      87,    87,    87,    48,    83,    85,   101,    87,    87,    45,
      40,    49,    87,    87,   101,    47,    47,    45,    47,    47,
      47,    87,    87,    47,    47,    48,    40,    48,    48,    48,
      44,    82,    83,    85,    93,   101,    44,    82,    86,    86,
      78,    52,    78,    39,    47,    47,    45,   101,    45,    44,
      82,    90,    44,    82,    44,    82,    48,    39,    78,    78,
      78,    44,    82,    90,    45,    45,    45,    78,    45
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    56,    58,    57,    59,    57,    60,    60,    61,    62,
      62,    62,    62,    62,    63,    64,    65,    65,    67,    66,
      68,    68,    68,    68,    68,    69,    69,    69,    70,    70,
      70,    70,    71,    72,    73,    73,    73,    75,    74,    76,
      76,    76,    76,    76,    77,    77,    77,    77,    78,    78,
      78,    79,    79,    79,    79,    79,    79,    79,    79,    79,
      79,    80,    80,    81,    82,    82,    82,    82,    83,    83,
      83,    83,    84,    84,    84,    84,    85,    86,    86,    86,
      87,    87,    87,    87,    87,    87,    88,    88,    88,    88,
      88,    89,    89,    89,    89,    89,    89,    89,    89,    89,
      89,    90,    90,    90,    90,    90,    90,    90,    90,    91,
      91,    91,    91,    92,    92,    93,    94,    95,    95,    95,
      96,    96,    97,    97,    97,    98,    99,    99,   100,   100,
     100,   100,   101,   101,   101,   101,   101,   102,   102,   103,
     103,   104,   104,   104,   104,   104,   105,   105,   105,   105,
     105,   105,   105,   106,   106,   106,   106
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     3,     0,     2,     2,     1,     2,     2,
       2,     2,     2,     0,     1,     6,     2,     0,     0,     5,
       5,     5,     5,     5,     5,     3,     1,     0,     2,     2,
       2,     2,     4,     2,     2,     2,     0,     0,     5,     5,
       5,     5,     5,     5,     3,     3,     3,     3,     4,     2,
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
#line 86 "yacc.y"
      {
        global_table = init_symtab();
        function_table = init_functab();
        class_table = init_classtab();
        local_table = NULL;
        members = NULL;
        methods = NULL;
    }
#line 1582 "yacc.tab.c"
    break;

  case 3: /* start: $@1 include_stmts code  */
#line 94 "yacc.y"
                       {
        display_symtab(global_table);
        display_functab(function_table);
        display_classtab(class_table);
    }
#line 1592 "yacc.tab.c"
    break;

  case 4: /* $@2: %empty  */
#line 99 "yacc.y"
      {
        global_table = init_symtab();
        function_table = init_functab();
        class_table = init_classtab();
        local_table = NULL;
        members = NULL;
        methods = NULL;

    }
#line 1606 "yacc.tab.c"
    break;

  case 5: /* start: $@2 code  */
#line 107 "yacc.y"
           {
        display_symtab(global_table);
        display_functab(function_table);
        display_classtab(class_table);
    }
#line 1616 "yacc.tab.c"
    break;

  case 6: /* include_stmts: include_stmts include_stmt  */
#line 115 "yacc.y"
                                          {

    }
#line 1624 "yacc.tab.c"
    break;

  case 9: /* code: decl_stmt code  */
#line 126 "yacc.y"
                     {
        (yyvsp[-1].stmt).scope = 0;
    }
#line 1632 "yacc.tab.c"
    break;

  case 13: /* code: %empty  */
#line 132 "yacc.y"
      {}
#line 1638 "yacc.tab.c"
    break;

  case 18: /* $@3: %empty  */
#line 151 "yacc.y"
                       {
            local_table = (yyvsp[0].functions).local_table;
        }
#line 1646 "yacc.tab.c"
    break;

  case 19: /* function: function_dec $@3 LCB statements RCB  */
#line 153 "yacc.y"
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
#line 1662 "yacc.tab.c"
    break;

  case 20: /* function_dec: data_type_new IDENTIFIER LPB function_params RPB  */
#line 167 "yacc.y"
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
            YYABORT;
        }
        (yyval.functions).type = (yyvsp[-4].type);
        (yyval.functions).name = (yyvsp[-3].id).name;
        (yyval.functions).params = (yyvsp[-1].functions).params;
        (yyval.functions).num_params = (yyvsp[-1].functions).num_params;
        (yyval.functions).local_table = init_symtab();
    }
#line 1687 "yacc.tab.c"
    break;

  case 21: /* function_dec: data_type_pr IDENTIFIER LPB function_params RPB  */
#line 187 "yacc.y"
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
            YYABORT;
        }
        (yyval.functions).type = (yyvsp[-4].type);
        (yyval.functions).name = (yyvsp[-3].id).name;
        (yyval.functions).params = (yyvsp[-1].functions).params;
        (yyval.functions).num_params = (yyvsp[-1].functions).num_params;
        (yyval.functions).local_table = init_symtab();
    }
#line 1711 "yacc.tab.c"
    break;

  case 23: /* function_dec: VOID IDENTIFIER LPB function_params RPB  */
#line 207 "yacc.y"
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
#line 1734 "yacc.tab.c"
    break;

  case 25: /* function_params: function_params COMMA function_param  */
#line 229 "yacc.y"
                                                      {
        (yyval.functions).params = (yyvsp[-2].functions).params;
        (yyval.functions).num_params = (yyvsp[-2].functions).num_params + 1;
    }
#line 1743 "yacc.tab.c"
    break;

  case 26: /* function_params: function_param  */
#line 233 "yacc.y"
                     {
        (yyval.functions).params = init_symtab();
        (yyval.functions).num_params = 1;
    }
#line 1752 "yacc.tab.c"
    break;

  case 27: /* function_params: %empty  */
#line 237 "yacc.y"
      {
        (yyval.functions).params = init_symtab();
        (yyval.functions).num_params = 0;
    }
#line 1761 "yacc.tab.c"
    break;

  case 28: /* function_param: data_type_new IDENTIFIER  */
#line 244 "yacc.y"
                                         {
        struct idrec *entry = (struct idrec *)malloc(sizeof(struct idrec));
        entry->name = (yyvsp[0].id).name;
        entry->type = (yyvsp[-1].type);
        entry->arr = false;
        entry->scope = 1;
        insert_symtab((yyval.functions).params, entry);
    }
#line 1774 "yacc.tab.c"
    break;

  case 29: /* function_param: data_type_pr IDENTIFIER  */
#line 252 "yacc.y"
                              {
        struct idrec *entry = (struct idrec *)malloc(sizeof(struct idrec));
        entry->name = (yyvsp[0].id).name;
        entry->type = (yyvsp[-1].type);
        entry->arr = false;
        entry->scope = 1;
        insert_symtab((yyval.functions).params, entry);
    }
#line 1787 "yacc.tab.c"
    break;

  case 30: /* function_param: IDENTIFIER IDENTIFIER  */
#line 260 "yacc.y"
                            {
        if(search_classtab(class_table, (yyvsp[-1].id).name) == NULL)
        {
            printf("Error: Class %s not declared\n", (yyvsp[-1].id).name);
        }
        struct idrec *entry = (struct idrec *)malloc(sizeof(struct idrec));
        entry->name = (yyvsp[0].id).name;
        entry->type = 14;
        entry->arr = false;
        entry->scope = 1;
        insert_symtab((yyval.functions).params, entry);
    }
#line 1804 "yacc.tab.c"
    break;

  case 31: /* function_param: list IDENTIFIER  */
#line 272 "yacc.y"
                      {}
#line 1810 "yacc.tab.c"
    break;

  case 32: /* class: class_dec LCB class_stmt RCB  */
#line 277 "yacc.y"
                                   {
        struct classrec *entry = (struct classrec *)malloc(sizeof(struct classrec));
        entry->name = (yyvsp[-3].id).name;
        entry->members = members;
        entry->methods = methods;
        entry->next = NULL;
        if(search_classtab(class_table, entry->name) != NULL)
        {
            printf("Error: Class %s already declared\n", entry->name);
        }
        insert_classtab(class_table, entry);
        members = NULL;
        methods = NULL;
}
#line 1829 "yacc.tab.c"
    break;

  case 33: /* class_dec: CLASS IDENTIFIER  */
#line 294 "yacc.y"
                            {
    (yyval.id).name = (yyvsp[0].id).name;
    members = init_symtab();
    methods = init_functab();
}
#line 1839 "yacc.tab.c"
    break;

  case 37: /* $@4: %empty  */
#line 307 "yacc.y"
                                  {
            local_table = (yyvsp[0].functions).local_table;
        }
#line 1847 "yacc.tab.c"
    break;

  case 38: /* class_function: class_function_dec $@4 LCB statements RCB  */
#line 309 "yacc.y"
                             {
        struct funcrec *entry = (struct funcrec*) malloc(sizeof(struct funcrec));
        entry->name = (yyvsp[-4].functions).name;
        entry->type = (yyvsp[-4].functions).type;
        entry->params = (yyvsp[-4].functions).params;
        entry->num_params = (yyvsp[-4].functions).num_params;
        entry->next = NULL;
        entry->local_table = (yyvsp[-4].functions).local_table;
        insert_functab(methods, entry);
        local_table = NULL;
    }
#line 1863 "yacc.tab.c"
    break;

  case 39: /* class_function_dec: data_type_new IDENTIFIER LPB function_params RPB  */
#line 323 "yacc.y"
                                                                     {
        struct funcrec *entry = (struct funcrec*) malloc(sizeof(struct funcrec));
        entry->name = (yyvsp[-3].id).name;
        entry->type = (yyvsp[-4].type);
        entry->params = (yyvsp[-1].functions).params;
        entry->num_params = (yyvsp[-1].functions).num_params;
        entry->next = NULL;
        entry->local_table = init_symtab();
        if(lookup_functab(methods, entry) != NULL)
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
#line 1887 "yacc.tab.c"
    break;

  case 40: /* class_function_dec: data_type_pr IDENTIFIER LPB function_params RPB  */
#line 342 "yacc.y"
                                                      {
        struct funcrec *entry = (struct funcrec *)malloc(sizeof(struct funcrec));
        entry->name = (yyvsp[-3].id).name;
        entry->type = (yyvsp[-4].type);
        entry->params = (yyvsp[-1].functions).params;
        entry->num_params = (yyvsp[-1].functions).num_params;
        entry->next = NULL;
        entry->local_table = init_symtab();
        if(lookup_functab(methods, entry) != NULL)
        {
            printf("Error: Function %s already declared\n", entry->name);
        }
        (yyval.functions).type = (yyvsp[-4].type);
        (yyval.functions).name = (yyvsp[-3].id).name;
        (yyval.functions).params = (yyvsp[-1].functions).params;
        (yyval.functions).num_params = (yyvsp[-1].functions).num_params;
        (yyval.functions).local_table = init_symtab();
    }
#line 1910 "yacc.tab.c"
    break;

  case 42: /* class_function_dec: VOID IDENTIFIER LPB function_params RPB  */
#line 361 "yacc.y"
                                              {
        struct funcrec *entry = (struct funcrec *)malloc(sizeof(struct funcrec));
        entry->name = (yyvsp[-3].id).name;
        entry->type = 4;
        entry->params = (yyvsp[-1].functions).params;
        entry->num_params = (yyvsp[-1].functions).num_params;
        entry->next = NULL;
        entry->local_table = init_symtab();
        if(lookup_functab(methods, entry) != NULL)
        {
            printf("Error: Function %s already declared\n", entry->name);
        }
        (yyval.functions).type = 4;
        (yyval.functions).name = (yyvsp[-3].id).name;
        (yyval.functions).params = (yyvsp[-1].functions).params;
        (yyval.functions).num_params = (yyvsp[-1].functions).num_params;
        (yyval.functions).local_table = init_symtab();
    }
#line 1933 "yacc.tab.c"
    break;

  case 44: /* class_decl_stmt: data_type_new id_list SEMICOLON  */
#line 383 "yacc.y"
                                                 {
        struct snode* temp = (yyvsp[-1].namelist)->head;
        while(temp != NULL){
            struct idrec *entry = (struct idrec *)malloc(sizeof(struct idrec));
            entry->type = (yyvsp[-2].type);
            entry->arr = false;
            entry->scope = 1; // we have to change scope according to nested loops
            entry->name = temp->val;
            if(lookup(members, members, entry->name) == NULL){
                insert_symtab(members, entry);
            }
            else{
                printf("Error: Variable %s already declared\n", entry->name);
            }
            temp = temp->next;
        }
    }
#line 1955 "yacc.tab.c"
    break;

  case 45: /* class_decl_stmt: data_type_pr id_list SEMICOLON  */
#line 400 "yacc.y"
                                    {
        
        struct snode* temp = (yyvsp[-1].namelist)->head;
        while(temp != NULL){
            struct idrec *entry = (struct idrec *)malloc(sizeof(struct idrec));
            entry->type = (yyvsp[-2].type);
            entry->arr = false;
            entry->scope = 1; // we have to change scope according to nested loops
            entry->name = temp->val;
            if(lookup(members, members ,entry->name) == NULL){
                insert_symtab(members, entry);
            }
            else{
                printf("Error: Variable %s already declared\n", entry->name);
            }
            temp = temp->next;
        } 
    }
#line 1978 "yacc.tab.c"
    break;

  case 46: /* class_decl_stmt: IDENTIFIER id_list SEMICOLON  */
#line 418 "yacc.y"
                                  {
        struct snode* temp = (yyvsp[-1].namelist)->head;
        while(temp != NULL){
            struct idrec *entry = (struct idrec *)malloc(sizeof(struct idrec));
            entry->type = 14;
            entry->arr = false;
            entry->scope = 1; // we have to change scope according to nested loops
            entry->name = temp->val;
            if(lookup(members, members ,entry->name) == NULL){
                insert_symtab(members, entry);
            }
            else{
                printf("Error: Variable %s already declared\n", entry->name);
            }
            temp = temp->next;
        }
    }
#line 2000 "yacc.tab.c"
    break;

  case 48: /* statements: statements LCB statements RCB  */
#line 440 "yacc.y"
                                           {
        (yyvsp[-3].stmt).scope = (yyval.stmt).scope;
        (yyvsp[-1].stmt).scope = (yyval.stmt).scope + 1;
    }
#line 2009 "yacc.tab.c"
    break;

  case 49: /* statements: statements statement  */
#line 444 "yacc.y"
                          {
        (yyvsp[-1].stmt).scope = (yyval.stmt).scope;
        (yyvsp[0].stmt).scope = (yyval.stmt).scope;
    }
#line 2018 "yacc.tab.c"
    break;

  case 50: /* statements: %empty  */
#line 448 "yacc.y"
      {
    }
#line 2025 "yacc.tab.c"
    break;

  case 51: /* statement: decl_stmt  */
#line 453 "yacc.y"
                     {
        (yyvsp[0].stmt).scope = (yyval.stmt).scope;
    }
#line 2033 "yacc.tab.c"
    break;

  case 52: /* statement: if_stmt  */
#line 456 "yacc.y"
              {

    }
#line 2041 "yacc.tab.c"
    break;

  case 53: /* statement: for_stmt  */
#line 459 "yacc.y"
               {

    }
#line 2049 "yacc.tab.c"
    break;

  case 54: /* statement: while_stmt  */
#line 462 "yacc.y"
                 {

    }
#line 2057 "yacc.tab.c"
    break;

  case 55: /* statement: return_stmt  */
#line 465 "yacc.y"
                  {

    }
#line 2065 "yacc.tab.c"
    break;

  case 56: /* statement: call_stmt  */
#line 468 "yacc.y"
                {

    }
#line 2073 "yacc.tab.c"
    break;

  case 57: /* statement: expr_stmt  */
#line 471 "yacc.y"
                {

    }
#line 2081 "yacc.tab.c"
    break;

  case 58: /* statement: SEMICOLON  */
#line 474 "yacc.y"
                {

    }
#line 2089 "yacc.tab.c"
    break;

  case 63: /* unary_stmt: identifier UNARY_OP  */
#line 488 "yacc.y"
                                {
        // check id in symbol table
        if((yyvsp[-1].type) != 0 || (yyvsp[-1].type) != 1){
            printf("Error: Unary operator not defined for this type\n"); //Why?
        }
        (yyval.type) = (yyvsp[-1].type);
    }
#line 2101 "yacc.tab.c"
    break;

  case 68: /* decl_stmt: data_type_new id_list SEMICOLON  */
#line 507 "yacc.y"
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
#line 2123 "yacc.tab.c"
    break;

  case 69: /* decl_stmt: data_type_pr id_list SEMICOLON  */
#line 524 "yacc.y"
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
    }
#line 2145 "yacc.tab.c"
    break;

  case 72: /* id_list: id_list COMMA IDENTIFIER  */
#line 546 "yacc.y"
                                 {
        insert_slist((yyvsp[-2].namelist), (yyvsp[0].id).name);
        (yyval.namelist) = (yyvsp[-2].namelist);
    }
#line 2154 "yacc.tab.c"
    break;

  case 75: /* id_list: IDENTIFIER  */
#line 552 "yacc.y"
                {
        (yyval.namelist) = init_slist();
        insert_slist((yyval.namelist), (yyvsp[0].id).name);   
    }
#line 2163 "yacc.tab.c"
    break;

  case 91: /* expr_terminal: unary_stmt  */
#line 589 "yacc.y"
                          {
        (yyval.type) = (yyvsp[0].type);
    }
#line 2171 "yacc.tab.c"
    break;

  case 92: /* expr_terminal: NUMBER  */
#line 592 "yacc.y"
            {
        (yyval.type) = 0;
    }
#line 2179 "yacc.tab.c"
    break;

  case 93: /* expr_terminal: DECIMAL  */
#line 595 "yacc.y"
             { 
        (yyval.type) = 1;
    }
#line 2187 "yacc.tab.c"
    break;

  case 94: /* expr_terminal: STRING_LITERAL  */
#line 598 "yacc.y"
                    {
        (yyval.type) = 2;    
    }
#line 2195 "yacc.tab.c"
    break;

  case 95: /* expr_terminal: BOOL_LITERAL  */
#line 601 "yacc.y"
                  {
        (yyval.type) = 3;
    }
#line 2203 "yacc.tab.c"
    break;

  case 132: /* identifier: IDENTIFIER  */
#line 684 "yacc.y"
                      {
        struct idrec *entry = lookup(global_table, global_table, (yyvsp[0].id).name);
        if(entry == NULL){
            printf("Error: Variable %s not declared\n", (yyvsp[0].id).name);
        }
        (yyval.type) = entry->type;
    }
#line 2215 "yacc.tab.c"
    break;

  case 133: /* identifier: IDENTIFIER DOT identifier  */
#line 691 "yacc.y"
                                {
        // IDENTIFIER is object ; identifier is member // check it in class implementation

    }
#line 2224 "yacc.tab.c"
    break;

  case 134: /* identifier: IDENTIFIER dim  */
#line 695 "yacc.y"
                     {


    }
#line 2233 "yacc.tab.c"
    break;

  case 135: /* identifier: IDENTIFIER dim DOT identifier  */
#line 699 "yacc.y"
                                    {


    }
#line 2242 "yacc.tab.c"
    break;

  case 136: /* identifier: SELF DOT identifier  */
#line 703 "yacc.y"
                          {
        
    }
#line 2250 "yacc.tab.c"
    break;

  case 146: /* data_type_new: DOCUMENT  */
#line 728 "yacc.y"
                       { (yyval.type) = 12;}
#line 2256 "yacc.tab.c"
    break;

  case 147: /* data_type_new: TEAM  */
#line 729 "yacc.y"
           { (yyval.type) = 7;}
#line 2262 "yacc.tab.c"
    break;

  case 148: /* data_type_new: MEMBERS  */
#line 730 "yacc.y"
              { (yyval.type) = 8;}
#line 2268 "yacc.tab.c"
    break;

  case 149: /* data_type_new: TASK  */
#line 731 "yacc.y"
            { (yyval.type) = 9;}
#line 2274 "yacc.tab.c"
    break;

  case 150: /* data_type_new: EVENT  */
#line 732 "yacc.y"
            { (yyval.type) = 10;}
#line 2280 "yacc.tab.c"
    break;

  case 151: /* data_type_new: MEETING  */
#line 733 "yacc.y"
               { (yyval.type) = 11;}
#line 2286 "yacc.tab.c"
    break;

  case 152: /* data_type_new: CALENDAR  */
#line 734 "yacc.y"
               { (yyval.type) = 13;}
#line 2292 "yacc.tab.c"
    break;

  case 153: /* data_type_pr: INT  */
#line 738 "yacc.y"
                   { (yyval.type) = 0;}
#line 2298 "yacc.tab.c"
    break;

  case 154: /* data_type_pr: STRING  */
#line 739 "yacc.y"
             { (yyval.type) = 2;}
#line 2304 "yacc.tab.c"
    break;

  case 155: /* data_type_pr: BOOL  */
#line 740 "yacc.y"
            { (yyval.type) = 3;}
#line 2310 "yacc.tab.c"
    break;

  case 156: /* data_type_pr: FLOAT  */
#line 741 "yacc.y"
            { (yyval.type) = 1;}
#line 2316 "yacc.tab.c"
    break;


#line 2320 "yacc.tab.c"

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

#line 744 "yacc.y"



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
