/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     NUMBER = 258,
     STRING_LITERAL = 259,
     BOOL_LITERAL = 260,
     DECIMAL = 261,
     CLASS = 262,
     RETURN = 263,
     INT = 264,
     STRING = 265,
     BOOL = 266,
     FLOAT = 267,
     VOID = 268,
     LIST = 269,
     DOCUMENT = 270,
     TEAM = 271,
     MEMBERS = 272,
     TASK = 273,
     EVENT = 274,
     MEETING = 275,
     CALENDAR = 276,
     ADD = 277,
     SUB = 278,
     MUL = 279,
     DIV = 280,
     MOD = 281,
     UNARY_OP = 282,
     ASSIGN_OP = 283,
     REL_OP = 284,
     EQUALS = 285,
     AND = 286,
     OR = 287,
     NOT = 288,
     INTERSECTION_OP = 289,
     UNION_OP = 290,
     FOR = 291,
     WHILE = 292,
     IF = 293,
     ELSE = 294,
     IDENTIFIER = 295,
     SELF = 296,
     LSB = 297,
     RSB = 298,
     LCB = 299,
     RCB = 300,
     LPB = 301,
     RPB = 302,
     SEMICOLON = 303,
     COMMA = 304,
     DOT = 305,
     COLON = 306,
     ARROW = 307,
     INCLUDE = 308,
     TYPEDEF = 309
   };
#endif
/* Tokens.  */
#define NUMBER 258
#define STRING_LITERAL 259
#define BOOL_LITERAL 260
#define DECIMAL 261
#define CLASS 262
#define RETURN 263
#define INT 264
#define STRING 265
#define BOOL 266
#define FLOAT 267
#define VOID 268
#define LIST 269
#define DOCUMENT 270
#define TEAM 271
#define MEMBERS 272
#define TASK 273
#define EVENT 274
#define MEETING 275
#define CALENDAR 276
#define ADD 277
#define SUB 278
#define MUL 279
#define DIV 280
#define MOD 281
#define UNARY_OP 282
#define ASSIGN_OP 283
#define REL_OP 284
#define EQUALS 285
#define AND 286
#define OR 287
#define NOT 288
#define INTERSECTION_OP 289
#define UNION_OP 290
#define FOR 291
#define WHILE 292
#define IF 293
#define ELSE 294
#define IDENTIFIER 295
#define SELF 296
#define LSB 297
#define RSB 298
#define LCB 299
#define RCB 300
#define LPB 301
#define RPB 302
#define SEMICOLON 303
#define COMMA 304
#define DOT 305
#define COLON 306
#define ARROW 307
#define INCLUDE 308
#define TYPEDEF 309




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 35 "yacc.y"
{
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
}
/* Line 1529 of yacc.c.  */
#line 196 "yacc.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

