%{
  # include <stdio.h>
  # include <string.h>
  # include "y.tab.c"
  FILE *tokens;

  extern FILE *yyout;
%}

%option noyywrap

WHITESPACE [ \t]*

VOID "void"
RETURN "return"
BOOL "TRUE"|"FALSE"
LOOP_WHILE "while"
LOOP_FOR "for"
IF "if"
ELSE "else"

INCLUDE "#include"

DIGIT [0-9]
NUMBER {DIGIT}+
STRING \"([^\"\\]*(\\.[^\"\\]*)*)\"

DATA_TYPE_PR "int"|"float"|"bool"|"string"|"struct"|"char"|"void"
DOCUMENT "document"
DATA_TYPE_NEW "team"|"members"|"task"|"event"|"meeting"|{DOCUMENT}

PUNCTUATION [,;:.]

ARITH_OP "+"|"-"|"/"|"*"
REL_OP "is"|"is not"|">"|"<"|">="|"<=" //First two are == and !=
LOGICAL_OP "and"|"or"|"not" //This is &&, || and !
ASSIGN_OP "+="|"-="|"="
INTERSECTION_OP "&" // speific to our language
UNION_OP "|" // specific to our language
ARROW "->"
BRACKETS    [(){}\[\]]
VIEWS "flow"|"board"|"calendar"|"report"


ID [A-Za-z][A-Za-z0-9_]*

%option noyywrap
%%
{WHITESPACE} {
  ;
}
{INCLUDE} {
  return INCLUDE;
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
{NUMBER} {
  return NUMBER;
}
{STRING} {
  return STRING_VAL;
}
{DATA_TYPE_PR} {
    char* c1 = "int";
    char* c2 = "char";
    char* c3 = "string";
    char* c4 = "bool";
    char* c5 = "void";   
    char* c6 = "float";
    char* c7 = "struct";
    if(strcmp(yytext,c1)==0){
      return INT;
    }
    else if(strcmp(yytext,c2)==0){
      return CHAR;
    }
    else if(strcmp(yytext,c3)==0){
      return STRING;
    }
    else if(strcmp(yytext,c4)==0){
      return BOOL;
    }
    else if(strcmp(yytext,c5)==0){
      return VOID;
    }
    else if(strcmp(yytext,c6)==0){
      return FLOAT;
    }
    else if(strcmp(yytext,c7)==0){
      return STRUCT;
    }
}
{DOCUMENT} {
  return DOCUMENT;
}
{DATA_TYPE_NEW} {
    char* c1 = "team";
    char* c2 = "members";
    char* c3 = "task";
    char* c4 = "event";
    char* c5 = "meeting";
    if(strcmp(yytext,c1)==0){
        return TEAM;
    }
    else if(strcmp(yytext,c2)==0){
        return MEMBERS;
    }
    else if(strcmp(yytext,c3)==0){
        return TASK;
    }
    else if(strcmp(yytext,c4)==0){
        return EVENT;
    }
    else if(strcmp(yytext,c5)==0){
        return MEETING;
    }
    else{
        return DATA_TYPE_NEW;
    }
}
{PUNCTUATION} {
    char* c1 = ",";
    char* c2 = ";";
    char* c3 = ":";
    char* c4 = ".";
    if(strcmp(yytext,c1)==0){
        return COMMA;
    }
    else if(strcmp(yytext,c2)==0){
        return SEMICOLON;
    }
    else if(strcmp(yytext,c3)==0){
        return COLON;
    }
    else if(strcmp(yytext,c4)==0){
        return DOT;
    }
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
{INTERSECTION_OP} {
  return INTERSECTION_OP;
}
{UNION_OP} {
  return UNION_OP;
}
{ARROW} {
  return ARROW;
}
{BRACKETS} {
    char* c1 = "(";
    char* c2 = ")";
    char* c3 = "{";
    char* c4 = "}";
    char* c5 = "[";
    char* c6 = "]";
    if(strcmp(yytext,c1)==0){
        return LPB;
    }
    else if(strcmp(yytext,c2)==0){
        return RPB;
    }
    else if(strcmp(yytext,c3)==0){
        return LCB;
    }
    else if(strcmp(yytext,c4)==0){
        return RCB;
    }
    else if(strcmp(yytext,c5)==0){
        return LSB;
    }
    else if(strcmp(yytext,c6)==0){
        return RSB;
    }
}
{VIEWS} {
  return VIEWS;
}
{ID} {
  return ID;
}

