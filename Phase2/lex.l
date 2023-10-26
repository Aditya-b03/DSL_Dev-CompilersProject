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
LIST "list"

INCLUDE "#include"

DIGIT [0-9]
NUMBER {DIGIT}+
STRING \"([^\"\\]*(\\.[^\"\\]*)*)\"

DATA_TYPE_PR "int"|"float"|"bool"|"string"|"void"
DOCUMENT "document"
DATA_TYPE_NEW "team"|"members"|"task"|"event"|"meeting"|"calendar"

PUNCTUATION [,;:.]

ARITH_OP "+"|"-"|"/"|"*"|"%" 
REL_OP "is"|"is not"|">"|"<"|">="|"<=" 
LOGICAL_OP "and"|"or"|"not" 
ASSIGN_OP "+="|"-="|"="|"/="|"*="|"%="
SET_OP "&="|"|=" 
UNARY_OP "++"|"--"
INTERSECTION_OP "&" 
UNION_OP "|" 
ARROW "->"
BRACKETS    [(){}\[\]]
VIEWS "flow"|"board"|"report"


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
  return BOOL_LITERAL;
}
{LOOP_WHILE} {
  return WHILE;
}
{LOOP_FOR} {
  return FOR;
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
  return STRING_LITERAL;
}
{DATA_TYPE_PR} {
    char* c1 = "int";
    char* c3 = "string";
    char* c4 = "bool";
    char* c5 = "void";   
    char* c6 = "float";
    if(strcmp(yytext,c1)==0){
      return INT;
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
    char* c6 = "calendar";
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
    else if(strcmp(yytext,c6)==0){
        return CALENDAR;
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
  char* c1 = "+";
  char* c2 = "-";
  char* c3 = "/";
  char* c4 = "*";
  char* c5 = "%";
  if(strcmp(yytext,c1)==0){
    return ADD;
  }
  else if(strcmp(yytext,c2)==0){
    return SUB;
  }
  else if(strcmp(yytext,c3)==0){
    return DIV;
  }
  else if(strcmp(yytext,c4)==0){
    return MUL;
  }
  else if(strcmp(yytext,c5)==0){
    return MOD;
  }
}
{REL_OP} {
  return REL_OP;
}
{SET_OP} {
  return SET_OP;
}
{UNARY_OP} {
  return UNARY_OP;
}
{LOGICAL_OP} {
  char* c1 = "and";
  char* c2 = "or";
  char* c3 = "not";
  if(strcmp(yytext,c1)==0){
    return AND;
  }
  else if(strcmp(yytext,c2)==0){
    return OR;
  }
  else if(strcmp(yytext,c3)==0){
    return NOT;
  }
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
. {
  printf("Unrecognized character %s\n", yytext);
  yyerror("Unrecognized character");
  return yytext[0];
}

