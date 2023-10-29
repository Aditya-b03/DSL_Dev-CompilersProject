%{
  #include <stdio.h>
  #include <string.h>
  #include "y.tab.h"
  FILE *tokens;
  extern FILE *yyout;


  void print(char* s){
    fprintf(yyout,"%s",s);
  }
  int list_flag = 0;
  int list_print_flag = 0;
  char s[100];
  int i = 0;
%}

%option noyywrap

WHITESPACE [ \t]*
COMMENTS \$[^$]*\$
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
    yylineno++;
    print(yytext);
    ;
}

{WHITESPACE} {
  print(yytext);
  ;
}
{COMMENTS} {
  if(yytext[0]=='$' && yytext[strlen(yytext)-1]=='$'){
    print("/");
    yytext[0] = '*';
    yytext[strlen(yytext)-1] = '*';
    print(yytext);
    print("/");
  }
  ;
}
{INCLUDE} {
  print("#include");
  return INCLUDE;
}
{VOID} {
  print(yytext);
  return VOID;
}
{RETURN} {
  print(yytext);
  return RETURN;
}
{BOOL} {
  print(yytext);
  return BOOL_LITERAL;
}
{LOOP_WHILE} {
  print(yytext);
  return WHILE;
}
{LOOP_FOR} {
  print(yytext);
  return FOR;
}
{IF} {
  print(yytext);
  return IF;
}
{ELSE} {
  print(yytext);
  return ELSE;
}
{NUMBER} {
  if(list_flag==1){
    s[i] = *yytext;
    i++;
  }
  else{
    print(yytext);
  }
  return NUMBER;
}
{STRING} {
  print(yytext);
  return STRING_LITERAL;
}
{DATA_TYPE_PR} {
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
  list_flag = 1;
  list_print_flag=1;
  return LIST;
}
{DATA_TYPE_NEW} {
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
  
    char* c1 = ",";
    char* c2 = ";";
    char* c3 = ":";
    char* c4 = ".";
    if(strcmp(yytext,c1)==0){
        print(yytext);
        return COMMA;
    }
    else if(strcmp(yytext,c2)==0){
        print(yytext);
        return SEMICOLON;
    }
    else if(strcmp(yytext,c3)==0){
        if(list_flag==1){
          list_flag = 0;
        }
        else{
          print(yytext);
        }
        return COLON;
    }
    else if(strcmp(yytext,c4)==0){
        print(yytext);
        return DOT;
    }
}
{ARITH_OP} {
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
  print(yytext);
  return REL_OP;
}
{UNARY_OP} {
  print(yytext);
  return UNARY_OP;
}
{LOGICAL_OP} {
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
  print(yytext);
  return ASSIGN_OP;
}
{EQUAL} {
  print(yytext);
  return EQUALS;
}

{INTERSECTION_OP} {
  print(yytext);
  return INTERSECTION_OP;
}
{UNION_OP} {
  print(yytext);
  return UNION_OP;
}
{ARROW} {
  print(yytext);
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
        print(yytext);
        return LPB;
    }
    else if(strcmp(yytext,c2)==0){
        print(yytext);
        return RPB;
    }
    else if(strcmp(yytext,c3)==0){
        print(yytext);
        return LCB;
    }
    else if(strcmp(yytext,c4)==0){
        print(yytext);
        return RCB;
    }
    else if(strcmp(yytext,c5)==0){
        if(list_flag==1){
          return LSB;
        }
        else{
          print(yytext);
        }
        return LSB;
    }
    else if(strcmp(yytext,c6)==0){
        if(list_flag==1){
          return RSB;
        }
        else{
          print(yytext);
        }
        return RSB;
    }
}

{ID} {

  if(list_flag==1){
    s[i] = *yytext;
    i++;
  }
  else{
    print(yytext);
    if(list_print_flag==1){
      fprintf(yyout,"[");
      for(int j = 0; j<strlen(s);j++){
        fprintf(yyout,"%c",s[j]);
        if(j==strlen(s)-1){
          fprintf(yyout,"]");
        }
        else{
          fprintf(yyout,"][");  
        }  
      }
      list_print_flag = 0;
    }
  }
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