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
    extern int list_flag;
    extern char* init;
    FILE *tf;
    int for_loop = 0;       
    int nested_call = 0;    
    int return_flag = 0;
    extern FILE *tf;

    struct symtab *global_table;
    struct functab *function_table;
    struct symtab *local_table;
    struct classtab *class_table;
    struct symtab *members;
    struct functab *methods;
    struct symtab *params;

    int scope;
    bool rflag;
    int return_type;
    int lflag;

%}

%union{
    struct id{
        char* name;
        int type;
        char *class_name;
    } id;
    struct slist *namelist;
    int type;
    int op_type;
    struct list{
        char* class_name;
        int type;
        int dim;
    } list;
    int assignop;
    struct functions{
        int type;
        int dim;
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
        int dim;
        struct slist *namelist;
    } class_id;
    struct idrec *param;
    struct exprs{
        int type;
        int dim;
    } exprs;
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
%token IDENTIFIER SELF PUBLIC
%token LSB RSB LCB RCB LPB RPB SEMICOLON COMMA DOT COLON ARROW
%token INCLUDE TYPEDEF


%type <type> data_type_new data_type_pr unary_stmt 
%type <namelist> id_list 
%type <id> IDENTIFIER class_dec
%type <list> list dim list_literal list_terminal empty_dim 
%type <assignop> ASSIGN_OP REL_OP
%type <functions> function_params function_dec function class_function_dec class_function call_args
%type <stmt> statements decl_stmt class_decl_stmt 
%type <class_id> identifier class_identifier
%type <param> function_param
%type <op_type> arith_op 
%type <exprs> nested_expr expr expr_terminal call

%% 

// 1. Start code and include statements
start:{
        global_table = init_symtab();
        function_table = init_functab();
        init_functab_entries(function_table);
        class_table = init_classtab();
        init_member_class(class_table);
        params = NULL;
        local_table = global_table;
        members = NULL;
        methods = NULL;
        scope = 0;
    } 
    include_stmts code {
        printf("Global Table : \n");
        display_symtab(global_table);
        printf("\n\nFunction Table : \n");
        display_functab(function_table);
        printf("\n\nClass Table : \n");
        display_classtab(class_table);
        free_symtab(global_table);
        free_functab(function_table);
        free_classtab(class_table);
    }
    | {
        global_table = init_symtab();
        function_table = init_functab();
        init_functab_entries(function_table);
        class_table = init_classtab();
        init_member_class(class_table);
        params = NULL;
        local_table = global_table;
        members = NULL;
        methods = NULL;
        scope = 0;
    } code {
        printf("Global Table : \n");
        display_symtab(global_table);
        printf("\n\nFunction Table : \n");
        display_functab(function_table);
        printf("\n\nClass Table : \n");
        display_classtab(class_table);
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
            if($1.type == 4)
                rflag = true;
            else
                rflag = false;
            return_type = $1.type;
        } LCB {scope++;} statements RCB {
        struct funcrec *entry = (struct funcrec*) malloc(sizeof(struct funcrec));
        entry -> name = $1.name;
        entry -> type = $1.type;
        entry -> dim = $1.dim;
        entry -> params = $1.params;
        entry -> num_params = $1.num_params;
        entry -> next = NULL;
        entry -> local_table = $1.local_table;
        if(!rflag)
        {
            printf("Error: Function %s doesn't return a value on all control paths\n",entry -> name);
            YYABORT;
        }
        insert_functab(function_table, entry);
        local_table = global_table;
        params = NULL;
        scope--;
    }
    ;


function_dec: data_type_new IDENTIFIER LPB function_params RPB {
        struct funcrec *entry = (struct funcrec*) malloc(sizeof(struct funcrec));
        entry -> name = $2.name;
        entry -> type = $1;
        entry -> dim = 0;
        entry -> params = $4.params;
        entry -> num_params = $4.num_params;
        if(search_functab(function_table, entry,0) != NULL)
        {
            printf("Error: Function %s already declared\n", entry -> name);
            YYABORT;
        }
        $$.type = $1;
        $$.dim = 0;
        $$.name = $2.name;
        $$.params = $4.params;
        $$.num_params = $4.num_params;
        $$.local_table = init_symtab();
    }
    | data_type_pr IDENTIFIER LPB function_params RPB {
        struct funcrec *entry = (struct funcrec *)malloc(sizeof(struct funcrec));
        entry -> name = $2.name;
        entry -> type = $1;
        entry -> params = $4.params;
        entry -> dim = 0;
        entry -> num_params = $4.num_params;
        if(search_functab(function_table, entry, 0) != NULL)
        {
            printf("Error: Function %s already declared\n", entry -> name);
            YYABORT;
        }
        $$.type = $1;
        $$.dim = 0;
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
        entry -> name = $2.name;
        entry -> type = 14;
        entry -> dim = 0;
        entry -> params = $4.params;
        entry -> num_params = $4.num_params;
        if(search_functab(function_table, entry, 0) != NULL)
        {
            printf("Error: Function %s already declared\n", entry -> name);
            YYABORT;
        }
        $$.type = 14;
        $$.dim = 0;
        $$.name = $2.name;
        $$.params = $4.params;
        $$.num_params = $4.num_params;
        $$.local_table = init_symtab();
    }
    | VOID IDENTIFIER LPB function_params RPB {
        struct funcrec *entry = (struct funcrec *)malloc(sizeof(struct funcrec));
        entry -> name = $2.name;
        entry -> type = 4;
        entry -> dim = 0;
        entry -> params = $4.params;
        entry -> num_params = $4.num_params;
        if(search_functab(function_table, entry, 0) != NULL)
        {
            printf("Error: Function %s already declared\n", entry -> name);
            YYABORT;
        }
        $$.type = 4;
        $$.dim = 0;
        $$.name = $2.name;
        $$.params = $4.params;
        $$.num_params = $4.num_params;
        $$.local_table = init_symtab();
    }
    // code
    | list IDENTIFIER LPB function_params RPB {
        struct funcrec *entry = (struct funcrec *)malloc(sizeof(struct funcrec));
        entry -> name = $2.name;
        entry -> type = $1.type;
        entry -> dim = $1.dim;
        entry -> params = $4.params;
        entry -> num_params = $4.num_params;
        entry -> next = NULL;
        entry -> local_table = init_symtab();
        if(search_functab(function_table, entry, 0) != NULL)
        {
            printf("Error: Function %s already declared\n", entry -> name);
            YYABORT;
        }
        $$.type = $1.type;
        $$.dim = $1.dim;
        $$.name = $2.name;
        $$.params = $4.params;
        $$.num_params = $4.num_params;
        $$.local_table = init_symtab();
    }
    ;


function_params: function_params COMMA function_param {
        if(lookup($$.params, $$.params, $3->name) != NULL)
        {
            printf("Error: Parameter %s already used\n", $3->name);
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
        entry -> name = $2.name;
        entry -> type = $1;
        entry -> arr = false;
        entry -> dim = 0;
        entry -> scope = 1;
        entry -> next = NULL;
        entry -> class_name = map_type[$1];       
        $$ = entry;
    }
    | data_type_pr IDENTIFIER {
        struct idrec *entry = (struct idrec*) malloc(sizeof(struct idrec));
        entry -> name = $2.name;
        entry -> type = $1;
        entry -> arr = false;
        entry -> dim = 0;
        entry -> scope = 1;
        entry -> next = NULL;
        entry -> class_name = NULL;       
        $$ = entry;
    }
    | IDENTIFIER IDENTIFIER {
        if(search_classtab(class_table, $1.name) == NULL)
        {
            printf("Error: Class %s not declared\n", $1.name);
            YYABORT;
        }
        struct idrec *entry = (struct idrec *)malloc(sizeof(struct idrec));
        entry -> name = $2.name;
        entry -> type = 14;
        entry -> arr = false;
        entry -> scope = 1;
        entry -> next = NULL;
        entry -> class_name = $1.name;
        entry -> dim = 0;
        $$ = entry;
    } 
    // code
    | list IDENTIFIER {
        struct idrec *entry = (struct idrec *)malloc(sizeof(struct idrec));
        entry -> name = $2.name;
        entry -> type = $1.type;
        entry -> arr = true;
        entry -> scope = 1;
        entry -> next = NULL;
        entry -> class_name = NULL;
        entry -> dim = $1.dim;
        $$ = entry;
    }
    ;


// 3. Class 
class: class_dec LCB class_stmt RCB SEMICOLON {
        struct classrec *entry = (struct classrec *)malloc(sizeof(struct classrec));
        entry -> name = $1.name;
        entry -> members = members;
        entry -> methods = methods;
        entry -> next = NULL;
        if(search_classtab(class_table, entry -> name) != NULL)
        {
            printf("Error: Class %s already declared\n", entry -> name);
            YYABORT;
        }
        insert_classtab(class_table, entry);
        members = NULL;
        methods = NULL;
        local_table = global_table;
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
    | PUBLIC COLON class_stmt
    |
    ;

class_function: class_function_dec {
            local_table = $1.local_table;
            params = $1.params;
            if($1.type == 4)
                rflag = true;
            else
                rflag = false;
            return_type = $1.type;
        } LCB {scope++;} statements RCB {
        if(!rflag)
        {
            printf("Error: Method doesn't return a value on all control paths\n");
            YYABORT;
        }
        struct funcrec *entry = (struct funcrec*) malloc(sizeof(struct funcrec));
        entry -> name = $1.name;
        entry -> type = $1.type;
        entry -> dim = $1.dim;
        entry -> params = $1.params;
        entry -> num_params = $1.num_params;
        entry -> next = NULL;
        entry -> local_table = $1.local_table;
        insert_functab(methods, entry);
        local_table = NULL;
        params = NULL;
        scope--;
    }
    ;


class_function_dec: data_type_new IDENTIFIER LPB function_params RPB {
        struct funcrec *entry = (struct funcrec*) malloc(sizeof(struct funcrec));
        entry -> name = $2.name;
        entry -> type = $1;
        entry -> dim = 0;
        entry -> params = $4.params;
        entry -> num_params = $4.num_params;
        entry -> next = NULL;
        entry -> local_table = init_symtab();
        if(search_functab(methods, entry, 0) != NULL)
        {
            printf("Error: Method %s already declared\n", entry -> name);
            YYABORT;
        }
        $$.type = $1;
        $$.dim = 0;
        $$.name = $2.name;
        $$.params = $4.params;
        $$.num_params = $4.num_params;
        $$.local_table = init_symtab();
    }
    | data_type_pr IDENTIFIER LPB function_params RPB {
        struct funcrec *entry = (struct funcrec *)malloc(sizeof(struct funcrec));
        entry -> name = $2.name;
        entry -> type = $1;
        entry -> dim = 0;
        entry -> params = $4.params;
        entry -> num_params = $4.num_params;
        entry -> next = NULL;
        entry -> local_table = init_symtab();
        if(search_functab(methods, entry, 0) != NULL)
        {
            printf("Error: Method %s already declared\n", entry -> name);
            YYABORT;
        }
        $$.type = $1;
        $$.dim = 0;
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
        entry -> name = $2.name;
        entry -> type = 14;
        entry -> dim = 0;
        entry -> params = $4.params;
        entry -> num_params = $4.num_params;
        entry -> next = NULL;
        entry -> local_table = init_symtab();
        if(search_functab(methods, entry, 0) != NULL)
        {
            printf("Error: Method %s already declared\n", entry -> name);
            YYABORT;
        }
        $$.type = 14;
        $$.dim = 0;
        $$.name = $2.name;
        $$.params = $4.params;
        $$.num_params = $4.num_params;
        $$.local_table = init_symtab();
    }
    | VOID IDENTIFIER LPB function_params RPB {
        struct funcrec *entry = (struct funcrec *)malloc(sizeof(struct funcrec));
        entry -> name = $2.name;
        entry -> type = 4;
        entry -> dim = 0;
        entry -> params = $4.params;
        entry -> num_params = $4.num_params;
        entry -> next = NULL;
        entry -> local_table = init_symtab();
        if(search_functab(methods, entry, 0) != NULL)
        {
            printf("Error: Method %s already declared\n", entry -> name);
            YYABORT;
        }
        $$.type = 4;
        $$.dim = 0;
        $$.name = $2.name;
        $$.params = $4.params;
        $$.num_params = $4.num_params;
        $$.local_table = init_symtab();
    }
    | list IDENTIFIER LPB function_params RPB {
        struct funcrec *entry = (struct funcrec *)malloc(sizeof(struct funcrec));
        entry -> name = $2.name;
        entry -> type = $1.type;
        entry -> dim = $1.dim;
        entry -> params = $4.params;
        entry -> num_params = $4.num_params;
        entry -> next = NULL;
        entry -> local_table = init_symtab();
        if(search_functab(methods, entry, 0) != NULL)
        {
            printf("Error: Method %s already declared\n", entry -> name);
            YYABORT;
        }
        $$.type = $1.type;
        $$.dim = $1.dim;
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
            entry -> type = $1;
            entry -> arr = false;
            entry -> scope = 1; 
            entry -> name = temp->val;
            entry -> class_name = map_type[$1];
            entry -> dim = 0;
            if(lookup(members, members, entry -> name) == NULL){
                insert_symtab(members, entry);
            }
            else{
                printf("Error: Member %s already declared\n", entry -> name);
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
            entry -> dim = 0;
            if(lookup(members, members ,entry -> name) == NULL){
                insert_symtab(members, entry);
            }
            else{
                printf("Error: Member %s already declared\n", entry -> name);
                YYABORT;
            }
            temp = temp->next;
        } 
    }
    | IDENTIFIER id_list SEMICOLON{
        if(search_classtab(class_table, $1.name) == NULL)
        {
            printf("Error: Class %s not declared\n", $1.name);
            YYABORT;
        }
        struct snode* temp = $2->head;
        while(temp != NULL){
            struct idrec *entry = (struct idrec *)malloc(sizeof(struct idrec));
            entry -> type = 14;
            entry -> arr = false;
            entry -> scope = 1; 
            entry -> name = temp->val;
            entry -> next = NULL;
            entry -> class_name = $1.name;
            entry -> dim = 0;
            if(lookup(members, members ,entry -> name) == NULL){
                insert_symtab(members, entry);
            }
            else{
                printf("Error: Member %s already declared\n", entry -> name);
                YYABORT;
            }
            temp = temp->next;
        }
    }
    | list id_list SEMICOLON {
        struct snode* temp = $2->head;
        while(temp != NULL){
            struct idrec *entry = (struct idrec *)malloc(sizeof(struct idrec));
            entry -> type = $1.type;
            entry -> arr = true;
            entry -> scope = 1; 
            entry -> name = temp->val;
            entry->class_name = $1.class_name;
            entry -> next = NULL;
            entry -> dim = $1.dim;
            if(lookup(members, members ,entry -> name) == NULL){
                insert_symtab(members, entry);
            }
            else{
                printf("Error: Member %s already declared\n", entry -> name);
                YYABORT;
            }
            temp = temp->next;
        }
        init = "";
        lflag = 1;
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
        if($1.type != 0 && $1.type != 1){
            printf("Error: Unary operator not defined for type %s\n", map_type[$1.type]); 
            YYABORT;
        }
        $$ = $1.type;
    }
    | class_identifier UNARY_OP {
        int *a = (int*) malloc(sizeof(int)), *b = (int*) malloc(sizeof(int));
        check_namelist($1.namelist, global_table, local_table, class_table, NULL, -1, a, b);
        if($1.type != 0 && $1.type != 1){
            printf("Error: Unary operator not defined for type %s\n", map_type[$1.type]); 
            YYABORT;
        }
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
            entry -> class_name = map_type[$1];
            entry -> dim = 0;
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
                insert_symtab(local_table, entry);
            temp = temp -> next;
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
            entry -> dim = 0;
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
                insert_symtab(local_table, entry);
            temp = temp -> next;
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
            entry -> dim = 0;
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
                insert_symtab(local_table, entry);
            temp = temp -> next;
        }
    }
    | list id_list SEMICOLON {
        struct snode* temp = $2->head;
        while(temp != NULL){
            struct idrec *entry = (struct idrec*) malloc(sizeof(struct idrec));
            entry -> type = $1.type;
            entry -> arr = true;
            entry -> scope = scope; 
            entry -> name = temp->val;
            entry -> class_name = $1.class_name;
            entry -> next = NULL;
            entry -> dim = $1.dim;
            if(lookup(global_table, local_table, entry->name) != NULL){
                printf("Error: Variable %s already declared\n", temp -> val);
                YYABORT;
            }
            else if(lookup(params, params, temp -> val) != NULL){
                printf("Error: Variable %s already declared\n", temp -> val);
                YYABORT;
            }
            else
                insert_symtab(local_table, entry);
            temp = temp -> next;
        }
        init = "";
        lflag = 1;
    }
    ;


id_list: id_list COMMA IDENTIFIER{
        insert_slist($1, $3.name);
        $$ = $1;
        if(lflag)
            fprintf(yyout, "%s", init);
    }
    | IDENTIFIER EQUALS nested_expr{
        $$ = init_slist();
        insert_slist($$, $1.name);
    }
    | id_list COMMA IDENTIFIER EQUALS nested_expr{
        insert_slist($1, $3.name);
        $$ = $1;
    }
    | IDENTIFIER{
        $$ = init_slist();
        insert_slist($$, $1.name);
        if(lflag)
            fprintf(yyout, "%s", init);
    }
    ;


// 7. Expression statements
expr_stmt: expr_stmt_without_semicolon SEMICOLON 
    ;


expr_stmt_without_semicolon: identifier ASSIGN_OP nested_expr {
        if(!check_assign_op($1.type, $3.type, $2)){
            YYABORT;
        }
    }
    | class_identifier ASSIGN_OP nested_expr {
        int *a = (int*) malloc(sizeof(int)), *b = (int*) malloc(sizeof(int));
        check_namelist($1.namelist, global_table, local_table, class_table, NULL, -1, a, b);
        if(!check_assign_op($1.type, $3.type, $2)){
            YYABORT;
        }
    }
    | SELF DOT IDENTIFIER ASSIGN_OP nested_expr {
        struct idrec *entry = lookup(members, members, $3.name);
        if(entry == NULL)
        {
            printf("Error: Class has no member %s declared\n", $3.name);
            YYABORT;
        }
        if(!check_assign_op(entry -> type, $5.type, $4)){
            YYABORT;
        }
        if(members == NULL)
        {
            printf("Error: self must be used inside a class\n");
            YYABORT;
        }
    }
    | identifier EQUALS nested_expr {
        if($1.dim != 0 && $3.dim != 0){
            if($1.dim != $3.dim){
                printf("Error: Dimension mismatch in assignment\n");
                printf("LHS is of dimension %i and RHS is of dimension %i\n", $1.dim, $3.dim);
                YYABORT;
            }
        }
        else if(!check_assign_op($1.type, $3.type, 7)){
            YYABORT;
        }
    }
    | class_identifier EQUALS nested_expr {
        int *a = (int*) malloc(sizeof(int)), *b = (int*) malloc(sizeof(int));
        check_namelist($1.namelist, global_table, local_table, class_table, NULL, -1, a, b);
        if($1.dim != 0 && $3.dim != 0){
            if($1.dim != $3.dim){
                printf("Error: Dimension mismatch in assignment\n");
                printf("LHS is of dimension %i and RHS is of dimension %i\n", $1.dim, $3.dim);
                YYABORT;
            }
        }
        else if(!check_assign_op($1.type, $3.type, 7)){
            YYABORT;
        }
    }
    | SELF DOT IDENTIFIER EQUALS nested_expr {
        if(members == NULL)
        {
            printf("Error: self must be used inside a class\n");
            YYABORT;
        }
        struct idrec *entry = lookup(members, members, $3.name);
        if(entry == NULL)
        {
            printf("Error: Class has no member %s declared\n", $3.name);
            YYABORT;
        }
        if(entry -> dim != 0 && $5.dim != 0){
            if(entry -> dim != $5.dim){
                printf("Error: Dimension mismatch in assignment\n");
                printf("LHS is of dimension %i and RHS is of dimension %i\n", entry -> dim, $5.dim);
                YYABORT;
            }
        }
        else if(!check_assign_op(entry -> type, $5.type, 7)){
            YYABORT;
        }
    }
    | unary_stmt
    ;


nested_expr: LPB nested_expr RPB {
        $$.type = $2.type;
        $$.dim = $2.dim;
    }
    | LPB nested_expr RPB conj nested_expr {
        if($5.type != 3 || $2.type != 3){
            printf("Error: Type mismatch\n");
            YYABORT;
        }
        $$.type = $2.type;
        $$.dim = 0;
    }
    | LPB nested_expr RPB REL_OP nested_expr {
        if(!check_rel_op($2.type, $5.type, $4)){
            YYABORT;
        }
        $$.type = 3;
        $$.dim = 0;
    }
    | LPB nested_expr RPB arith_op nested_expr {
        $$.type = check_arith_op($2.type, $5.type, $4);
        if($$.type == -1)
        {
            YYABORT;
        }
        $$.dim = 0;
    }
    | LPB nested_expr RPB set_op nested_expr {
        if($2.type != 7 || $5.type != 7){
            printf("Error: Invalid operands for \n");
            YYABORT;
        }
        $$.type = $2.type; 
        $$.dim = 0;
    }
    | expr {
        $$.type = $1.type;
        $$.dim = $1.dim; 
    }
    ;


expr: expr_terminal conj nested_expr {
        if($1.type != 3 || $3.type != 3 ){
            printf("Error: Type mismatch\n");
            YYABORT;
        }
        $$.type = 3;
        $$.dim = 0;
    }
    | expr_terminal REL_OP nested_expr {
        if(!check_rel_op($1.type, $3.type, $2)){
            YYABORT;
        }
        $$.type = 3;
        $$.dim = 0;
    }
    | expr_terminal arith_op nested_expr {
        $$.type = check_arith_op($1.type, $3.type, $2);
        if($$.type == -1)
        {
            YYABORT;
        }
        $$.dim = 0;
    }
    | expr_terminal set_op nested_expr {
        if($1.type != 7 || $3.type != 7){
            printf("Error: Invalid operands for \n");
            YYABORT;
        }
        $$.type = $1.type;
        $$.dim = 0;    
    }
    | expr_terminal {
        $$.type = $1.type;
        $$.dim = $1.dim;
    }
    ;


expr_terminal: unary_stmt {
        $$.type = $1;
        $$.dim = 0;
    }
    | NUMBER{
        $$.type = 0;
        $$.dim = 0;
    }
    | DECIMAL{ 
        $$.type = 1;
        $$.dim = 0;
    }
    | STRING_LITERAL{
        $$.type = 2;   
        $$.dim = 0; 
    }
    | BOOL_LITERAL{
        $$.type = 3;
        $$.dim = 0;
    }
    | call {
        $$.type = $1.type;
        $$.dim = $1.dim;
    }
    | NOT LPB nested_expr RPB {
        if($3.type != 3){
            printf("Error: Not operator not defined for type %s\n", map_type[$3.type]); 
            YYABORT;
        }
        $$.type = 3;
        $$.dim = 0;
    }
    | NOT identifier {
        if($2.type != 3){
            printf("Error: Not operator not defined for type %s\n", map_type[$2.type]); 
            YYABORT;
        }
        $$.type = 3;
        $$.dim = 0;
    }
    | NOT class_identifier {
        int *a = (int*) malloc(sizeof(int)), *b = (int*) malloc(sizeof(int));
        if(check_namelist($2.namelist, global_table, local_table, class_table, NULL, -1, a, b) == false)
        {
            YYABORT;
        }
        if($2.type != 3){
            printf("Error: Not operator not defined for type %s\n", map_type[$2.type]); 
            YYABORT;
        }
        $$.type = 3;
        $$.dim = 0;
    }
    | identifier {
        $$.type = $1.type;
        $$.dim = $1.dim;
    }
    | class_identifier{
        int *a = (int*) malloc(sizeof(int)), *b = (int*) malloc(sizeof(int));
        if(check_namelist($1.namelist, global_table, local_table, class_table, NULL, -1, a, b) == false)
        {
            YYABORT;
        }
        $$.type = 3;
        $$.dim = 0;
    }
    | list_literal {
        $$.type = $1.type;
        $$.dim = $1.dim;
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
        $$.dim = entry->dim;
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
        $$.dim = entry->dim - $4.dim;
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
        if($3.type != 3 && $3.type != 0){
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
        if($4.type != 3 && $4.type != 0){
            printf("Error: For condition must be bool\n");
            YYABORT;
        }
    }
    | FOR LPB expr_stmt nested_expr SEMICOLON {
        if($4.type != 3 && $4.type != 0){
            printf("Error: For condition must be bool\n");
            YYABORT;
        }
    }
    ;


while_stmt: while_exp LCB {scope++;} statements RCB {scope--;rflag = false;}
    | while_exp single_stmt {rflag = false;}
    ;


while_exp: WHILE LPB nested_expr RPB {
        if($3.type != 3 && $3.type != 0){
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
        $$.type = func -> type;
        $$.dim = func -> dim;
    }
    | class_identifier LPB call_args RPB {
        int *a = (int*) malloc(sizeof(int)), *b = (int*) malloc(sizeof(int));
        struct idrec *entry = lookup(global_table, local_table, $1.namelist -> head -> val);
        if(entry == NULL)
        {
            entry = lookup(params, members, $1.namelist -> head -> val);
            if(entry == NULL)
            {
                printf("Error: Variable %s not declared\n", $1.namelist -> head -> val);
                YYABORT;
            }
        }
        if(entry -> type != 14)
        {
            printf("Error: Variable %s is not a class\n", $1.namelist -> head -> val);
            YYABORT;
        }
        struct classrec *class = search_classtab(class_table, entry -> class_name);
        if(check_member_method($1.namelist -> head -> next -> val, $1.namelist -> head -> next -> next, class_table, class, $3.params, $3.num_params, a, b) == false)
        {
            YYABORT;
        }
        // if(check_namelist($1.namelist, global_table, local_table, class_table, $3.params, $3.num_params, a, b) == false)
        // {
        //     YYABORT;
        // }
        $$.type = *a;
        $$.dim = *b;
    }
    ;


call_args: call_args COMMA nested_expr {
        $$.params = $1.params;
        struct idrec *entry = (struct idrec*) malloc(sizeof(struct idrec));
        entry -> type = $3.type;
        entry -> dim = $3.dim;
        insert_symtab($$.params, entry);
        $$.num_params = $1.num_params + 1;
    }
    | nested_expr {
        $$.params = init_symtab();
        struct idrec *entry = (struct idrec*) malloc(sizeof(struct idrec));
        entry -> type = $1.type;
        entry -> dim = $1.dim;
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
        if(return_type != $2.type)
        {
            printf("Error: Mismatch in return type\n");
            printf("Returned %s while function returns %s\n", map_type[$2.type], map_type[return_type]);
            YYABORT;
        }
        rflag = true;
        printf("WTF\n");
    }
    ;


// 11. Identifiers and Lists
list: LIST dim COLON data_type_pr {
        $$.type = $4;
        $$.dim = $2.dim;
        $$.class_name = NULL;
    }
    | LIST dim COLON {lflag = 0;} data_type_new {
        $$.type = $5;
        $$.dim = $2.dim;
        $$.class_name = map_type[$5];
    }
    | LIST dim COLON {lflag = 0;} IDENTIFIER {
        if(search_classtab(class_table, $5.name) == NULL)
        {
            printf("Error: Class %s not declared\n", $5.name);
            YYABORT;
        }
        $$.type = 14;
        $$.class_name = $5.name;
        $$.dim = $2.dim;
    }
    ;


list_literal:  LCB list_terminal RCB {
        $$.type = $2.type;
        $$.dim = $2.dim+1;
    }
    ;


list_terminal: nested_expr {
        $$.type = $1.type;
        if($1.type == 5){
            $$.dim = $1.dim;
        }
        else{
            $$.dim = 0;
        }
    }
    | list_terminal COMMA nested_expr {
        if($1.type != $3.type){
            printf("Error: Type mismatch in list terminal\n");
            YYABORT;
        }
        $$.type = $1.type;
        $$.dim = $1.dim;
    }
    ;


dim: LSB nested_expr RSB dim {
        if($2.type != 0){
            printf("Error: Array size must be an integer\n");
            YYABORT;
        }
        $$.dim = $4.dim + 1;
    }
    | LSB nested_expr RSB {
        if($2.type != 0){
            printf("Error: Array size must be an integer\n");
            YYABORT;
        }
        $$.dim = 1;
    }
    | empty_dim {
        $$.dim = $1.dim;
    }
    ;

empty_dim: empty_dim LSB RSB {
        $$.dim = $1.dim + 1;
    }
    | LSB RSB {
        $$.dim = 1;
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
        $$.dim = entry -> dim;
    }
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
        $$.dim = entry->dim - $2.dim;
    }
    ;


class_identifier: IDENTIFIER DOT IDENTIFIER  {
        $$.namelist = init_slist();
        insert_slist($$.namelist, $1.name);
        insert_slist($$.namelist, $3.name);   
    }
    | IDENTIFIER DOT class_identifier {
        struct snode* temp = (struct snode*) malloc(sizeof(struct snode));
        temp -> val = $1.name;
        temp -> next = $3.namelist -> head;
        $3.namelist -> head = temp;
        $$.namelist = $3.namelist;        
    }
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
    ;


// 12. Encodings
conj: AND
    | OR
    ;


set_op: INTERSECTION_OP
    | UNION_OP
    ;


arith_op: ADD {$$ = 0;}
    | SUB {$$ = 1;}
    | MUL {$$ = 2;}
    | DIV {$$ = 3;}
    | MOD {$$ = 4;}
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

    fprintf(yyout, "#include \"../Phase3/teamScribe.h\"\n");
    yyparse();
    return 0;
}
