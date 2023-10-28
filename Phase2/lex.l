%{
  # include <stdio.h>
  # include <string.h>
  # include "y.tab.h"
  FILE *tokens;
  extern FILE *yyout;


  void print(char* s){
    printf("%s\n",s);
  }

  
%}

%option noyywrap

WHITESPACE [ \t]*
COMMENTS $.*$
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
DATA_TYPE_NEW "team"|"member"|"task"|"event"|"meeting"|"calendar"

PUNCTUATION [,;:.]

ARITH_OP "+"|"-"|"/"|"*"|"%" 
REL_OP "is"|"is not"|">"|"<"|">="|"<=" 
LOGICAL_OP "and"|"or"|"not" 
ASSIGN_OP "+="|"-="|"/="|"*="|"%="|"&="|"|="
EQUAL "="
UNARY_OP "++"|"--"
INTERSECTION_OP "&" 
UNION_OP "|" 
ARROW "->"
BRACKETS    [(){}\[\]]
VIEWS "flow"|"board"|"report"


ID [A-Za-z][A-Za-z0-9_]*

%option noyywrap
%%
"\n"      {
    print("newline :");
    printf("%d", yylineno);
    print(yytext);
    yylineno++;     //increament the line no.
    }

{WHITESPACE} {

  print(yytext);
  ;
}
{COMMENTS} {
  print("comment :");
  print(yytext);
  ;
}
{INCLUDE} {
  print("include :");
  print(yytext);
  return INCLUDE;
}
{VOID} {
  print("void :");
  print(yytext);
  return VOID;
}
{RETURN} {
  print("return :");
  print(yytext);
  return RETURN;
}
{BOOL} {
  print("bool :");
  print(yytext);
  return BOOL_LITERAL;
}
{LOOP_WHILE} {
  print("while :");
  print(yytext);
  return WHILE;
}
{LOOP_FOR} {
  print("for :");
  print(yytext);
  return FOR;
}
{IF} {
  print("if :");
  print(yytext);
  return IF;
}
{ELSE} {
  print("else :");
  print(yytext);
  return ELSE;
}
{NUMBER} {
  print("number :");
  print(yytext);
  return NUMBER;
}
{STRING} {
  print("string :");
  print(yytext);
  return STRING_LITERAL;
}
{DATA_TYPE_PR} {
  print("data type pr:");
  print(yytext);
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
  print(yytext);
  return DOCUMENT;
}
{LIST} {

  print(yytext);
  return LIST;
}
{DATA_TYPE_NEW} {
  print("data type new: ");
  print(yytext);
    char* c1 = "team";
    char* c2 = "member";
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
  print(yytext);
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
        print("dot :");
        return DOT;
    }
}
{ARITH_OP} {
  print("arithmetic op :");
  print(yytext);
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
  print("relational op :");
  print(yytext);
  return REL_OP;
}
{UNARY_OP} {
  print("unary op :");
  print(yytext);
  return UNARY_OP;
}
{LOGICAL_OP} {
  print("logical op :");
  print(yytext);
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
  print("assign op :");
  print(yytext);
  return ASSIGN_OP;
}
{EQUAL} {
  print("equal :");

  print(yytext);
  return EQUALS;
}

{INTERSECTION_OP} {
  print("intersection op :");
  print(yytext);
  return INTERSECTION_OP;
}
{UNION_OP} {
  
  print("union op :");
  print(yytext);
  return UNION_OP;
}
{ARROW} {
  print("arrow :");
  print(yytext);
  return ARROW;
}
{BRACKETS} {
  print(yytext);
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

{ID} {
  print("identifier :");
  print(yytext);
  return IDENTIFIER;
}
. {
  printf("Unrecognized character %s\n", yytext);
  yyterminate();
}
%%


// {VIEWS} {
//   return VIEWS;
// }