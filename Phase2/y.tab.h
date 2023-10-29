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
     CLASS = 261,
     RETURN = 262,
     INT = 263,
     STRING = 264,
     BOOL = 265,
     FLOAT = 266,
     VOID = 267,
     LIST = 268,
     DOCUMENT = 269,
     TEAM = 270,
     MEMBERS = 271,
     TASK = 272,
     EVENT = 273,
     MEETING = 274,
     CALENDAR = 275,
     ADD = 276,
     SUB = 277,
     MUL = 278,
     DIV = 279,
     MOD = 280,
     UNARY_OP = 281,
     ASSIGN_OP = 282,
     REL_OP = 283,
     EQUALS = 284,
     AND = 285,
     OR = 286,
     NOT = 287,
     INTERSECTION_OP = 288,
     UNION_OP = 289,
     FOR = 290,
     WHILE = 291,
     IF = 292,
     ELSE = 293,
     IDENTIFIER = 294,
     SELF = 295,
     LSB = 296,
     RSB = 297,
     LCB = 298,
     RCB = 299,
     LPB = 300,
     RPB = 301,
     SEMICOLON = 302,
     COMMA = 303,
     DOT = 304,
     COLON = 305,
     ARROW = 306,
     STRUCT = 307,
     INCLUDE = 308,
     TYPEDEF = 309
   };
#endif
/* Tokens.  */
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




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

