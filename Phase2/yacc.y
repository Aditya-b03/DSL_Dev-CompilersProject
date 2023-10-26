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
%token INT STRING BOOL FLOAT VOID LIST DOCUMENT TEAM MEMBERS TASK EVENT MEETING CALENDAR
%token ADD SUB MUL DIV MOD
%token UNARY_OP
%token ASSIGN_OP REL_OP
%token AND OR NOT INTERSECTION_OP UNION_OP
%token FOR WHILE IF ELSE
%token COMP CONJ
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
    | IDENTIFIER ARROW IDENTIFIER
    | IDENTIFIER DOT IDENTIFIER
    ;

code: decl_stmt code
    | expr_stmt code
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

function_dec: DATA_TYPE_NEW IDENTIFIER LPB function_params RPB
    | DATA_TYPE_PR IDENTIFIER LPB function_params RPB
    | IDENTIFIER IDENTIFIER LPB function_params RPB
    | VOID IDENTIFIER LPB function_params RPB
    ;

function_params: function_params COMMA function_param
    | function_param
    |
    ;

function_param: DATA_TYPE_NEW IDENTIFIER
    | DATA_TYPE_PR IDENTIFIER
    | IDENTIFIER IDENTIFIER
    ;

class: class_dec LCB class_stmt RCB
    ;

class_dec: CLASS IDENTIFIER
    ;

class_stmt: function class_stmt
    | decl_stmt class_stmt
    | expr_stmt class_stmt
    ;

statements : statements statement
    | statement
    |
    ;

statement: decl_stmt
    | if_stmt
    | for_stmt
    | while_stmt
    | return_stmt
    | call_stmt
    | expr_stmt
    | unary_stmt SEMICOLON
    | SEMICOLON
    ;

unary_stmt: identifier UNARY_OP
    ;

single_stmt: decl_stmt
    | call_stmt
    | expr_stmt
    ;

decl_stmt: DATA_TYPE_NEW id_list SEMICOLON
    | DATA_TYPE_PR id_list SEMICOLON
    | IDENTIFIER id_list SEMICOLON
    ;

id_list: id_list COMMA IDENTIFIER
    | IDENTIFIER
    ;

expr_stmt: identifier ASSIGN_OP RHS SEMICOLON
    | identifier UNARY_OP SEMICOLON
    ;

if_stmt: IF LPB predicate RPB LCB statements RCB
    | IF LPB predicate RPB single_stmt 
    | IF LPB predicate RPB LCB statements RCB ELSE if_stmt
    | IF LPB predicate RPB single_stmt ELSE if_stmt
    | IF LPB predicate RPB LCB statements RCB ELSE LCB statements RCB
    | IF LPB predicate RPB single_stmt ELSE LCB statements RCB
    | IF LPB predicate RPB LCB statements RCB ELSE single_stmt
    | IF LPB predicate RPB single_stmt ELSE single_stmt
    ;

for_stmt: FOR LPB decl_stmt SEMICOLON predicate SEMICOLON expr_stmt RPB LCB statements RCB
    | FOR LPB decl_stmt SEMICOLON predicate SEMICOLON expr_stmt RPB single_stmt
    | FOR LPB decl_stmt SEMICOLON predicate SEMICOLON unary_stmt RPB LCB statements RCB
    | FOR LPB decl_stmt SEMICOLON predicate SEMICOLON unary_stmt RPB single_stmt
    ;

while_stmt: WHILE LPB predicate RPB LCB statements RCB
    | WHILE LPB predicate RPB single_stmt
    ;

return_stmt: RETURN SEMICOLON
    | RETURN RHS SEMICOLON
    ;

call_stmt: call SEMICOLON
    ;

call: identifier LPB call_args RPB
    ;

call_args: call_args COMMA RHS
    | RHS
    |
    ;

predicate: predicate CONJ predicate
    | predicate COMP predicate
    | LPB predicate RPB
    | RHS
    ;  

RHS: RHS ARITH_OP RHS
    | RHS COMP RHS
    | RHS CONJ RHS
    | LPB RHS RPB
    | unary_stmt
    | identifier
    | NUMBER
    | STRING_LITERAL
    | BOOL_LITERAL
    | call
    | IDENTIFIER LSB RHS RSB
    ;

%%

// error handling
void yyerror(char *s) {
    fprintf(yyout," : invalid statement");
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
        char suffix = (char)malloc(100*sizeof(char));
        i = filestart;
        while(argv[1][i] != '.'){
            suffix[i-filestart] = argv[1][i];
            i++;
        }

        // append suffix to outfile and C_outfile name
        char outfile = (char)malloc(100*sizeof(char));
        char C_outfile = (char)malloc(100*sizeof(char));
        sprintf(outfile,"TP2/seq_tokens_%s.txt",suffix);
        sprintf(C_outfile,"TP2/parsed_%s.parsed",suffix);
        

        // open the respective files
        yyout = fopen(C_outfile, "w+");
        tf = fopen(outfile , "w+");

        fprintf(tf,"Name : Aditya Bacharwar\n");
        fprintf(tf,"ID : Es21btech11003\n");
        fprintf(tf,"Input File: %s.clike\n\n", suffix);

    }
    yyparse();
    return 0;
}