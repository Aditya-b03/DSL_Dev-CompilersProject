%{
    #include <stdio.h>
    #include <string.h>
    #include <stdlib.h>
    int yylex(void);
  
  void yyerror(char *);
    extern char* yytext;
    extern FILE *yyout;
    extern FILE *yyin;
    extern int yylineno;
    FILE *tf;
    int for_loop = 0;       //nested loop
    int nested_call = 0;    // nested call
    int return_flag = 0;
%}

// neg, array declaration

%token NUMBER STRING_LITERAL BOOL_LITERAL
%token CLASS RETURN
%token INT STRING BOOL FLOAT VOID LIST 
%token DOCUMENT TEAM MEMBERS TASK EVENT MEETING CALENDAR // yet to add
%token ADD SUB MUL DIV MOD
%token UNARY_OP
%token ASSIGN_OP REL_OP EQUALS // equal update
%token AND OR NOT INTERSECTION_OP UNION_OP
%token FOR WHILE IF ELSE
%token IDENTIFIER SELF 
%token LSB RSB LCB RCB LPB RPB SEMICOLON COMMA DOT COLON ARROW
%token STRUCT 
%token INCLUDE TYPEDEF

%%



start: include_stmts code
    | code
    ;

include_stmts: include_stmts include_stmt
    | include_stmt
    ;

include_stmt: INCLUDE STRING_LITERAL
    ;

identifier: IDENTIFIER
    | IDENTIFIER ARROW identifier
    | IDENTIFIER DOT identifier
    | IDENTIFIER dim
    | IDENTIFIER dim ARROW identifier
    | IDENTIFIER dim DOT identifier
    | SELF DOT identifier
    ;

code: decl_stmt code
    | function code
    | struct_code code // to remove struct from code
    | class code
    |
    ;

struct_code: struct_def  //to remove
    | TYPEDEF struct_def
    ;

struct_def: STRUCT IDENTIFIER LCB struct_body RCB SEMICOLON
    ;

struct_body: struct_body decl_stmt
    |
    ; // till here

function: function_dec LCB statements RCB
    ;

function_dec: data_type_new IDENTIFIER LPB function_params RPB
    | data_type_pr IDENTIFIER LPB function_params RPB
    | IDENTIFIER IDENTIFIER LPB function_params RPB
    | VOID IDENTIFIER LPB function_params RPB
    ;

data_type_new: DOCUMENT      // why??
    | TEAM
    | MEMBERS
    | TASK
    | EVENT
    | MEETING
    | CALENDAR
    ;


data_type_pr:  INT
    | STRING
    | BOOL
    | FLOAT
    ;


function_params: function_params COMMA function_param
    | function_param
    |
    ;

function_param: data_type_new IDENTIFIER
    | data_type_pr IDENTIFIER
    | IDENTIFIER IDENTIFIER
    ;

class: class_dec LCB class_stmt RCB
    ;

class_dec: CLASS IDENTIFIER
    ;

class_stmt: function class_stmt
    | decl_stmt class_stmt
    | expr_stmt class_stmt
    |
    ;

statements : statements statement
    | 
    ;

statement: decl_stmt
    | if_stmt
    | for_stmt
    | while_stmt
    | return_stmt
    | call_stmt
    | expr_stmt
    | SEMICOLON
    ;

unary_stmt: identifier UNARY_OP
    | identifier
    ;

single_stmt: decl_stmt
    | call_stmt
    | expr_stmt
    ;

decl_stmt: data_type_new id_list SEMICOLON
    | data_type_pr id_list SEMICOLON
    | IDENTIFIER id_list SEMICOLON
    | list id_list  SEMICOLON
    ;

list: LIST dim COLON data_type_pr 
    | LIST dim COLON data_type_new 
    | LIST dim COLON list 
    ;

list_literal: LCB list_terminal RCB
    ;

list_terminal: nested_expr
    | list_terminal COMMA nested_expr         
    ;


dim: dim LSB nested_expr RSB
    | LSB nested_expr RSB
    ;

id_list: id_list COMMA IDENTIFIER
    | IDENTIFIER EQUALS nested_expr
    | id_list COMMA IDENTIFIER EQUALS nested_expr
    | IDENTIFIER
    ;



expr_stmt: expr_stmt_without_semicolon SEMICOLON
    ;

expr_stmt_without_semicolon: identifier ASSIGN_OP nested_expr
    | identifier EQUALS nested_expr
    | unary_stmt
    ;

if_stmt: IF LPB nested_expr RPB LCB statements RCB
    | IF LPB nested_expr RPB single_stmt 
    | IF LPB nested_expr RPB LCB statements RCB ELSE if_stmt
    | IF LPB nested_expr RPB single_stmt ELSE if_stmt
    | IF LPB nested_expr RPB LCB statements RCB ELSE LCB statements RCB
    | IF LPB nested_expr RPB single_stmt ELSE LCB statements RCB
    | IF LPB nested_expr RPB LCB statements RCB ELSE single_stmt
    | IF LPB nested_expr RPB single_stmt ELSE single_stmt
    ;

for_stmt: FOR LPB decl_stmt  nested_expr SEMICOLON expr_stmt_without_semicolon RPB LCB statements RCB
    | FOR LPB decl_stmt nested_expr SEMICOLON expr_stmt_without_semicolon RPB single_stmt
    | FOR LPB expr_stmt nested_expr SEMICOLON expr_stmt_without_semicolon RPB LCB statements RCB
    | FOR LPB expr_stmt nested_expr SEMICOLON expr_stmt_without_semicolon RPB single_stmt
    ;

while_stmt: WHILE LPB nested_expr RPB LCB statements RCB
    | WHILE LPB nested_expr RPB single_stmt
    ;

return_stmt: RETURN SEMICOLON
    | RETURN nested_expr SEMICOLON
    ;

call_stmt: call SEMICOLON
    ;

call: identifier LPB call_args RPB
    ;

call_args: call_args COMMA nested_expr
    | nested_expr
    | call_args COMMA identifier EQUALS nested_expr
    | identifier EQUALS nested_expr
    |
    ;

nested_expr: LPB nested_expr RPB
    | LPB nested_expr RPB conj nested_expr
    | LPB nested_expr RPB REL_OP nested_expr
    | LPB nested_expr RPB arith_op nested_expr
    | LPB nested_expr RPB set_op nested_expr
    | expr
    ;

expr: expr_terminal conj nested_expr
    | expr_terminal REL_OP nested_expr
    | expr_terminal arith_op nested_expr
    | expr_terminal set_op nested_expr
    | expr_terminal
    ;

expr_terminal: unary_stmt
    | NUMBER
    | STRING_LITERAL
    | BOOL_LITERAL
    | call
    | NOT LPB nested_expr RPB
    | NOT identifier
    | list_literal
    ;

conj: AND
    | OR
    ;

set_op: INTERSECTION_OP
    | UNION_OP
    ;

arith_op: ADD
    | SUB
    | MUL
    | DIV
    | MOD
    ;

%%

// error handling
void yyerror(char *s) {
    //fprintf(yyout," : invalid statement");
    fprintf(stderr, "%s: at line: %d ", s, yylineno);
    fprintf(stderr,"Unexpected Token: %s\n",yytext);
}

int main(int argc, char* argv[]) {

     /* //check for input file aurgument
    if(argc < 2){
        printf("Missing Argument:./lex_source_program < \"test case path\"");
        return -1;
    }
    else{
        // InFile and Outfile path and Name Handling
       
        if(!yyin){
            printf("Error: Input File not found");
            return -1;
        }
        int len = strlen(argv[1]);
        int i = 0;
        int filestart=0;
        while(argv[1][i] != '\0'){
            if(argv[1][i] == '/'){
                filestart = i+1;
            }
            i++;
        }

        // get the file Name in suffix
        char suffix = (char)malloc(100*sizeof(char));
        i = filestart;
        while(argv[1][i] != '.'){
            suffix[i-filestart] = argv[1][i];
            i++;
        }

        // append suffix to outfile and C_outfile name
        char outfile = (char)malloc(100*sizeof(char));
        char C_outfile = (char)malloc(100*sizeof(char));
        sprintf(C_outfile,"TP2/parsed_%s.cpp",suffix);
        

        // open the respective files
        yyout = fopen(C_outfile, "w+"); */
    // }
    yyin = fopen("../testCases/1.test","r");
    yyout = fopen("1.txt","w+");
    yyparse();
    return 0;
}