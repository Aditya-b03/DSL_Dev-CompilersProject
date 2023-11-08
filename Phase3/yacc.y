%{ 
    #include <stdio.h>
    #include <stdlib.h>
    #include <stdbool.h>
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

    struct symtab *global_table;
    struct functab *function_table;
    struct symtab *local_table;
    struct classtab *class_table;
    struct symtab *members;
    struct functab *methods;

%}

%union{
    struct id{
        char* name;
        int type;
        char *class_name;
    } id;
    struct slist *namelist;
    int type;
    struct list{
        int type;
        struct ilist *dimlist;
    } list;
    int assignop;
    struct functions{
        int type;
        char* name;
        struct symtab *params;
        struct symtab *local_table;
        int num_params;
    } functions;
    struct stmt{
        int type;
        int scope;
    } stmt;
    struct class_id{
        int type;
        struct slist *namelist;
    } class_id;
}


%start start


%token NUMBER STRING_LITERAL BOOL_LITERAL DECIMAL
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


%type <type> data_type_new data_type_pr unary_stmt expr_terminal
%type <namelist> id_list identifier
%type <id> IDENTIFIER class_dec
/* %type <list> list */
%type <assignop> ASSIGN_OP
%type <functions> function_params function_param function_dec function class_function_dec class_function
%type <stmt> statements statement decl_stmt class_decl_stmt 
/* %type <class_id> identifier */

%% 

// 1. Start code and include statements
start:{
        global_table = init_symtab();
        function_table = init_functab();
        class_table = init_classtab();
        local_table = NULL;
        members = NULL;
        methods = NULL;
    } 
    include_stmts code {
        display_symtab(global_table);
        display_functab(function_table);
        display_classtab(class_table);
    }
    | {
        global_table = init_symtab();
        function_table = init_functab();
        class_table = init_classtab();
        local_table = NULL;
        members = NULL;
        methods = NULL;

    } code {
        display_symtab(global_table);
        display_functab(function_table);
        display_classtab(class_table);
    }
    ;


include_stmts: include_stmts include_stmt {

    }
    | include_stmt
    ;


include_stmt: INCLUDE STRING_LITERAL 
    ;


code: decl_stmt code {
        $1.scope = 0;
    }
    | function code
    | struct_code code
    | class code
    | {}
    ;


// 2. Structures
struct_code: struct_def 
    ;


struct_def: STRUCT IDENTIFIER LCB struct_body RCB SEMICOLON
    ;


struct_body: struct_body decl_stmt
    |
    ;


// 3. Functions
function: function_dec {
            local_table = $1.local_table;
        } LCB statements RCB {
        struct funcrec *entry = (struct funcrec*) malloc(sizeof(struct funcrec));
        entry->name = $1.name;
        entry->type = $1.type;
        entry->params = $1.params;
        entry->num_params = $1.num_params;
        entry->next = NULL;
        entry->local_table = $1.local_table;
        insert_functab(function_table, entry);
        local_table = NULL;
    }
    ;


function_dec: data_type_new IDENTIFIER LPB function_params RPB {
        struct funcrec *entry = (struct funcrec*) malloc(sizeof(struct funcrec));
        entry->name = $2.name;
        entry->type = $1;
        entry->params = $4.params;
        entry->num_params = $4.num_params;
        entry->next = NULL;
        entry->local_table = init_symtab();
        if(lookup_functab(function_table, entry) != NULL)
        {
            // terminate the program
            printf("Error: Function %s already declared\n", entry->name);
            YYABORT;
        }
        $$.type = $1;
        $$.name = $2.name;
        $$.params = $4.params;
        $$.num_params = $4.num_params;
        $$.local_table = init_symtab();
    }
    | data_type_pr IDENTIFIER LPB function_params RPB {
        struct funcrec *entry = (struct funcrec *)malloc(sizeof(struct funcrec));
        entry->name = $2.name;
        entry->type = $1;
        entry->params = $4.params;
        entry->num_params = $4.num_params;
        entry->next = NULL;
        entry->local_table = init_symtab();
        if(lookup_functab(function_table, entry) != NULL)
        {
            printf("Error: Function %s already declared\n", entry->name);
            YYABORT;
        }
        $$.type = $1;
        $$.name = $2.name;
        $$.params = $4.params;
        $$.num_params = $4.num_params;
        $$.local_table = init_symtab();
    }
    | IDENTIFIER IDENTIFIER LPB function_params RPB {
        if(search_classtab(class_table, $1.name) == NULL)
        {
            printf("Error: Class %s not declared\n", $1.name);
            YYABORT;
        }
        struct funcrec *entry = (struct funcrec *)malloc(sizeof(struct funcrec));
        entry->name = $2.name;
        entry->type = 14;
        entry->params = $4.params;
        entry->num_params = $4.num_params;
        entry->next = NULL;
        entry->local_table = init_symtab();
        if(lookup_functab(function_table, entry) != NULL)
        {
            printf("Error: Function %s already declared\n", entry->name);
            YYABORT;
        }
        $$.type = 14;
        $$.name = $2.name;
        $$.params = $4.params;
        $$.num_params = $4.num_params;
        $$.local_table = init_symtab();
    }
    | VOID IDENTIFIER LPB function_params RPB {
        struct funcrec *entry = (struct funcrec *)malloc(sizeof(struct funcrec));
        entry->name = $2.name;
        entry->type = 4;
        entry->params = $4.params;
        entry->num_params = $4.num_params;
        entry->next = NULL;
        entry->local_table = init_symtab();
        if(lookup_functab(function_table, entry) != NULL)
        {
            printf("Error: Function %s already declared\n", entry->name);
            YYABORT;
        }
        $$.type = 4;
        $$.name = $2.name;
        $$.params = $4.params;
        $$.num_params = $4.num_params;
        $$.local_table = init_symtab();
    }
    | list IDENTIFIER LPB function_params RPB // list implementation
    ;


function_params: function_params COMMA function_param {
        $$.params = $1.params;
        $$.num_params = $1.num_params + 1;
    }
    | function_param {
        $$.params = init_symtab();
        $$.num_params = 1;
    }
    | {
        $$.params = init_symtab();
        $$.num_params = 0;
    }
    ;


function_param: data_type_new IDENTIFIER {
        struct idrec *entry = (struct idrec *)malloc(sizeof(struct idrec));
        entry->name = $2.name;
        entry->type = $1;
        entry->arr = false;
        entry->scope = 1;
        entry->next = NULL;
        entry->class_name = NULL;
        insert_symtab($$.params, entry);
    }
    | data_type_pr IDENTIFIER {
        struct idrec *entry = (struct idrec *)malloc(sizeof(struct idrec));
        entry->name = $2.name;
        entry->type = $1;
        entry->arr = false;
        entry->scope = 1;
        entry->next = NULL;
        entry->class_name = NULL;
        insert_symtab($$.params, entry);
    }
    | IDENTIFIER IDENTIFIER {
        if(search_classtab(class_table, $1.name) == NULL)
        {
            printf("Error: Class %s not declared\n", $1.name);
            YYABORT;
        }
        struct idrec *entry = (struct idrec *)malloc(sizeof(struct idrec));
        entry->name = $2.name;
        entry->type = 14;
        entry->arr = false;
        entry->scope = 1;
        entry->next = NULL;
        entry->class_name = $1.name;
        insert_symtab($$.params, entry);
    } 
    | list IDENTIFIER {} // list implementation
    ;


// 4. Class 
class: class_dec LCB class_stmt RCB{
        struct classrec *entry = (struct classrec *)malloc(sizeof(struct classrec));
        entry->name = $1.name;
        entry->members = members;
        entry->methods = methods;
        entry->next = NULL;
        if(search_classtab(class_table, entry->name) != NULL)
        {
            printf("Error: Class %s already declared\n", entry->name);
            YYABORT;
        }
        insert_classtab(class_table, entry);
        members = NULL;
        methods = NULL;
    }
    ;


class_dec: CLASS IDENTIFIER {
        $$.name = $2.name;
        $2.type = 14;
        members = init_symtab();
        methods = init_functab();
    }
    ;


class_stmt: class_function class_stmt 
    | class_decl_stmt class_stmt
    |
    ;

class_function:class_function_dec {
            local_table = $1.local_table;
        } LCB statements RCB {
        struct funcrec *entry = (struct funcrec*) malloc(sizeof(struct funcrec));
        entry->name = $1.name;
        entry->type = $1.type;
        entry->params = $1.params;
        entry->num_params = $1.num_params;
        entry->next = NULL;
        entry->local_table = $1.local_table;
        insert_functab(methods, entry);
        local_table = NULL;
    }
    ;


class_function_dec: data_type_new IDENTIFIER LPB function_params RPB {
        struct funcrec *entry = (struct funcrec*) malloc(sizeof(struct funcrec));
        entry->name = $2.name;
        entry->type = $1;
        entry->params = $4.params;
        entry->num_params = $4.num_params;
        entry->next = NULL;
        entry->local_table = init_symtab();
        if(lookup_functab(methods, entry) != NULL)
        {
            // terminate the program
            printf("Error: Function %s already declared\n", entry->name);
            YYABORT;
        }
        $$.type = $1;
        $$.name = $2.name;
        $$.params = $4.params;
        $$.num_params = $4.num_params;
        $$.local_table = init_symtab();
    }
    | data_type_pr IDENTIFIER LPB function_params RPB {
        struct funcrec *entry = (struct funcrec *)malloc(sizeof(struct funcrec));
        entry->name = $2.name;
        entry->type = $1;
        entry->params = $4.params;
        entry->num_params = $4.num_params;
        entry->next = NULL;
        entry->local_table = init_symtab();
        if(lookup_functab(methods, entry) != NULL)
        {
            printf("Error: Function %s already declared\n", entry->name);
            YYABORT;
        }
        $$.type = $1;
        $$.name = $2.name;
        $$.params = $4.params;
        $$.num_params = $4.num_params;
        $$.local_table = init_symtab();
    }
    | IDENTIFIER IDENTIFIER LPB function_params RPB {
        if(search_classtab(class_table, $1.name) == NULL)
        {
            printf("Error: Class %s not declared\n", $1.name);
            YYABORT;
        }
        struct funcrec *entry = (struct funcrec *)malloc(sizeof(struct funcrec));
        entry->name = $2.name;
        entry->type = 14;
        entry->params = $4.params;
        entry->num_params = $4.num_params;
        entry->next = NULL;
        entry->local_table = init_symtab();
        if(lookup_functab(methods, entry) != NULL)
        {
            printf("Error: Function %s already declared\n", entry->name);
            YYABORT;
        }
        $$.type = 14;
        $$.name = $2.name;
        $$.params = $4.params;
        $$.num_params = $4.num_params;
        $$.local_table = init_symtab();
    }
    | VOID IDENTIFIER LPB function_params RPB {
        struct funcrec *entry = (struct funcrec *)malloc(sizeof(struct funcrec));
        entry->name = $2.name;
        entry->type = 4;
        entry->params = $4.params;
        entry->num_params = $4.num_params;
        entry->next = NULL;
        entry->local_table = init_symtab();
        if(lookup_functab(methods, entry) != NULL)
        {
            printf("Error: Function %s already declared\n", entry->name);
            YYABORT;
        }
        $$.type = 4;
        $$.name = $2.name;
        $$.params = $4.params;
        $$.num_params = $4.num_params;
        $$.local_table = init_symtab();
    }
    | list IDENTIFIER LPB function_params RPB // list implementation
    ;


class_decl_stmt: data_type_new id_list SEMICOLON {
        struct snode* temp = $2->head;
        while(temp != NULL){
            struct idrec *entry = (struct idrec *)malloc(sizeof(struct idrec));
            entry->type = $1;
            entry->arr = false;
            entry->scope = 1; // we have to change scope according to nested loops
            entry->name = temp->val;
            if(lookup(members, members, entry->name) == NULL){
                insert_symtab(members, entry);
            }
            else{
                printf("Error: Variable %s already declared\n", entry->name);
                YYABORT;
            }
            temp = temp->next;
        }
    }
    | data_type_pr id_list SEMICOLON{
        
        struct snode* temp = $2->head;
        while(temp != NULL){
            struct idrec *entry = (struct idrec *)malloc(sizeof(struct idrec));
            entry->type = $1;
            entry->arr = false;
            entry->scope = 1; // we have to change scope according to nested loops
            entry->name = temp->val;
            if(lookup(members, members ,entry->name) == NULL){
                insert_symtab(members, entry);
            }
            else{
                printf("Error: Variable %s already declared\n", entry->name);
                YYABORT;
            }
            temp = temp->next;
        } 
    }
    | IDENTIFIER id_list SEMICOLON{
        struct snode* temp = $2->head;
        while(temp != NULL){
            struct idrec *entry = (struct idrec *)malloc(sizeof(struct idrec));
            entry->type = 14;
            entry->arr = false;
            entry->scope = 1; // we have to change scope according to nested loops
            entry->name = temp->val;
            if(lookup(members, members ,entry->name) == NULL){
                insert_symtab(members, entry);
            }
            else{
                printf("Error: Variable %s already declared\n", entry->name);
                YYABORT;
            }
            temp = temp->next;
        }
    }
    | list id_list  SEMICOLON
    ;


// 5. Statements
statements : statements LCB statements RCB {
        $1.scope = $$.scope;
        $3.scope = $$.scope + 1;
    }
    |statements statement {
        $1.scope = $$.scope;
        $2.scope = $$.scope;
    }
    |
    ;


statement: decl_stmt {
        $1.scope = $$.scope;
    }
    | if_stmt {

    }
    | for_stmt {

    }
    | while_stmt {

    }
    | return_stmt {

    }
    | call_stmt {

    }
    | expr_stmt {

    }
    | SEMICOLON {

    }
    | identifier ARROW identifier SEMICOLON
    | TYPEDEF ids IDENTIFIER SEMICOLON
    ;


ids: ids COMMA IDENTIFIER
    | IDENTIFIER
    ;


// 6. Unary statements
unary_stmt: identifier UNARY_OP {
        // check id in symbol table
        if($1 != 0 || $1 != 1){
            printf("Error: Unary operator not defined for this type\n"); 
            YYABORT;
        }
        $$ = $1;
    }
    ;


single_stmt: decl_stmt 
    | call_stmt
    | expr_stmt
    | identifier ARROW identifier SEMICOLON
    ;


// 7. Declaration statements
// add id to symbol table, id is class
decl_stmt: data_type_new id_list SEMICOLON {
        struct snode* temp = $2->head;
        while(temp != NULL){
            struct idrec *entry = (struct idrec *)malloc(sizeof(struct idrec));
            entry->type = $1;
            entry->arr = false;
            entry->scope = $$.scope; // we have to change scope according to nested loops
            entry->name = temp->val;
            entry->class_name = NULL;
            entry->next = NULL;
            if(lookup(global_table, local_table, entry->name) == NULL){
                insert_symtab(local_table, entry);
            }
            else{
                printf("Error: Variable %s already declared\n", entry->name);
                YYABORT;
            }
            temp = temp->next;
        }
    }
    | data_type_pr id_list SEMICOLON{
        struct snode* temp = $2->head;
        while(temp != NULL){
            struct idrec *entry = (struct idrec *)malloc(sizeof(struct idrec));
            entry->type = $1;
            entry->arr = false;
            entry->scope = $$.scope; // we have to change scope according to nested loops
            entry->name = temp->val;
            entry->class_name = NULL;
            entry->next = NULL;
            if(lookup(global_table, local_table ,entry->name) == NULL){
                insert_symtab(local_table, entry);
            }
            else{
                printf("Error: Variable %s already declared\n", entry->name);
                YYABORT;
            }
            temp = temp->next;
        } 
    }
    | IDENTIFIER id_list SEMICOLON {
        struct snode* temp = $2->head;
        if($1.type != 14)
        {
            printf("Error: Class %s not declared\n", $1.name);
            YYABORT;
        }
        while(temp != NULL){
            struct idrec *entry = (struct idrec *)malloc(sizeof(struct idrec));
            entry->type = 14;
            entry->arr = false;
            entry->scope = $$.scope; 
            entry->name = temp->val;
            entry->class_name = $1.name;
            entry->next = NULL;
            if(lookup(global_table, local_table ,entry->name) == NULL){
                insert_symtab(local_table, entry);
            }
            else{
                printf("Error: Variable %s already declared\n", entry->name);
                YYABORT;
            }
            temp = temp->next;
        }
    }
    | list id_list  SEMICOLON
    ;

// idlist, type
id_list: id_list COMMA IDENTIFIER{
        insert_slist($1, $3.name);
        $$ = $1;
    }
    | IDENTIFIER EQUALS nested_expr
    | id_list COMMA IDENTIFIER EQUALS nested_expr
    | IDENTIFIER{
        $$ = init_slist();
        insert_slist($$, $1.name);   
    }
    ;


// 8. Expression statements
expr_stmt: expr_stmt_without_semicolon SEMICOLON
    ;

// check lhs and rhs, check assignop (seprate assignop)
expr_stmt_without_semicolon: identifier ASSIGN_OP nested_expr
    | identifier EQUALS nested_expr
    | unary_stmt
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
// we need types for all these.
expr_terminal: unary_stmt {
        $$ = $1;
    }
    | NUMBER{
        $$ = 0;
    }
    | DECIMAL{ 
        $$ = 1;
    }
    | STRING_LITERAL{
        $$ = 2;    
    }
    | BOOL_LITERAL{
        $$ = 3;
    }
    | call 
    | NOT LPB nested_expr RPB 
    | NOT identifier
    | identifier
    | list_literal
    ;


// 9. Conditional statements
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


// 10. Loops
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


// 11. Call
call_stmt: call SEMICOLON
    ;

// check id in function table
call: identifier LPB call_args RPB
    ;


// typelist
call_args: call_args COMMA nested_expr
    | nested_expr
    |
    ;

// check return type
return_stmt: RETURN SEMICOLON
    | RETURN nested_expr SEMICOLON
    ;


// 12. Identifiers and Lists
// dimlist, type
list: LIST dim COLON data_type_pr
    | LIST dim COLON data_type_new
    | LIST dim COLON IDENTIFIER
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
    | dim LSB RSB
    | LSB RSB
    ;

// dimlist
identifier: IDENTIFIER {
        struct idrec *entry = lookup(global_table, global_table, $1.name);
        if(entry == NULL){
            printf("Error: Variable %s not declared\n", $1.name);
            YYABORT;
        }
        $$ = entry->type;
    }
    | IDENTIFIER dim {

    }
    | IDENTIFIER DOT identifier {
        // IDENTIFIER is object ; identifier is member // check it in class implementation
        struct idrec *entry = lookup(global_table, global_table, $1.name);
        if(entry == NULL){
            printf("Error: Variable %s not declared\n", $1.name);
            YYABORT;
        }
        if(entry->type != 14){
            printf("Error: Variable %s is not an object\n", $1.name);
            YYABORT;
        }
        struct classrec *class_entry = search_classtab(class_table, entry->class_name);
        if(class_entry == NULL){
            printf("Error: Class %s not declared\n", entry->name);
            YYABORT;
        }
        // check if identifier is member of class
    }
    | IDENTIFIER dim DOT identifier {

    }
    | SELF DOT identifier {
        
    }
    ;


// 13. Encodings
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


data_type_new: DOCUMENT{ $$ = 12;}
    | TEAM { $$ = 7;}
    | MEMBERS { $$ = 8;}
    | TASK  { $$ = 9;}
    | EVENT { $$ = 10;}
    | MEETING  { $$ = 11;}
    | CALENDAR { $$ = 13;}
    ;


data_type_pr:  INT { $$ = 0;}
    | STRING { $$ = 2;}
    | BOOL  { $$ = 3;}
    | FLOAT { $$ = 1;}
    ;

%%


// error handling
void yyerror(char *s) {
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
