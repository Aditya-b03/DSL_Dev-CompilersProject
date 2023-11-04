#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

/*
Type Encodings:
    0: int
    1: float
    2: string
    3: bool
    4: void
    5: list
    6: function
    7: struct
    8: team
    9: member
    10: task
    11: event
    12: meeting
    13: document
    14: calendar
    15: class
*/

struct node
{
    int val;
    struct node *next;
};

typedef struct node node;

struct ilist
{
    node *head;
    node *tail;
};

typedef struct ilist ilist;

ilist* init_ilist();
void insert_ilist(ilist *l, int val);
void display_ilist(ilist *l);

struct idrec
{
    char* name;
    bool arr;
    int type;
    ilist arr_dims;
    int scope;
    struct idrec *next;
};

typedef struct idrec idrec;

struct symtab
{
    idrec* head;
    idrec* tail;
};

typedef struct symtab symtab;

symtab* init_symtab();
void insert_symtab(symtab *l, idrec *entry);
void display_symtab(symtab *l);
void clear_scope_symtab(symtab *l, int scope);
idrec* search_symtab(symtab *l, char* name);

struct funcrec
{
    char* name;
    int type;
    symtab params;
    symtab local_table;
    int num_params;
    struct funcrec *next;
};

typedef struct funcrec funcrec;

struct functab{
    funcrec* head;
    funcrec* tail;
};

typedef struct functab functab;

functab* init_functab();
void insert_functab(functab *ft, funcrec *entry);
void display_functab(functab *ft);
funcrec* search_functab(functab *ft, char* name);

idrec* lookup(symtab *global_table, symtab *local_table, char* name)
{
    idrec *temp = search_symtab(local_table, name);
    if (temp != NULL)
        return temp;
    temp = search_symtab(global_table, name);
    return temp;
}

bool insert(symtab *global_table, symtab *local_table, idrec entry)
{
    idrec *temp = lookup(global_table, local_table, entry.name);
    if (temp != NULL)
        return false;
    insert_symtab(local_table, &entry);
    return true;
}

// // struct for dimlist of identifiers
// struct dimlist
// {
//     vector<int> dims;
// };

// // struct with dimlist and type
// struct dimlist_type
// {
//     vector<int> dims;
//     int type;
// };

// // struct for type
// struct type
// {
//     int type;
// };

ilist* init_ilist()
{
    ilist *l = (ilist*) malloc(sizeof(ilist));
    l->head = NULL;
    l->tail = NULL;
    return l;
}

void insert_ilist(ilist *l, int val)
{
    node *temp = (node *)malloc(sizeof(node));
    temp -> val = val;
    temp -> next = NULL;
    if (l -> head == NULL)
    {
        l -> head = temp;
        l -> tail = temp;
    }
    else
    {
        l -> tail -> next = temp;
        l -> tail = temp;
    }
}

void display_ilist(ilist *l)
{
    node *temp = l -> head;
    while (temp != NULL)
    {
        printf("%d ", temp->val);
        temp = temp->next;
    }
    printf("\n");
}

symtab* init_symtab()
{
    symtab *st = (symtab*) malloc(sizeof(symtab));
    st -> head = NULL;
    st -> tail = NULL;
    return st;
}

void insert_symtab(symtab *st, idrec *entry)
{
    if (st -> head == NULL)
    {
        st -> head = entry;
        st -> tail = entry;
    }
    else
    {
        st -> tail -> next = entry;
        st -> tail = entry;
    }
    return;
}

void display_symtab(symtab *st)
{
    idrec *temp = st -> head;
    while (temp != NULL)
    {
        printf("%s %d\n", temp -> name, temp -> type);
        temp = temp -> next;
    }
}

void clear_scope_symtab(symtab *st, int scope)
{
    idrec *temp = st -> head;
    while (temp != NULL)
    {
        if (temp -> scope < scope)
            break;
        temp = temp -> next;
    }
    if (temp == NULL)
        return;
    st -> tail = temp;
    temp = temp -> next;
    while (temp != NULL)
    {
        idrec *temp2 = temp;
        temp = temp -> next;
        free(temp2);
    }
    return;
}

idrec* search_symtab(symtab *st, char* name)
{
    idrec *temp = st -> head;
    while (temp != NULL)
    {
        if (strcmp(temp -> name, name) == 0)
            return temp;
        temp = temp -> next;
    }
    return NULL;
}

functab* init_functab()
{
    functab *ft = (functab*) malloc(sizeof(functab));
    ft -> head = NULL;
    ft -> tail = NULL;
    return ft;
}

void insert_functab(functab *ft, funcrec *entry)
{
    if (ft -> head == NULL)
    {
        ft -> head = entry;
        ft -> tail = entry;
    }
    else
    {
        ft -> tail -> next = entry;
        ft -> tail = entry;
    }
    return;
}

void display_functab(functab *ft)
{
    funcrec *temp = ft -> head;
    while (temp != NULL)
    {
        printf("%s %d\n", temp -> name, temp -> type);
        temp = temp -> next;
    }
}

// support for function overloading
funcrec* search_functab(functab *ft, char* name)
{
    funcrec *temp = ft -> head;
    while (temp != NULL)
    {
        if (strcmp(temp -> name, name) == 0)
            return temp;
        temp = temp -> next;
    }
    return NULL;
}