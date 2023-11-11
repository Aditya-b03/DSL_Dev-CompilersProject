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
  YYSYMBOL_identifier = 105,               /* identifier  */
  YYSYMBOL_class_identifier = 106,         /* class_identifier  */
  YYSYMBOL_conj = 107,                     /* conj  */
  YYSYMBOL_set_op = 108,                   /* set_op  */
  YYSYMBOL_arith_op = 109,                 /* arith_op  */
  YYSYMBOL_data_type_new = 110,            /* data_type_new  */
  YYSYMBOL_data_type_pr = 111              /* data_type_pr  */
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
#define YYLAST   1032

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  55
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  57
/* YYNRULES -- Number of rules.  */
#define YYNRULES  173
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
       0,    99,    99,    99,   114,   114,   131,   132,   136,   140,
     141,   142,   143,   148,   153,   148,   174,   191,   209,   231,
     249,   271,   281,   286,   293,   304,   315,   332,   348,   366,
     375,   376,   377,   380,   385,   380,   406,   425,   444,   468,
     488,   510,   530,   552,   575,   600,   600,   601,   602,   606,
     607,   608,   609,   610,   611,   612,   613,   614,   615,   616,
     617,   618,   622,   623,   628,   639,   640,   641,   642,   643,
     644,   645,   650,   674,   698,   728,   755,   759,   764,   768,
     776,   780,   781,   782,   788,   789,   793,   794,   801,   804,
     807,   810,   816,   823,   830,   837,   844,   850,   853,   856,
     859,   862,   865,   869,   876,   883,   890,   893,   901,   908,
     909,   910,   911,   912,   913,   914,   915,   919,   930,   930,
     931,   935,   941,   950,   950,   951,   955,   964,   968,   980,
    1001,  1008,  1015,  1021,  1030,  1043,  1047,  1051,  1063,  1069,
    1072,  1079,  1087,  1095,  1098,  1104,  1116,  1131,  1136,  1144,
    1149,  1154,  1159,  1173,  1191,  1192,  1196,  1197,  1201,  1202,
    1203,  1204,  1205,  1209,  1210,  1211,  1212,  1213,  1214,  1215,
    1219,  1220,  1221,  1222
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
  "dim", "identifier", "class_identifier", "conj", "set_op", "arith_op",
  "data_type_new", "data_type_pr", YY_NULLPTR
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
     -36,    31,    11,   918,  -284,    75,   763,  -284,    51,  -284,
    -284,  -284,  -284,    65,    73,  -284,  -284,  -284,  -284,  -284,
    -284,  -284,   114,  -284,   918,  -284,   918,   117,   918,   132,
     177,   181,  -284,  -284,  -284,  -284,   118,   119,   -33,   -18,
      63,  -284,   161,  -284,   964,  -284,    -1,   109,     0,   151,
       2,   216,   977,  -284,  -284,  -284,  -284,   129,    92,   146,
    -284,   782,   782,  -284,   188,  -284,   442,  -284,  -284,   201,
     192,   274,   990,   782,   977,  -284,   208,  -284,   218,   221,
     190,   964,  -284,   964,   230,   233,   261,   977,  -284,   977,
    -284,   977,  -284,   269,    52,  -284,   273,   276,   281,    36,
     782,  -284,  -284,   782,   246,   103,   297,  -284,   -25,   194,
    -284,  -284,  -284,  -284,  -284,  -284,   782,  -284,  -284,  -284,
    -284,   782,   782,   782,  -284,   782,  -284,   238,  -284,  -284,
    -284,  -284,    97,   260,  -284,   247,    29,   278,  -284,  -284,
     299,  -284,    42,   282,    46,   286,    68,   291,   124,   130,
     145,  -284,  -284,   977,  -284,  -284,  -284,   298,  -284,   165,
      36,  -284,   304,    73,  -284,   782,   997,  -284,  -284,  -284,
    -284,   169,  -284,  -284,   782,   406,   977,   977,  -284,  -284,
     977,  -284,   977,  -284,   977,  -284,  -284,  -284,  -284,  -284,
    -284,  -284,   782,   103,    73,   305,  -284,   782,   782,   782,
     782,  -284,  -284,    49,   303,   306,   307,    27,  -284,  -284,
    -284,   311,  -284,  -284,  -284,  -284,   308,  -284,   833,  -284,
     301,  -284,   869,  -284,   309,  -284,   315,     6,   152,   315,
     315,   222,   249,  -284,   250,   253,   259,  -284,   305,  -284,
    -284,  -284,  -284,  -284,   310,   931,   782,   782,   329,  -284,
    -284,   -14,  -284,  -284,   321,  -284,  -284,  -284,    80,   156,
     323,   195,   204,  -284,  -284,  -284,   782,   782,   301,   782,
     782,   301,  -284,  -284,   471,  -284,  -284,  -284,  -284,    86,
     782,   782,   326,   328,   512,   320,   336,   553,   780,   301,
     301,   882,  -284,  -284,  -284,   330,   331,  -284,  -284,   332,
     334,  -284,   337,   342,  -284,  -284,  -284,  -284,  -284,   338,
    -284,  -284,  -284,   343,   345,   346,   347,  -284,  -284,   594,
    -284,  -284,  -284,  -284,  -284,  -284,   820,   635,  -284,  -284,
    -284,  -284,  -284,  -284,  -284,  -284,  -284,  -284,   676,   717,
    -284,  -284
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,     0,    12,     1,     0,    12,     7,     0,   170,
     171,   172,   173,     0,     0,   163,   164,   165,   166,   167,
     168,   169,     0,     5,    12,    13,    12,     0,    12,     0,
       0,     0,     8,     6,     3,    29,     0,     0,     0,    79,
       0,    10,     0,    11,    32,     9,    79,     0,    79,     0,
      79,     0,    23,    98,   100,   101,    99,     0,   145,     0,
     144,     0,     0,    97,     0,    91,    96,   102,   108,   106,
     107,     0,     0,     0,    23,    74,     0,    14,     0,     0,
       0,    32,    33,    32,     0,     0,     0,    23,    75,    23,
      72,    23,    73,     0,     0,    22,     0,     0,     0,   145,
       0,   104,   105,   132,     0,   146,     0,   139,     0,     0,
     142,   158,   159,   160,   161,   162,     0,   154,   155,   156,
     157,     0,     0,     0,    64,   132,   143,     0,   137,   136,
     135,    77,     0,    76,    48,     0,    79,     0,    28,    30,
       0,    31,    79,     0,    79,     0,    79,     0,     0,     0,
       0,    26,    19,     0,    27,    24,    25,     0,   131,     0,
     147,   148,     0,   152,   138,     0,    86,    93,    92,    95,
      94,     0,   141,    18,     0,     0,    23,    23,    43,    34,
      23,    44,    23,    41,    23,    42,    20,    16,    17,    21,
     103,   128,     0,   149,   150,   153,   140,     0,     0,     0,
       0,   129,    78,     0,     0,     0,     0,   145,    45,    15,
      56,     0,    47,    85,    49,    55,     0,    50,     0,    51,
       0,    52,     0,    54,     0,    53,     0,     0,     0,     0,
       0,     0,     0,    48,     0,     0,     0,   130,   151,    88,
      87,    90,    89,   133,     0,     0,     0,     0,    79,    48,
      63,     0,    80,    48,   110,    65,    67,    66,     0,     0,
       0,     0,     0,   123,   125,   127,     0,     0,     0,     0,
       0,     0,    39,    38,     0,    40,    36,    37,   134,   145,
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
    -284,  -284,  -284,  -284,  -284,   391,   115,  -284,  -284,  -284,
    -284,   -47,   245,  -284,  -284,   241,  -284,  -284,  -284,  -284,
    -284,  -183,  -284,  -284,  -284,  -171,  -220,    -3,   -23,  -207,
     179,   189,  -284,  -284,  -283,  -284,  -284,  -284,  -284,  -284,
    -284,  -284,  -208,    45,   275,  -284,   322,  -284,  -284,   -13,
     -35,   -44,   235,   236,   240,    13,   185
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     1,     2,     3,     6,     7,    23,    24,    42,   134,
      25,    94,    95,    26,    27,    80,    81,   140,   233,    82,
      83,   175,   249,   212,   251,    63,   254,   214,    40,   215,
     216,   158,    65,    66,   217,   218,   219,   332,   220,   221,
     292,   222,   223,    67,   159,   225,   226,    68,   108,   105,
      69,    70,   121,   122,   123,   229,   230
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      28,    38,   264,    28,   213,   312,    47,    49,    51,    71,
     257,   256,    73,   102,   257,   256,    30,    -2,    72,    30,
     164,    28,   101,    28,   165,    28,   285,   132,    74,    73,
      73,     4,    73,   124,   266,   286,   267,    30,   281,    30,
     148,    30,   149,   336,   150,    87,    89,   213,    91,   213,
     274,   213,    53,    54,    55,    56,   137,    85,   268,    73,
     161,   143,   145,   147,     5,    97,   284,   248,   311,    37,
     287,   318,    73,   103,   213,   177,    73,   104,    37,    32,
     257,   256,    57,   257,   256,   129,   104,    97,   180,    58,
      59,    35,   182,    61,    85,    62,    85,   243,    73,   152,
      97,   153,    97,   213,    97,    36,   335,   124,   266,   319,
     267,    75,    76,   213,   184,    37,   213,   213,   257,   256,
     213,    34,    53,    54,    55,    56,   248,   327,    37,   231,
     232,   228,   289,   234,    37,   235,   104,   236,   103,    41,
     227,    43,   104,    45,   173,    71,   153,   193,   213,   338,
     195,   339,    57,   162,    39,   213,   213,    88,    76,    58,
      59,    44,    60,    61,    52,    62,    97,   213,   213,    99,
      59,   186,    46,   153,   259,   100,   262,   187,   259,   153,
     269,   238,   270,   258,   269,   261,   270,   258,    31,    97,
      97,    31,   188,    97,   153,    97,   106,    97,   125,    90,
      76,   262,   125,    47,   271,    77,    49,    51,   290,    31,
     261,    31,   191,    31,   192,   255,   201,    48,   192,   255,
     224,    50,   124,   266,   296,   267,    64,   300,   124,    86,
     228,   110,   269,   295,   270,   138,   299,    98,   125,   227,
     228,   166,   280,   228,   259,   314,   316,   259,   133,   227,
     107,   109,   227,   258,   313,   315,   258,   130,   135,    98,
     127,   136,   131,   224,    92,    76,    86,   224,    86,   272,
     142,   153,    98,   144,    98,   228,    98,    53,    54,    55,
      56,   172,   259,   228,   227,   255,   160,    59,   255,   157,
     174,   258,   227,   176,   228,   228,   273,   275,   153,   153,
     276,   146,   153,   227,   227,   167,   277,    57,   153,   151,
     168,   169,   170,   154,    58,    59,   155,   126,    61,   224,
      62,   156,   139,   255,   141,    29,   178,    76,    29,   224,
     181,    76,   224,   224,   183,    76,   224,   163,    98,   185,
      76,    99,    59,   179,   194,   190,    29,    71,    29,   245,
      29,   250,   246,   247,   196,   248,   252,   265,   278,    73,
     288,    98,    98,   202,   224,    98,    84,    98,   307,    98,
     291,   224,   224,   304,    96,   305,   308,   326,   320,   321,
     322,   237,   323,   224,   224,   324,   239,   240,   241,   242,
     325,   328,   244,   329,   330,   331,    96,    33,   189,   260,
     171,   198,   199,    84,     0,    84,   200,     0,     0,    96,
       0,    96,     0,    96,   203,     9,    10,    11,    12,     0,
      14,    15,    16,    17,    18,    19,    20,    21,     0,     0,
       0,     0,     0,     0,     0,   282,   283,     0,     0,     0,
       0,     0,   204,   205,   206,     0,   207,    59,     0,     0,
     208,   209,     0,     0,   210,   293,   294,     0,   297,   298,
     211,     0,     0,     0,   111,   112,   113,   114,   115,   302,
     303,   116,     0,   117,   118,    96,   119,   120,     0,   203,
       9,    10,    11,    12,     0,    14,    15,    16,    17,    18,
      19,    20,    21,     0,     0,     0,     0,     0,    96,    96,
       0,     0,    96,     0,    96,     0,    96,   204,   205,   206,
       0,   207,    59,     0,     0,   208,   301,     0,     0,   210,
     203,     9,    10,    11,    12,   211,    14,    15,    16,    17,
      18,    19,    20,    21,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   204,   205,
     206,     0,   207,    59,     0,     0,   208,   306,     0,     0,
     210,   203,     9,    10,    11,    12,   211,    14,    15,    16,
      17,    18,    19,    20,    21,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   204,
     205,   206,     0,   207,    59,     0,     0,   208,   309,     0,
       0,   210,   203,     9,    10,    11,    12,   211,    14,    15,
      16,    17,    18,    19,    20,    21,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     204,   205,   206,     0,   207,    59,     0,     0,   208,   333,
       0,     0,   210,   203,     9,    10,    11,    12,   211,    14,
      15,    16,    17,    18,    19,    20,    21,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   204,   205,   206,     0,   207,    59,     0,     0,   208,
     337,     0,     0,   210,   203,     9,    10,    11,    12,   211,
      14,    15,    16,    17,    18,    19,    20,    21,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   204,   205,   206,     0,   207,    59,     0,     0,
     208,   340,     0,     0,   210,   203,     9,    10,    11,    12,
     211,    14,    15,    16,    17,    18,    19,    20,    21,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   204,   205,   206,     0,   207,    59,     0,
       0,   208,   341,     0,     0,   210,     0,     0,     0,     0,
       8,   211,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    53,    54,    55,    56,     9,
      10,    11,    12,     0,    14,    15,    16,    17,    18,    19,
      20,    21,     0,    22,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    57,     5,     0,   206,     0,
     207,    59,    58,    59,   310,     0,    61,     0,    62,     9,
      10,    11,    12,     0,    14,    15,    16,    17,    18,    19,
      20,    21,     9,    10,    11,    12,     0,    14,    15,    16,
      17,    18,    19,    20,    21,     0,     0,     0,   206,     0,
     207,    59,     0,     0,   334,     0,     0,     0,     0,     0,
       0,     0,     0,   207,    59,     0,     0,   253,     9,    10,
      11,    12,     0,    14,    15,    16,    17,    18,    19,    20,
      21,     9,    10,    11,    12,     0,    14,    15,    16,    17,
      18,    19,    20,    21,     0,     0,     0,     0,     0,   207,
      59,     0,     0,   263,     0,     0,     0,     0,     0,     0,
       0,     0,   207,    59,     0,     8,   317,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
       9,    10,    11,    12,     0,    14,    15,    16,    17,    18,
      19,    20,    21,     0,     0,     0,     0,     0,    22,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   279,    59,     9,    10,    11,    12,    78,    14,    15,
      16,    17,    18,    19,    20,    21,     9,    10,    11,    12,
       0,    14,    15,    16,    17,    18,    19,    20,    21,     9,
      10,    11,    12,     0,    79,    15,    16,    17,    18,    19,
      20,    21,     0,     0,     0,     0,     0,    93,     0,   111,
     112,   113,   114,   115,     0,     0,   197,     0,   117,   118,
     128,   119,   120
};

static const yytype_int16 yycheck[] =
{
       3,    14,   222,     6,   175,   288,    29,    30,    31,    42,
     218,   218,    30,    57,   222,   222,     3,    53,    51,     6,
      45,    24,    57,    26,    49,    28,    40,    74,    46,    30,
      30,     0,    30,    27,    28,    49,    30,    24,   245,    26,
      87,    28,    89,   326,    91,    46,    46,   218,    46,   220,
     233,   222,     3,     4,     5,     6,    79,    44,    52,    30,
     104,    84,    85,    86,    53,    52,   249,    40,   288,    42,
     253,   291,    30,    46,   245,    46,    30,    50,    42,     4,
     288,   288,    33,   291,   291,    72,    50,    74,    46,    40,
      41,    40,    46,    44,    81,    46,    83,    48,    30,    47,
      87,    49,    89,   274,    91,    40,   326,    27,    28,   292,
      30,    48,    49,   284,    46,    42,   287,   288,   326,   326,
     291,     6,     3,     4,     5,     6,    40,   310,    42,   176,
     177,   175,    52,   180,    42,   182,    50,   184,    46,    24,
     175,    26,    50,    28,    47,    42,    49,   160,   319,   332,
     163,   334,    33,    50,    40,   326,   327,    48,    49,    40,
      41,    44,    43,    44,    46,    46,   153,   338,   339,    40,
      41,    47,    40,    49,   218,    46,   220,    47,   222,    49,
      28,   194,    30,   218,    28,   220,    30,   222,     3,   176,
     177,     6,    47,   180,    49,   182,    50,   184,    46,    48,
      49,   245,    46,   226,    52,    44,   229,   230,    52,    24,
     245,    26,    47,    28,    49,   218,    47,    40,    49,   222,
     175,    40,    27,    28,   268,    30,    37,   271,    27,    44,
     274,    43,    28,   268,    30,    45,   271,    52,    46,   274,
     284,    47,   245,   287,   288,   289,   290,   291,    40,   284,
      61,    62,   287,   288,   289,   290,   291,    72,    40,    74,
      71,    40,    73,   218,    48,    49,    81,   222,    83,    47,
      40,    49,    87,    40,    89,   319,    91,     3,     4,     5,
       6,    43,   326,   327,   319,   288,    40,    41,   291,   100,
      30,   326,   327,    46,   338,   339,    47,    47,    49,    49,
      47,    40,    49,   338,   339,   116,    47,    33,    49,    40,
     121,   122,   123,    40,    40,    41,    40,    43,    44,   274,
      46,    40,    81,   326,    83,     3,    48,    49,     6,   284,
      48,    49,   287,   288,    48,    49,   291,    40,   153,    48,
      49,    40,    41,    44,    40,    47,    24,    42,    26,    46,
      28,    40,    46,    46,   165,    40,    48,    48,    48,    30,
      39,   176,   177,   174,   319,   180,    44,   182,    48,   184,
      47,   326,   327,    47,    52,    47,    40,    39,    48,    48,
      48,   192,    48,   338,   339,    48,   197,   198,   199,   200,
      48,    48,   203,    48,    48,    48,    74,     6,   153,   220,
     125,   166,   166,    81,    -1,    83,   166,    -1,    -1,    87,
      -1,    89,    -1,    91,     8,     9,    10,    11,    12,    -1,
      14,    15,    16,    17,    18,    19,    20,    21,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   246,   247,    -1,    -1,    -1,
      -1,    -1,    36,    37,    38,    -1,    40,    41,    -1,    -1,
      44,    45,    -1,    -1,    48,   266,   267,    -1,   269,   270,
      54,    -1,    -1,    -1,    22,    23,    24,    25,    26,   280,
     281,    29,    -1,    31,    32,   153,    34,    35,    -1,     8,
       9,    10,    11,    12,    -1,    14,    15,    16,    17,    18,
      19,    20,    21,    -1,    -1,    -1,    -1,    -1,   176,   177,
      -1,    -1,   180,    -1,   182,    -1,   184,    36,    37,    38,
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
      45,    -1,    -1,    48,     8,     9,    10,    11,    12,    54,
      14,    15,    16,    17,    18,    19,    20,    21,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    36,    37,    38,    -1,    40,    41,    -1,    -1,
      44,    45,    -1,    -1,    48,     8,     9,    10,    11,    12,
      54,    14,    15,    16,    17,    18,    19,    20,    21,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    36,    37,    38,    -1,    40,    41,    -1,
      -1,    44,    45,    -1,    -1,    48,    -1,    -1,    -1,    -1,
       7,    54,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,     3,     4,     5,     6,     9,
      10,    11,    12,    -1,    14,    15,    16,    17,    18,    19,
      20,    21,    -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    53,    -1,    38,    -1,
      40,    41,    40,    41,    44,    -1,    44,    -1,    46,     9,
      10,    11,    12,    -1,    14,    15,    16,    17,    18,    19,
      20,    21,     9,    10,    11,    12,    -1,    14,    15,    16,
      17,    18,    19,    20,    21,    -1,    -1,    -1,    38,    -1,
      40,    41,    -1,    -1,    44,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    40,    41,    -1,    -1,    44,     9,    10,
      11,    12,    -1,    14,    15,    16,    17,    18,    19,    20,
      21,     9,    10,    11,    12,    -1,    14,    15,    16,    17,
      18,    19,    20,    21,    -1,    -1,    -1,    -1,    -1,    40,
      41,    -1,    -1,    44,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    40,    41,    -1,     7,    44,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
       9,    10,    11,    12,    -1,    14,    15,    16,    17,    18,
      19,    20,    21,    -1,    -1,    -1,    -1,    -1,    40,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    40,    41,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,     9,    10,    11,    12,
      -1,    14,    15,    16,    17,    18,    19,    20,    21,     9,
      10,    11,    12,    -1,    40,    15,    16,    17,    18,    19,
      20,    21,    -1,    -1,    -1,    -1,    -1,    40,    -1,    22,
      23,    24,    25,    26,    -1,    -1,    29,    -1,    31,    32,
      40,    34,    35
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    56,    57,    58,     0,    53,    59,    60,     7,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    40,    61,    62,    65,    68,    69,    82,   101,
     110,   111,     4,    60,    61,    40,    40,    42,   104,    40,
      83,    61,    63,    61,    44,    61,    40,    83,    40,    83,
      40,    83,    46,     3,     4,     5,     6,    33,    40,    41,
      43,    44,    46,    80,    86,    87,    88,    98,   102,   105,
     106,    42,    51,    30,    46,    48,    49,    44,    13,    40,
      70,    71,    74,    75,   101,   110,   111,    46,    48,    46,
      48,    46,    48,    40,    66,    67,   101,   110,   111,    40,
      46,   105,   106,    46,    50,   104,    50,    86,   103,    86,
      43,    22,    23,    24,    25,    26,    29,    31,    32,    34,
      35,   107,   108,   109,    27,    46,    43,    86,    40,   110,
     111,    86,    66,    40,    64,    40,    40,    83,    45,    70,
      72,    70,    40,    83,    40,    83,    40,    83,    66,    66,
      66,    40,    47,    49,    40,    40,    40,    86,    86,    99,
      40,   106,    50,    40,    45,    49,    47,    86,    86,    86,
      86,    99,    43,    47,    30,    76,    46,    46,    48,    44,
      46,    48,    46,    48,    46,    48,    47,    47,    47,    67,
      47,    47,    49,   104,    40,   104,    86,    29,   107,   108,
     109,    47,    86,     8,    36,    37,    38,    40,    44,    45,
      48,    54,    78,    80,    82,    84,    85,    89,    90,    91,
      93,    94,    96,    97,    98,   100,   101,   105,   106,   110,
     111,    66,    66,    73,    66,    66,    66,    86,   104,    86,
      86,    86,    86,    48,    86,    46,    46,    46,    40,    77,
      40,    79,    48,    44,    81,    82,    84,    97,   105,   106,
      85,   105,   106,    44,    81,    48,    28,    30,    52,    28,
      30,    52,    47,    47,    76,    47,    47,    47,    48,    40,
      82,    84,    86,    86,    76,    40,    49,    76,    39,    52,
      52,    47,    95,    86,    86,   105,   106,    86,    86,   105,
     106,    45,    86,    86,    47,    47,    45,    48,    40,    45,
      44,    81,    89,   105,   106,   105,   106,    44,    81,    76,
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
     103,   104,   104,   104,   104,   105,   105,   106,   106,   106,
     106,   106,   106,   106,   107,   107,   108,   108,   109,   109,
     109,   109,   109,   110,   110,   110,   110,   110,   110,   110,
     111,   111,   111,   111
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
       3,     4,     3,     3,     2,     1,     2,     3,     3,     4,
       4,     5,     3,     4,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1
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
#line 99 "yacc.y"
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
#line 1591 "yacc.tab.c"
    break;

  case 3: /* start: $@1 include_stmts code  */
#line 109 "yacc.y"
                       {
        free_symtab(global_table);
        free_functab(function_table);
        free_classtab(class_table);
    }
#line 1601 "yacc.tab.c"
    break;

  case 4: /* $@2: %empty  */
#line 114 "yacc.y"
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
#line 1616 "yacc.tab.c"
    break;

  case 5: /* start: $@2 code  */
#line 123 "yacc.y"
           {
        free_symtab(global_table);
        free_functab(function_table);
        free_classtab(class_table);
    }
#line 1626 "yacc.tab.c"
    break;

  case 13: /* $@3: %empty  */
#line 148 "yacc.y"
                       {
            local_table = (yyvsp[0].functions).local_table;
            params = (yyvsp[0].functions).params;
            rflag = false;
            return_type = (yyvsp[0].functions).type;
        }
#line 1637 "yacc.tab.c"
    break;

  case 14: /* $@4: %empty  */
#line 153 "yacc.y"
              {scope++;}
#line 1643 "yacc.tab.c"
    break;

  case 15: /* function: function_dec $@3 LCB $@4 statements RCB  */
#line 153 "yacc.y"
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
#line 1666 "yacc.tab.c"
    break;

  case 16: /* function_dec: data_type_new IDENTIFIER LPB function_params RPB  */
#line 174 "yacc.y"
                                                               {
        struct funcrec *entry = (struct funcrec*) malloc(sizeof(struct funcrec));
        entry->name = (yyvsp[-3].id).name;
        entry->type = (yyvsp[-4].type);
        entry->params = (yyvsp[-1].functions).params;
        entry->num_params = (yyvsp[-1].functions).num_params;
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
#line 1688 "yacc.tab.c"
    break;

  case 17: /* function_dec: data_type_pr IDENTIFIER LPB function_params RPB  */
#line 191 "yacc.y"
                                                      {
        
        struct funcrec *entry = (struct funcrec *)malloc(sizeof(struct funcrec));
        entry->name = (yyvsp[-3].id).name;
        entry->type = (yyvsp[-4].type);
        entry->params = (yyvsp[-1].functions).params;
        entry->num_params = (yyvsp[-1].functions).num_params;
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

  case 18: /* function_dec: IDENTIFIER IDENTIFIER LPB function_params RPB  */
#line 209 "yacc.y"
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
        if(lookup_functab(function_table, entry) != NULL)
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
#line 1738 "yacc.tab.c"
    break;

  case 19: /* function_dec: VOID IDENTIFIER LPB function_params RPB  */
#line 231 "yacc.y"
                                              {
        struct funcrec *entry = (struct funcrec *)malloc(sizeof(struct funcrec));
        entry->name = (yyvsp[-3].id).name;
        entry->type = 4;
        entry->params = (yyvsp[-1].functions).params;
        entry->num_params = (yyvsp[-1].functions).num_params;
        if(lookup_functab(function_table, entry) != NULL)
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
#line 1760 "yacc.tab.c"
    break;

  case 20: /* function_dec: list IDENTIFIER LPB function_params RPB  */
#line 249 "yacc.y"
                                              {
        struct funcrec *entry = (struct funcrec *)malloc(sizeof(struct funcrec));
        entry->name = (yyvsp[-3].id).name;
        entry->type = 5;
        entry->params = (yyvsp[-1].functions).params;
        entry->num_params = (yyvsp[-1].functions).num_params;
        entry->next = NULL;
        entry->local_table = init_symtab();
        if(lookup_functab(function_table, entry) != NULL)
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
#line 1784 "yacc.tab.c"
    break;

  case 21: /* function_params: function_params COMMA function_param  */
#line 271 "yacc.y"
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
#line 1799 "yacc.tab.c"
    break;

  case 22: /* function_params: function_param  */
#line 281 "yacc.y"
                     {
        (yyval.functions).params = init_symtab();
        insert_symtab((yyval.functions).params, (yyvsp[0].param));
        (yyval.functions).num_params = 1;
    }
#line 1809 "yacc.tab.c"
    break;

  case 23: /* function_params: %empty  */
#line 286 "yacc.y"
      {
        (yyval.functions).params = init_symtab();
        (yyval.functions).num_params = 0;
    }
#line 1818 "yacc.tab.c"
    break;

  case 24: /* function_param: data_type_new IDENTIFIER  */
#line 293 "yacc.y"
                                         {
        struct idrec *entry = (struct idrec *)malloc(sizeof(struct idrec));
        entry->name = (yyvsp[0].id).name;
        entry->type = (yyvsp[-1].type);
        entry->arr = false;
        entry->arr_dims = init_ilist();
        entry->scope = 1;
        entry->next = NULL;
        entry->class_name = NULL;       
        (yyval.param) = entry;
    }
#line 1834 "yacc.tab.c"
    break;

  case 25: /* function_param: data_type_pr IDENTIFIER  */
#line 304 "yacc.y"
                              {
        struct idrec *entry = (struct idrec*) malloc(sizeof(struct idrec));
        entry->name = (yyvsp[0].id).name;
        entry->type = (yyvsp[-1].type);
        entry->arr = false;
        entry->arr_dims = init_ilist();
        entry->scope = 1;
        entry->next = NULL;
        entry->class_name = NULL;       
        (yyval.param) = entry;
    }
#line 1850 "yacc.tab.c"
    break;

  case 26: /* function_param: IDENTIFIER IDENTIFIER  */
#line 315 "yacc.y"
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
        entry->arr_dims = init_ilist();
        (yyval.param) = entry;
    }
#line 1871 "yacc.tab.c"
    break;

  case 27: /* function_param: list IDENTIFIER  */
#line 332 "yacc.y"
                      {
        struct idrec *entry = (struct idrec *)malloc(sizeof(struct idrec));
        entry->name = (yyvsp[0].id).name;
        entry->type = (yyvsp[-1].list).type;
        entry->arr = true;
        entry->scope = 1;
        entry->next = NULL;
        entry->class_name = NULL;
        entry->arr_dims = init_ilist();
        //arr_dimlist
        (yyval.param) = entry;
    }
#line 1888 "yacc.tab.c"
    break;

  case 28: /* class: class_dec LCB class_stmt RCB  */
#line 348 "yacc.y"
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
#line 1908 "yacc.tab.c"
    break;

  case 29: /* class_dec: CLASS IDENTIFIER  */
#line 366 "yacc.y"
                            {
        (yyval.id).name = (yyvsp[0].id).name;
        (yyvsp[0].id).type = 14;
        members = init_symtab();
        methods = init_functab();
    }
#line 1919 "yacc.tab.c"
    break;

  case 33: /* $@5: %empty  */
#line 380 "yacc.y"
                                   {
            local_table = (yyvsp[0].functions).local_table;
            params = (yyvsp[0].functions).params;
            rflag = true;
            return_type = (yyvsp[0].functions).type;
        }
#line 1930 "yacc.tab.c"
    break;

  case 34: /* $@6: %empty  */
#line 385 "yacc.y"
              {scope++;}
#line 1936 "yacc.tab.c"
    break;

  case 35: /* class_function: class_function_dec $@5 LCB $@6 statements RCB  */
#line 385 "yacc.y"
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
#line 1959 "yacc.tab.c"
    break;

  case 36: /* class_function_dec: data_type_new IDENTIFIER LPB function_params RPB  */
#line 406 "yacc.y"
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
            printf("Error: Function %s already declared\n", entry->name);
            YYABORT;
        }
        (yyval.functions).type = (yyvsp[-4].type);
        (yyval.functions).name = (yyvsp[-3].id).name;
        (yyval.functions).params = (yyvsp[-1].functions).params;
        (yyval.functions).num_params = (yyvsp[-1].functions).num_params;
        (yyval.functions).local_table = init_symtab();
    }
#line 1983 "yacc.tab.c"
    break;

  case 37: /* class_function_dec: data_type_pr IDENTIFIER LPB function_params RPB  */
#line 425 "yacc.y"
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
            YYABORT;
        }
        (yyval.functions).type = (yyvsp[-4].type);
        (yyval.functions).name = (yyvsp[-3].id).name;
        (yyval.functions).params = (yyvsp[-1].functions).params;
        (yyval.functions).num_params = (yyvsp[-1].functions).num_params;
        (yyval.functions).local_table = init_symtab();
    }
#line 2007 "yacc.tab.c"
    break;

  case 38: /* class_function_dec: IDENTIFIER IDENTIFIER LPB function_params RPB  */
#line 444 "yacc.y"
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
        if(lookup_functab(methods, entry) != NULL)
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
#line 2036 "yacc.tab.c"
    break;

  case 39: /* class_function_dec: VOID IDENTIFIER LPB function_params RPB  */
#line 468 "yacc.y"
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
            YYABORT;
        }
        (yyval.functions).type = 4;
        (yyval.functions).name = (yyvsp[-3].id).name;
        (yyval.functions).params = (yyvsp[-1].functions).params;
        (yyval.functions).num_params = (yyvsp[-1].functions).num_params;
        (yyval.functions).local_table = init_symtab();
    }
#line 2060 "yacc.tab.c"
    break;

  case 40: /* class_function_dec: list IDENTIFIER LPB function_params RPB  */
#line 488 "yacc.y"
                                              {
        struct funcrec *entry = (struct funcrec *)malloc(sizeof(struct funcrec));
        entry->name = (yyvsp[-3].id).name;
        entry->type = (yyvsp[-4].list).type;
        entry->params = (yyvsp[-1].functions).params;
        entry->num_params = (yyvsp[-1].functions).num_params;
        entry->next = NULL;
        entry->local_table = init_symtab();
        if(lookup_functab(methods, entry) != NULL)
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
#line 2084 "yacc.tab.c"
    break;

  case 41: /* class_decl_stmt: data_type_new id_list SEMICOLON  */
#line 510 "yacc.y"
                                                 {
        struct snode* temp = (yyvsp[-1].namelist)->head;
        while(temp != NULL){
            struct idrec *entry = (struct idrec *)malloc(sizeof(struct idrec));
            entry->type = (yyvsp[-2].type);
            entry->arr = false;
            entry->scope = 1; 
            entry->name = temp->val;
            entry -> class_name = NULL;
            entry -> arr_dims = init_ilist();
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
#line 2109 "yacc.tab.c"
    break;

  case 42: /* class_decl_stmt: data_type_pr id_list SEMICOLON  */
#line 530 "yacc.y"
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
            entry -> arr_dims = init_ilist();
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
#line 2136 "yacc.tab.c"
    break;

  case 43: /* class_decl_stmt: IDENTIFIER id_list SEMICOLON  */
#line 552 "yacc.y"
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
            entry -> arr_dims = init_ilist();
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
#line 2163 "yacc.tab.c"
    break;

  case 44: /* class_decl_stmt: list id_list SEMICOLON  */
#line 575 "yacc.y"
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
            //arr_dimlist
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
#line 2189 "yacc.tab.c"
    break;

  case 45: /* $@7: %empty  */
#line 600 "yacc.y"
                            {scope++;}
#line 2195 "yacc.tab.c"
    break;

  case 46: /* statements: statements LCB $@7 statements RCB  */
#line 600 "yacc.y"
                                                      {scope--;}
#line 2201 "yacc.tab.c"
    break;

  case 48: /* statements: %empty  */
#line 602 "yacc.y"
      {}
#line 2207 "yacc.tab.c"
    break;

  case 64: /* unary_stmt: identifier UNARY_OP  */
#line 628 "yacc.y"
                                {
        // check id in symbol table
        if((yyvsp[-1].class_id).type != 0 || (yyvsp[-1].class_id).type != 1){
            printf("Error: Unary operator not defined for this type\n"); 
            YYABORT;
        }
        (yyval.type) = (yyvsp[-1].class_id).type;
    }
#line 2220 "yacc.tab.c"
    break;

  case 72: /* decl_stmt: data_type_new id_list SEMICOLON  */
#line 650 "yacc.y"
                                           {
        struct snode* temp = (yyvsp[-1].namelist)->head;
        while(temp != NULL){
            struct idrec *entry = (struct idrec*) malloc(sizeof(struct idrec));
            entry -> type = (yyvsp[-2].type);
            entry -> arr = false;
            entry -> scope = scope; 
            entry -> name = temp->val;
            entry -> class_name = NULL;
            entry -> arr_dims = init_ilist();
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
#line 2249 "yacc.tab.c"
    break;

  case 73: /* decl_stmt: data_type_pr id_list SEMICOLON  */
#line 674 "yacc.y"
                                    {
        struct snode* temp = (yyvsp[-1].namelist)->head;
        while(temp != NULL){
            struct idrec *entry = (struct idrec*) malloc(sizeof(struct idrec));
            entry -> type = (yyvsp[-2].type);
            entry -> arr = false;
            entry -> scope = scope; 
            entry -> name = temp->val;
            entry -> class_name = NULL;
            entry -> arr_dims = init_ilist();
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
#line 2278 "yacc.tab.c"
    break;

  case 74: /* decl_stmt: IDENTIFIER id_list SEMICOLON  */
#line 698 "yacc.y"
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
            entry -> arr_dims = init_ilist();
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
#line 2312 "yacc.tab.c"
    break;

  case 75: /* decl_stmt: list id_list SEMICOLON  */
#line 728 "yacc.y"
                             {
        struct snode* temp = (yyvsp[-1].namelist)->head;
        while(temp != NULL){
            struct idrec *entry = (struct idrec*) malloc(sizeof(struct idrec));
            entry -> type = 5;
            entry -> arr = true;
            entry -> scope = scope; 
            entry -> name = temp->val;
            entry -> class_name = NULL;
            //arr_dimlist
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
#line 2341 "yacc.tab.c"
    break;

  case 76: /* id_list: id_list COMMA IDENTIFIER  */
#line 755 "yacc.y"
                                 {
        insert_slist((yyvsp[-2].namelist), (yyvsp[0].id).name);
        (yyval.namelist) = (yyvsp[-2].namelist);
    }
#line 2350 "yacc.tab.c"
    break;

  case 77: /* id_list: IDENTIFIER EQUALS nested_expr  */
#line 759 "yacc.y"
                                   {
        // check nested expr type
        (yyval.namelist) = init_slist();
        insert_slist((yyval.namelist), (yyvsp[-2].id).name);
    }
#line 2360 "yacc.tab.c"
    break;

  case 78: /* id_list: id_list COMMA IDENTIFIER EQUALS nested_expr  */
#line 764 "yacc.y"
                                                 {
        (yyval.namelist) = init_slist();
        insert_slist((yyval.namelist), (yyvsp[-2].id).name);
    }
#line 2369 "yacc.tab.c"
    break;

  case 79: /* id_list: IDENTIFIER  */
#line 768 "yacc.y"
                {
        (yyval.namelist) = init_slist();
        insert_slist((yyval.namelist), (yyvsp[0].id).name);   
    }
#line 2378 "yacc.tab.c"
    break;

  case 83: /* expr_stmt_without_semicolon: identifier EQUALS nested_expr  */
#line 782 "yacc.y"
                                    {
        if((yyvsp[-2].class_id).type != (yyvsp[0].type)){
            printf("Error: Type mismatch\n");
            YYABORT;
        }
    }
#line 2389 "yacc.tab.c"
    break;

  case 86: /* nested_expr: LPB nested_expr RPB  */
#line 793 "yacc.y"
                                 {(yyval.type) = (yyvsp[-1].type);}
#line 2395 "yacc.tab.c"
    break;

  case 87: /* nested_expr: LPB nested_expr RPB conj nested_expr  */
#line 794 "yacc.y"
                                           {
        if((yyvsp[0].type) != 3 || (yyvsp[-3].type) != 3){
            printf("Error: Type mismatch\n");
            YYABORT;
        }
        (yyval.type) = (yyvsp[-3].type);
    }
#line 2407 "yacc.tab.c"
    break;

  case 88: /* nested_expr: LPB nested_expr RPB REL_OP nested_expr  */
#line 801 "yacc.y"
                                             {
        (yyval.type) = 3;
    }
#line 2415 "yacc.tab.c"
    break;

  case 89: /* nested_expr: LPB nested_expr RPB arith_op nested_expr  */
#line 804 "yacc.y"
                                               {
        (yyval.type) = (yyvsp[-3].type);
    }
#line 2423 "yacc.tab.c"
    break;

  case 90: /* nested_expr: LPB nested_expr RPB set_op nested_expr  */
#line 807 "yacc.y"
                                             {
        (yyval.type) = (yyvsp[-3].type);
    }
#line 2431 "yacc.tab.c"
    break;

  case 91: /* nested_expr: expr  */
#line 810 "yacc.y"
           {
        (yyval.type) = (yyvsp[0].type);
    }
#line 2439 "yacc.tab.c"
    break;

  case 92: /* expr: expr_terminal conj nested_expr  */
#line 816 "yacc.y"
                                     {
        if((yyvsp[-2].type) != (yyvsp[0].type)){
            printf("Error: Type mismatch\n");
            YYABORT;
        }
        (yyval.type) = 3;
    }
#line 2451 "yacc.tab.c"
    break;

  case 93: /* expr: expr_terminal REL_OP nested_expr  */
#line 823 "yacc.y"
                                       {
        if((yyvsp[-2].type) != (yyvsp[0].type)){
            printf("Error: Type mismatch\n");
            YYABORT;
        }
        (yyval.type) = 3;
    }
#line 2463 "yacc.tab.c"
    break;

  case 94: /* expr: expr_terminal arith_op nested_expr  */
#line 830 "yacc.y"
                                         {
        if((yyvsp[-2].type) != (yyvsp[0].type)){
            printf("Error: Type mismatch\n");
            YYABORT;
        }
        (yyval.type) = (yyvsp[-2].type);
    }
#line 2475 "yacc.tab.c"
    break;

  case 95: /* expr: expr_terminal set_op nested_expr  */
#line 837 "yacc.y"
                                       {
        if((yyvsp[-2].type) != (yyvsp[0].type)){
            printf("Error: Type mismatch\n");
            YYABORT;
        }
        (yyval.type) = (yyvsp[-2].type);
    }
#line 2487 "yacc.tab.c"
    break;

  case 96: /* expr: expr_terminal  */
#line 844 "yacc.y"
                    {
        (yyval.type) = (yyvsp[0].type);
    }
#line 2495 "yacc.tab.c"
    break;

  case 97: /* expr_terminal: unary_stmt  */
#line 850 "yacc.y"
                          {
        (yyval.type) = (yyvsp[0].type);
    }
#line 2503 "yacc.tab.c"
    break;

  case 98: /* expr_terminal: NUMBER  */
#line 853 "yacc.y"
            {
        (yyval.type) = 0;
    }
#line 2511 "yacc.tab.c"
    break;

  case 99: /* expr_terminal: DECIMAL  */
#line 856 "yacc.y"
             { 
        (yyval.type) = 1;
    }
#line 2519 "yacc.tab.c"
    break;

  case 100: /* expr_terminal: STRING_LITERAL  */
#line 859 "yacc.y"
                    {
        (yyval.type) = 2;    
    }
#line 2527 "yacc.tab.c"
    break;

  case 101: /* expr_terminal: BOOL_LITERAL  */
#line 862 "yacc.y"
                  {
        (yyval.type) = 3;
    }
#line 2535 "yacc.tab.c"
    break;

  case 102: /* expr_terminal: call  */
#line 865 "yacc.y"
           {
        (yyval.type) = (yyvsp[0].type);
    }
#line 2543 "yacc.tab.c"
    break;

  case 103: /* expr_terminal: NOT LPB nested_expr RPB  */
#line 869 "yacc.y"
                              {
        if((yyvsp[-1].type) != 3){
            printf("Error: Not operator not defined for this type\n"); 
            YYABORT;
        }
        (yyval.type) = 3;
    }
#line 2555 "yacc.tab.c"
    break;

  case 104: /* expr_terminal: NOT identifier  */
#line 876 "yacc.y"
                     {
        if((yyvsp[0].class_id).type != 3){
            printf("Error: Not operator not defined for this type\n"); 
            YYABORT;
        }
        (yyval.type) = 3;
    }
#line 2567 "yacc.tab.c"
    break;

  case 105: /* expr_terminal: NOT class_identifier  */
#line 883 "yacc.y"
                           {
        if(check_namelist((yyvsp[0].class_id).namelist, global_table, local_table, class_table, NULL, -1) == false)
        {
            YYABORT;
        }
        (yyval.type) = 3;
    }
#line 2579 "yacc.tab.c"
    break;

  case 106: /* expr_terminal: identifier  */
#line 890 "yacc.y"
                 {
        (yyval.type) = (yyvsp[0].class_id).type;
    }
#line 2587 "yacc.tab.c"
    break;

  case 107: /* expr_terminal: class_identifier  */
#line 893 "yacc.y"
                      {
        if(check_namelist((yyvsp[0].class_id).namelist, global_table, local_table, class_table, NULL, -1) == false)
        {
            YYABORT;
        }
        (yyval.type) = 3;
    }
#line 2599 "yacc.tab.c"
    break;

  case 108: /* expr_terminal: list_literal  */
#line 901 "yacc.y"
                   {
        (yyval.type) = 5;
    }
#line 2607 "yacc.tab.c"
    break;

  case 109: /* if_stmt: if_expr LCB statements RCB  */
#line 908 "yacc.y"
                                    {rflag = false;}
#line 2613 "yacc.tab.c"
    break;

  case 110: /* if_stmt: if_expr single_stmt  */
#line 909 "yacc.y"
                          {rflag = false;}
#line 2619 "yacc.tab.c"
    break;

  case 111: /* if_stmt: if_expr LCB statements RCB ELSE if_stmt  */
#line 910 "yacc.y"
                                              {rflag = false;}
#line 2625 "yacc.tab.c"
    break;

  case 112: /* if_stmt: if_expr single_stmt ELSE if_stmt  */
#line 911 "yacc.y"
                                       {rflag = false;}
#line 2631 "yacc.tab.c"
    break;

  case 113: /* if_stmt: if_expr LCB statements RCB ELSE LCB statements RCB  */
#line 912 "yacc.y"
                                                         {rflag = false;}
#line 2637 "yacc.tab.c"
    break;

  case 114: /* if_stmt: if_expr single_stmt ELSE LCB statements RCB  */
#line 913 "yacc.y"
                                                  {rflag = false;}
#line 2643 "yacc.tab.c"
    break;

  case 115: /* if_stmt: if_expr LCB statements RCB ELSE single_stmt  */
#line 914 "yacc.y"
                                                  {rflag = false;}
#line 2649 "yacc.tab.c"
    break;

  case 116: /* if_stmt: if_expr single_stmt ELSE single_stmt  */
#line 915 "yacc.y"
                                           {rflag = false;}
#line 2655 "yacc.tab.c"
    break;

  case 117: /* if_expr: IF LPB nested_expr RPB  */
#line 919 "yacc.y"
                                {
        if((yyvsp[-1].type) != 3){
            printf("Error: If condition must be bool\n");
            YYABORT;
        }
        rflag = false;
    }
#line 2667 "yacc.tab.c"
    break;

  case 118: /* $@8: %empty  */
#line 930 "yacc.y"
                                                      {scope++;}
#line 2673 "yacc.tab.c"
    break;

  case 119: /* for_stmt: for_exp expr_stmt_without_semicolon RPB LCB $@8 statements RCB  */
#line 930 "yacc.y"
                                                                                {scope--;rflag = false;}
#line 2679 "yacc.tab.c"
    break;

  case 120: /* for_stmt: for_exp expr_stmt_without_semicolon RPB single_stmt  */
#line 931 "yacc.y"
                                                          {rflag = false;}
#line 2685 "yacc.tab.c"
    break;

  case 121: /* for_exp: FOR LPB decl_stmt nested_expr SEMICOLON  */
#line 935 "yacc.y"
                                                 {
        if((yyvsp[-1].type) != 3){
            printf("Error: For condition must be bool\n");
            YYABORT;
        }
    }
#line 2696 "yacc.tab.c"
    break;

  case 122: /* for_exp: FOR LPB expr_stmt nested_expr SEMICOLON  */
#line 941 "yacc.y"
                                              {
        if((yyvsp[-1].type) != 3){
            printf("Error: For condition must be bool\n");
            YYABORT;
        }
    }
#line 2707 "yacc.tab.c"
    break;

  case 123: /* $@9: %empty  */
#line 950 "yacc.y"
                          {scope++;}
#line 2713 "yacc.tab.c"
    break;

  case 124: /* while_stmt: while_exp LCB $@9 statements RCB  */
#line 950 "yacc.y"
                                                    {scope--;rflag = false;}
#line 2719 "yacc.tab.c"
    break;

  case 125: /* while_stmt: while_exp single_stmt  */
#line 951 "yacc.y"
                            {rflag = false;}
#line 2725 "yacc.tab.c"
    break;

  case 126: /* while_exp: WHILE LPB nested_expr RPB  */
#line 955 "yacc.y"
                                     {
        if((yyvsp[-1].type) != 3){
            printf("Error: While condition must be bool\n");
            YYABORT;
        }
    }
#line 2736 "yacc.tab.c"
    break;

  case 128: /* call: IDENTIFIER LPB call_args RPB  */
#line 968 "yacc.y"
                                   {
        struct funcrec *entry = (struct funcrec *)malloc(sizeof(struct funcrec));
        entry -> name = (yyvsp[-3].id).name;
        entry -> params = (yyvsp[-1].functions).params;
        entry -> num_params = (yyvsp[-1].functions).num_params;
        struct funcrec *func = search_functab(function_table, entry);
        if(func == NULL)
        {
            YYABORT;
        }
        (yyval.type) = func -> type;
    }
#line 2753 "yacc.tab.c"
    break;

  case 129: /* call: class_identifier LPB call_args RPB  */
#line 980 "yacc.y"
                                         {
        if(check_namelist((yyvsp[-3].class_id).namelist, global_table, local_table, class_table, (yyvsp[-1].functions).params, (yyvsp[-1].functions).num_params) == false)
        {
            YYABORT;
        }
        struct funcrec *entry = (struct funcrec *)malloc(sizeof(struct funcrec));
        entry -> name = (yyvsp[-3].class_id).namelist->tail->val;
        entry -> params = (yyvsp[-1].functions).params;
        entry -> num_params = (yyvsp[-1].functions).num_params;
        struct funcrec *func = search_functab(methods, entry);
        if(func == NULL)
        {
            printf("Error: Method %s not declared\n", entry->name);
            YYABORT;
        }
        (yyval.type) = func -> type;
    }
#line 2775 "yacc.tab.c"
    break;

  case 130: /* call_args: call_args COMMA nested_expr  */
#line 1001 "yacc.y"
                                       {
        (yyval.functions).params = (yyvsp[-2].functions).params;
        struct idrec *entry = (struct idrec*) malloc(sizeof(struct idrec));
        entry -> type = (yyvsp[0].type);
        insert_symtab((yyval.functions).params, entry);
        (yyval.functions).num_params = (yyvsp[-2].functions).num_params + 1;
    }
#line 2787 "yacc.tab.c"
    break;

  case 131: /* call_args: nested_expr  */
#line 1008 "yacc.y"
                  {
        (yyval.functions).params = init_symtab();
        struct idrec *entry = (struct idrec*) malloc(sizeof(struct idrec));
        entry -> type = (yyvsp[0].type);
        insert_symtab((yyval.functions).params, entry);
        (yyval.functions).num_params = 1;
    }
#line 2799 "yacc.tab.c"
    break;

  case 132: /* call_args: %empty  */
#line 1015 "yacc.y"
      {
        (yyval.functions).params = init_symtab();
        (yyval.functions).num_params = 0;
    }
#line 2808 "yacc.tab.c"
    break;

  case 133: /* return_stmt: RETURN SEMICOLON  */
#line 1021 "yacc.y"
                              {
        if(return_type != 4)
        {
            printf("Error: Mismatch in return type\n");
            printf("Returned void while function returns %s\n", map_type[return_type]);
            YYABORT;
        }
        rflag = true;
    }
#line 2822 "yacc.tab.c"
    break;

  case 134: /* return_stmt: RETURN nested_expr SEMICOLON  */
#line 1030 "yacc.y"
                                   {
        if(return_type != (yyvsp[-1].type))
        {
            printf("Error: Mismatch in return type\n");
            printf("Returned %s while function returns %s\n", map_type[(yyvsp[-1].type)], map_type[return_type]);
            YYABORT;
        }
        rflag = true;
    }
#line 2836 "yacc.tab.c"
    break;

  case 135: /* list: LIST dim COLON data_type_pr  */
#line 1043 "yacc.y"
                                  {
        (yyval.list).type = (yyvsp[0].type);
        (yyval.list).dimlist = (yyvsp[-2].list).dimlist;
    }
#line 2845 "yacc.tab.c"
    break;

  case 136: /* list: LIST dim COLON data_type_new  */
#line 1047 "yacc.y"
                                   {
        (yyval.list).type = (yyvsp[0].type);
        (yyval.list).dimlist = (yyvsp[-2].list).dimlist;
    }
#line 2854 "yacc.tab.c"
    break;

  case 137: /* list: LIST dim COLON IDENTIFIER  */
#line 1051 "yacc.y"
                                {
        if(search_classtab(class_table, (yyvsp[0].id).name) == NULL)
        {
            printf("Error: Class %s not declared\n", (yyvsp[0].id).name);
            YYABORT;
        }
        (yyval.list).type = 14;
        (yyval.list).dimlist = (yyvsp[-2].list).dimlist;
    }
#line 2868 "yacc.tab.c"
    break;

  case 138: /* list_literal: LCB list_terminal RCB  */
#line 1063 "yacc.y"
                                     {
        (yyval.list).type = (yyvsp[-1].list).type;
    }
#line 2876 "yacc.tab.c"
    break;

  case 139: /* list_terminal: nested_expr  */
#line 1069 "yacc.y"
                           {
        (yyval.list).type = (yyvsp[0].type);
    }
#line 2884 "yacc.tab.c"
    break;

  case 140: /* list_terminal: list_terminal COMMA nested_expr  */
#line 1072 "yacc.y"
                                      {
        (yyval.list).type = 5;
    }
#line 2892 "yacc.tab.c"
    break;

  case 141: /* dim: dim LSB nested_expr RSB  */
#line 1079 "yacc.y"
                              {
        if((yyvsp[-1].type) != 0){
            printf("Error: Array size must be int\n");
            YYABORT;
        }
        insert_ilist((yyvsp[-3].list).dimlist, (yyvsp[-1].type));
        (yyval.list).dimlist = (yyvsp[-3].list).dimlist;
    }
#line 2905 "yacc.tab.c"
    break;

  case 142: /* dim: LSB nested_expr RSB  */
#line 1087 "yacc.y"
                          {
        if((yyvsp[-1].type) != 0){
            printf("Error: Array size must be int\n");
            YYABORT;
        }
        (yyval.list).dimlist = init_ilist();
        insert_ilist((yyval.list).dimlist, (yyvsp[-1].type));
    }
#line 2918 "yacc.tab.c"
    break;

  case 143: /* dim: dim LSB RSB  */
#line 1095 "yacc.y"
                  {
        (yyval.list).dimlist = (yyvsp[-2].list).dimlist;
    }
#line 2926 "yacc.tab.c"
    break;

  case 144: /* dim: LSB RSB  */
#line 1098 "yacc.y"
              {
        (yyval.list).dimlist = init_ilist();
    }
#line 2934 "yacc.tab.c"
    break;

  case 145: /* identifier: IDENTIFIER  */
#line 1104 "yacc.y"
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
#line 2950 "yacc.tab.c"
    break;

  case 146: /* identifier: IDENTIFIER dim  */
#line 1116 "yacc.y"
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
#line 2968 "yacc.tab.c"
    break;

  case 147: /* class_identifier: IDENTIFIER DOT IDENTIFIER  */
#line 1131 "yacc.y"
                                             {
        (yyval.class_id).namelist = init_slist();
        insert_slist((yyval.class_id).namelist, (yyvsp[-2].id).name);
        insert_slist((yyval.class_id).namelist, (yyvsp[0].id).name);   
    }
#line 2978 "yacc.tab.c"
    break;

  case 148: /* class_identifier: IDENTIFIER DOT class_identifier  */
#line 1136 "yacc.y"
                                      {
        struct snode* temp = (struct snode*)malloc(sizeof(struct snode));
        temp -> val = (yyvsp[-2].id).name;
        temp -> next = (yyvsp[0].class_id).namelist -> head;
        (yyvsp[0].class_id).namelist -> head = temp;
        (yyval.class_id).namelist = (yyvsp[0].class_id).namelist;               
    }
#line 2990 "yacc.tab.c"
    break;

  case 149: /* class_identifier: IDENTIFIER DOT IDENTIFIER dim  */
#line 1144 "yacc.y"
                                    {
        (yyval.class_id).namelist = init_slist();
        insert_slist((yyval.class_id).namelist, (yyvsp[-3].id).name);
        insert_slist((yyval.class_id).namelist, (yyvsp[-1].id).name);   
    }
#line 3000 "yacc.tab.c"
    break;

  case 150: /* class_identifier: IDENTIFIER dim DOT IDENTIFIER  */
#line 1149 "yacc.y"
                                    {
        (yyval.class_id).namelist = init_slist();
        insert_slist((yyval.class_id).namelist, (yyvsp[-3].id).name);
        insert_slist((yyval.class_id).namelist, (yyvsp[0].id).name);   
    }
#line 3010 "yacc.tab.c"
    break;

  case 151: /* class_identifier: IDENTIFIER dim DOT IDENTIFIER dim  */
#line 1154 "yacc.y"
                                        {
        (yyval.class_id).namelist = init_slist();
        insert_slist((yyval.class_id).namelist, (yyvsp[-4].id).name);
        insert_slist((yyval.class_id).namelist, (yyvsp[-1].id).name);   
    }
#line 3020 "yacc.tab.c"
    break;

  case 152: /* class_identifier: SELF DOT IDENTIFIER  */
#line 1159 "yacc.y"
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
#line 3039 "yacc.tab.c"
    break;

  case 153: /* class_identifier: SELF DOT IDENTIFIER dim  */
#line 1173 "yacc.y"
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
#line 3058 "yacc.tab.c"
    break;

  case 163: /* data_type_new: DOCUMENT  */
#line 1209 "yacc.y"
                       { (yyval.type) = 12;}
#line 3064 "yacc.tab.c"
    break;

  case 164: /* data_type_new: TEAM  */
#line 1210 "yacc.y"
           { (yyval.type) = 7;}
#line 3070 "yacc.tab.c"
    break;

  case 165: /* data_type_new: MEMBERS  */
#line 1211 "yacc.y"
              { (yyval.type) = 8;}
#line 3076 "yacc.tab.c"
    break;

  case 166: /* data_type_new: TASK  */
#line 1212 "yacc.y"
            { (yyval.type) = 9;}
#line 3082 "yacc.tab.c"
    break;

  case 167: /* data_type_new: EVENT  */
#line 1213 "yacc.y"
            { (yyval.type) = 10;}
#line 3088 "yacc.tab.c"
    break;

  case 168: /* data_type_new: MEETING  */
#line 1214 "yacc.y"
               { (yyval.type) = 11;}
#line 3094 "yacc.tab.c"
    break;

  case 169: /* data_type_new: CALENDAR  */
#line 1215 "yacc.y"
               { (yyval.type) = 13;}
#line 3100 "yacc.tab.c"
    break;

  case 170: /* data_type_pr: INT  */
#line 1219 "yacc.y"
                   { (yyval.type) = 0;}
#line 3106 "yacc.tab.c"
    break;

  case 171: /* data_type_pr: STRING  */
#line 1220 "yacc.y"
             { (yyval.type) = 2;}
#line 3112 "yacc.tab.c"
    break;

  case 172: /* data_type_pr: BOOL  */
#line 1221 "yacc.y"
            { (yyval.type) = 3;}
#line 3118 "yacc.tab.c"
    break;

  case 173: /* data_type_pr: FLOAT  */
#line 1222 "yacc.y"
            { (yyval.type) = 1;}
#line 3124 "yacc.tab.c"
    break;


#line 3128 "yacc.tab.c"

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

#line 1225 "yacc.y"



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
