%{
  #include <stdio.h>
  #include <string>
  #include <vector>
  #include "yacc.tab.hpp"
  extern FILE *yyout;
  extern FILE *tf;

  void print(char* s){
    fprintf(yyout,"%s",s);
  }
  int list_flag = 0;
  int list_print_flag = 0;
  int arrow_flag = 0;
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
  fprintf(tf,"comment: %s\n", yytext);
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
  fprintf(tf,"reserved: %s\n", yytext);
  print("#include");
  return INCLUDE;
}
{VOID} {
  fprintf(tf,"datatype: %s\n", yytext);
  print(yytext);
  return VOID;
}
{RETURN} {
  fprintf(tf,"reserved: %s\n", yytext);
  print(yytext);
  return RETURN;
}
{BOOL} {
  fprintf(tf,"datatype: %s\n", yytext);
  print(yytext);
  return BOOL_LITERAL;
}
{LOOP_WHILE} {
  fprintf(tf,"reserved: %s\n", yytext);
  print(yytext);
  return WHILE;
}
{LOOP_FOR} {
  fprintf(tf,"reserved: %s\n", yytext);
  print(yytext);
  return FOR;
}
{IF} {
  fprintf(tf,"reserved: %s\n", yytext);
  print(yytext);
  return IF;
}
{ELSE} {
  fprintf(tf,"reserved: %s\n", yytext);
  print(yytext);
  return ELSE;
}
{NUMBER} {
  fprintf(tf,"constant: %s\n", yytext);
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
  fprintf(tf,"constant: %s\n", yytext);
  print(yytext);
  return STRING_LITERAL;
}
{DATA_TYPE_PR} {
  fprintf(tf,"datatype: %s\n", yytext);
  print(yytext);
    string c1 = "int";
    string c3 = "string";
    string c4 = "bool";
    string c5 = "void";   
    string c6 = "float";
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
  fprintf(tf,"datatype: %s\n", yytext);
  print(yytext);
  return DOCUMENT;
}
{LIST} {         
  fprintf(tf,"reserved: %s\n", yytext);   
  list_flag = 1;
  list_print_flag=1;
  return LIST;
}
{DATA_TYPE_NEW} {
  fprintf(tf,"datatype: %s\n", yytext);
  print(yytext);
    string c1 = "team";
    string c2 = "member";
    string c3 = "task";
    string c4 = "event";
    string c5 = "meeting";
    string c6 = "calendar";
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
    fprintf(tf,"punctuation: %s\n", yytext);
    string c1 = ",";
    string c2 = ";";
    string c3 = ":";
    string c4 = ".";
    if(strcmp(yytext,c1)==0){
        print(yytext);
        return COMMA;
    }
    else if(strcmp(yytext,c2)==0){
        if(arrow_flag==1){
          fprintf(yyout,")");
          arrow_flag = 0;
        }
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
  fprintf(tf,"operator: %s\n", yytext);
  print(yytext);
  string c1 = "+";
  string c2 = "-";
  string c3 = "/";
  string c4 = "*";
  string c5 = "%";
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
  fprintf(tf,"operator: %s\n", yytext);
  print(yytext);
  return REL_OP;
}
{UNARY_OP} {
  fprintf(tf,"operator: %s\n", yytext);
  print(yytext);
  return UNARY_OP;
}
{LOGICAL_OP} {
  fprintf(tf,"operator: %s\n", yytext);
  print(yytext);
  string c1 = "and";
  string c2 = "or";
  string c3 = "not";
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
  fprintf(tf,"operator: %s\n", yytext);
  print(yytext);
  return ASSIGN_OP;
}
{EQUAL} {
  fprintf(tf,"operator: %s\n", yytext);
  print(yytext);
  return EQUALS;
}

{INTERSECTION_OP} {
  fprintf(tf,"operator: %s\n", yytext);
  print(yytext);
  return INTERSECTION_OP;
}
{UNION_OP} {
  fprintf(tf,"operator: %s\n", yytext);
  print(yytext);
  return UNION_OP;
}
{ARROW} {
  print(".add_member(");
  arrow_flag = 1;
  return ARROW;
}
{BRACKETS} {
    fprintf(tf,"brackets: %s\n", yytext);
    string c1 = "(";
    string c2 = ")";
    string c3 = "{";
    string c4 = "}";
    string c5 = "[";
    string c6 = "]";
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
  fprintf(tf,"identifier: %s\n", yytext);
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
