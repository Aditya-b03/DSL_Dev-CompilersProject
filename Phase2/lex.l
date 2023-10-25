%{
  # include <stdio.h>
  # include <string.h>
  # include "y.tab.c"
  FILE *tokens;

  extern FILE *yyout;
%}

%option noyywrap


VOID "void"
RETURN "return"
BOOL "TRUE"|"FALSE"
LOOP_WHILE "till when"
LOOP_FOR "for"
IF "in case that"
ELSE "otherwise"

INT 0|[1-9][0-9]*
FLOAT [0-9]+\.[0-9]+
BOOL_VAL "TRUE"|"FALSE"
STRING \"(\\.|[^\\"])*\"

DATA_TYPE_PR "int"|"float"|"bool"|"string"|"struct"
TEAM "team"
MEMBERS "members"
TASK "task"
EVENT "event"
MEETING "meeting"
DOCUMENT "document"
DATA_TYPE_NEW {TEAM}|{MEMBERS}|{TASK}|{EVENT}|{MEETING}|{DOCUMENT}

ARITH_OP "+"|"-"|"/"|"*"
UNARY_OP "++"|"--"
REL_OP "is"|"is not"|">"|"<"|">="|"<=" //First two are == and !=
LOGICAL_OP "and"|"or"|"not" //This is &&, || and !
ASSIGN_OP "+="|"-="|"="|"*="|"/="
ARROW "->"
VIEWS "flow"|"board"|"calendar"|"report"


ID [A-Za-z][A-Za-z0-9_]*
NUMBER {INT}|{FLOAT}
WHITESPACE [ \t\n]+

%option noyywrap
%%
{WHITESPACE} {
  ;
}
{VOID} {
  return VOID;
}
{RETURN} {
  return RETURN;
}
{BOOL} {
  return BOOL;
}
{LOOP_WHILE} {
  return LOOP_WHILE;
}
{LOOP_FOR} {
  return LOOP_FOR;
}
{IF} {
  return IF;
}
{ELSE} {
  return ELSE;
}
{INT} {
  return INT;
}
{FLOAT} {
  return FLOAT;
}
{BOOL_VAL} {
  return BOOL_VAL;
}
{STRING} {
  return STRING_VAL;
}
{DATA_TYPE_PR} {
  return DATA_TYPE_PR;
}
{TEAM} {
  return TEAM;
}
{MEMBERS} {
  return MEMBERS;
}
{TASK} {
  return TASK;
}
{EVENT} {
  return EVENT;
}
{MEETING} {
  return MEETING;
}
{DOCUMENT} {
  return DOCUMENT;
}
{DATA_TYPE_NEW} {
  return DATA_TYPE_NEW;
}
{UNARY_OP} {
  return UNARY_OP;
}
{ARITH_OP} {
  return ARITH_OP;
}
{REL_OP} {
  return REL_OP;
}
{LOGICAL_OP} {
  return LOGICAL_OP;
}
{ASSIGN_OP} {
  return ASSIGN_OP;
}
{ARROW} {
  return ARROW;
}
{VIEWS} {
  return VIEWS;
}
{ID} {
  return ID;
}
{NUMBER} {
  return NUMBER;
}

