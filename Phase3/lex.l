%{
 #include <stdio.h>
 #include <stdbool.h>
 #include "yacc.tab.h"
 #include "lex_module.h"
 extern FILE *yyout;
 extern FILE *tf;

 int list_flag = 0;
 int list_print_flag = 0;
 int arrow_flag = 0;
 int self_flag = 0;
 char s[100];
 int i = 0;

 bool v_flag = false;
 bool v_id = false;
 char *vec;
 char *init;

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
CLASS "class"
SELF "self"

INCLUDE "#include"


DIGIT [0-9]
NUMBER {DIGIT}+
DECIMAL {NUMBER}"."{NUMBER}
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
 if(v_flag == true){
  vec = concat(vec,yytext);
}
 else{
   print(yytext);
 }

 
 return NUMBER;
}
{DECIMAL} {
  fprintf(tf,"constant: %s\n", yytext);
  
  if(v_flag == true){
    vec = concat(vec,yytext);
  }
  else{
    print(yytext);
  }
return DECIMAL;
}
{STRING} {
 fprintf(tf,"constant: %s\n", yytext);
 

  if(v_flag == true){
    vec = concat(vec,yytext);
  }
  else{
    print(yytext);
  }
 return STRING_LITERAL;
}
{DATA_TYPE_PR} {
 fprintf(tf,"datatype: %s\n", yytext);
 
   char* c1 = "int";
   char* c3 = "string";
   char* c4 = "bool";
   char* c5 = "void";  
   char* c6 = "float";

  if(v_flag == true){
    vec = concat(vec,yytext);
    init = gen_vec(vec);
    v_flag = false;
  }
  else print(yytext);
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
v_flag = true;
vec = strdup(yytext);
 return LIST;
}
{CLASS} {
 fprintf(tf,"reserved: %s\n", yytext);
 print(yytext);
 return CLASS;
}
{SELF} {
 fprintf(tf,"reserved: %s\n", yytext);
 print("this");
 return SELF;
}
{DATA_TYPE_NEW} {
 fprintf(tf,"datatype: %s\n", yytext);
 
   char* c1 = "team";
   char* c2 = "member";
   char* c3 = "task";
   char* c4 = "event";
   char* c5 = "meeting";
   char* c6 = "calendar";
    if(v_flag == true){
      vec = concat(vec,yytext);
      init = gen_vec(vec);
      v_flag = false;
    }
    else print(yytext);
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
   char* c1 = ",";
   char* c2 = ";";
   char* c3 = ":";
   char* c4 = ".";
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
       
       

       if(v_flag == true){
          vec = concat(vec,yytext);
        }
        else{
         print(yytext);
        }
        return COLON;
   }
   else if(strcmp(yytext,c4)==0){
      if(self_flag == 1){
         print("->");
       }
       else{
         print(yytext);
       }
       return DOT;
   }
}
{ARITH_OP} {
 fprintf(tf,"operator: %s\n", yytext);
 
 char* c1 = "+";
 char* c2 = "-";
 char* c3 = "/";
 char* c4 = "*";
 char* c5 = "%";
  if(v_flag == true){
    vec = concat(vec,yytext);
  }
  else print(yytext);
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
 
  char* c1 = ">";
  char* c2 = "<";
  char* c3 = ">=";
  char* c4 = "<=";
  char* c5 = "is";
  char* c6 = "is not";
  if(v_flag == true){
    vec = concat(vec,yytext);
  }
  else print(yytext);

  if(strcmp(yytext,c1)==0 || strcmp(yytext,c2)==0 || strcmp(yytext,c3)==0 || strcmp(yytext,c4)==0){
    yylval.assignop = 0;
  }
  else if(strcmp(yytext,c5)==0 || strcmp(yytext,c6)==0){
    yylval.assignop = 1;
  }
 return REL_OP;
}
{UNARY_OP} {
 fprintf(tf,"operator: %s\n", yytext);
  if(v_flag == true){
    vec = concat(vec,yytext);
  }
  else print(yytext);
 return UNARY_OP;
}
{LOGICAL_OP} {
 fprintf(tf,"operator: %s\n", yytext);
 
 char* c1 = "and";
 char* c2 = "or";
 char* c3 = "not";
  if(v_flag == true){
    vec = concat(vec,yytext);
  }
  else print(yytext);

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
 char* c1 = "+=";
  char* c2 = "-=";
  char* c3 = "/=";
  char* c4 = "*=";
  char* c5 = "%=";
  char* c6 = "&=";
  char* c7 = "|=";
  if(strcmp(yytext,c1)==0){
    yylval.assignop = 0;
  }
  else if(strcmp(yytext,c2)==0){
    yylval.assignop = 1;
  }
  else if(strcmp(yytext,c3)==0){
    yylval.assignop = 2;
  }
  else if(strcmp(yytext,c4)==0){
    yylval.assignop = 3;
  }
  else if(strcmp(yytext,c5)==0){
    yylval.assignop = 4;
  }
  else if(strcmp(yytext,c6)==0){
    yylval.assignop = 5;
  }
  else if(strcmp(yytext,c7)==0){
    yylval.assignop = 6;
  }
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
   char* c1 = "(";
   char* c2 = ")";
   char* c3 = "{";
   char* c4 = "}";
   char* c5 = "[";
   char* c6 = "]";
   if(v_flag == true){
    vec = concat(vec,yytext);
   }
    else print(yytext);

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
 fprintf(tf,"identifier: %s\n", yytext);
 yylval.id.name = strdup(yytext);
 if(v_flag == true){
    vec = concat(vec,yytext);
  }
  else print(yytext);

 return IDENTIFIER;
}

. {
 printf("Unrecognized character %s\n", yytext);
 yyterminate();
}


%%