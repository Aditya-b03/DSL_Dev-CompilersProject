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
  YYSYMBOL_YYACCEPT = 54,                  /* $accept  */
  YYSYMBOL_start = 55,                     /* start  */
  YYSYMBOL_56_1 = 56,                      /* $@1  */
  YYSYMBOL_57_2 = 57,                      /* $@2  */
  YYSYMBOL_include_stmts = 58,             /* include_stmts  */
  YYSYMBOL_include_stmt = 59,              /* include_stmt  */
  YYSYMBOL_identifier = 60,                /* identifier  */
  YYSYMBOL_code = 61,                      /* code  */
  YYSYMBOL_struct_code = 62,               /* struct_code  */
  YYSYMBOL_struct_def = 63,                /* struct_def  */
  YYSYMBOL_struct_body = 64,               /* struct_body  */
  YYSYMBOL_function = 65,                  /* function  */
  YYSYMBOL_function_dec = 66,              /* function_dec  */
  YYSYMBOL_data_type_new = 67,             /* data_type_new  */
  YYSYMBOL_data_type_pr = 68,              /* data_type_pr  */
  YYSYMBOL_function_params = 69,           /* function_params  */
  YYSYMBOL_function_param = 70,            /* function_param  */
  YYSYMBOL_class = 71,                     /* class  */
  YYSYMBOL_class_dec = 72,                 /* class_dec  */
  YYSYMBOL_class_stmt = 73,                /* class_stmt  */
  YYSYMBOL_statements = 74,                /* statements  */
  YYSYMBOL_statement = 75,                 /* statement  */
  YYSYMBOL_unary_stmt = 76,                /* unary_stmt  */
  YYSYMBOL_single_stmt = 77,               /* single_stmt  */
  YYSYMBOL_decl_stmt = 78,                 /* decl_stmt  */
  YYSYMBOL_list = 79,                      /* list  */
  YYSYMBOL_list_literal = 80,              /* list_literal  */
  YYSYMBOL_list_terminal = 81,             /* list_terminal  */
  YYSYMBOL_dim = 82,                       /* dim  */
  YYSYMBOL_id_list = 83,                   /* id_list  */
  YYSYMBOL_expr_stmt = 84,                 /* expr_stmt  */
  YYSYMBOL_expr_stmt_without_semicolon = 85, /* expr_stmt_without_semicolon  */
  YYSYMBOL_if_stmt = 86,                   /* if_stmt  */
  YYSYMBOL_for_stmt = 87,                  /* for_stmt  */
  YYSYMBOL_while_stmt = 88,                /* while_stmt  */
  YYSYMBOL_return_stmt = 89,               /* return_stmt  */
  YYSYMBOL_call_stmt = 90,                 /* call_stmt  */
  YYSYMBOL_call = 91,                      /* call  */
  YYSYMBOL_call_args = 92,                 /* call_args  */
  YYSYMBOL_nested_expr = 93,               /* nested_expr  */
  YYSYMBOL_expr = 94,                      /* expr  */
  YYSYMBOL_expr_terminal = 95,             /* expr_terminal  */
  YYSYMBOL_conj = 96,                      /* conj  */
  YYSYMBOL_set_op = 97,                    /* set_op  */
  YYSYMBOL_arith_op = 98                   /* arith_op  */
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
#define YYLAST   924

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  54
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  45
/* YYNRULES -- Number of rules.  */
#define YYNRULES  142
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  278

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   308


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
      45,    46,    47,    48,    49,    50,    51,    52,    53
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    73,    73,    73,    79,    79,    85,    86,    90,    95,
      96,   100,   104,   108,   114,   115,   116,   117,   118,   121,
     125,   129,   130,   134,   138,   139,   140,   141,   142,   146,
     147,   148,   149,   150,   151,   152,   158,   159,   160,   161,
     167,   168,   169,   173,   174,   175,   176,   180,   184,   188,
     189,   190,   191,   195,   196,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   213,   214,   218,   219,   220,   221,
     226,   241,   253,   254,   259,   260,   261,   266,   271,   272,
     277,   278,   279,   280,   285,   289,   290,   291,   298,   303,
     304,   305,   310,   311,   312,   313,   314,   315,   316,   317,
     322,   323,   324,   325,   330,   331,   336,   337,   341,   346,
     351,   352,   353,   354,   355,   360,   361,   362,   363,   364,
     365,   370,   371,   372,   373,   374,   380,   381,   382,   383,
     384,   385,   386,   387,   392,   393,   397,   398,   403,   404,
     405,   406,   407
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
  "$accept", "start", "$@1", "$@2", "include_stmts", "include_stmt",
  "identifier", "code", "struct_code", "struct_def", "struct_body",
  "function", "function_dec", "data_type_new", "data_type_pr",
  "function_params", "function_param", "class", "class_dec", "class_stmt",
  "statements", "statement", "unary_stmt", "single_stmt", "decl_stmt",
  "list", "list_literal", "list_terminal", "dim", "id_list", "expr_stmt",
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

#define YYPACT_NINF (-242)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-3)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -46,    10,   -39,   442,  -242,    27,    97,  -242,    -5,  -242,
    -242,  -242,  -242,    -1,    26,  -242,  -242,  -242,  -242,  -242,
    -242,  -242,    22,    34,  -242,   442,  -242,   442,    35,    44,
      47,   442,    50,   442,    51,  -242,  -242,  -242,  -242,    59,
     276,   -37,    20,    87,    75,  -242,  -242,  -242,    24,    99,
      29,   157,  -242,   823,  -242,    37,   172,   869,  -242,  -242,
    -242,    98,    38,    74,  -242,   373,   373,    -8,  -242,  -242,
    -242,    85,  -242,   876,   299,   149,   373,   869,  -242,   101,
    -242,   456,   869,  -242,   869,  -242,   249,   127,   823,   111,
    -242,   823,   823,   114,   869,  -242,   132,   153,   184,   -29,
    -242,   192,   373,  -242,   188,    83,   188,   -36,  -242,   189,
    -242,   373,  -242,  -242,  -242,  -242,  -242,  -242,   373,  -242,
    -242,  -242,  -242,   373,   373,   373,  -242,   197,  -242,  -242,
    -242,  -242,   130,   215,   663,    52,   203,   208,   216,   260,
    -242,  -242,   233,   229,   229,  -242,  -242,   229,  -242,  -242,
    -242,  -242,  -242,  -242,   224,   206,   226,   373,   373,  -242,
    -242,  -242,  -242,  -242,   264,  -242,  -242,  -242,  -242,   869,
    -242,   230,  -242,   188,  -242,  -242,   373,   890,   -24,   274,
    -242,  -242,  -242,  -242,  -242,  -242,  -242,   373,   229,   250,
    -242,  -242,   253,   856,   373,   373,   285,   188,  -242,  -242,
    -242,  -242,  -242,  -242,  -242,  -242,  -242,  -242,   373,   373,
     373,   373,   373,  -242,   373,  -242,  -242,  -242,   373,   373,
     271,   277,   278,  -242,  -242,  -242,  -242,  -242,     6,  -242,
     279,   283,   725,   761,  -242,   373,   188,   188,  -242,   240,
    -242,  -242,  -242,  -242,  -242,   286,  -242,   281,   288,   499,
     188,   513,   676,   774,   810,  -242,   289,   294,  -242,  -242,
    -242,  -242,  -242,  -242,  -242,  -242,   712,   554,   568,   609,
    -242,  -242,  -242,  -242,  -242,  -242,   623,  -242
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
       0,     0,    87,     0,     0,    16,    15,    54,    87,     0,
      87,     0,    17,    52,    14,    87,     0,    42,   127,   128,
     129,     0,     9,     0,    83,     0,     0,    65,   126,   133,
     130,     0,   120,   125,     0,     0,     0,    42,    72,     0,
      22,     0,    42,    70,    42,    71,     9,    65,    52,     0,
      91,    52,    52,     0,    42,    73,     0,     0,     0,     0,
      41,     0,     0,   132,     0,    11,     0,     0,    78,     0,
      64,   114,    81,   138,   139,   140,   141,   142,     0,   134,
     135,   136,   137,     0,     0,     0,    82,     0,    76,    75,
      74,    85,     0,    84,     0,     0,     0,     0,     0,     9,
      23,    62,    65,     0,     0,    53,    55,     0,    61,    56,
      57,    58,    59,    60,     0,     0,     0,     0,     0,    49,
      47,    50,    51,    88,     0,    45,    43,    44,    27,     0,
      46,     0,    10,     0,    13,    77,     0,   115,    65,     0,
     111,   122,   121,   124,   123,    80,    26,     0,     0,     0,
      21,   106,     0,     0,     0,     0,    87,     0,   108,    24,
      25,    89,    90,    28,    40,   131,    12,    79,     0,     0,
       0,     0,     0,   109,     0,    86,    20,   107,     0,     0,
       0,     0,     0,   117,   116,   119,   118,   113,    65,   110,
       0,     0,     0,     0,    63,     0,     0,     0,    54,    65,
     105,    66,    68,    67,    54,    93,   112,     0,     0,     0,
       0,     0,     0,     0,     0,   104,     0,    92,    54,    99,
      95,    54,   101,    54,   103,    69,     0,     0,     0,     0,
      54,    98,    94,    97,   100,   102,     0,    96
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -242,  -242,  -242,  -242,  -242,   329,   -52,    69,  -242,  -242,
    -242,   -47,  -242,    95,   280,   193,   174,  -242,  -242,   115,
    -119,  -242,   -11,  -190,    -3,   342,  -242,  -242,   326,   -14,
     -20,    56,  -241,  -242,  -242,  -242,  -206,   -58,  -242,   171,
    -242,  -242,   169,   173,   175
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     1,     2,     3,     6,     7,    67,    24,    25,    26,
     134,    27,    28,   143,   144,    99,   100,    31,    32,    89,
      81,   145,    68,   240,   146,   147,    69,   107,   105,    43,
     148,    93,   149,   150,   151,   152,   153,    70,   179,    71,
      72,    73,   123,   124,   125
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      33,    87,   110,    33,    74,   212,    88,    -2,   175,   103,
       4,   260,   176,    75,     5,    49,    51,   168,   110,   169,
      56,   111,    33,   154,    33,   272,   243,   243,    33,   142,
      33,    35,   110,    92,    38,   235,    87,   111,    39,    87,
      87,    88,    90,   245,    88,    88,   243,   243,   243,    76,
      91,   111,   172,    76,   174,    58,    59,    60,    76,   178,
     243,    42,   259,   262,   264,    77,    76,    40,    92,    82,
      90,    92,    92,    44,    84,    37,   271,    90,    47,    40,
      90,    90,    94,    48,    61,    91,    50,   104,    91,    91,
      55,    62,    63,    53,    45,    65,    46,    66,    29,   191,
      52,    29,    54,     8,    57,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    80,   249,
      29,   206,    29,   106,    74,   251,    29,   112,    29,    49,
      51,   190,   173,    56,    78,    79,    22,    62,    63,   267,
     133,    87,   268,   102,   269,   222,    83,    79,    29,    23,
       5,   276,    97,   110,   157,   160,   158,     9,    10,    11,
      12,   163,   228,    15,    16,    17,    18,    19,    20,    21,
     129,   165,    97,   219,   154,   154,   186,    97,   169,    97,
     239,   239,    90,    29,    87,    87,    29,    29,   128,    97,
     218,   154,   166,   154,   154,   154,   154,   142,   256,   142,
     239,   239,   239,   159,    85,    79,   161,   162,   154,   154,
     154,   154,   242,   242,   239,   142,   142,   142,   154,    95,
      79,    90,    90,   167,   142,    90,    90,    62,    63,   241,
     241,   170,   242,   242,   242,   177,   108,   109,    90,   185,
      90,    90,    90,    90,   187,   127,   242,   131,   193,   241,
     241,   241,   199,   194,   169,    90,    90,    90,    90,   110,
     157,   195,   158,   241,    97,    90,   110,   157,   196,   158,
     132,   198,   200,   171,   169,   155,   205,   156,   111,    58,
      59,    60,   180,    30,   197,   111,    30,   164,    42,   181,
      40,   250,   247,   248,   182,   183,   184,   216,   104,   196,
     217,    40,    58,    59,    60,    30,   192,    30,    61,   104,
     203,    30,   169,    30,    76,    62,    63,   232,    64,    65,
     213,    66,   214,   233,   252,   234,   236,   253,   201,   202,
     237,    61,   266,    30,   254,    36,   265,    98,    62,    63,
      41,   126,    65,   204,    66,    34,   209,   207,    34,     0,
     210,     0,   211,     0,     0,   130,     0,    98,   215,     0,
       0,     0,    98,     0,    98,   220,   221,    34,    30,    34,
       0,    30,    30,    34,    98,    34,    58,    59,    60,   223,
     224,   225,   226,   227,     0,   229,     0,     0,     0,   230,
     231,     0,     0,     0,     0,    34,     0,     0,     0,   101,
       0,     0,     0,     0,     0,    61,   246,     0,     0,     0,
       0,     0,    62,    63,     0,     0,    65,     0,    66,   101,
       0,     0,     0,     0,   101,     0,   101,     0,     0,     0,
      34,     0,     0,    34,    34,     0,   101,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     8,    98,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,   135,     9,    10,    11,    12,     0,    14,
      15,    16,    17,    18,    19,    20,    21,     0,     0,     0,
       0,    22,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   136,   137,   138,    23,   139,    63,     0,     0,     0,
     140,     0,     0,   141,     0,     0,   135,     9,    10,    11,
      12,   101,    14,    15,    16,    17,    18,    19,    20,    21,
     135,     9,    10,    11,    12,     0,    14,    15,    16,    17,
      18,    19,    20,    21,   136,   137,   138,     0,   139,    63,
       0,     0,     0,   255,     0,     0,   141,     0,   136,   137,
     138,     0,   139,    63,     0,     0,     0,   257,     0,     0,
     141,   135,     9,    10,    11,    12,     0,    14,    15,    16,
      17,    18,    19,    20,    21,   135,     9,    10,    11,    12,
       0,    14,    15,    16,    17,    18,    19,    20,    21,   136,
     137,   138,     0,   139,    63,     0,     0,     0,   273,     0,
       0,   141,     0,   136,   137,   138,     0,   139,    63,     0,
       0,     0,   274,     0,     0,   141,   135,     9,    10,    11,
      12,     0,    14,    15,    16,    17,    18,    19,    20,    21,
     135,     9,    10,    11,    12,     0,    14,    15,    16,    17,
      18,    19,    20,    21,   136,   137,   138,     0,   139,    63,
       0,     0,     0,   275,     0,     0,   141,     0,   136,   137,
     138,     0,   139,    63,     0,     0,     0,   277,     0,     0,
     141,     9,    10,    11,    12,     0,    14,    15,    16,    17,
      18,    19,    20,    21,     9,    10,    11,    12,     0,    14,
      15,    16,    17,    18,    19,    20,    21,     0,     0,     0,
       0,     0,   188,     0,     0,     0,     0,   189,     0,     0,
       0,     0,     0,   138,     0,   139,    63,     0,     0,   258,
       9,    10,    11,    12,     0,    14,    15,    16,    17,    18,
      19,    20,    21,     9,    10,    11,    12,     0,    14,    15,
      16,    17,    18,    19,    20,    21,     0,     0,     0,   138,
       0,   139,    63,     0,     0,   270,     0,     0,     0,     0,
       0,     0,     0,     0,   139,    63,     0,     0,   238,     9,
      10,    11,    12,     0,    14,    15,    16,    17,    18,    19,
      20,    21,     9,    10,    11,    12,     0,    14,    15,    16,
      17,    18,    19,    20,    21,     0,     0,     0,     0,     0,
     139,    63,     0,     0,   244,     0,     0,     0,     0,     0,
       0,     0,     0,   139,    63,     0,     0,   261,     9,    10,
      11,    12,     0,    14,    15,    16,    17,    18,    19,    20,
      21,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,     0,     0,     0,     0,     0,   139,
      63,     0,     0,   263,     0,     0,     0,     0,     0,     0,
       0,     0,    86,    63,     9,    10,    11,    12,     0,    14,
      15,    16,    17,    18,    19,    20,    21,     9,    10,    11,
      12,     0,    14,    15,    16,    17,    18,    19,    20,    21,
       0,     0,     0,     0,     0,   139,    63,   113,   114,   115,
     116,   117,     0,     0,   118,     0,   119,   120,    96,   121,
     122,   113,   114,   115,   116,   117,     0,     0,   208,     0,
     119,   120,     0,   121,   122
};

static const yytype_int16 yycheck[] =
{
       3,    53,    26,     6,    41,    29,    53,    53,    44,    61,
       0,   252,    48,    50,    53,    29,    30,    46,    26,    48,
      34,    45,    25,    81,    27,   266,   232,   233,    31,    81,
      33,     4,    26,    53,    39,    29,    88,    45,    39,    91,
      92,    88,    53,   233,    91,    92,   252,   253,   254,    29,
      53,    45,   104,    29,   106,     3,     4,     5,    29,   111,
     266,    39,   252,   253,   254,    45,    29,    41,    88,    45,
      81,    91,    92,    39,    45,     6,   266,    88,    43,    41,
      91,    92,    45,    39,    32,    88,    39,    49,    91,    92,
      39,    39,    40,    43,    25,    43,    27,    45,     3,    47,
      31,     6,    33,     6,    45,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    43,   238,
      25,   173,    27,    49,    41,   244,    31,    42,    33,   143,
     144,   134,    49,   147,    47,    48,    39,    39,    40,   258,
      39,   193,   261,    45,   263,   197,    47,    48,    53,    52,
      53,   270,    57,    26,    27,    44,    29,     8,     9,    10,
      11,    47,   214,    14,    15,    16,    17,    18,    19,    20,
      75,    39,    77,   193,   232,   233,    46,    82,    48,    84,
     232,   233,   193,    88,   236,   237,    91,    92,    39,    94,
     193,   249,    39,   251,   252,   253,   254,   249,   250,   251,
     252,   253,   254,    88,    47,    48,    91,    92,   266,   267,
     268,   269,   232,   233,   266,   267,   268,   269,   276,    47,
      48,   232,   233,    39,   276,   236,   237,    39,    40,   232,
     233,    39,   252,   253,   254,    46,    65,    66,   249,    42,
     251,   252,   253,   254,    29,    74,   266,    76,    45,   252,
     253,   254,    46,    45,    48,   266,   267,   268,   269,    26,
      27,    45,    29,   266,   169,   276,    26,    27,    39,    29,
      77,    47,    46,   102,    48,    82,    46,    84,    45,     3,
       4,     5,   111,     3,    51,    45,     6,    94,    39,   118,
      41,    51,   236,   237,   123,   124,   125,    47,    49,    39,
      47,    41,     3,     4,     5,    25,   135,    27,    32,    49,
      46,    31,    48,    33,    29,    39,    40,    46,    42,    43,
      46,    45,    48,    46,    38,    47,    47,    46,   157,   158,
      47,    32,    38,    53,    46,     6,    47,    57,    39,    40,
      14,    42,    43,   169,    45,     3,   177,   176,     6,    -1,
     177,    -1,   177,    -1,    -1,    75,    -1,    77,   187,    -1,
      -1,    -1,    82,    -1,    84,   194,   195,    25,    88,    27,
      -1,    91,    92,    31,    94,    33,     3,     4,     5,   208,
     209,   210,   211,   212,    -1,   214,    -1,    -1,    -1,   218,
     219,    -1,    -1,    -1,    -1,    53,    -1,    -1,    -1,    57,
      -1,    -1,    -1,    -1,    -1,    32,   235,    -1,    -1,    -1,
      -1,    -1,    39,    40,    -1,    -1,    43,    -1,    45,    77,
      -1,    -1,    -1,    -1,    82,    -1,    84,    -1,    -1,    -1,
      88,    -1,    -1,    91,    92,    -1,    94,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     6,   169,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,     7,     8,     9,    10,    11,    -1,    13,
      14,    15,    16,    17,    18,    19,    20,    -1,    -1,    -1,
      -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    35,    36,    37,    52,    39,    40,    -1,    -1,    -1,
      44,    -1,    -1,    47,    -1,    -1,     7,     8,     9,    10,
      11,   169,    13,    14,    15,    16,    17,    18,    19,    20,
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
      40,    -1,    -1,    43,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    39,    40,     8,     9,    10,    11,    -1,    13,
      14,    15,    16,    17,    18,    19,    20,     8,     9,    10,
      11,    -1,    13,    14,    15,    16,    17,    18,    19,    20,
      -1,    -1,    -1,    -1,    -1,    39,    40,    21,    22,    23,
      24,    25,    -1,    -1,    28,    -1,    30,    31,    39,    33,
      34,    21,    22,    23,    24,    25,    -1,    -1,    28,    -1,
      30,    31,    -1,    33,    34
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    55,    56,    57,     0,    53,    58,    59,     6,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    39,    52,    61,    62,    63,    65,    66,    67,
      68,    71,    72,    78,    79,     4,    59,    61,    39,    39,
      41,    82,    39,    83,    39,    61,    61,    43,    39,    83,
      39,    83,    61,    43,    61,    39,    83,    45,     3,     4,
       5,    32,    39,    40,    42,    43,    45,    60,    76,    80,
      91,    93,    94,    95,    41,    50,    29,    45,    47,    48,
      43,    74,    45,    47,    45,    47,    39,    60,    65,    73,
      76,    78,    84,    85,    45,    47,    39,    67,    68,    69,
      70,    79,    45,    60,    49,    82,    49,    81,    93,    93,
      26,    45,    42,    21,    22,    23,    24,    25,    28,    30,
      31,    33,    34,    96,    97,    98,    42,    93,    39,    67,
      68,    93,    69,    39,    64,     7,    35,    36,    37,    39,
      44,    47,    60,    67,    68,    75,    78,    79,    84,    86,
      87,    88,    89,    90,    91,    69,    69,    27,    29,    73,
      44,    73,    73,    47,    69,    39,    39,    39,    46,    48,
      39,    93,    60,    49,    60,    44,    48,    46,    60,    92,
      93,    93,    93,    93,    93,    42,    46,    29,    39,    44,
      78,    47,    93,    45,    45,    45,    39,    51,    47,    46,
      46,    93,    93,    46,    70,    46,    60,    93,    28,    96,
      97,    98,    29,    46,    48,    93,    47,    47,    78,    84,
      93,    93,    60,    93,    93,    93,    93,    93,    60,    93,
      93,    93,    46,    46,    47,    29,    47,    47,    43,    60,
      77,    78,    84,    90,    43,    77,    93,    85,    85,    74,
      51,    74,    38,    46,    46,    44,    60,    44,    43,    77,
      86,    43,    77,    43,    77,    47,    38,    74,    74,    74,
      43,    77,    86,    44,    44,    44,    74,    44
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    54,    56,    55,    57,    55,    58,    58,    59,    60,
      60,    60,    60,    60,    61,    61,    61,    61,    61,    62,
      63,    64,    64,    65,    66,    66,    66,    66,    66,    67,
      67,    67,    67,    67,    67,    67,    68,    68,    68,    68,
      69,    69,    69,    70,    70,    70,    70,    71,    72,    73,
      73,    73,    73,    74,    74,    75,    75,    75,    75,    75,
      75,    75,    75,    75,    76,    76,    77,    77,    77,    77,
      78,    78,    78,    78,    79,    79,    79,    80,    81,    81,
      82,    82,    82,    82,    83,    83,    83,    83,    84,    85,
      85,    85,    86,    86,    86,    86,    86,    86,    86,    86,
      87,    87,    87,    87,    88,    88,    89,    89,    90,    91,
      92,    92,    92,    92,    92,    93,    93,    93,    93,    93,
      93,    94,    94,    94,    94,    94,    95,    95,    95,    95,
      95,    95,    95,    95,    96,    96,    97,    97,    98,    98,
      98,    98,    98
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     3,     0,     2,     2,     1,     2,     1,
       3,     2,     4,     3,     2,     2,     2,     2,     0,     1,
       6,     2,     0,     4,     5,     5,     5,     5,     5,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     1,     0,     2,     2,     2,     2,     4,     2,     2,
       2,     2,     0,     2,     0,     1,     1,     1,     1,     1,
       1,     1,     1,     4,     2,     1,     1,     1,     1,     4,
       3,     3,     3,     3,     4,     4,     4,     3,     1,     3,
       4,     3,     3,     2,     3,     3,     5,     1,     2,     3,
       3,     1,     7,     5,     9,     7,    11,     9,     9,     7,
      10,     8,    10,     8,     7,     5,     2,     3,     2,     4,
       3,     1,     5,     3,     0,     3,     5,     5,     5,     5,
       1,     3,     3,     3,     3,     1,     1,     1,     1,     1,
       1,     4,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1
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
#line 73 "yacc.y"
      {
   global_table = init_symtab();
 }
#line 1507 "yacc.tab.c"
    break;

  case 3: /* start: $@1 include_stmts code  */
#line 76 "yacc.y"
                     {
   display_symtab(global_table);
   }
#line 1515 "yacc.tab.c"
    break;

  case 4: /* $@2: %empty  */
#line 79 "yacc.y"
     {global_table = init_symtab();}
#line 1521 "yacc.tab.c"
    break;

  case 5: /* start: $@2 code  */
#line 79 "yacc.y"
                                        {
   display_symtab(global_table);
   }
#line 1529 "yacc.tab.c"
    break;

  case 10: /* identifier: IDENTIFIER DOT identifier  */
#line 96 "yacc.y"
                               {


   }
#line 1538 "yacc.tab.c"
    break;

  case 11: /* identifier: IDENTIFIER dim  */
#line 100 "yacc.y"
                    {


   }
#line 1547 "yacc.tab.c"
    break;

  case 12: /* identifier: IDENTIFIER dim DOT identifier  */
#line 104 "yacc.y"
                                   {


   }
#line 1556 "yacc.tab.c"
    break;

  case 13: /* identifier: SELF DOT identifier  */
#line 108 "yacc.y"
                         {
      
   }
#line 1564 "yacc.tab.c"
    break;

  case 29: /* data_type_new: DOCUMENT  */
#line 146 "yacc.y"
                       { (yyval.type) = 12;}
#line 1570 "yacc.tab.c"
    break;

  case 30: /* data_type_new: TEAM  */
#line 147 "yacc.y"
          { (yyval.type) = 7;}
#line 1576 "yacc.tab.c"
    break;

  case 31: /* data_type_new: MEMBERS  */
#line 148 "yacc.y"
             { (yyval.type) = 8;}
#line 1582 "yacc.tab.c"
    break;

  case 32: /* data_type_new: TASK  */
#line 149 "yacc.y"
           { (yyval.type) = 9;}
#line 1588 "yacc.tab.c"
    break;

  case 33: /* data_type_new: EVENT  */
#line 150 "yacc.y"
           { (yyval.type) = 10;}
#line 1594 "yacc.tab.c"
    break;

  case 34: /* data_type_new: MEETING  */
#line 151 "yacc.y"
              { (yyval.type) = 11;}
#line 1600 "yacc.tab.c"
    break;

  case 35: /* data_type_new: CALENDAR  */
#line 152 "yacc.y"
              { (yyval.type) = 13;}
#line 1606 "yacc.tab.c"
    break;

  case 36: /* data_type_pr: INT  */
#line 158 "yacc.y"
                   { (yyval.type) = 0;}
#line 1612 "yacc.tab.c"
    break;

  case 37: /* data_type_pr: STRING  */
#line 159 "yacc.y"
            { (yyval.type) = 2;}
#line 1618 "yacc.tab.c"
    break;

  case 38: /* data_type_pr: BOOL  */
#line 160 "yacc.y"
           { (yyval.type) = 3;}
#line 1624 "yacc.tab.c"
    break;

  case 39: /* data_type_pr: FLOAT  */
#line 161 "yacc.y"
           { (yyval.type) = 1;}
#line 1630 "yacc.tab.c"
    break;

  case 70: /* decl_stmt: data_type_new id_list SEMICOLON  */
#line 226 "yacc.y"
                                           {
   struct snode* temp = (yyvsp[-1].namelist)->head;
   while(temp != NULL){
      struct idrec *entry = (struct idrec *)malloc(sizeof(struct idrec));
      entry->type = (yyvsp[-2].type);
      entry->arr = false;
      entry->scope = 0; // we have to change scope according to nested loops
      entry->name = temp->val;
      insert_symtab(global_table, entry);
      temp = temp->next;
       
   }


   }
#line 1650 "yacc.tab.c"
    break;

  case 71: /* decl_stmt: data_type_pr id_list SEMICOLON  */
#line 241 "yacc.y"
                                   {
   struct snode* temp = (yyvsp[-1].namelist)->head;
   while(temp != NULL){
      struct idrec *entry = (struct idrec *)malloc(sizeof(struct idrec));
      entry->type = (yyvsp[-2].type);
      entry->arr = false;
      entry->scope = 0; // we have to change scope according to nested loops
      entry->name = temp->val;
      insert_symtab(global_table, entry);
      temp = temp->next;
   }   
   }
#line 1667 "yacc.tab.c"
    break;

  case 84: /* id_list: id_list COMMA IDENTIFIER  */
#line 285 "yacc.y"
                                 {
      insert_slist((yyvsp[-2].namelist), (yyvsp[0].id).name);
      (yyval.namelist) = (yyvsp[-2].namelist);
   }
#line 1676 "yacc.tab.c"
    break;

  case 87: /* id_list: IDENTIFIER  */
#line 291 "yacc.y"
               {
      (yyval.namelist) = init_slist();
      insert_slist((yyval.namelist), (yyvsp[0].id).name);   
   }
#line 1685 "yacc.tab.c"
    break;


#line 1689 "yacc.tab.c"

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

#line 411 "yacc.y"



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
