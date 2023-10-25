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


%token NUMBER STRING_LITERAL CHAR_LITERAL BOOL_LITERAL
%token FUNCTION RETURN
%token CLASS THIS
%token DATA_TYPE_PR DATA_TYPE_NEW
%token TEAM MEMBER TASK EVENT MEETING DOCUMENT
%token ARITH_OP UNARY_OP ASSIGN_OP ARROW NEG
%token FOR WHILE DO IF ELSE
%token REL_OP LOGICAL_OP
%token IDENTIFIER 
%token LSB RSB LCB RCB LPB RPB SEMICOLON COMMA COLON PERIOD
%token STRUCT TYPEDEF
%token INCLUDE

%%
start: include_stmts code
    | code
    ;

include_stmts: include_stmts include_stmt
    | include_stmt
    ;

include_stmt: INCLUDE STRING_LITERAL
    ;

code: statement code
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

function: function_dec LCB function_body RCB
    ;

function_dec: DATA_TYPE_NEW IDENTIFIER LPB function_params RPB
    | DATA_TYPE_PR IDENTIFIER LPB function_params RPB
    ;

function_args: function_params COMMA function_param
    | function_param
    |
    ;

function_param: DATA_TYPE_NEW IDENTIFIER
    | DATA_TYPE_PR IDENTIFIER
    | IDENTIFIER IDENTIFIER
    ;

function_body: function_body statement
    | statement
    |
    ;

class: class_dec LCB class_body RCB
    ;

class_dec: CLASS IDENTIFIER
    ;

class_body: class_body class_stmt
    |
    ;

class_stmt: function class_stmt
    | decl_stmt class_stmt
    | expr_stmt class_stmt
    ;

statement: decl_stmt
    | if_stmt
    | for_stmt
    | while_stmt
    | return_stmt
    | call_stmt
    | expr_stmt
    |
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
        char *suffix = (char*)malloc(100*sizeof(char));
        i = filestart;
        while(argv[1][i] != '.'){
            suffix[i-filestart] = argv[1][i];
            i++;
        }

        // append suffix to outfile and C_outfile name
        char *outfile = (char*)malloc(100*sizeof(char));
        char *C_outfile = (char*)malloc(100*sizeof(char));
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
