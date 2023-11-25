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
    DECIMAL = 261,                 /* DECIMAL  */
    CLASS = 262,                   /* CLASS  */
    RETURN = 263,                  /* RETURN  */
    INT = 264,                     /* INT  */
    STRING = 265,                  /* STRING  */
    BOOL = 266,                    /* BOOL  */
    FLOAT = 267,                   /* FLOAT  */
    VOID = 268,                    /* VOID  */
    LIST = 269,                    /* LIST  */
    DOCUMENT = 270,                /* DOCUMENT  */
    TEAM = 271,                    /* TEAM  */
    MEMBERS = 272,                 /* MEMBERS  */
    TASK = 273,                    /* TASK  */
    EVENT = 274,                   /* EVENT  */
    MEETING = 275,                 /* MEETING  */
    CALENDAR = 276,                /* CALENDAR  */
    ADD = 277,                     /* ADD  */
    SUB = 278,                     /* SUB  */
    MUL = 279,                     /* MUL  */
    DIV = 280,                     /* DIV  */
    MOD = 281,                     /* MOD  */
    UNARY_OP = 282,                /* UNARY_OP  */
    ASSIGN_OP = 283,               /* ASSIGN_OP  */
    REL_OP = 284,                  /* REL_OP  */
    EQUALS = 285,                  /* EQUALS  */
    AND = 286,                     /* AND  */
    OR = 287,                      /* OR  */
    NOT = 288,                     /* NOT  */
    INTERSECTION_OP = 289,         /* INTERSECTION_OP  */
    UNION_OP = 290,                /* UNION_OP  */
    FOR = 291,                     /* FOR  */
    WHILE = 292,                   /* WHILE  */
    IF = 293,                      /* IF  */
    ELSE = 294,                    /* ELSE  */
    IDENTIFIER = 295,              /* IDENTIFIER  */
    SELF = 296,                    /* SELF  */
    PUBLIC = 297,                  /* PUBLIC  */
    LSB = 298,                     /* LSB  */
    RSB = 299,                     /* RSB  */
    LCB = 300,                     /* LCB  */
    RCB = 301,                     /* RCB  */
    LPB = 302,                     /* LPB  */
    RPB = 303,                     /* RPB  */
    SEMICOLON = 304,               /* SEMICOLON  */
    COMMA = 305,                   /* COMMA  */
    DOT = 306,                     /* DOT  */
    COLON = 307,                   /* COLON  */
    ARROW = 308,                   /* ARROW  */
    INCLUDE = 309,                 /* INCLUDE  */
    TYPEDEF = 310                  /* TYPEDEF  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 38 "yacc.y"

    struct id{
        char* name;
        int type;
        char *class_name;
    } id;
    struct slist *namelist;
    int type;
    int op_type;
    struct list{
        char* class_name;
        int type;
        int dim;
    } list;
    int assignop;
    struct functions{
        int type;
        int dim;
        char* name;
        struct symtab *params;
        struct symtab *local_table;
        int num_params;
    } functions;
    struct stmt{
        int type;
        int scope;
    } stmt;
    struct class_id{
        int type;
        int dim;
        struct slist *namelist;
    } class_id;
    struct idrec *param;
    struct exprs{
        int type;
        int dim;
    } exprs;

#line 158 "yacc.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_YACC_TAB_H_INCLUDED  */
