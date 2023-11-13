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
    struct symtab *params;

    char* map_type[] = {"int", "float", "string", "bool", "void", "list", "struct", "team", "member", "task", "event", "meeting", "document", "calendar", "class"};

    int scope;
    bool rflag;
    int return_type;

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
    struct idrec *param;
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
%token INCLUDE TYPEDEF


%type <type> data_type_new data_type_pr unary_stmt nested_expr expr expr_terminal call
%type <namelist> id_list 
%type <id> IDENTIFIER class_dec
%type <list> list dim list_literal list_terminal
%type <assignop> ASSIGN_OP
%type <functions> function_params function_dec function class_function_dec class_function call_args
%type <stmt> statements decl_stmt class_decl_stmt 
%type <class_id> identifier class_identifier
%type <param> function_param

%% 

// 1. Start code and include statements
start:{
        global_table = init_symtab();
        function_table = init_functab();
        class_table = init_classtab();
        params = NULL;
        local_table = NULL;
        members = NULL;
        methods = NULL;
        scope = 0;
    } 
    include_stmts code {
        free_symtab(global_table);
        free_functab(function_table);
        free_classtab(class_table);
    }
    | {
        global_table = init_symtab();
        function_table = init_functab();
        class_table = init_classtab();
        params = NULL;
        local_table = NULL;
        members = NULL;
        methods = NULL;
        scope = 0;
    } code {
        free_symtab(global_table);
        free_functab(function_table);
        free_classtab(class_table);
    }
    ;


include_stmts: include_stmts include_stmt 
    | include_stmt
    ;


include_stmt: INCLUDE STRING_LITERAL 
    ;


code: decl_stmt code 
    | function code
    | class code
    | 
    ;


// 2. Functions
function: function_dec {
            local_table = $1.local_table;
            params = $1.params;
            rflag = false;
            return_type = $1.type;
        } LCB {scope++;} statements RCB {
        if(!rflag)
        {
            printf("Error: Function doesn't return a value on all control paths\n");
            YYABORT;
        }
        struct funcrec *entry = (struct funcrec*) malloc(sizeof(struct funcrec));
        entry->name = $1.name;
        entry->type = $1.type;
        entry->params = $1.params;
        entry->num_params = $1.num_params;
        entry->next = NULL;
        entry->local_table = $1.local_table;
        insert_functab(function_table, entry);
        local_table = NULL;
        params = NULL;
        scope--;
    }
    ;


function_dec: data_type_new IDENTIFIER LPB function_params RPB {
        struct funcrec *entry = (struct funcrec*) malloc(sizeof(struct funcrec));
        entry->name = $2.name;
        entry->type = $1;
        entry->params = $4.params;
        entry->num_params = $4.num_params;
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
    | data_type_pr IDENTIFIER LPB function_params RPB {
        
        struct funcrec *entry = (struct funcrec *)malloc(sizeof(struct funcrec));
        entry->name = $2.name;
        entry->type = $1;
        entry->params = $4.params;
        entry->num_params = $4.num_params;
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
    // code
    | list IDENTIFIER LPB function_params RPB {
        struct funcrec *entry = (struct funcrec *)malloc(sizeof(struct funcrec));
        entry->name = $2.name;
        entry->type = 5;
        entry->params = $4.params;
        entry->num_params = $4.num_params;
        entry->next = NULL;
        entry->local_table = init_symtab();
        if(lookup_functab(function_table, entry) != NULL)
        {
            printf("Error: Function %s already declared\n", entry->name);
            YYABORT;
        }
        $$.type = $1.type;
        $$.name = $2.name;
        $$.params = $4.params;
        $$.num_params = $4.num_params;
        $$.local_table = init_symtab();
    }
    ;


function_params: function_params COMMA function_param {
        if(lookup($$.params, $$.params, $3->name) != NULL)
        {
            printf("Error: Argument %s already used\n", $3->name);
            YYABORT;
        }
        $$.params = $1.params;
        insert_symtab($$.params, $3);
        $$.num_params = $1.num_params + 1;
    }
    | function_param {
        $$.params = init_symtab();
        insert_symtab($$.params, $1);
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
        entry->arr_dims = init_ilist();
        entry->scope = 1;
        entry->next = NULL;
        entry->class_name = NULL;       
        $$ = entry;
    }
    | data_type_pr IDENTIFIER {
        struct idrec *entry = (struct idrec*) malloc(sizeof(struct idrec));
        entry->name = $2.name;
        entry->type = $1;
        entry->arr = false;
        entry->arr_dims = init_ilist();
        entry->scope = 1;
        entry->next = NULL;
        entry->class_name = NULL;       
        $$ = entry;
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
        entry->arr_dims = init_ilist();
        $$ = entry;
    } 
    // code
    | list IDENTIFIER {
        struct idrec *entry = (struct idrec *)malloc(sizeof(struct idrec));
        entry->name = $2.name;
        entry->type = $1.type;
        entry->arr = true;
        entry->scope = 1;
        entry->next = NULL;
        entry->class_name = NULL;
        entry->arr_dims = init_ilist();
        //arr_dimlist
        $$ = entry;
    }
    ;


// 3. Class 
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

class_function: class_function_dec {
            local_table = $1.local_table;
            params = $1.params;
            rflag = true;
            return_type = $1.type;
        } LCB {scope++;} statements RCB {
        if(!rflag)
        {
            printf("Error: Function doesn't return a value on all control paths\n");
            YYABORT;
        }
        struct funcrec *entry = (struct funcrec*) malloc(sizeof(struct funcrec));
        entry->name = $1.name;
        entry->type = $1.type;
        entry->params = $1.params;
        entry->num_params = $1.num_params;
        entry->next = NULL;
        entry->local_table = $1.local_table;
        insert_functab(methods, entry);
        local_table = NULL;
        params = NULL;
        scope--;
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
    // code
    | list IDENTIFIER LPB function_params RPB {
        struct funcrec *entry = (struct funcrec *)malloc(sizeof(struct funcrec));
        entry->name = $2.name;
        entry->type = $1.type;
        entry->params = $4.params;
        entry->num_params = $4.num_params;
        entry->next = NULL;
        entry->local_table = init_symtab();
        if(lookup_functab(methods, entry) != NULL)
        {
            printf("Error: Function %s already declared\n", entry->name);
            YYABORT;
        }
        $$.type = $1.type;
        $$.name = $2.name;
        $$.params = $4.params;
        $$.num_params = $4.num_params;
        $$.local_table = init_symtab();
    }
    ;


class_decl_stmt: data_type_new id_list SEMICOLON {
        struct snode* temp = $2->head;
        while(temp != NULL){
            struct idrec *entry = (struct idrec *)malloc(sizeof(struct idrec));
            entry->type = $1;
            entry->arr = false;
            entry->scope = 1; 
            entry->name = temp->val;
            entry -> class_name = NULL;
            entry -> arr_dims = init_ilist();
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
            entry -> type = $1;
            entry -> arr = false;
            entry -> scope = 1; 
            entry -> name = temp->val;
            entry -> next = NULL;
            entry -> class_name = NULL;
            entry -> arr_dims = init_ilist();
            if(lookup(members, members ,entry -> name) == NULL){
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
        // check if class exists
        struct snode* temp = $2->head;
        while(temp != NULL){
            struct idrec *entry = (struct idrec *)malloc(sizeof(struct idrec));
            entry -> type = 14;
            entry -> arr = false;
            entry -> scope = 1; 
            entry -> name = temp->val;
            entry -> next = NULL;
            entry -> class_name = $1.name;
            entry -> arr_dims = init_ilist();
            if(lookup(members, members ,entry -> name) == NULL){
                insert_symtab(members, entry);
            }
            else{
                printf("Error: Variable %s already declared\n", entry -> name);
                YYABORT;
            }
            temp = temp->next;
        }
    }
    // code
    | list id_list SEMICOLON {
        struct snode* temp = $2->head;
        while(temp != NULL){
            struct idrec *entry = (struct idrec *)malloc(sizeof(struct idrec));
            entry -> type = $1.type;
            entry -> arr = true;
            entry -> scope = 1; 
            entry -> name = temp->val;
            entry -> class_name = NULL;
            entry -> next = NULL;
            //arr_dimlist
            if(lookup(members, members ,entry -> name) == NULL){
                insert_symtab(members, entry);
            }
            else{
                printf("Error: Variable %s already declared\n", entry -> name);
                YYABORT;
            }
            temp = temp->next;
        }
    } 
    ;


// 4. Statements
statements : statements LCB {scope++;} statements RCB {scope--;}
    |statements statement 
    | {}
    ;


statement: decl_stmt 
    | if_stmt 
    | for_stmt
    | while_stmt 
    | return_stmt 
    | call_stmt 
    | expr_stmt 
    | SEMICOLON 
    | identifier ARROW identifier SEMICOLON // typechecking for arrow
    | identifier ARROW class_identifier SEMICOLON 
    | class_identifier ARROW identifier SEMICOLON
    | class_identifier ARROW class_identifier SEMICOLON
    | TYPEDEF ids IDENTIFIER SEMICOLON
    ;


ids: ids COMMA IDENTIFIER
    | IDENTIFIER
    ;


// 5. Unary statements
unary_stmt: identifier UNARY_OP {
        // check id in symbol table
        if($1.type != 0 || $1.type != 1){
            printf("Error: Unary operator not defined for this type\n"); 
            YYABORT;
        }
        $$ = $1.type;
    }
    ;


single_stmt: decl_stmt 
    | call_stmt
    | expr_stmt
    | identifier ARROW identifier SEMICOLON
    | identifier ARROW class_identifier SEMICOLON 
    | class_identifier ARROW identifier SEMICOLON
    | class_identifier ARROW class_identifier SEMICOLON 
    ;


// 6. Declaration statements
decl_stmt: data_type_new id_list SEMICOLON {
        struct snode* temp = $2->head;
        while(temp != NULL){
            struct idrec *entry = (struct idrec*) malloc(sizeof(struct idrec));
            entry -> type = $1;
            entry -> arr = false;
            entry -> scope = scope; 
            entry -> name = temp->val;
            entry -> class_name = NULL;
            entry -> arr_dims = init_ilist();
            entry -> next = NULL;
            if(lookup(global_table, local_table, entry->name) != NULL){
                printf("Error: Variable %s already declared\n", temp -> val);
                YYABORT;
            }
            else if(lookup(params, params, temp -> val) != NULL){
                printf("Error: Variable %s already declared\n", temp -> val);
                YYABORT;
            }
            else
                insert_symtab(global_table, entry);
            temp = temp->next;
        }
    }
    | data_type_pr id_list SEMICOLON{
        struct snode* temp = $2->head;
        while(temp != NULL){
            struct idrec *entry = (struct idrec*) malloc(sizeof(struct idrec));
            entry -> type = $1;
            entry -> arr = false;
            entry -> scope = scope; 
            entry -> name = temp->val;
            entry -> class_name = NULL;
            entry -> arr_dims = init_ilist();
            entry -> next = NULL;
            if(lookup(global_table, local_table, entry->name) != NULL){
                printf("Error: Variable %s already declared\n", temp -> val);
                YYABORT;
            }
            else if(lookup(params, params, temp -> val) != NULL){
                printf("Error: Variable %s already declared\n", temp -> val);
                YYABORT;
            }
            else
                insert_symtab(global_table, entry);
            temp = temp->next;
        }
    }
    | IDENTIFIER id_list SEMICOLON {
        struct snode* temp = $2->head;
        if(search_classtab(class_table, $1.name) == NULL)
        {
            printf("Error: Class %s not declared\n", $1.name);
            YYABORT;
        }
        while(temp != NULL){
            struct idrec *entry = (struct idrec*) malloc(sizeof(struct idrec));
            entry -> type = 14;
            entry -> arr = false;
            entry -> scope = scope; 
            entry -> name = temp->val;
            entry -> class_name = $1.name;
            entry -> arr_dims = init_ilist();
            entry -> next = NULL;
            if(lookup(global_table, local_table, entry->name) != NULL){
                printf("Error: Variable %s already declared\n", temp -> val);
                YYABORT;
            }
            else if(lookup(params, params, temp -> val) != NULL){
                printf("Error: Variable %s already declared\n", temp -> val);
                YYABORT;
            }
            else
                insert_symtab(global_table, entry);
            temp = temp->next;
        }
    }
    // code
    | list id_list SEMICOLON {
        struct snode* temp = $2->head;
        while(temp != NULL){
            struct idrec *entry = (struct idrec*) malloc(sizeof(struct idrec));
            entry -> type = 5;
            entry -> arr = true;
            entry -> scope = scope; 
            entry -> name = temp->val;
            entry -> class_name = NULL;
            //arr_dimlist
            entry -> next = NULL;
            if(lookup(global_table, local_table, entry->name) != NULL){
                printf("Error: Variable %s already declared\n", temp -> val);
                YYABORT;
            }
            else if(lookup(params, params, temp -> val) != NULL){
                printf("Error: Variable %s already declared\n", temp -> val);
                YYABORT;
            }
            else
                insert_symtab(global_table, entry);
            temp = temp->next;
        }
    }
    ;


id_list: id_list COMMA IDENTIFIER{
        insert_slist($1, $3.name);
        $$ = $1;
    }
    | IDENTIFIER EQUALS nested_expr{
        // check nested expr type
        $$ = init_slist();
        insert_slist($$, $1.name);
    }
    | id_list COMMA IDENTIFIER EQUALS nested_expr{
        $$ = init_slist();
        insert_slist($$, $3.name);
    }
    | IDENTIFIER{
        $$ = init_slist();
        insert_slist($$, $1.name);   
    }
    ;


// 7. Expression statements
expr_stmt: expr_stmt_without_semicolon SEMICOLON
    ;

// check lhs and rhs, check assignop (seprate assignop)
expr_stmt_without_semicolon: identifier ASSIGN_OP nested_expr 
    | class_identifier ASSIGN_OP nested_expr
    | identifier EQUALS nested_expr {
        if($1.type != $3){
            printf("Error: Type mismatch\n");
            YYABORT;
        }
    }
    | class_identifier EQUALS nested_expr
    | unary_stmt
    ;

// code
nested_expr: LPB nested_expr RPB {$$ = $2;}
    | LPB nested_expr RPB conj nested_expr {
        if($5 != 3 || $2 != 3){
            printf("Error: Type mismatch\n");
            YYABORT;
        }
        $$ = $2;
    }
    | LPB nested_expr RPB REL_OP nested_expr {
        $$ = 3;
    }
    | LPB nested_expr RPB arith_op nested_expr {
        $$ = $2;
    }
    | LPB nested_expr RPB set_op nested_expr {
        $$ = $2;
    }
    | expr {
        $$ = $1;
    }
    ;


expr: expr_terminal conj nested_expr {
        if($1 != $3){
            printf("Error: Type mismatch\n");
            YYABORT;
        }
        $$ = 3;
    }
    | expr_terminal REL_OP nested_expr {
        if($1 != $3){
            printf("Error: Type mismatch\n");
            YYABORT;
        }
        $$ = 3;
    }
    | expr_terminal arith_op nested_expr {
        if($1 != $3){
            printf("Error: Type mismatch\n");
            YYABORT;
        }
        $$ = $1;
    }
    | expr_terminal set_op nested_expr {
        if($1 != $3){
            printf("Error: Type mismatch\n");
            YYABORT;
        }
        $$ = $1;
    }
    | expr_terminal {
        $$ = $1;
    }
    ;


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
    | call {
        $$ = $1;
    }
// code
    | NOT LPB nested_expr RPB {
        if($3 != 3){
            printf("Error: Not operator not defined for this type\n"); 
            YYABORT;
        }
        $$ = 3;
    }
    | NOT identifier {
        if($2.type != 3){
            printf("Error: Not operator not defined for this type\n"); 
            YYABORT;
        }
        $$ = 3;
    }
    | NOT class_identifier {
        if(check_namelist($2.namelist, global_table, local_table, class_table, NULL, -1) == false)
        {
            YYABORT;
        }
        $$ = 3;
    }
    | identifier {
        $$ = $1.type;
    }
    | class_identifier{
        if(check_namelist($1.namelist, global_table, local_table, class_table, NULL, -1) == false)
        {
            YYABORT;
        }
        $$ = 3;
    }
    // code
    | list_literal {
        $$ = 5;
    }
    ;


// 8. Conditional statements
if_stmt: if_expr LCB statements RCB {rflag = false;}
    | if_expr single_stmt {rflag = false;}
    | if_expr LCB statements RCB ELSE if_stmt {rflag = false;}
    | if_expr single_stmt ELSE if_stmt {rflag = false;}
    | if_expr LCB statements RCB ELSE LCB statements RCB {rflag = false;}
    | if_expr single_stmt ELSE LCB statements RCB {rflag = false;}
    | if_expr LCB statements RCB ELSE single_stmt {rflag = false;}
    | if_expr single_stmt ELSE single_stmt {rflag = false;}
    ;


if_expr: IF LPB nested_expr RPB {
        if($3 != 3){
            printf("Error: If condition must be bool\n");
            YYABORT;
        }
        rflag = false;
    }
    ;


// 9. Loops
for_stmt: for_exp expr_stmt_without_semicolon RPB LCB {scope++;} statements RCB {scope--;rflag = false;}
    | for_exp expr_stmt_without_semicolon RPB single_stmt {rflag = false;}
    ;


for_exp: FOR LPB decl_stmt nested_expr SEMICOLON {
        if($4 != 3){
            printf("Error: For condition must be bool\n");
            YYABORT;
        }
    }
    | FOR LPB expr_stmt nested_expr SEMICOLON {
        if($4 != 3){
            printf("Error: For condition must be bool\n");
            YYABORT;
        }
    }
    ;


while_stmt: while_exp LCB {scope++;} statements RCB {scope--;rflag = false;}
    | while_exp single_stmt {rflag = false;}
    ;


while_exp: WHILE LPB nested_expr RPB {
        if($3 != 3){
            printf("Error: While condition must be bool\n");
            YYABORT;
        }
    }
    ;

// 10. Call
call_stmt: call SEMICOLON
    ;


call: IDENTIFIER LPB call_args RPB {
        struct funcrec *entry = (struct funcrec *)malloc(sizeof(struct funcrec));
        entry -> name = $1.name;
        entry -> params = $3.params;
        entry -> num_params = $3.num_params;
        struct funcrec *func = search_functab(function_table, entry, 1);
        if(func == NULL)
        {
            YYABORT;
        }
        $$ = func -> type;
    }
    | class_identifier LPB call_args RPB {
        if(check_namelist($1.namelist, global_table, local_table, class_table, $3.params, $3.num_params) == false)
        {
            YYABORT;
        }
        struct funcrec *entry = (struct funcrec *)malloc(sizeof(struct funcrec));
        entry -> name = $1.namelist->tail->val;
        entry -> params = $3.params;
        entry -> num_params = $3.num_params;
        struct funcrec *func = search_functab(methods, entry,1);
        if(func == NULL)
        {
            printf("Error: Method %s not declared\n", entry->name);
            YYABORT;
        }
        $$ = func -> type;
    }
    ;


// typelist
call_args: call_args COMMA nested_expr {
        $$.params = $1.params;
        struct idrec *entry = (struct idrec*) malloc(sizeof(struct idrec));
        entry -> type = $3;
        insert_symtab($$.params, entry);
        $$.num_params = $1.num_params + 1;
    }
    | nested_expr {
        $$.params = init_symtab();
        struct idrec *entry = (struct idrec*) malloc(sizeof(struct idrec));
        entry -> type = $1;
        insert_symtab($$.params, entry);
        $$.num_params = 1;
    }
    | {
        $$.params = init_symtab();
        $$.num_params = 0;
    }
    ;

return_stmt: RETURN SEMICOLON {
        if(return_type != 4)
        {
            printf("Error: Mismatch in return type\n");
            printf("Returned void while function returns %s\n", map_type[return_type]);
            YYABORT;
        }
        rflag = true;
    }
    | RETURN nested_expr SEMICOLON {
        if(return_type != $2)
        {
            printf("Error: Mismatch in return type\n");
            printf("Returned %s while function returns %s\n", map_type[$2], map_type[return_type]);
            YYABORT;
        }
        rflag = true;
    }
    ;


// 11. Identifiers and Lists
list: LIST dim COLON data_type_pr {
        $$.type = $4;
        $$.dimlist = $2.dimlist;
    }
    | LIST dim COLON data_type_new {
        $$.type = $4;
        $$.dimlist = $2.dimlist;
    }
    | LIST dim COLON IDENTIFIER {
        if(search_classtab(class_table, $4.name) == NULL)
        {
            printf("Error: Class %s not declared\n", $4.name);
            YYABORT;
        }
        $$.type = 14;
        $$.dimlist = $2.dimlist;
    }
    ;

//code
list_literal:  LCB list_terminal RCB {
        $$.type = $2.type;
    }
    ;

//code 
list_terminal: nested_expr {
        $$.type = $1;
    }
    | list_terminal COMMA nested_expr {
        $$.type = 5;
    }
    ;


// code
dim: dim  LSB nested_expr RSB {
        if($3 != 0){
            printf("Error: Array size must be int\n");
            YYABORT;
        }
        insert_ilist($1.dimlist, $3);
        $$.dimlist = $1.dimlist;
    }
    | LSB nested_expr RSB {
        if($2 != 0){
            printf("Error: Array size must be int\n");
            YYABORT;
        }
        $$.dimlist = init_ilist();
        insert_ilist($$.dimlist, $2);
    }
    | dim LSB RSB {
        $$.dimlist = $1.dimlist;
    }
    | LSB RSB {
        $$.dimlist = init_ilist();
    }
    ;


identifier: IDENTIFIER {
        struct idrec *entry = lookup(global_table, local_table, $1.name);
        if(entry == NULL){
            entry = lookup(params, params, $1.name);
            if(entry == NULL){
                printf("Error: Variable %s not declared\n", $1.name);
                YYABORT;
            }
        }
        $$.type = entry -> type;
    }
    // code
    | IDENTIFIER dim {
        struct idrec *entry = lookup(global_table, local_table, $1.name);
        if(entry == NULL){
            entry = lookup(params, params, $1.name);
            if(entry == NULL){
                printf("Error: Variable %s not declared\n", $1.name);
                YYABORT;
            }
            printf("Error: Variable %s not declared\n", $1.name);
            YYABORT;
        }
        $$.type = entry->type;
    }
    ;

class_identifier: IDENTIFIER DOT IDENTIFIER  {
        $$.namelist = init_slist();
        insert_slist($$.namelist, $1.name);
        insert_slist($$.namelist, $3.name);   
    }
    | IDENTIFIER DOT class_identifier {
        struct snode* temp = (struct snode*)malloc(sizeof(struct snode));
        temp -> val = $1.name;
        temp -> next = $3.namelist -> head;
        $3.namelist -> head = temp;
        $$.namelist = $3.namelist;               
    }
    //code
    | IDENTIFIER DOT IDENTIFIER dim {
        $$.namelist = init_slist();
        insert_slist($$.namelist, $1.name);
        insert_slist($$.namelist, $3.name);   
    }
    | IDENTIFIER dim DOT IDENTIFIER {
        $$.namelist = init_slist();
        insert_slist($$.namelist, $1.name);
        insert_slist($$.namelist, $4.name);   
    }
    | IDENTIFIER dim DOT IDENTIFIER dim {
        $$.namelist = init_slist();
        insert_slist($$.namelist, $1.name);
        insert_slist($$.namelist, $4.name);   
    }
    | SELF DOT IDENTIFIER {
        if(members == NULL)
        {
            printf("Error: self must be used inside a class\n");
            YYABORT;
        }
        struct idrec *entry = lookup(members, members, $3.name);
        if(entry == NULL)
        {
            printf("Error: Variable %s not declared\n", $3.name);
            YYABORT;
        }
        $$.type = entry->type;
    }
    | SELF DOT IDENTIFIER dim {
        if(members == NULL)
        {
            printf("Error: self must be used inside a class\n");
            YYABORT;
        }
        struct idrec *entry = lookup(members, members, $3.name);
        if(entry == NULL)
        {
            printf("Error: Variable %s not declared\n", $3.name);
            YYABORT;
        }
        $$.type = entry->type;
    }
    ;


// 12. Encodings
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
