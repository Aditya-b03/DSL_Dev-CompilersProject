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

    char* map_type[] = {"int", "float", "string", "bool", "void", "list", "struct", "team", "member", "task", "event", "meeting", "document", "calendar", "class"};

    int scope;
    bool rflag;
    int return_type;


#line 107 "yacc.tab.c"

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
#define YYLAST   1018

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  55
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  58
/* YYNRULES -- Number of rules.  */
#define YYNRULES  174
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  342

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
       0,   105,   105,   105,   120,   120,   137,   138,   142,   146,
     147,   148,   149,   154,   159,   154,   180,   197,   215,   237,
     255,   277,   287,   292,   299,   310,   321,   338,   353,   371,
     380,   381,   382,   385,   390,   385,   411,   430,   449,   473,
     493,   515,   535,   557,   580,   605,   605,   606,   607,   611,
     612,   613,   614,   615,   616,   617,   618,   619,   620,   621,
     622,   623,   627,   628,   633,   644,   645,   646,   647,   648,
     649,   650,   655,   679,   703,   733,   760,   764,   769,   773,
     781,   785,   786,   787,   793,   794,   798,   802,   810,   814,
     818,   821,   828,   836,   844,   852,   860,   867,   871,   875,
     879,   883,   887,   891,   898,   905,   912,   916,   925,   933,
     934,   935,   936,   937,   938,   939,   940,   944,   955,   955,
     956,   960,   966,   975,   975,   976,   980,   989,   993,  1005,
    1026,  1033,  1040,  1046,  1055,  1068,  1072,  1076,  1088,  1095,
    1104,  1116,  1123,  1130,  1135,  1138,  1143,  1155,  1170,  1175,
    1183,  1188,  1193,  1198,  1212,  1230,  1231,  1235,  1236,  1240,
    1241,  1242,  1243,  1244,  1248,  1249,  1250,  1251,  1252,  1253,
    1254,  1258,  1259,  1260,  1261
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

#define YYPACT_NINF (-284)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-3)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
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

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
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

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     1,     2,     3,     6,     7,    23,    24,    43,   134,
      25,    95,    96,    26,    27,    81,    82,   140,   233,    83,
      84,   175,   249,   212,   251,    64,   254,   214,    41,   215,
     216,   158,    66,    67,   217,   218,   219,   332,   220,   221,
     292,   222,   223,    68,   159,   225,   226,    69,   109,   106,
      39,    70,    71,   122,   123,   124,   229,   230
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
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

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
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

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
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
#line 105 "yacc.y"
      {
        global_table = init_symtab();
        function_table = init_functab();
        class_table = init_classtab();
        params = NULL;
        local_table = NULL;
        members = NULL;
        methods = NULL;
        scope = 0;
    }
#line 1588 "yacc.tab.c"
    break;

  case 3: /* start: $@1 include_stmts code  */
#line 115 "yacc.y"
                       {
        free_symtab(global_table);
        free_functab(function_table);
        free_classtab(class_table);
    }
#line 1598 "yacc.tab.c"
    break;

  case 4: /* $@2: %empty  */
#line 120 "yacc.y"
      {
        global_table = init_symtab();
        function_table = init_functab();
        class_table = init_classtab();
        params = NULL;
        local_table = NULL;
        members = NULL;
        methods = NULL;
        scope = 0;
    }
#line 1613 "yacc.tab.c"
    break;

  case 5: /* start: $@2 code  */
#line 129 "yacc.y"
           {
        free_symtab(global_table);
        free_functab(function_table);
        free_classtab(class_table);
    }
#line 1623 "yacc.tab.c"
    break;

  case 13: /* $@3: %empty  */
#line 154 "yacc.y"
                       {
            local_table = (yyvsp[0].functions).local_table;
            params = (yyvsp[0].functions).params;
            rflag = false;
            return_type = (yyvsp[0].functions).type;
        }
#line 1634 "yacc.tab.c"
    break;

  case 14: /* $@4: %empty  */
#line 159 "yacc.y"
              {scope++;}
#line 1640 "yacc.tab.c"
    break;

  case 15: /* function: function_dec $@3 LCB $@4 statements RCB  */
#line 159 "yacc.y"
                                        {
        if(!rflag)
        {
            printf("Error: Function doesn't return a value on all control paths\n");
            YYABORT;
        }
        struct funcrec *entry = (struct funcrec*) malloc(sizeof(struct funcrec));
        entry->name = (yyvsp[-5].functions).name;
        entry->type = (yyvsp[-5].functions).type;
        entry->params = (yyvsp[-5].functions).params;
        entry->num_params = (yyvsp[-5].functions).num_params;
        entry->next = NULL;
        entry->local_table = (yyvsp[-5].functions).local_table;
        insert_functab(function_table, entry);
        local_table = NULL;
        params = NULL;
        scope--;
    }
#line 1663 "yacc.tab.c"
    break;

  case 16: /* function_dec: data_type_new IDENTIFIER LPB function_params RPB  */
#line 180 "yacc.y"
                                                               {
        struct funcrec *entry = (struct funcrec*) malloc(sizeof(struct funcrec));
        entry->name = (yyvsp[-3].id).name;
        entry->type = (yyvsp[-4].type);
        entry->params = (yyvsp[-1].functions).params;
        entry->num_params = (yyvsp[-1].functions).num_params;
        if(search_functab(function_table, entry,0) != NULL)
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
#line 1685 "yacc.tab.c"
    break;

  case 17: /* function_dec: data_type_pr IDENTIFIER LPB function_params RPB  */
#line 197 "yacc.y"
                                                      {
        
        struct funcrec *entry = (struct funcrec *)malloc(sizeof(struct funcrec));
        entry->name = (yyvsp[-3].id).name;
        entry->type = (yyvsp[-4].type);
        entry->params = (yyvsp[-1].functions).params;
        entry->num_params = (yyvsp[-1].functions).num_params;
        if(search_functab(function_table, entry, 0) != NULL)
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
#line 1708 "yacc.tab.c"
    break;

  case 18: /* function_dec: IDENTIFIER IDENTIFIER LPB function_params RPB  */
#line 215 "yacc.y"
                                                    {
        if(search_classtab(class_table, (yyvsp[-4].id).name) == NULL)
        {
            printf("Error: Class %s not declared\n", (yyvsp[-4].id).name);
            YYABORT;
        }
        struct funcrec *entry = (struct funcrec *)malloc(sizeof(struct funcrec));
        entry->name = (yyvsp[-3].id).name;
        entry->type = 14;
        entry->params = (yyvsp[-1].functions).params;
        entry->num_params = (yyvsp[-1].functions).num_params;
        if(search_functab(function_table, entry, 0) != NULL)
        {
            printf("Error: Function %s already declared\n", entry->name);
            YYABORT;
        }
        (yyval.functions).type = 14;
        (yyval.functions).name = (yyvsp[-3].id).name;
        (yyval.functions).params = (yyvsp[-1].functions).params;
        (yyval.functions).num_params = (yyvsp[-1].functions).num_params;
        (yyval.functions).local_table = init_symtab();
    }
#line 1735 "yacc.tab.c"
    break;

  case 19: /* function_dec: VOID IDENTIFIER LPB function_params RPB  */
#line 237 "yacc.y"
                                              {
        struct funcrec *entry = (struct funcrec *)malloc(sizeof(struct funcrec));
        entry->name = (yyvsp[-3].id).name;
        entry->type = 4;
        entry->params = (yyvsp[-1].functions).params;
        entry->num_params = (yyvsp[-1].functions).num_params;
        if(search_functab(function_table, entry, 0) != NULL)
        {
            printf("Error: Function %s already declared\n", entry->name);
            YYABORT;
        }
        (yyval.functions).type = 4;
        (yyval.functions).name = (yyvsp[-3].id).name;
        (yyval.functions).params = (yyvsp[-1].functions).params;
        (yyval.functions).num_params = (yyvsp[-1].functions).num_params;
        (yyval.functions).local_table = init_symtab();
    }
#line 1757 "yacc.tab.c"
    break;

  case 20: /* function_dec: list IDENTIFIER LPB function_params RPB  */
#line 255 "yacc.y"
                                              {
        struct funcrec *entry = (struct funcrec *)malloc(sizeof(struct funcrec));
        entry->name = (yyvsp[-3].id).name;
        entry->type = 5;
        entry->params = (yyvsp[-1].functions).params;
        entry->num_params = (yyvsp[-1].functions).num_params;
        entry->next = NULL;
        entry->local_table = init_symtab();
        if(search_functab(function_table, entry, 0) != NULL)
        {
            printf("Error: Function %s already declared\n", entry->name);
            YYABORT;
        }
        (yyval.functions).type = (yyvsp[-4].list).type;
        (yyval.functions).name = (yyvsp[-3].id).name;
        (yyval.functions).params = (yyvsp[-1].functions).params;
        (yyval.functions).num_params = (yyvsp[-1].functions).num_params;
        (yyval.functions).local_table = init_symtab();
    }
#line 1781 "yacc.tab.c"
    break;

  case 21: /* function_params: function_params COMMA function_param  */
#line 277 "yacc.y"
                                                      {
        if(lookup((yyval.functions).params, (yyval.functions).params, (yyvsp[0].param)->name) != NULL)
        {
            printf("Error: Argument %s already used\n", (yyvsp[0].param)->name);
            YYABORT;
        }
        (yyval.functions).params = (yyvsp[-2].functions).params;
        insert_symtab((yyval.functions).params, (yyvsp[0].param));
        (yyval.functions).num_params = (yyvsp[-2].functions).num_params + 1;
    }
#line 1796 "yacc.tab.c"
    break;

  case 22: /* function_params: function_param  */
#line 287 "yacc.y"
                     {
        (yyval.functions).params = init_symtab();
        insert_symtab((yyval.functions).params, (yyvsp[0].param));
        (yyval.functions).num_params = 1;
    }
#line 1806 "yacc.tab.c"
    break;

  case 23: /* function_params: %empty  */
#line 292 "yacc.y"
      {
        (yyval.functions).params = init_symtab();
        (yyval.functions).num_params = 0;
    }
#line 1815 "yacc.tab.c"
    break;

  case 24: /* function_param: data_type_new IDENTIFIER  */
#line 299 "yacc.y"
                                         {
        struct idrec *entry = (struct idrec *)malloc(sizeof(struct idrec));
        entry->name = (yyvsp[0].id).name;
        entry->type = (yyvsp[-1].type);
        entry->arr = false;
        entry->dim = 0;
        entry->scope = 1;
        entry->next = NULL;
        entry->class_name = NULL;       
        (yyval.param) = entry;
    }
#line 1831 "yacc.tab.c"
    break;

  case 25: /* function_param: data_type_pr IDENTIFIER  */
#line 310 "yacc.y"
                              {
        struct idrec *entry = (struct idrec*) malloc(sizeof(struct idrec));
        entry->name = (yyvsp[0].id).name;
        entry->type = (yyvsp[-1].type);
        entry->arr = false;
        entry->dim = 0;
        entry->scope = 1;
        entry->next = NULL;
        entry->class_name = NULL;       
        (yyval.param) = entry;
    }
#line 1847 "yacc.tab.c"
    break;

  case 26: /* function_param: IDENTIFIER IDENTIFIER  */
#line 321 "yacc.y"
                            {
        if(search_classtab(class_table, (yyvsp[-1].id).name) == NULL)
        {
            printf("Error: Class %s not declared\n", (yyvsp[-1].id).name);
            YYABORT;
        }
        struct idrec *entry = (struct idrec *)malloc(sizeof(struct idrec));
        entry->name = (yyvsp[0].id).name;
        entry->type = 14;
        entry->arr = false;
        entry->scope = 1;
        entry->next = NULL;
        entry->class_name = (yyvsp[-1].id).name;
        entry->dim = 0;
        (yyval.param) = entry;
    }
#line 1868 "yacc.tab.c"
    break;

  case 27: /* function_param: list IDENTIFIER  */
#line 338 "yacc.y"
                      {
        struct idrec *entry = (struct idrec *)malloc(sizeof(struct idrec));
        entry->name = (yyvsp[0].id).name;
        entry->type = (yyvsp[-1].list).type;
        entry->arr = true;
        entry->scope = 1;
        entry->next = NULL;
        entry->class_name = NULL;
        entry->dim = (yyvsp[-1].list).dim;
        (yyval.param) = entry;
    }
#line 1884 "yacc.tab.c"
    break;

  case 28: /* class: class_dec LCB class_stmt RCB  */
#line 353 "yacc.y"
                                   {
        struct classrec *entry = (struct classrec *)malloc(sizeof(struct classrec));
        entry->name = (yyvsp[-3].id).name;
        entry->members = members;
        entry->methods = methods;
        entry->next = NULL;
        if(search_classtab(class_table, entry->name) != NULL)
        {
            printf("Error: Class %s already declared\n", entry->name);
            YYABORT;
        }
        insert_classtab(class_table, entry);
        members = NULL;
        methods = NULL;
    }
#line 1904 "yacc.tab.c"
    break;

  case 29: /* class_dec: CLASS IDENTIFIER  */
#line 371 "yacc.y"
                            {
        (yyval.id).name = (yyvsp[0].id).name;
        (yyvsp[0].id).type = 14;
        members = init_symtab();
        methods = init_functab();
    }
#line 1915 "yacc.tab.c"
    break;

  case 33: /* $@5: %empty  */
#line 385 "yacc.y"
                                   {
            local_table = (yyvsp[0].functions).local_table;
            params = (yyvsp[0].functions).params;
            rflag = true;
            return_type = (yyvsp[0].functions).type;
        }
#line 1926 "yacc.tab.c"
    break;

  case 34: /* $@6: %empty  */
#line 390 "yacc.y"
              {scope++;}
#line 1932 "yacc.tab.c"
    break;

  case 35: /* class_function: class_function_dec $@5 LCB $@6 statements RCB  */
#line 390 "yacc.y"
                                        {
        if(!rflag)
        {
            printf("Error: Function doesn't return a value on all control paths\n");
            YYABORT;
        }
        struct funcrec *entry = (struct funcrec*) malloc(sizeof(struct funcrec));
        entry->name = (yyvsp[-5].functions).name;
        entry->type = (yyvsp[-5].functions).type;
        entry->params = (yyvsp[-5].functions).params;
        entry->num_params = (yyvsp[-5].functions).num_params;
        entry->next = NULL;
        entry->local_table = (yyvsp[-5].functions).local_table;
        insert_functab(methods, entry);
        local_table = NULL;
        params = NULL;
        scope--;
    }
#line 1955 "yacc.tab.c"
    break;

  case 36: /* class_function_dec: data_type_new IDENTIFIER LPB function_params RPB  */
#line 411 "yacc.y"
                                                                     {
        struct funcrec *entry = (struct funcrec*) malloc(sizeof(struct funcrec));
        entry->name = (yyvsp[-3].id).name;
        entry->type = (yyvsp[-4].type);
        entry->params = (yyvsp[-1].functions).params;
        entry->num_params = (yyvsp[-1].functions).num_params;
        entry->next = NULL;
        entry->local_table = init_symtab();
        if(search_functab(methods, entry, 0) != NULL)
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
#line 1979 "yacc.tab.c"
    break;

  case 37: /* class_function_dec: data_type_pr IDENTIFIER LPB function_params RPB  */
#line 430 "yacc.y"
                                                      {
        struct funcrec *entry = (struct funcrec *)malloc(sizeof(struct funcrec));
        entry->name = (yyvsp[-3].id).name;
        entry->type = (yyvsp[-4].type);
        entry->params = (yyvsp[-1].functions).params;
        entry->num_params = (yyvsp[-1].functions).num_params;
        entry->next = NULL;
        entry->local_table = init_symtab();
        if(search_functab(methods, entry, 0) != NULL)
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
#line 2003 "yacc.tab.c"
    break;

  case 38: /* class_function_dec: IDENTIFIER IDENTIFIER LPB function_params RPB  */
#line 449 "yacc.y"
                                                    {
        if(search_classtab(class_table, (yyvsp[-4].id).name) == NULL)
        {
            printf("Error: Class %s not declared\n", (yyvsp[-4].id).name);
            YYABORT;
        }
        struct funcrec *entry = (struct funcrec *)malloc(sizeof(struct funcrec));
        entry->name = (yyvsp[-3].id).name;
        entry->type = 14;
        entry->params = (yyvsp[-1].functions).params;
        entry->num_params = (yyvsp[-1].functions).num_params;
        entry->next = NULL;
        entry->local_table = init_symtab();
        if(search_functab(methods, entry, 0) != NULL)
        {
            printf("Error: Function %s already declared\n", entry->name);
            YYABORT;
        }
        (yyval.functions).type = 14;
        (yyval.functions).name = (yyvsp[-3].id).name;
        (yyval.functions).params = (yyvsp[-1].functions).params;
        (yyval.functions).num_params = (yyvsp[-1].functions).num_params;
        (yyval.functions).local_table = init_symtab();
    }
#line 2032 "yacc.tab.c"
    break;

  case 39: /* class_function_dec: VOID IDENTIFIER LPB function_params RPB  */
#line 473 "yacc.y"
                                              {
        struct funcrec *entry = (struct funcrec *)malloc(sizeof(struct funcrec));
        entry->name = (yyvsp[-3].id).name;
        entry->type = 4;
        entry->params = (yyvsp[-1].functions).params;
        entry->num_params = (yyvsp[-1].functions).num_params;
        entry->next = NULL;
        entry->local_table = init_symtab();
        if(search_functab(methods, entry, 0) != NULL)
        {
            printf("Error: Function %s already declared\n", entry->name);
            YYABORT;
        }
        (yyval.functions).type = 4;
        (yyval.functions).name = (yyvsp[-3].id).name;
        (yyval.functions).params = (yyvsp[-1].functions).params;
        (yyval.functions).num_params = (yyvsp[-1].functions).num_params;
        (yyval.functions).local_table = init_symtab();
    }
#line 2056 "yacc.tab.c"
    break;

  case 40: /* class_function_dec: list IDENTIFIER LPB function_params RPB  */
#line 493 "yacc.y"
                                              {
        struct funcrec *entry = (struct funcrec *)malloc(sizeof(struct funcrec));
        entry->name = (yyvsp[-3].id).name;
        entry->type = (yyvsp[-4].list).type;
        entry->params = (yyvsp[-1].functions).params;
        entry->num_params = (yyvsp[-1].functions).num_params;
        entry->next = NULL;
        entry->local_table = init_symtab();
        if(search_functab(methods, entry, 0) != NULL)
        {
            printf("Error: Function %s already declared\n", entry->name);
            YYABORT;
        }
        (yyval.functions).type = (yyvsp[-4].list).type;
        (yyval.functions).name = (yyvsp[-3].id).name;
        (yyval.functions).params = (yyvsp[-1].functions).params;
        (yyval.functions).num_params = (yyvsp[-1].functions).num_params;
        (yyval.functions).local_table = init_symtab();
    }
#line 2080 "yacc.tab.c"
    break;

  case 41: /* class_decl_stmt: data_type_new id_list SEMICOLON  */
#line 515 "yacc.y"
                                                 {
        struct snode* temp = (yyvsp[-1].namelist)->head;
        while(temp != NULL){
            struct idrec *entry = (struct idrec *)malloc(sizeof(struct idrec));
            entry->type = (yyvsp[-2].type);
            entry->arr = false;
            entry->scope = 1; 
            entry->name = temp->val;
            entry -> class_name = NULL;
            entry -> dim = 0;
            if(lookup(members, members, entry->name) == NULL){
                insert_symtab(members, entry);
            }
            else{
                printf("Error: Variable %s already declared\n", entry->name);
                YYABORT;
            }
            temp = temp->next;
        }
    }
#line 2105 "yacc.tab.c"
    break;

  case 42: /* class_decl_stmt: data_type_pr id_list SEMICOLON  */
#line 535 "yacc.y"
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
                printf("Error: Variable %s already declared\n", entry->name);
                YYABORT;
            }
            temp = temp->next;
        } 
    }
#line 2132 "yacc.tab.c"
    break;

  case 43: /* class_decl_stmt: IDENTIFIER id_list SEMICOLON  */
#line 557 "yacc.y"
                                  {
        // check if class exists
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
                printf("Error: Variable %s already declared\n", entry -> name);
                YYABORT;
            }
            temp = temp->next;
        }
    }
#line 2159 "yacc.tab.c"
    break;

  case 44: /* class_decl_stmt: list id_list SEMICOLON  */
#line 580 "yacc.y"
                             {
        struct snode* temp = (yyvsp[-1].namelist)->head;
        while(temp != NULL){
            struct idrec *entry = (struct idrec *)malloc(sizeof(struct idrec));
            entry -> type = (yyvsp[-2].list).type;
            entry -> arr = true;
            entry -> scope = 1; 
            entry -> name = temp->val;
            entry -> class_name = NULL;
            entry -> next = NULL;
            entry -> dim = (yyvsp[-2].list).dim;
            if(lookup(members, members ,entry -> name) == NULL){
                insert_symtab(members, entry);
            }
            else{
                printf("Error: Variable %s already declared\n", entry -> name);
                YYABORT;
            }
            temp = temp->next;
        }
    }
#line 2185 "yacc.tab.c"
    break;

  case 45: /* $@7: %empty  */
#line 605 "yacc.y"
                            {scope++;}
#line 2191 "yacc.tab.c"
    break;

  case 46: /* statements: statements LCB $@7 statements RCB  */
#line 605 "yacc.y"
                                                      {scope--;}
#line 2197 "yacc.tab.c"
    break;

  case 48: /* statements: %empty  */
#line 607 "yacc.y"
      {}
#line 2203 "yacc.tab.c"
    break;

  case 64: /* unary_stmt: identifier UNARY_OP  */
#line 633 "yacc.y"
                                {
        // check id in symbol table
        if((yyvsp[-1].class_id).type != 0 || (yyvsp[-1].class_id).type != 1){
            printf("Error: Unary operator not defined for this type\n"); 
            YYABORT;
        }
        (yyval.type) = (yyvsp[-1].class_id).type;
    }
#line 2216 "yacc.tab.c"
    break;

  case 72: /* decl_stmt: data_type_new id_list SEMICOLON  */
#line 655 "yacc.y"
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
                insert_symtab(global_table, entry);
            temp = temp->next;
        }
    }
#line 2245 "yacc.tab.c"
    break;

  case 73: /* decl_stmt: data_type_pr id_list SEMICOLON  */
#line 679 "yacc.y"
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
                insert_symtab(global_table, entry);
            temp = temp->next;
        }
    }
#line 2274 "yacc.tab.c"
    break;

  case 74: /* decl_stmt: IDENTIFIER id_list SEMICOLON  */
#line 703 "yacc.y"
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
                insert_symtab(global_table, entry);
            temp = temp->next;
        }
    }
#line 2308 "yacc.tab.c"
    break;

  case 75: /* decl_stmt: list id_list SEMICOLON  */
#line 733 "yacc.y"
                             {
        struct snode* temp = (yyvsp[-1].namelist)->head;
        while(temp != NULL){
            struct idrec *entry = (struct idrec*) malloc(sizeof(struct idrec));
            entry -> type = 5;
            entry -> arr = true;
            entry -> scope = scope; 
            entry -> name = temp->val;
            entry -> class_name = NULL;
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
                insert_symtab(global_table, entry);
            temp = temp->next;
        }
    }
#line 2337 "yacc.tab.c"
    break;

  case 76: /* id_list: id_list COMMA IDENTIFIER  */
#line 760 "yacc.y"
                                 {
        insert_slist((yyvsp[-2].namelist), (yyvsp[0].id).name);
        (yyval.namelist) = (yyvsp[-2].namelist);
    }
#line 2346 "yacc.tab.c"
    break;

  case 77: /* id_list: IDENTIFIER EQUALS nested_expr  */
#line 764 "yacc.y"
                                   {
        // check nested expr type
        (yyval.namelist) = init_slist();
        insert_slist((yyval.namelist), (yyvsp[-2].id).name);
    }
#line 2356 "yacc.tab.c"
    break;

  case 78: /* id_list: id_list COMMA IDENTIFIER EQUALS nested_expr  */
#line 769 "yacc.y"
                                                 {
        (yyval.namelist) = init_slist();
        insert_slist((yyval.namelist), (yyvsp[-2].id).name);
    }
#line 2365 "yacc.tab.c"
    break;

  case 79: /* id_list: IDENTIFIER  */
#line 773 "yacc.y"
                {
        (yyval.namelist) = init_slist();
        insert_slist((yyval.namelist), (yyvsp[0].id).name);   
    }
#line 2374 "yacc.tab.c"
    break;

  case 83: /* expr_stmt_without_semicolon: identifier EQUALS nested_expr  */
#line 787 "yacc.y"
                                    {
        if((yyvsp[-2].class_id).type != (yyvsp[0].list).type){
            printf("Error: Type mismatch\n");
            YYABORT;
        }
    }
#line 2385 "yacc.tab.c"
    break;

  case 86: /* nested_expr: LPB nested_expr RPB  */
#line 798 "yacc.y"
                                 {
        (yyval.list).type = (yyvsp[-1].list).type;
        (yyval.list).dim = (yyvsp[-1].list).dim;
    }
#line 2394 "yacc.tab.c"
    break;

  case 87: /* nested_expr: LPB nested_expr RPB conj nested_expr  */
#line 802 "yacc.y"
                                           {
        if((yyvsp[0].list).type != 3 || (yyvsp[-3].list).type != 3){
            printf("Error: Type mismatch\n");
            YYABORT;
        }
        (yyval.list).type = (yyvsp[-3].list).type;
        (yyval.list).dim = 0;
    }
#line 2407 "yacc.tab.c"
    break;

  case 88: /* nested_expr: LPB nested_expr RPB REL_OP nested_expr  */
#line 810 "yacc.y"
                                             {
        (yyval.list).type = 3;
        (yyval.list).dim = 0;
    }
#line 2416 "yacc.tab.c"
    break;

  case 89: /* nested_expr: LPB nested_expr RPB arith_op nested_expr  */
#line 814 "yacc.y"
                                               {
        (yyval.list).type = (yyvsp[-3].list).type; // check this again
        (yyval.list).dim = 0;
    }
#line 2425 "yacc.tab.c"
    break;

  case 90: /* nested_expr: LPB nested_expr RPB set_op nested_expr  */
#line 818 "yacc.y"
                                             {
        (yyval.list).type = (yyvsp[-3].list).type; // check this again
    }
#line 2433 "yacc.tab.c"
    break;

  case 91: /* nested_expr: expr  */
#line 821 "yacc.y"
           {
        (yyval.list).type = (yyvsp[0].list).type;
        (yyval.list).dim = (yyvsp[0].list).dim; 
    }
#line 2442 "yacc.tab.c"
    break;

  case 92: /* expr: expr_terminal conj nested_expr  */
#line 828 "yacc.y"
                                     {
        if((yyvsp[-2].list).type != (yyvsp[0].list).type){
            printf("Error: Type mismatch\n");
            YYABORT;
        }
        (yyval.list).type = 3;
        (yyval.list).dim = 0;
    }
#line 2455 "yacc.tab.c"
    break;

  case 93: /* expr: expr_terminal REL_OP nested_expr  */
#line 836 "yacc.y"
                                       {
        if((yyvsp[-2].list).type != (yyvsp[0].list).type){
            printf("Error: Type mismatch\n");
            YYABORT;
        }
        (yyval.list).type = 3;
        (yyval.list).dim = 0;
    }
#line 2468 "yacc.tab.c"
    break;

  case 94: /* expr: expr_terminal arith_op nested_expr  */
#line 844 "yacc.y"
                                         {
        if((yyvsp[-2].list).type != (yyvsp[0].list).type){
            printf("Error: Type mismatch\n");
            YYABORT;
        }
        (yyval.list).type = (yyvsp[-2].list).type;
        (yyval.list).dim = 0;    // check this again
    }
#line 2481 "yacc.tab.c"
    break;

  case 95: /* expr: expr_terminal set_op nested_expr  */
#line 852 "yacc.y"
                                       {
        if((yyvsp[-2].list).type != (yyvsp[0].list).type){
            printf("Error: Type mismatch\n");
            YYABORT;
        }
        (yyval.list).type = (yyvsp[-2].list).type;
        (yyval.list).dim = 0;    // check this again
    }
#line 2494 "yacc.tab.c"
    break;

  case 96: /* expr: expr_terminal  */
#line 860 "yacc.y"
                    {
        (yyval.list).type = (yyvsp[0].list).type;
        (yyval.list).dim = (yyvsp[0].list).dim;
    }
#line 2503 "yacc.tab.c"
    break;

  case 97: /* expr_terminal: unary_stmt  */
#line 867 "yacc.y"
                          {
        (yyval.list).type = (yyvsp[0].type);
        (yyval.list).dim = 0;
    }
#line 2512 "yacc.tab.c"
    break;

  case 98: /* expr_terminal: NUMBER  */
#line 871 "yacc.y"
            {
        (yyval.list).type = 0;
        (yyval.list).dim = 0;
    }
#line 2521 "yacc.tab.c"
    break;

  case 99: /* expr_terminal: DECIMAL  */
#line 875 "yacc.y"
             { 
        (yyval.list).type = 1;
        (yyval.list).dim = 0;
    }
#line 2530 "yacc.tab.c"
    break;

  case 100: /* expr_terminal: STRING_LITERAL  */
#line 879 "yacc.y"
                    {
        (yyval.list).type = 2;   
        (yyval.list).dim = 0; 
    }
#line 2539 "yacc.tab.c"
    break;

  case 101: /* expr_terminal: BOOL_LITERAL  */
#line 883 "yacc.y"
                  {
        (yyval.list).type = 3;
        (yyval.list).dim = 0;
    }
#line 2548 "yacc.tab.c"
    break;

  case 102: /* expr_terminal: call  */
#line 887 "yacc.y"
           {
        (yyval.list).type = (yyvsp[0].type);
    }
#line 2556 "yacc.tab.c"
    break;

  case 103: /* expr_terminal: NOT LPB nested_expr RPB  */
#line 891 "yacc.y"
                              {
        if((yyvsp[-1].list).type != 3){
            printf("Error: Not operator not defined for this type\n"); 
            YYABORT;
        }
        (yyval.list).type = 3;
    }
#line 2568 "yacc.tab.c"
    break;

  case 104: /* expr_terminal: NOT identifier  */
#line 898 "yacc.y"
                     {
        if((yyvsp[0].class_id).type != 3){
            printf("Error: Not operator not defined for this type\n"); 
            YYABORT;
        }
        (yyval.list).type = 3;
    }
#line 2580 "yacc.tab.c"
    break;

  case 105: /* expr_terminal: NOT class_identifier  */
#line 905 "yacc.y"
                           {
        if(check_namelist((yyvsp[0].class_id).namelist, global_table, local_table, class_table, NULL, -1) == false)
        {
            YYABORT;
        }
        (yyval.list).type = 3;
    }
#line 2592 "yacc.tab.c"
    break;

  case 106: /* expr_terminal: identifier  */
#line 912 "yacc.y"
                 {
        (yyval.list).type = (yyvsp[0].class_id).type;

    }
#line 2601 "yacc.tab.c"
    break;

  case 107: /* expr_terminal: class_identifier  */
#line 916 "yacc.y"
                      {
        if(check_namelist((yyvsp[0].class_id).namelist, global_table, local_table, class_table, NULL, -1) == false)
        {
            YYABORT;
        }
        (yyval.list).type = 3;
        (yyval.list).dim = 0;
    }
#line 2614 "yacc.tab.c"
    break;

  case 108: /* expr_terminal: list_literal  */
#line 925 "yacc.y"
                   {
        (yyval.list).type = 5;
        (yyval.list).dim = (yyvsp[0].list).dim;
    }
#line 2623 "yacc.tab.c"
    break;

  case 109: /* if_stmt: if_expr LCB statements RCB  */
#line 933 "yacc.y"
                                    {rflag = false;}
#line 2629 "yacc.tab.c"
    break;

  case 110: /* if_stmt: if_expr single_stmt  */
#line 934 "yacc.y"
                          {rflag = false;}
#line 2635 "yacc.tab.c"
    break;

  case 111: /* if_stmt: if_expr LCB statements RCB ELSE if_stmt  */
#line 935 "yacc.y"
                                              {rflag = false;}
#line 2641 "yacc.tab.c"
    break;

  case 112: /* if_stmt: if_expr single_stmt ELSE if_stmt  */
#line 936 "yacc.y"
                                       {rflag = false;}
#line 2647 "yacc.tab.c"
    break;

  case 113: /* if_stmt: if_expr LCB statements RCB ELSE LCB statements RCB  */
#line 937 "yacc.y"
                                                         {rflag = false;}
#line 2653 "yacc.tab.c"
    break;

  case 114: /* if_stmt: if_expr single_stmt ELSE LCB statements RCB  */
#line 938 "yacc.y"
                                                  {rflag = false;}
#line 2659 "yacc.tab.c"
    break;

  case 115: /* if_stmt: if_expr LCB statements RCB ELSE single_stmt  */
#line 939 "yacc.y"
                                                  {rflag = false;}
#line 2665 "yacc.tab.c"
    break;

  case 116: /* if_stmt: if_expr single_stmt ELSE single_stmt  */
#line 940 "yacc.y"
                                           {rflag = false;}
#line 2671 "yacc.tab.c"
    break;

  case 117: /* if_expr: IF LPB nested_expr RPB  */
#line 944 "yacc.y"
                                {
        if((yyvsp[-1].list).type != 3){
            printf("Error: If condition must be bool\n");
            YYABORT;
        }
        rflag = false;
    }
#line 2683 "yacc.tab.c"
    break;

  case 118: /* $@8: %empty  */
#line 955 "yacc.y"
                                                      {scope++;}
#line 2689 "yacc.tab.c"
    break;

  case 119: /* for_stmt: for_exp expr_stmt_without_semicolon RPB LCB $@8 statements RCB  */
#line 955 "yacc.y"
                                                                                {scope--;rflag = false;}
#line 2695 "yacc.tab.c"
    break;

  case 120: /* for_stmt: for_exp expr_stmt_without_semicolon RPB single_stmt  */
#line 956 "yacc.y"
                                                          {rflag = false;}
#line 2701 "yacc.tab.c"
    break;

  case 121: /* for_exp: FOR LPB decl_stmt nested_expr SEMICOLON  */
#line 960 "yacc.y"
                                                 {
        if((yyvsp[-1].list).type != 3){
            printf("Error: For condition must be bool\n");
            YYABORT;
        }
    }
#line 2712 "yacc.tab.c"
    break;

  case 122: /* for_exp: FOR LPB expr_stmt nested_expr SEMICOLON  */
#line 966 "yacc.y"
                                              {
        if((yyvsp[-1].list).type != 3){
            printf("Error: For condition must be bool\n");
            YYABORT;
        }
    }
#line 2723 "yacc.tab.c"
    break;

  case 123: /* $@9: %empty  */
#line 975 "yacc.y"
                          {scope++;}
#line 2729 "yacc.tab.c"
    break;

  case 124: /* while_stmt: while_exp LCB $@9 statements RCB  */
#line 975 "yacc.y"
                                                    {scope--;rflag = false;}
#line 2735 "yacc.tab.c"
    break;

  case 125: /* while_stmt: while_exp single_stmt  */
#line 976 "yacc.y"
                            {rflag = false;}
#line 2741 "yacc.tab.c"
    break;

  case 126: /* while_exp: WHILE LPB nested_expr RPB  */
#line 980 "yacc.y"
                                     {
        if((yyvsp[-1].list).type != 3){
            printf("Error: While condition must be bool\n");
            YYABORT;
        }
    }
#line 2752 "yacc.tab.c"
    break;

  case 128: /* call: IDENTIFIER LPB call_args RPB  */
#line 993 "yacc.y"
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
        (yyval.type) = func -> type;
    }
#line 2769 "yacc.tab.c"
    break;

  case 129: /* call: class_identifier LPB call_args RPB  */
#line 1005 "yacc.y"
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
        (yyval.type) = func -> type;
    }
#line 2791 "yacc.tab.c"
    break;

  case 130: /* call_args: call_args COMMA nested_expr  */
#line 1026 "yacc.y"
                                       {
        (yyval.functions).params = (yyvsp[-2].functions).params;
        struct idrec *entry = (struct idrec*) malloc(sizeof(struct idrec));
        entry -> type = (yyvsp[0].list).type;
        insert_symtab((yyval.functions).params, entry);
        (yyval.functions).num_params = (yyvsp[-2].functions).num_params + 1;
    }
#line 2803 "yacc.tab.c"
    break;

  case 131: /* call_args: nested_expr  */
#line 1033 "yacc.y"
                  {
        (yyval.functions).params = init_symtab();
        struct idrec *entry = (struct idrec*) malloc(sizeof(struct idrec));
        entry -> type = (yyvsp[0].list).type;
        insert_symtab((yyval.functions).params, entry);
        (yyval.functions).num_params = 1;
    }
#line 2815 "yacc.tab.c"
    break;

  case 132: /* call_args: %empty  */
#line 1040 "yacc.y"
      {
        (yyval.functions).params = init_symtab();
        (yyval.functions).num_params = 0;
    }
#line 2824 "yacc.tab.c"
    break;

  case 133: /* return_stmt: RETURN SEMICOLON  */
#line 1046 "yacc.y"
                              {
        if(return_type != 4)
        {
            printf("Error: Mismatch in return type\n");
            printf("Returned void while function returns %s\n", map_type[return_type]);
            YYABORT;
        }
        rflag = true;
    }
#line 2838 "yacc.tab.c"
    break;

  case 134: /* return_stmt: RETURN nested_expr SEMICOLON  */
#line 1055 "yacc.y"
                                   {
        if(return_type != (yyvsp[-1].list).type)
        {
            printf("Error: Mismatch in return type\n");
            printf("Returned %s while function returns %s\n", map_type[(yyvsp[-1].list).type], map_type[return_type]);
            YYABORT;
        }
        rflag = true;
    }
#line 2852 "yacc.tab.c"
    break;

  case 135: /* list: LIST dim COLON data_type_pr  */
#line 1068 "yacc.y"
                                  {
        (yyval.list).type = (yyvsp[0].type);
        (yyval.list).dim = (yyvsp[-2].list).dim;
    }
#line 2861 "yacc.tab.c"
    break;

  case 136: /* list: LIST dim COLON data_type_new  */
#line 1072 "yacc.y"
                                   {
        (yyval.list).type = (yyvsp[0].type);
        (yyval.list).dim = (yyvsp[-2].list).dim;
    }
#line 2870 "yacc.tab.c"
    break;

  case 137: /* list: LIST dim COLON IDENTIFIER  */
#line 1076 "yacc.y"
                                {
        if(search_classtab(class_table, (yyvsp[0].id).name) == NULL)
        {
            printf("Error: Class %s not declared\n", (yyvsp[0].id).name);
            YYABORT;
        }
        (yyval.list).type = 14;
        (yyval.list).dim = (yyvsp[-2].list).dim;
    }
#line 2884 "yacc.tab.c"
    break;

  case 138: /* list_literal: LCB list_terminal RCB  */
#line 1088 "yacc.y"
                                     {
        (yyval.list).type = 5;
        (yyval.list).dim = (yyvsp[-1].list).dim+1;
    }
#line 2893 "yacc.tab.c"
    break;

  case 139: /* list_terminal: nested_expr  */
#line 1095 "yacc.y"
                           {
        (yyval.list).type = (yyvsp[0].list).type;
        if((yyvsp[0].list).type == 5){
            (yyval.list).dim = (yyvsp[0].list).dim;
        }
        else{
            (yyval.list).dim = 0;
        }
    }
#line 2907 "yacc.tab.c"
    break;

  case 140: /* list_terminal: list_terminal COMMA nested_expr  */
#line 1104 "yacc.y"
                                      {
        if((yyvsp[-2].list).type != (yyvsp[0].list).type){
            printf("Error: Type mismatch in list terminal\n");
            YYABORT;
        }
        (yyval.list).type = (yyvsp[-2].list).type;
        (yyval.list).dim = (yyvsp[-2].list).dim;
    }
#line 2920 "yacc.tab.c"
    break;

  case 141: /* dim: LSB nested_expr RSB dim  */
#line 1116 "yacc.y"
                             {
        if((yyvsp[-2].list).type != 0){
            printf("Error: Array size must be an integer\n");
            YYABORT;
        }
        (yyval.list).dim = (yyvsp[0].list).dim + 1;
    }
#line 2932 "yacc.tab.c"
    break;

  case 142: /* dim: LSB nested_expr RSB  */
#line 1123 "yacc.y"
                          {
        if((yyvsp[-1].list).type != 0){
            printf("Error: Array size must be an integer\n");
            YYABORT;
        }
        (yyval.list).dim = 0;
    }
#line 2944 "yacc.tab.c"
    break;

  case 143: /* dim: empty_dim  */
#line 1130 "yacc.y"
                {
        (yyval.list).dim = (yyvsp[0].list).dim;
    }
#line 2952 "yacc.tab.c"
    break;

  case 144: /* empty_dim: empty_dim LSB RSB  */
#line 1135 "yacc.y"
                             {
        (yyval.list).dim = (yyvsp[-2].list).dim + 1;
    }
#line 2960 "yacc.tab.c"
    break;

  case 145: /* empty_dim: LSB RSB  */
#line 1138 "yacc.y"
              {
        (yyval.list).dim = 0;
    }
#line 2968 "yacc.tab.c"
    break;

  case 146: /* identifier: IDENTIFIER  */
#line 1143 "yacc.y"
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
    }
#line 2984 "yacc.tab.c"
    break;

  case 147: /* identifier: IDENTIFIER dim  */
#line 1155 "yacc.y"
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
    }
#line 3002 "yacc.tab.c"
    break;

  case 148: /* class_identifier: IDENTIFIER DOT IDENTIFIER  */
#line 1170 "yacc.y"
                                             {
        (yyval.class_id).namelist = init_slist();
        insert_slist((yyval.class_id).namelist, (yyvsp[-2].id).name);
        insert_slist((yyval.class_id).namelist, (yyvsp[0].id).name);   
    }
#line 3012 "yacc.tab.c"
    break;

  case 149: /* class_identifier: IDENTIFIER DOT class_identifier  */
#line 1175 "yacc.y"
                                      {
        struct snode* temp = (struct snode*)malloc(sizeof(struct snode));
        temp -> val = (yyvsp[-2].id).name;
        temp -> next = (yyvsp[0].class_id).namelist -> head;
        (yyvsp[0].class_id).namelist -> head = temp;
        (yyval.class_id).namelist = (yyvsp[0].class_id).namelist;               
    }
#line 3024 "yacc.tab.c"
    break;

  case 150: /* class_identifier: IDENTIFIER DOT IDENTIFIER dim  */
#line 1183 "yacc.y"
                                    {
        (yyval.class_id).namelist = init_slist();
        insert_slist((yyval.class_id).namelist, (yyvsp[-3].id).name);
        insert_slist((yyval.class_id).namelist, (yyvsp[-1].id).name);   
    }
#line 3034 "yacc.tab.c"
    break;

  case 151: /* class_identifier: IDENTIFIER dim DOT IDENTIFIER  */
#line 1188 "yacc.y"
                                    {
        (yyval.class_id).namelist = init_slist();
        insert_slist((yyval.class_id).namelist, (yyvsp[-3].id).name);
        insert_slist((yyval.class_id).namelist, (yyvsp[0].id).name);   
    }
#line 3044 "yacc.tab.c"
    break;

  case 152: /* class_identifier: IDENTIFIER dim DOT IDENTIFIER dim  */
#line 1193 "yacc.y"
                                        {
        (yyval.class_id).namelist = init_slist();
        insert_slist((yyval.class_id).namelist, (yyvsp[-4].id).name);
        insert_slist((yyval.class_id).namelist, (yyvsp[-1].id).name);   
    }
#line 3054 "yacc.tab.c"
    break;

  case 153: /* class_identifier: SELF DOT IDENTIFIER  */
#line 1198 "yacc.y"
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
        (yyval.class_id).type = entry->type;
    }
#line 3073 "yacc.tab.c"
    break;

  case 154: /* class_identifier: SELF DOT IDENTIFIER dim  */
#line 1212 "yacc.y"
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
        (yyval.class_id).type = entry->type;
    }
#line 3092 "yacc.tab.c"
    break;

  case 164: /* data_type_new: DOCUMENT  */
#line 1248 "yacc.y"
                       { (yyval.type) = 12;}
#line 3098 "yacc.tab.c"
    break;

  case 165: /* data_type_new: TEAM  */
#line 1249 "yacc.y"
           { (yyval.type) = 7;}
#line 3104 "yacc.tab.c"
    break;

  case 166: /* data_type_new: MEMBERS  */
#line 1250 "yacc.y"
              { (yyval.type) = 8;}
#line 3110 "yacc.tab.c"
    break;

  case 167: /* data_type_new: TASK  */
#line 1251 "yacc.y"
            { (yyval.type) = 9;}
#line 3116 "yacc.tab.c"
    break;

  case 168: /* data_type_new: EVENT  */
#line 1252 "yacc.y"
            { (yyval.type) = 10;}
#line 3122 "yacc.tab.c"
    break;

  case 169: /* data_type_new: MEETING  */
#line 1253 "yacc.y"
               { (yyval.type) = 11;}
#line 3128 "yacc.tab.c"
    break;

  case 170: /* data_type_new: CALENDAR  */
#line 1254 "yacc.y"
               { (yyval.type) = 13;}
#line 3134 "yacc.tab.c"
    break;

  case 171: /* data_type_pr: INT  */
#line 1258 "yacc.y"
                   { (yyval.type) = 0;}
#line 3140 "yacc.tab.c"
    break;

  case 172: /* data_type_pr: STRING  */
#line 1259 "yacc.y"
             { (yyval.type) = 2;}
#line 3146 "yacc.tab.c"
    break;

  case 173: /* data_type_pr: BOOL  */
#line 1260 "yacc.y"
            { (yyval.type) = 3;}
#line 3152 "yacc.tab.c"
    break;

  case 174: /* data_type_pr: FLOAT  */
#line 1261 "yacc.y"
            { (yyval.type) = 1;}
#line 3158 "yacc.tab.c"
    break;


#line 3162 "yacc.tab.c"

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

#line 1264 "yacc.y"



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
