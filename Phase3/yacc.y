%{  
    #include <stdio.h>
    #include <stdlib.h>
    #include<vector>
    #include<string>
    #include "yacc_module.h"
    
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
    extern FILE *tf;

    map<string, id_entry> global_table;
    map<string, func_entry> func_table;
    
%}

%union {
int type;
int intAttr;
vector<string> names_list;
string name;
}
%type <intAttr> INT FLOAT BOOL STRING DOCUMENT TEAM MEMBERS TASK EVENT MEETING CALENDAR
%type <type> data_type_new data_type_pr
%type <names_list> id_list
%type <name> IDENTIFIER

%token NUMBER STRING_LITERAL BOOL_LITERAL
%token CLASS RETURN
%token INT STRING BOOL FLOAT VOID LIST 
%token DOCUMENT TEAM MEMBERS TASK EVENT MEETING CALENDAR 
%token ADD SUB MUL DIV MOD
%token UNARY_OP
%token ASSIGN_OP REL_OP EQUALS 
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

// dimlist
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
    | struct_code code 
    | class code
    |
    ;

struct_code: struct_def  
    | TYPEDEF struct_def
    ;

struct_def: STRUCT IDENTIFIER LCB struct_body RCB SEMICOLON
    ;

struct_body: struct_body decl_stmt
    |
    ; 

function: function_dec LCB statements RCB
    ;

function_dec: data_type_new IDENTIFIER LPB function_params RPB
    | data_type_pr IDENTIFIER LPB function_params RPB
    | IDENTIFIER IDENTIFIER LPB function_params RPB
    | VOID IDENTIFIER LPB function_params RPB
    ;

data_type_new: DOCUMENT { $$ = 13; }  
    | TEAM { $$ = 8; }
    | MEMBERS   { $$ = 9; }
    | TASK  { $$ = 10; }
    | EVENT     { $$ = 11; }
    | MEETING  { $$ = 12; }
    | CALENDAR { $$ = 14; }
    ;


data_type_pr:  INT { $$ = 0; }
    | STRING { $$ = 2; }
    | BOOL  { $$ = 3; }
    | FLOAT { $$ = 1; }
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

// check id in symbol table
unary_stmt: identifier UNARY_OP
    | identifier
    ;

single_stmt: decl_stmt
    | call_stmt
    | expr_stmt
    ;

// add id to symbol table, id is class
decl_stmt: data_type_new id_list SEMICOLON {
        id_entry entry;
        entry.type = $1;
        entry.arr = false;
        entry.scope = 0; // we have to change scope according to nested loops
        if (insert(global_table, $2, entry)) {
            // Variable inserted successfully
        } else {
            yyerror("Variable already declared");
        }
        display(global_table);
    }
    | data_type_pr id_list SEMICOLON{
        id_entry entry;
        entry.type = $1;
        entry.arr = false;
        entry.scope = 0; // we have to change scope according to nested loops
        if (insert(global_table, $2, entry)) {
            // Variable inserted successfully
        } else {
            yyerror("Variable already declared");
        }
        display(global_table);   
    }
    | IDENTIFIER id_list SEMICOLON
    | list id_list  SEMICOLON
    ;

// dimlist, type
list: LIST dim COLON data_type_pr 
    | LIST dim COLON data_type_new 
    ;

// dimlist, type
list_literal:  LCB list_terminal RCB 
    ;

// dimlist, type
list_terminal: nested_expr
    | list_terminal COMMA nested_expr         
    ;

// dimlist, type
dim: dim  LSB nested_expr RSB 
    | LSB nested_expr RSB 
    ;

// idlist, type
id_list: id_list COMMA IDENTIFIER {
        $$.names_list = $1.names_list;
        $$.names_list.push_back($3);
    }
    | IDENTIFIER EQUALS nested_expr
    | id_list COMMA IDENTIFIER EQUALS nested_expr
    | IDENTIFIER{
        $$.names_list.push_back($1);
    }
    ;

expr_stmt: expr_stmt_without_semicolon SEMICOLON
    ;

// check lhs and rhs, check assignop (seprate assignop)
expr_stmt_without_semicolon: identifier ASSIGN_OP nested_expr
    | identifier EQUALS nested_expr
    | unary_stmt
    ;

// nested_expr is bool
if_stmt: IF LPB nested_expr RPB LCB statements RCB
    | IF LPB nested_expr RPB single_stmt 
    | IF LPB nested_expr RPB LCB statements RCB ELSE if_stmt
    | IF LPB nested_expr RPB single_stmt ELSE if_stmt
    | IF LPB nested_expr RPB LCB statements RCB ELSE LCB statements RCB
    | IF LPB nested_expr RPB single_stmt ELSE LCB statements RCB
    | IF LPB nested_expr RPB LCB statements RCB ELSE single_stmt
    | IF LPB nested_expr RPB single_stmt ELSE single_stmt
    ;

// nested_expr is bool
for_stmt: FOR LPB decl_stmt  nested_expr SEMICOLON expr_stmt_without_semicolon RPB LCB statements RCB
    | FOR LPB decl_stmt nested_expr SEMICOLON expr_stmt_without_semicolon RPB single_stmt
    | FOR LPB expr_stmt nested_expr SEMICOLON expr_stmt_without_semicolon RPB LCB statements RCB
    | FOR LPB expr_stmt nested_expr SEMICOLON expr_stmt_without_semicolon RPB single_stmt
    ;

// nested_expr is bool
while_stmt: WHILE LPB nested_expr RPB LCB statements RCB
    | WHILE LPB nested_expr RPB single_stmt
    ;

// check return type
return_stmt: RETURN SEMICOLON
    | RETURN nested_expr SEMICOLON
    ;

call_stmt: call SEMICOLON
    ;

// check id in function table
call: identifier LPB call_args RPB
    ;

// typelist
call_args: call_args COMMA nested_expr
    | nested_expr
    | call_args COMMA identifier EQUALS nested_expr
    | identifier EQUALS nested_expr
    |
    ;

// type
nested_expr: LPB nested_expr RPB
    | LPB nested_expr RPB conj nested_expr
    | LPB nested_expr RPB REL_OP nested_expr
    | LPB nested_expr RPB arith_op nested_expr
    | LPB nested_expr RPB set_op nested_expr
    | expr
    ;

// type
expr: expr_terminal conj nested_expr
    | expr_terminal REL_OP nested_expr
    | expr_terminal arith_op nested_expr
    | expr_terminal set_op nested_expr
    | expr_terminal
    ;

// type
// check id in symbol table
expr_terminal: unary_stmt
    | NUMBER
    | STRING_LITERAL
    | BOOL_LITERAL
    | call
    | NOT LPB nested_expr RPB
    | NOT identifier
    | list_literal
    ;

// op
conj: AND
    | OR
    ;

set_op: INTERSECTION_OP
    | UNION_OP
    ;

// op
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
    
    //check for input file aurgument
    
    if(argc < 2){
        printf("Missing Argument:./lex_source_program < \"test case path\"");
        return -1;
    }
    else{
        // InFile and Outfile path and Name Handling
        yyin = fopen(argv[1],"r");
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
        char *suffix = (char *)malloc(100*sizeof(char));
        i = filestart;
        while(argv[1][i] != '.'){
            suffix[i-filestart] = argv[1][i];
            i++;
        }

        // append suffix to outfile and C_outfile name
        char *C_outfile = (char *)malloc(100*sizeof(char));
        sprintf(C_outfile,"../output/%s.cpp",suffix);
        char *token_file = (char *)malloc(100*sizeof(char));
        sprintf(token_file,"../output/%s_tokens.txt",suffix);
        // open the respective files
        yyout = fopen(C_outfile, "w+");
        tf = fopen(token_file,"w+");

    }
    fprintf(yyout,"#include <iostream>\n");
    fprintf(yyout,"#include <string>\n");
    fprintf(yyout,"#include <vector>\n");
    fprintf(yyout,"#include \"teamScribe.h\"\n");
    yyparse();
    return 0;
}