/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_YACC_TAB_H_INCLUDED
# define YY_YY_YACC_TAB_H_INCLUDED
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
    INCLUDE = 308                  /* INCLUDE  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 30 "yacc.y"

   struct id{
      char* name;
      bool isClass;
   }id;
   struct slist *namelist;
   int type;
   struct list{
      int type;
      struct ilist *dimlist;
   }list;

#line 130 "yacc.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_YACC_TAB_H_INCLUDED  */
