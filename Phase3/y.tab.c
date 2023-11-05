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

    symtab *global_table;
    functab *function_table;


#line 94 "y.tab.c"

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

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    NUMBER = 258,                  /* NUMBER  */
    STRING_LITERAL = 259,          /* STRING_LITERAL  */
    BOOL_LITERAL = 260,            /* BOOL_LITERAL  */
    CLASS = 261,                   /* CLASS  */
    RETURN = 262,                  /* RETURN  */
    INT = 263,                     /* INT  */
    STRING = 264,                  /* STRING  */
    BOOL = 265,                    /* BOOL  */
    FLOAT = 266,                   /* FLOAT  */
    VOID = 267,                    /* VOID  */
    LIST = 268,                    /* LIST  */
    DOCUMENT = 269,                /* DOCUMENT  */
    TEAM = 270,                    /* TEAM  */
    MEMBERS = 271,                 /* MEMBERS  */
    TASK = 272,                    /* TASK  */
    EVENT = 273,                   /* EVENT  */
    MEETING = 274,                 /* MEETING  */
    CALENDAR = 275,                /* CALENDAR  */
    ADD = 276,                     /* ADD  */
    SUB = 277,                     /* SUB  */
    MUL = 278,                     /* MUL  */
    DIV = 279,                     /* DIV  */
    MOD = 280,                     /* MOD  */
    UNARY_OP = 281,                /* UNARY_OP  */
    ASSIGN_OP = 282,               /* ASSIGN_OP  */
    REL_OP = 283,                  /* REL_OP  */
    EQUALS = 284,                  /* EQUALS  */
    AND = 285,                     /* AND  */
    OR = 286,                      /* OR  */
    NOT = 287,                     /* NOT  */
    INTERSECTION_OP = 288,         /* INTERSECTION_OP  */
    UNION_OP = 289,                /* UNION_OP  */
    FOR = 290,                     /* FOR  */
    WHILE = 291,                   /* WHILE  */
    IF = 292,                      /* IF  */
    ELSE = 293,                    /* ELSE  */
    IDENTIFIER = 294,              /* IDENTIFIER  */
    SELF = 295,                    /* SELF  */
    LSB = 296,                     /* LSB  */
    RSB = 297,                     /* RSB  */
    LCB = 298,                     /* LCB  */
    RCB = 299,                     /* RCB  */
    LPB = 300,                     /* LPB  */
    RPB = 301,                     /* RPB  */
    SEMICOLON = 302,               /* SEMICOLON  */
    COMMA = 303,                   /* COMMA  */
    DOT = 304,                     /* DOT  */
    COLON = 305,                   /* COLON  */
    ARROW = 306,                   /* ARROW  */
    STRUCT = 307,                  /* STRUCT  */
    INCLUDE = 308,                 /* INCLUDE  */
    TYPEDEF = 309                  /* TYPEDEF  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define NUMBER 258
#define STRING_LITERAL 259
#define BOOL_LITERAL 260
#define CLASS 261
#define RETURN 262
#define INT 263
#define STRING 264
#define BOOL 265
#define FLOAT 266
#define VOID 267
#define LIST 268
#define DOCUMENT 269
#define TEAM 270
#define MEMBERS 271
#define TASK 272
#define EVENT 273
#define MEETING 274
#define CALENDAR 275
#define ADD 276
#define SUB 277
#define MUL 278
#define DIV 279
#define MOD 280
#define UNARY_OP 281
#define ASSIGN_OP 282
#define REL_OP 283
#define EQUALS 284
#define AND 285
#define OR 286
#define NOT 287
#define INTERSECTION_OP 288
#define UNION_OP 289
#define FOR 290
#define WHILE 291
#define IF 292
#define ELSE 293
#define IDENTIFIER 294
#define SELF 295
#define LSB 296
#define RSB 297
#define LCB 298
#define RCB 299
#define LPB 300
#define RPB 301
#define SEMICOLON 302
#define COMMA 303
#define DOT 304
#define COLON 305
#define ARROW 306
#define STRUCT 307
#define INCLUDE 308
#define TYPEDEF 309

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 24 "yacc.y"

    slist *namelist;
    int type;

#line 260 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
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
  YYSYMBOL_expr_stmt_without_semicolon = 84, /* expr_stmt_without_semicolon  */
  YYSYMBOL_if_stmt = 85,                   /* if_stmt  */
  YYSYMBOL_for_stmt = 86,                  /* for_stmt  */
  YYSYMBOL_while_stmt = 87,                /* while_stmt  */
  YYSYMBOL_return_stmt = 88,               /* return_stmt  */
  YYSYMBOL_call_stmt = 89,                 /* call_stmt  */
  YYSYMBOL_call = 90,                      /* call  */
  YYSYMBOL_call_args = 91,                 /* call_args  */
  YYSYMBOL_nested_expr = 92,               /* nested_expr  */
  YYSYMBOL_expr = 93,                      /* expr  */
  YYSYMBOL_expr_terminal = 94,             /* expr_terminal  */
  YYSYMBOL_conj = 95,                      /* conj  */
  YYSYMBOL_set_op = 96,                    /* set_op  */
  YYSYMBOL_arith_op = 97                   /* arith_op  */
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
#define YYFINAL  40
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   922

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  55
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  43
/* YYNRULES -- Number of rules.  */
#define YYNRULES  140
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  276

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
       0,    51,    51,    56,    59,    60,    63,    67,    68,    71,
      74,    77,    82,    83,    84,    85,    86,    89,    92,    95,
      96,    99,   102,   103,   104,   105,   106,   109,   110,   111,
     112,   113,   114,   115,   119,   120,   121,   122,   126,   127,
     128,   131,   132,   133,   134,   137,   140,   143,   144,   145,
     146,   149,   150,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   165,   166,   169,   172,   173,   174,   178,   195,
     211,   212,   216,   217,   218,   222,   226,   227,   231,   232,
     233,   234,   238,   239,   240,   241,   244,   248,   249,   250,
     254,   255,   256,   257,   258,   259,   260,   261,   265,   266,
     267,   268,   272,   273,   277,   278,   281,   285,   289,   290,
     291,   292,   293,   297,   298,   299,   300,   301,   302,   306,
     307,   308,   309,   310,   315,   316,   317,   318,   319,   320,
     321,   322,   326,   327,   330,   331,   335,   336,   337,   338,
     339
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

#define YYPACT_NINF (-249)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      95,    -4,  -249,  -249,  -249,  -249,    -1,   -26,  -249,  -249,
    -249,  -249,  -249,  -249,  -249,     2,    33,    90,   130,    95,
    -249,  -249,   441,  -249,   441,   103,    96,   114,   441,   117,
     441,   118,  -249,   126,   124,   -36,   -22,    31,   149,  -249,
    -249,  -249,  -249,  -249,  -249,  -249,   -18,    92,    -8,   172,
    -249,   807,  -249,    47,   198,   853,  -249,  -249,  -249,   188,
     -29,   134,  -249,   290,   290,   -20,  -249,  -249,  -249,   154,
    -249,   874,   133,   867,   290,   853,  -249,   165,  -249,   455,
     853,  -249,   853,  -249,    46,    17,   807,   162,  -249,   807,
     807,   161,   853,  -249,   174,   190,   195,    52,  -249,   200,
     290,  -249,   208,   -15,   208,   -31,  -249,   203,  -249,   290,
    -249,  -249,  -249,  -249,  -249,  -249,   290,  -249,  -249,  -249,
    -249,   290,   290,   290,  -249,   217,  -249,  -249,  -249,  -249,
      77,   233,   330,    28,   221,   224,   226,   138,  -249,  -249,
     234,   238,   238,  -249,  -249,   238,  -249,  -249,  -249,  -249,
    -249,  -249,   235,   106,   122,   290,   290,  -249,  -249,  -249,
    -249,  -249,   140,  -249,  -249,  -249,  -249,   853,  -249,   245,
    -249,   208,  -249,  -249,   290,   888,    21,   157,  -249,  -249,
    -249,  -249,  -249,  -249,  -249,   290,   238,   249,  -249,  -249,
     251,   840,   290,   290,   263,   208,  -249,  -249,  -249,  -249,
    -249,  -249,  -249,  -249,  -249,  -249,   290,   290,   290,   290,
     290,  -249,   290,  -249,  -249,  -249,   290,   290,   253,   255,
     259,  -249,  -249,  -249,  -249,  -249,    29,  -249,   267,   268,
     709,   745,  -249,   290,   208,   208,  -249,   257,  -249,  -249,
    -249,  -249,  -249,   242,  -249,   271,   273,   496,   208,   537,
     660,   758,   794,  -249,   274,   285,  -249,  -249,  -249,  -249,
    -249,  -249,  -249,  -249,   696,   551,   592,   606,  -249,  -249,
    -249,  -249,  -249,  -249,   647,  -249
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
      16,     0,    34,    35,    36,    37,     0,     0,    27,    28,
      29,    30,    31,    32,    33,     0,     0,     0,     0,    16,
       5,     3,    16,    17,    16,     0,     0,     0,    16,     0,
      16,     0,    46,     0,     0,     0,    85,     0,     0,     6,
       1,     4,     2,    14,    13,    52,    85,     0,    85,     0,
      15,    50,    12,    85,     0,    40,   125,   126,   127,     0,
       7,     0,    81,     0,     0,    63,   124,   131,   128,     0,
     118,   123,     0,     0,     0,    40,    70,     0,    20,     0,
      40,    68,    40,    69,     7,    63,    50,     0,    89,    50,
      50,     0,    40,    71,     0,     0,     0,     0,    39,     0,
       0,   130,     0,     9,     0,     0,    76,     0,    62,   112,
      79,   136,   137,   138,   139,   140,     0,   132,   133,   134,
     135,     0,     0,     0,    80,     0,    74,    73,    72,    83,
       0,    82,     0,     0,     0,     0,     0,     7,    21,    60,
      63,     0,     0,    51,    53,     0,    59,    54,    55,    56,
      57,    58,     0,     0,     0,     0,     0,    47,    45,    48,
      49,    86,     0,    43,    41,    42,    25,     0,    44,     0,
       8,     0,    11,    75,     0,   113,    63,     0,   109,   120,
     119,   122,   121,    78,    24,     0,     0,     0,    19,   104,
       0,     0,     0,     0,    85,     0,   106,    22,    23,    87,
      88,    26,    38,   129,    10,    77,     0,     0,     0,     0,
       0,   107,     0,    84,    18,   105,     0,     0,     0,     0,
       0,   115,   114,   117,   116,   111,    63,   108,     0,     0,
       0,     0,    61,     0,     0,     0,    52,    63,   103,    64,
      66,    65,    52,    91,   110,     0,     0,     0,     0,     0,
       0,     0,     0,   102,     0,    90,    52,    97,    93,    52,
      99,    52,   101,    67,     0,     0,     0,     0,    52,    96,
      92,    95,    98,   100,     0,    94
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -249,  -249,  -249,   305,   -50,   288,  -249,  -249,  -249,   -33,
    -249,    69,   281,    51,   164,  -249,  -249,   -25,   -24,  -249,
      -9,   -57,     0,   353,  -249,  -249,   321,   -23,   -41,  -118,
    -248,  -249,  -249,  -249,  -168,    23,  -249,   204,  -249,  -249,
     159,   167,   176
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,    18,    19,    20,    65,    21,    22,    23,   132,    24,
      25,   141,   142,    97,    98,    28,    29,    87,    79,   143,
      66,   238,   144,   145,    67,   105,   103,    37,   146,    91,
     147,   148,   149,   150,   151,    68,   177,    69,    70,    71,
     121,   122,   123
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      30,    85,   258,    47,    49,    72,   108,    74,    54,   101,
      90,    74,    34,   173,    73,    34,   270,   174,    86,    30,
     102,    74,    30,    75,    30,   109,    72,    80,    30,   140,
      30,    56,    57,    58,   171,    32,    85,    82,    33,    85,
      85,    36,    88,   108,   155,    90,   156,   108,    90,    90,
     210,    89,   170,    86,   172,   108,    86,    86,   233,   176,
      59,   157,   241,   241,   159,   160,   109,    60,    61,    26,
      88,    63,    38,    64,   109,   189,    74,    88,    76,    77,
      88,    88,   241,   241,   241,    36,    89,    34,    26,    89,
      89,    26,    92,    26,    39,   102,   241,    26,   166,    26,
     167,     1,   152,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,   245,   246,    47,    49,
      26,   204,    54,   184,    95,   167,   130,    56,    57,    58,
      40,   153,   188,   154,    15,    46,    56,    57,    58,    81,
      77,    85,   127,   162,    95,   220,    45,    16,    17,    95,
     217,    95,   197,    48,   167,    26,    59,    53,    26,    26,
      51,    95,   226,    60,    61,    59,    62,    63,   198,    64,
     167,    55,    60,    61,   243,   124,    63,   194,    64,    34,
     237,   237,    88,   104,    85,    85,   201,   102,   167,   240,
     240,   216,    78,   257,   260,   262,   110,   140,   254,   140,
     237,   237,   237,   211,   131,   212,   158,   269,   161,   240,
     240,   240,   247,   163,   237,   140,   140,   140,   249,    83,
      77,    88,    88,   240,   140,    88,    88,    60,    61,   164,
     239,   239,   265,   100,   165,   266,    95,   267,    88,   168,
      88,    88,    88,    88,   274,    93,    77,    60,    61,   175,
     239,   239,   239,   152,   152,    88,    88,    88,    88,   183,
     108,   155,   185,   156,   239,    88,   191,   106,   107,   192,
     152,   193,   152,   152,   152,   152,   125,   194,   129,   109,
     250,    27,   196,   108,   155,   195,   156,   152,   152,   152,
     152,   203,    74,    56,    57,    58,   214,   152,   215,   230,
      27,   231,   109,    27,   169,    27,   232,    42,   248,    27,
      43,    27,    44,   178,   234,   235,    50,   251,    52,   252,
     179,   263,    59,   264,    41,   180,   181,   182,    35,    60,
      61,   202,    27,    63,   207,    64,    96,   190,     2,     3,
       4,     5,   208,     7,     8,     9,    10,    11,    12,    13,
      14,   209,     0,    31,   128,     0,    96,     0,     0,   199,
     200,    96,     0,    96,     0,     0,     0,    27,     0,   186,
      27,    27,    31,    96,   187,    31,     0,    31,   205,     0,
       0,    31,     0,    31,     0,     0,     0,     0,     0,   213,
       0,     0,     0,     0,     0,     0,   218,   219,     0,     0,
       0,     0,     0,     0,    31,     0,     0,     0,    99,     0,
     221,   222,   223,   224,   225,     0,   227,     0,     0,     0,
     228,   229,     0,     0,     0,     0,     0,     0,    99,     0,
       0,     0,     0,    99,     0,    99,     0,   244,     0,    31,
       0,     0,    31,    31,     0,    99,     0,     1,    96,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,   133,     2,     3,     4,     5,     0,     7,     8,
       9,    10,    11,    12,    13,    14,     0,     0,     0,     0,
      15,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     134,   135,   136,    16,   137,    61,     0,     0,     0,   138,
       0,     0,   139,   133,     2,     3,     4,     5,     0,     7,
       8,     9,    10,    11,    12,    13,    14,     0,     0,     0,
      99,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   134,   135,   136,     0,   137,    61,     0,     0,     0,
     253,     0,     0,   139,   133,     2,     3,     4,     5,     0,
       7,     8,     9,    10,    11,    12,    13,    14,   133,     2,
       3,     4,     5,     0,     7,     8,     9,    10,    11,    12,
      13,    14,   134,   135,   136,     0,   137,    61,     0,     0,
       0,   255,     0,     0,   139,     0,   134,   135,   136,     0,
     137,    61,     0,     0,     0,   271,     0,     0,   139,   133,
       2,     3,     4,     5,     0,     7,     8,     9,    10,    11,
      12,    13,    14,   133,     2,     3,     4,     5,     0,     7,
       8,     9,    10,    11,    12,    13,    14,   134,   135,   136,
       0,   137,    61,     0,     0,     0,   272,     0,     0,   139,
       0,   134,   135,   136,     0,   137,    61,     0,     0,     0,
     273,     0,     0,   139,   133,     2,     3,     4,     5,     0,
       7,     8,     9,    10,    11,    12,    13,    14,     2,     3,
       4,     5,     0,     7,     8,     9,    10,    11,    12,    13,
      14,     0,   134,   135,   136,     0,   137,    61,     0,     0,
       0,   275,     0,     0,   139,     0,     0,   136,     0,   137,
      61,     0,     0,   256,     2,     3,     4,     5,     0,     7,
       8,     9,    10,    11,    12,    13,    14,     2,     3,     4,
       5,     0,     7,     8,     9,    10,    11,    12,    13,    14,
       0,     0,     0,   136,     0,   137,    61,     0,     0,   268,
       0,     0,     0,     0,     0,     0,     0,     0,   137,    61,
       0,     0,   236,     2,     3,     4,     5,     0,     7,     8,
       9,    10,    11,    12,    13,    14,     2,     3,     4,     5,
       0,     7,     8,     9,    10,    11,    12,    13,    14,     0,
       0,     0,     0,     0,   137,    61,     0,     0,   242,     0,
       0,     0,     0,     0,     0,     0,     0,   137,    61,     0,
       0,   259,     2,     3,     4,     5,     0,     7,     8,     9,
      10,    11,    12,    13,    14,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,     0,     0,
       0,     0,     0,   137,    61,     0,     0,   261,     0,     0,
       0,     0,     0,     0,     0,     0,    84,    61,     2,     3,
       4,     5,     0,     7,     8,     9,    10,    11,    12,    13,
      14,     2,     3,     4,     5,     0,     7,     8,     9,    10,
      11,    12,    13,    14,     0,     2,     3,     4,     5,   137,
      61,     8,     9,    10,    11,    12,    13,    14,     0,     0,
       0,     0,    94,     0,     0,   111,   112,   113,   114,   115,
       0,     0,   116,     0,   117,   118,   126,   119,   120,   111,
     112,   113,   114,   115,     0,     0,   206,     0,   117,   118,
       0,   119,   120
};

static const yytype_int16 yycheck[] =
{
       0,    51,   250,    26,    27,    41,    26,    29,    31,    59,
      51,    29,    41,    44,    50,    41,   264,    48,    51,    19,
      49,    29,    22,    45,    24,    45,    41,    45,    28,    79,
      30,     3,     4,     5,    49,    39,    86,    45,    39,    89,
      90,    39,    51,    26,    27,    86,    29,    26,    89,    90,
      29,    51,   102,    86,   104,    26,    89,    90,    29,   109,
      32,    86,   230,   231,    89,    90,    45,    39,    40,     0,
      79,    43,    39,    45,    45,    47,    29,    86,    47,    48,
      89,    90,   250,   251,   252,    39,    86,    41,    19,    89,
      90,    22,    45,    24,     4,    49,   264,    28,    46,    30,
      48,     6,    79,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,   234,   235,   141,   142,
      51,   171,   145,    46,    55,    48,    75,     3,     4,     5,
       0,    80,   132,    82,    39,    39,     3,     4,     5,    47,
      48,   191,    73,    92,    75,   195,    43,    52,    53,    80,
     191,    82,    46,    39,    48,    86,    32,    39,    89,    90,
      43,    92,   212,    39,    40,    32,    42,    43,    46,    45,
      48,    45,    39,    40,   231,    42,    43,    39,    45,    41,
     230,   231,   191,    49,   234,   235,    46,    49,    48,   230,
     231,   191,    43,   250,   251,   252,    42,   247,   248,   249,
     250,   251,   252,    46,    39,    48,    44,   264,    47,   250,
     251,   252,   236,    39,   264,   265,   266,   267,   242,    47,
      48,   230,   231,   264,   274,   234,   235,    39,    40,    39,
     230,   231,   256,    45,    39,   259,   167,   261,   247,    39,
     249,   250,   251,   252,   268,    47,    48,    39,    40,    46,
     250,   251,   252,   230,   231,   264,   265,   266,   267,    42,
      26,    27,    29,    29,   264,   274,    45,    63,    64,    45,
     247,    45,   249,   250,   251,   252,    72,    39,    74,    45,
      38,     0,    47,    26,    27,    51,    29,   264,   265,   266,
     267,    46,    29,     3,     4,     5,    47,   274,    47,    46,
      19,    46,    45,    22,   100,    24,    47,    19,    51,    28,
      22,    30,    24,   109,    47,    47,    28,    46,    30,    46,
     116,    47,    32,    38,    19,   121,   122,   123,     7,    39,
      40,   167,    51,    43,   175,    45,    55,   133,     8,     9,
      10,    11,   175,    13,    14,    15,    16,    17,    18,    19,
      20,   175,    -1,     0,    73,    -1,    75,    -1,    -1,   155,
     156,    80,    -1,    82,    -1,    -1,    -1,    86,    -1,    39,
      89,    90,    19,    92,    44,    22,    -1,    24,   174,    -1,
      -1,    28,    -1,    30,    -1,    -1,    -1,    -1,    -1,   185,
      -1,    -1,    -1,    -1,    -1,    -1,   192,   193,    -1,    -1,
      -1,    -1,    -1,    -1,    51,    -1,    -1,    -1,    55,    -1,
     206,   207,   208,   209,   210,    -1,   212,    -1,    -1,    -1,
     216,   217,    -1,    -1,    -1,    -1,    -1,    -1,    75,    -1,
      -1,    -1,    -1,    80,    -1,    82,    -1,   233,    -1,    86,
      -1,    -1,    89,    90,    -1,    92,    -1,     6,   167,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,     7,     8,     9,    10,    11,    -1,    13,    14,
      15,    16,    17,    18,    19,    20,    -1,    -1,    -1,    -1,
      39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      35,    36,    37,    52,    39,    40,    -1,    -1,    -1,    44,
      -1,    -1,    47,     7,     8,     9,    10,    11,    -1,    13,
      14,    15,    16,    17,    18,    19,    20,    -1,    -1,    -1,
     167,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    35,    36,    37,    -1,    39,    40,    -1,    -1,    -1,
      44,    -1,    -1,    47,     7,     8,     9,    10,    11,    -1,
      13,    14,    15,    16,    17,    18,    19,    20,     7,     8,
       9,    10,    11,    -1,    13,    14,    15,    16,    17,    18,
      19,    20,    35,    36,    37,    -1,    39,    40,    -1,    -1,
      -1,    44,    -1,    -1,    47,    -1,    35,    36,    37,    -1,
      39,    40,    -1,    -1,    -1,    44,    -1,    -1,    47,     7,
       8,     9,    10,    11,    -1,    13,    14,    15,    16,    17,
      18,    19,    20,     7,     8,     9,    10,    11,    -1,    13,
      14,    15,    16,    17,    18,    19,    20,    35,    36,    37,
      -1,    39,    40,    -1,    -1,    -1,    44,    -1,    -1,    47,
      -1,    35,    36,    37,    -1,    39,    40,    -1,    -1,    -1,
      44,    -1,    -1,    47,     7,     8,     9,    10,    11,    -1,
      13,    14,    15,    16,    17,    18,    19,    20,     8,     9,
      10,    11,    -1,    13,    14,    15,    16,    17,    18,    19,
      20,    -1,    35,    36,    37,    -1,    39,    40,    -1,    -1,
      -1,    44,    -1,    -1,    47,    -1,    -1,    37,    -1,    39,
      40,    -1,    -1,    43,     8,     9,    10,    11,    -1,    13,
      14,    15,    16,    17,    18,    19,    20,     8,     9,    10,
      11,    -1,    13,    14,    15,    16,    17,    18,    19,    20,
      -1,    -1,    -1,    37,    -1,    39,    40,    -1,    -1,    43,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,    40,
      -1,    -1,    43,     8,     9,    10,    11,    -1,    13,    14,
      15,    16,    17,    18,    19,    20,     8,     9,    10,    11,
      -1,    13,    14,    15,    16,    17,    18,    19,    20,    -1,
      -1,    -1,    -1,    -1,    39,    40,    -1,    -1,    43,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,    40,    -1,
      -1,    43,     8,     9,    10,    11,    -1,    13,    14,    15,
      16,    17,    18,    19,    20,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    -1,    -1,
      -1,    -1,    -1,    39,    40,    -1,    -1,    43,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    39,    40,     8,     9,
      10,    11,    -1,    13,    14,    15,    16,    17,    18,    19,
      20,     8,     9,    10,    11,    -1,    13,    14,    15,    16,
      17,    18,    19,    20,    -1,     8,     9,    10,    11,    39,
      40,    14,    15,    16,    17,    18,    19,    20,    -1,    -1,
      -1,    -1,    39,    -1,    -1,    21,    22,    23,    24,    25,
      -1,    -1,    28,    -1,    30,    31,    39,    33,    34,    21,
      22,    23,    24,    25,    -1,    -1,    28,    -1,    30,    31,
      -1,    33,    34
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     6,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    39,    52,    53,    56,    57,
      58,    60,    61,    62,    64,    65,    66,    67,    70,    71,
      77,    78,    39,    39,    41,    81,    39,    82,    39,     4,
       0,    58,    60,    60,    60,    43,    39,    82,    39,    82,
      60,    43,    60,    39,    82,    45,     3,     4,     5,    32,
      39,    40,    42,    43,    45,    59,    75,    79,    90,    92,
      93,    94,    41,    50,    29,    45,    47,    48,    43,    73,
      45,    47,    45,    47,    39,    59,    64,    72,    75,    77,
      83,    84,    45,    47,    39,    66,    67,    68,    69,    78,
      45,    59,    49,    81,    49,    80,    92,    92,    26,    45,
      42,    21,    22,    23,    24,    25,    28,    30,    31,    33,
      34,    95,    96,    97,    42,    92,    39,    66,    67,    92,
      68,    39,    63,     7,    35,    36,    37,    39,    44,    47,
      59,    66,    67,    74,    77,    78,    83,    85,    86,    87,
      88,    89,    90,    68,    68,    27,    29,    72,    44,    72,
      72,    47,    68,    39,    39,    39,    46,    48,    39,    92,
      59,    49,    59,    44,    48,    46,    59,    91,    92,    92,
      92,    92,    92,    42,    46,    29,    39,    44,    77,    47,
      92,    45,    45,    45,    39,    51,    47,    46,    46,    92,
      92,    46,    69,    46,    59,    92,    28,    95,    96,    97,
      29,    46,    48,    92,    47,    47,    77,    83,    92,    92,
      59,    92,    92,    92,    92,    92,    59,    92,    92,    92,
      46,    46,    47,    29,    47,    47,    43,    59,    76,    77,
      83,    89,    43,    76,    92,    84,    84,    73,    51,    73,
      38,    46,    46,    44,    59,    44,    43,    76,    85,    43,
      76,    43,    76,    47,    38,    73,    73,    73,    43,    76,
      85,    44,    44,    44,    73,    44
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    55,    56,    56,    57,    57,    58,    59,    59,    59,
      59,    59,    60,    60,    60,    60,    60,    61,    62,    63,
      63,    64,    65,    65,    65,    65,    65,    66,    66,    66,
      66,    66,    66,    66,    67,    67,    67,    67,    68,    68,
      68,    69,    69,    69,    69,    70,    71,    72,    72,    72,
      72,    73,    73,    74,    74,    74,    74,    74,    74,    74,
      74,    74,    75,    75,    76,    76,    76,    76,    77,    77,
      77,    77,    78,    78,    78,    79,    80,    80,    81,    81,
      81,    81,    82,    82,    82,    82,    83,    84,    84,    84,
      85,    85,    85,    85,    85,    85,    85,    85,    86,    86,
      86,    86,    87,    87,    88,    88,    89,    90,    91,    91,
      91,    91,    91,    92,    92,    92,    92,    92,    92,    93,
      93,    93,    93,    93,    94,    94,    94,    94,    94,    94,
      94,    94,    95,    95,    96,    96,    97,    97,    97,    97,
      97
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     1,     2,     1,     2,     1,     3,     2,
       4,     3,     2,     2,     2,     2,     0,     1,     6,     2,
       0,     4,     5,     5,     5,     5,     5,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     1,
       0,     2,     2,     2,     2,     4,     2,     2,     2,     2,
       0,     2,     0,     1,     1,     1,     1,     1,     1,     1,
       1,     4,     2,     1,     1,     1,     1,     4,     3,     3,
       3,     3,     4,     4,     4,     3,     1,     3,     4,     3,
       3,     2,     3,     3,     5,     1,     2,     3,     3,     1,
       7,     5,     9,     7,    11,     9,     9,     7,    10,     8,
      10,     8,     7,     5,     2,     3,     2,     4,     3,     1,
       5,     3,     0,     3,     5,     5,     5,     5,     1,     3,
       3,     3,     3,     1,     1,     1,     1,     1,     1,     4,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
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
  case 2: /* start: include_stmts code  */
#line 51 "yacc.y"
                         {
    display_symtab(global_table);
    display_functab(function_table);
    printf("hii");
    }
#line 1661 "y.tab.c"
    break;

  case 6: /* include_stmt: INCLUDE STRING_LITERAL  */
#line 63 "yacc.y"
                                     {printf("hii");}
#line 1667 "y.tab.c"
    break;

  case 8: /* identifier: IDENTIFIER DOT identifier  */
#line 68 "yacc.y"
                                {

    }
#line 1675 "y.tab.c"
    break;

  case 9: /* identifier: IDENTIFIER dim  */
#line 71 "yacc.y"
                     {

    }
#line 1683 "y.tab.c"
    break;

  case 10: /* identifier: IDENTIFIER dim DOT identifier  */
#line 74 "yacc.y"
                                    {

    }
#line 1691 "y.tab.c"
    break;

  case 11: /* identifier: SELF DOT identifier  */
#line 77 "yacc.y"
                          {
        
    }
#line 1699 "y.tab.c"
    break;

  case 27: /* data_type_new: DOCUMENT  */
#line 109 "yacc.y"
                       { (yyval.type) = 12;}
#line 1705 "y.tab.c"
    break;

  case 28: /* data_type_new: TEAM  */
#line 110 "yacc.y"
           { (yyval.type) = 7;}
#line 1711 "y.tab.c"
    break;

  case 29: /* data_type_new: MEMBERS  */
#line 111 "yacc.y"
              { (yyval.type) = 8;}
#line 1717 "y.tab.c"
    break;

  case 30: /* data_type_new: TASK  */
#line 112 "yacc.y"
            { (yyval.type) = 9;}
#line 1723 "y.tab.c"
    break;

  case 31: /* data_type_new: EVENT  */
#line 113 "yacc.y"
            { (yyval.type) = 10;}
#line 1729 "y.tab.c"
    break;

  case 32: /* data_type_new: MEETING  */
#line 114 "yacc.y"
               { (yyval.type) = 11;}
#line 1735 "y.tab.c"
    break;

  case 33: /* data_type_new: CALENDAR  */
#line 115 "yacc.y"
               { (yyval.type) = 13;}
#line 1741 "y.tab.c"
    break;

  case 34: /* data_type_pr: INT  */
#line 119 "yacc.y"
                   { (yyval.type) = 0;}
#line 1747 "y.tab.c"
    break;

  case 35: /* data_type_pr: STRING  */
#line 120 "yacc.y"
             { (yyval.type) = 2;}
#line 1753 "y.tab.c"
    break;

  case 36: /* data_type_pr: BOOL  */
#line 121 "yacc.y"
            { (yyval.type) = 3;}
#line 1759 "y.tab.c"
    break;

  case 37: /* data_type_pr: FLOAT  */
#line 122 "yacc.y"
            { (yyval.type) = 1;}
#line 1765 "y.tab.c"
    break;

  case 64: /* single_stmt: decl_stmt  */
#line 169 "yacc.y"
                       {
    display_symtab(global_table);
    }
#line 1773 "y.tab.c"
    break;

  case 68: /* decl_stmt: data_type_new id_list SEMICOLON  */
#line 178 "yacc.y"
                                           {
    snode* temp = (yyvsp[-1].namelist)->head;
    while(temp != NULL){
        idrec entry;
        entry.type = (yyvsp[-2].type);
        entry.arr = false;
        entry.scope = 0; // we have to change scope according to nested loops
        entry.name = temp->val;
        insert_symtab(global_table, &entry);
        // if (insert_symtab(global_table, entry)) {
        //     // Variable inserted successfully
        // } else {
        //     yyerror("Variable already declared");
        // }
    }

    }
#line 1795 "y.tab.c"
    break;

  case 69: /* decl_stmt: data_type_pr id_list SEMICOLON  */
#line 195 "yacc.y"
                                    {
    snode* temp = (yyvsp[-1].namelist)->head;
    while(temp != NULL){
        idrec entry;
        entry.type = (yyvsp[-2].type);
        entry.arr = false;
        entry.scope = 0; // we have to change scope according to nested loops
        entry.name = temp->val;
        insert_symtab(global_table, &entry);
        // if (insert_symtab(global_table, entry)) {
        //     // Variable inserted successfully
        // } else {
        //     yyerror("Variable already declared");
        // }
    }    
    }
#line 1816 "y.tab.c"
    break;


#line 1820 "y.tab.c"

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

#line 342 "yacc.y"


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
