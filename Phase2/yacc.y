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


%token DIGITS STRING_LITERAL CHAR_LITERAL BOOL_LITERAL
%token FUNCTION CLASS RETURN DECLARE EXPR CALL THIS
%token INT CHAR STRING VOID BOOL
%token ADD SUB MUL DIV INCR DECR ASSIGN ARROW NEG
%token FOR WHILE DO IF ELSE LOOP
%token CONDITIONAL CONJ
%token IDENTIFIER CLASS_IDENTIFIER
%token LSB RSB LCB RCB LPB RPB SEMICOLON COMMA COLON

%%
// start symbol
code: 
     function code
    | class code
    |
    ;

// [No. of arguments or methods]
indexing:
    LSB DIGITS RSB
    |
    ;

// declaration time - arguments
dec_arguments:
    type IDENTIFIER COMMA dec_arguments
    |type IDENTIFIER
    |
    ;


// datatypes
type:
    INT
    | CHAR
    | STRING
    | VOID
    | BOOL
    | CLASS_IDENTIFIER
    ;



function_declaration:
    FUNCTION type IDENTIFIER indexing LPB dec_arguments RPB {
        // check for return stmt
        return_flag = 1;
        fprintf(yyout," : function definition");}
    ;


function:
    function_declaration LCB stmts RCB {
        if(return_flag){
            char *err = (char*)malloc(100*sizeof(char));
            sprintf(err,"Error: missing return statement");
            yyerror(err);
            exit(0);
        }
    }
    ;


class_declaration:
    CLASS CLASS_IDENTIFIER indexing {fprintf(yyout," : class definition");}
    ;


class:
    class_declaration LCB in_class_code RCB
    ;

in_class_code:
    function in_class_code
    | class_stmt in_class_code
    |
    ;

// In class statements
class_stmt:
    declare_stmt
    | expr_stmt
    ;


stmts:
    stmt stmts
    | LCB stmts RCB stmts
    |
    ;


// various statements 
stmt:
     declare_stmt 
    | expr_stmt  
    | if_stmt
    | while_stmt
    | for_stmt
    | call_stmt
    | return_stmt
    | unary_stmt SEMICOLON
    ;

// declaration statement
declare_stmt:
    DECLARE type mul_id SEMICOLON {fprintf(yyout," : declaration statement");}
    ;

// multiple declaration
mul_id:
    IDENTIFIER COMMA mul_id
    | IDENTIFIER
    ;


// expression statement
expr_stmt:
    EXPR id ASSIGN nested_expr SEMICOLON {
                                    if(!for_loop)fprintf(yyout," : expression statement");
                                    nested_call = 0;
                                    }
    ;


nested_expr:
    LPB nested_expr RPB
    | LPB nested_expr RPB CONJ nested_expr
    | LPB nested_expr RPB CONDITIONAL nested_expr
    | expr
    ;

expr:
    terminal CONJ nested_expr
    | terminal CONDITIONAL nested_expr
    | terminal
    ;

// all kind of terminal expressions
terminal:
    ADD LPB nested_expr COMMA nested_expr RPB
    | SUB LPB nested_expr COMMA nested_expr RPB 
    | MUL LPB nested_expr COMMA nested_expr RPB
    | DIV LPB nested_expr COMMA nested_expr RPB
    | id
    | DIGITS
    | BOOL_LITERAL
    | STRING_LITERAL
    | CHAR_LITERAL
    | NEG LPB nested_expr RPB
    | NEG id
    | call_expr
    | call_expr_with_object
    ;


// identifier
id:
    IDENTIFIER
    | IDENTIFIER ARROW id


// unary statement
unary_stmt:
    INCR LPB id RPB {if(!for_loop)fprintf(yyout," : call statement");}
    | DECR LPB id RPB {if(!for_loop)fprintf(yyout," : call statement");}
    ;



// conditional statements
if_dec:
    IF LPB nested_expr RPB {nested_call = 0;fprintf(yyout," : conditional statement");}

if_stmt:
    if_dec DO LCB stmts RCB 
    | if_dec DO LCB stmts RCB otherwise LCB stmts RCB 
    ;

otherwise:
    ELSE {fprintf(yyout," : conditional statement");}
    ;



// loop statements

// while loop
while_dec:
    LOOP WHILE LPB nested_expr RPB { fprintf(yyout," : loop");}
    ;
while_stmt:
    while_dec DO LCB stmts RCB 
    ;


// for loop
for_dec:
    FOR LPB expr_stmt nested_expr SEMICOLON unary_stmt RPB {
        fprintf(yyout," : loop");
        for_loop = 0;
        }
    | FOR LPB expr_stmt nested_expr SEMICOLON RPB {
        fprintf(yyout," : loop");
        for_loop = 0;
        }
    ;
for_stmt:
    for_dec LCB stmts RCB 
    ;



// call statements
call_arguments:
    nested_expr COMMA call_arguments
    | nested_expr
    |
    ;

call_expr: 
    CALL IDENTIFIER indexing LPB call_arguments RPB
    ;
call_expr_with_object:
    CALL IDENTIFIER ARROW id indexing LPB call_arguments RPB 
    | CALL THIS ARROW id indexing LPB call_arguments RPB
    ;

call_stmt:
    call_expr SEMICOLON {if(!nested_call)fprintf(yyout," : call statement");}
    | call_expr_with_object SEMICOLON {if(!nested_call)fprintf(yyout," : call statement with object");}
    ;




// return statement
return_stmt:
    RETURN nested_expr SEMICOLON {
        return_flag = 0;
        nested_call = 0;    
        fprintf(yyout," : return statement");
    }
    | RETURN VOID SEMICOLON {
        return_flag = 0;
        nested_call = 0;    
        fprintf(yyout," : return statement");
    }
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
