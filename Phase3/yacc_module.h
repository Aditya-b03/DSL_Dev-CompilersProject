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
   6: struct
   7: team
   8: member
   9: task
   10: event
   11: meeting
   12: document
   13: calendar
   14: class

*/

/*
   Assign op encodings
   0: +=
   1: -=
   2: *=
   3: /=
   4: %=
   5: &=
   6: |=
   7: =
*/

char *map_type[] = {"int", "float", "string", "bool", "void", "list", "struct", "team", "member", "task", "event", "meeting", "document", "calendar", "class"};

struct inode
{
   int val;
   struct inode *next;
};

typedef struct inode inode;

struct ilist
{
   inode *head;
   inode *tail;
};

typedef struct ilist ilist;

ilist *init_ilist();
void insert_ilist(ilist *l, int val);
void display_ilist(ilist *l);

struct snode
{
   char *val;
   struct snode *next;
};

typedef struct snode snode;

struct slist
{
   snode *head;
   snode *tail;
};

typedef struct slist slist;

slist *init_slist();
void insert_slist(slist *l, char *s);
void display_slist(slist *l);

struct idrec
{
   char *name;
   bool arr;
   int type;
   int dim;
   int scope;
   char *class_name;
   struct idrec *next;
};

typedef struct idrec idrec;

struct symtab
{
   idrec *head;
   idrec *tail;
};

typedef struct symtab symtab;

symtab *init_symtab();
void insert_symtab(symtab *l, idrec *entry);
void display_symtab(symtab *l);
void clear_scope_symtab(symtab *l, int scope);
idrec *search_symtab(symtab *l, char *name);

struct funcrec
{
   char *name;
   int type;
   int dim;
   symtab *params;
   symtab *local_table;
   int num_params;
   struct funcrec *next;
};

typedef struct funcrec funcrec;

struct functab
{
   funcrec *head;
   funcrec *tail;
};

typedef struct functab functab;

functab *init_functab();
void insert_functab(functab *ft, funcrec *entry);
void display_functab(functab *ft);
funcrec *search_functab(functab *ft, funcrec *entry, bool call);

struct classrec
{
   char *name;
   symtab *members;
   functab *methods;
   struct classrec *next;
};

typedef struct classrec classrec;

struct classtab
{
   classrec *head;
   classrec *tail;
};

typedef struct classtab classtab;

classtab *init_classtab();
void insert_classtab(classtab *ct, classrec *entry);
void display_classtab(classtab *ct);
classrec *search_classtab(classtab *ct, char *name);

idrec *lookup(symtab *global_table, symtab *local_table, char *name)
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

ilist *init_ilist()
{
   ilist *l = (ilist *)malloc(sizeof(ilist));
   l->head = NULL;
   l->tail = NULL;
   return l;
}

void insert_ilist(ilist *l, int val)
{
   inode *temp = (inode *)malloc(sizeof(inode));
   temp->val = val;
   temp->next = NULL;
   if (l->head == NULL)
   {
      l->head = temp;
      l->tail = temp;
   }
   else
   {
      l->tail->next = temp;
      l->tail = temp;
   }
}

void display_ilist(ilist *l)
{
   inode *temp = l->head;
   while (temp != NULL)
   {
      printf("%d ", temp->val);
      temp = temp->next;
   }
   printf("\n");
}

slist *init_slist()
{
   slist *l = (slist *)malloc(sizeof(slist));
   l->head = NULL;
   l->tail = NULL;
   return l;
}

void insert_slist(slist *l, char *s)
{
   snode *temp = (snode *)malloc(sizeof(snode));
   temp->val = s;
   temp->next = NULL;
   if (l->head == NULL)
   {
      l->head = temp;
      l->tail = temp;
   }
   else
   {
      l->tail->next = temp;
      l->tail = temp;
   }
}

void display_slist(slist *l)
{
   snode *temp = l->head;
   while (temp != NULL)
   {
      printf("%s ", temp->val);
      temp = temp->next;
   }
   printf("\n");
}

symtab *init_symtab()
{
   symtab *st = (symtab *)malloc(sizeof(symtab));
   st->head = NULL;
   st->tail = NULL;
   return st;
}

void insert_symtab(symtab *st, idrec *entry)
{
   if (st->head == NULL)
   {
      st->head = entry;
      st->tail = entry;
   }
   else
   {
      st->tail->next = entry;
      st->tail = entry;
   }
   return;
}

void display_symtab(symtab *st)
{
   idrec *temp = st->head;
   while (temp != NULL)
   {
      printf("Identifier record : ");
      printf("%s %d %s %d %d %s\n", temp->name, temp->arr, map_type[temp->type], temp->dim, temp->scope, temp->class_name);
      temp = temp->next;
   }
}

void clear_scope_symtab(symtab *st, int scope)
{
   idrec *temp = st->head;
   while (temp != NULL)
   {
      if (temp->scope < scope)
         break;
      temp = temp->next;
   }
   if (temp == NULL)
      return;
   st->tail = temp;
   temp = temp->next;
   while (temp != NULL)
   {
      idrec *temp2 = temp;
      temp = temp->next;
      free(temp2);
   }
   return;
}

idrec *search_symtab(symtab *st, char *name)
{
   idrec *temp = st->head;
   while (temp != NULL)
   {
      if (strcmp(temp->name, name) == 0)
         return temp;
      temp = temp->next;
   }
   return NULL;
}

functab *init_functab()
{
   functab *ft = (functab *)malloc(sizeof(functab));
   ft->head = NULL;
   ft->tail = NULL;
   return ft;
}

void insert_functab(functab *ft, funcrec *entry)
{
   if (ft->head == NULL)
   {
      ft->head = entry;
      ft->tail = entry;
   }
   else
   {
      ft->tail->next = entry;
      ft->tail = entry;
   }
   return;
}

void display_functab(functab *ft)
{
   funcrec *temp = ft->head;
   while (temp != NULL)
   {
      printf("Function record : ");
      printf("%s %s %d\n", temp->name, map_type[temp->type], temp->num_params);
      printf("Parameters : \n");
      display_symtab(temp->params);
      printf("Local variables : \n");
      display_symtab(temp->local_table);
      temp = temp->next;
   }
}

funcrec *search_functab(functab *ft, funcrec *entry, bool call)
{
   funcrec *temp = ft->head;
   int Not_found = 1;
   while (temp != NULL)
   {
      if (strcmp(temp->name, entry->name) == 0)
      {
         Not_found = 0;
         if (temp->num_params == entry->num_params)
         {
            // compare temp->params and entry->params
            idrec *temp1 = temp->params->head;
            idrec *temp2 = entry->params->head;
            int i = 1;
            while (temp1 != NULL && temp2 != NULL)
            {
               if (temp1->type != temp2->type)
               {
                  if (call)
                     printf("Error: Function %s argument %i mismatch \n", entry->name, i);
                  return NULL;
               }
               temp1 = temp1->next;
               temp2 = temp2->next;
               i++;
            }
            return temp;
         }
         else
         {
            if (call)
               printf("Error: Function %s has been called with wrong number of arguments\n", entry->name);
            return NULL;
         }
      }
      temp = temp->next;
   }
   if (Not_found && call)
      printf("Error: Function %s has not been declared\n", entry->name);
   return NULL;
}

classtab *init_classtab()
{
   classtab *ct = (classtab *)malloc(sizeof(classtab));
   ct->head = NULL;
   ct->tail = NULL;
   return ct;
}

void insert_classtab(classtab *ct, classrec *entry)
{
   if (ct->head == NULL)
   {
      ct->head = entry;
      ct->tail = entry;
   }
   else
   {
      ct->tail->next = entry;
      ct->tail = entry;
   }
   return;
}

void display_classtab(classtab *ct)
{
   classrec *temp = ct->head;
   while (temp != NULL)
   {
      printf("Class record : ");
      printf("%s\n", temp->name);
      printf("Members : \n");
      display_symtab(temp->members);
      printf("Methods : \n");
      display_functab(temp->methods);
      temp = temp->next;
   }
}

classrec *search_classtab(classtab *ct, char *name)
{
   classrec *temp = ct->head;
   while (temp != NULL)
   {
      if (strcmp(temp->name, name) == 0)
         return temp;
      temp = temp->next;
   }
   return NULL;
}

bool check_member_method(char *m1, snode *m2, classtab *class_table, classrec *class_entry, symtab *params, int num_params)
{
   if (m2 == NULL)
   {
      if (num_params != -1)
      {
         funcrec *entry = (funcrec *)malloc(sizeof(funcrec));
         entry->name = m1;
         entry->params = params;
         entry->num_params = 0;
         funcrec *temp = search_functab(class_entry->methods, entry, 0);
         if (temp == NULL)
         {
            printf("Error: %s is not a method of class %s\n", m1, class_entry->name);
            return false;
         }
         return true;
      }
      else
      {
         // for member checking num_params = -1
         idrec *entry = search_symtab(class_entry->members, m1);
         if (entry == NULL)
         {
            printf("Error: %s is not a member of class %s\n", m1, class_entry->name);
            return false;
         }
         return true;
      }
   }
   else
   {
      // check if m2 is a member of m1
      idrec *entry = search_symtab(class_entry->members, m1);
      if (entry == NULL)
      {
         printf("Error: %s is not a member of class %s\n", m1, class_entry->name);
         return false;
      }
      if (entry->type != 14)
      {
         printf("Error: %s is not of type class\n", m1);
         return false;
      }
      struct classrec *class_entry = search_classtab(class_table, entry->class_name);
      return check_member_method(m2->val, m2->next, class_table, class_entry, params, num_params);
   }
}

bool check_namelist(slist *namelist, symtab *global_table, symtab *local_table, classtab *class_table, symtab *params, int num_params)
{
   snode *temp = namelist->head;
   idrec *entry = lookup(global_table, local_table, temp->val);
   if (entry == NULL)
   {
      printf("Error: %s has not been declared\n", temp->val);
      return false;
   }
   if (entry->type != 14)
   {
      printf("Error: %s is not of type class\n", temp->val);
      return false;
   }
   struct classrec *class_entry = search_classtab(class_table, entry->class_name);
   struct symtab *members = class_entry->members;
   return check_member_method(temp->val, temp->next, class_table, class_entry, params, num_params);
}

void free_ilist(ilist *l)
{
   inode *temp = l->head, *current = temp;
   while (current != NULL)
   {
      current = current->next;
      free(temp);
      temp = current;
   }
}

void free_slist(slist *l)
{
   snode *temp = l->head, *current = temp;
   while (current != NULL)
   {
      current = current->next;
      free(temp);
      temp = current;
   }
}

void free_symtab(symtab *table)
{
   idrec *temp = table->head, *current = temp;
   while (temp != NULL)
   {
      current = current->next;
      free(temp);
      temp = current;
   }
}

void free_functab(functab *table)
{
   funcrec *temp = table->head, *current = temp;
   while (temp != NULL)
   {
      current = current->next;
      free_symtab(temp->params);
      free_symtab(temp->local_table);
      free(temp);
      temp = current;
   }
}

void free_classtab(classtab *table)
{
   classrec *temp = table->head, *current = temp;
   while (temp != NULL)
   {
      current = current->next;
      free_symtab(temp->members);
      free_functab(temp->methods);
      free(temp);
      temp = current;
   }
}

int check_arith_op(int type1, int type2, int op)
{
   if (op == 0)
   {
      if (type1 == 0 && type2 == 0)
         return 0;
      else if (type1 == 1 && type2 == 1)
         return 1;
      else if (type1 == 2 && type2 == 2)
         return 2;
      else if (type1 == 0 && type2 == 1)
         return 1;
      else if (type1 == 1 && type2 == 0)
         return 1;
      else
      {
         printf("Error: Invalid operands for + operator\n");
         return -1;
      }
   }
   else if (op == 1 || op == 2 || op == 3)
   {
      if (type1 == 0 && type2 == 0)
         return 0;
      else if (type1 == 1 && type2 == 1)
         return 1;
      else if (type1 == 0 && type2 == 1)
         return 1;
      else if (type1 == 1 && type2 == 0)
         return 1;
      else
      {
         if (op == 1)
            printf("Error: Invalid operands for - operator\n");
         else if (op == 2)
            printf("Error: Invalid operands for * operator\n");
         else
            printf("Error: Invalid operands for / operator\n");
         return -1;
      }
   }
   else if (op == 4)
   {
      if (type1 == 0 && type2 == 0)
         return 0;
      else
      {
         printf("Error: Invalid operands for %% operator\n");
         return -1;
      }
   }
   return -1;
}

bool check_assign_op(int lhs, int rhs, int op)
{
   if (op == 0)
   {
      if (lhs == 0 && rhs == 0)
         return true;
      else if (lhs == 1 && rhs == 1)
         return true;
      else if (lhs == 0 && rhs == 1)
         return true;
      else if (lhs == 1 && rhs == 0)
         return true;
      else if (lhs == 2 && rhs == 2)
         return true;
      else if (lhs == 7 && rhs == 8)
         return true;
      else if (lhs == 8 && rhs == 9)
         return true;
      else
      {
         printf("Error: Invalid expression for += assignment\n");
         printf("Error: LHS is of type %i and RHS is of type %i\n", lhs, rhs);
         return false;
      }
   }
   else if (op == 1 || op == 2 || op == 3)
   {
      if (lhs == 0 && rhs == 0)
         return true;
      else if (lhs == 1 && rhs == 1)
         return true;
      else if (lhs == 0 && rhs == 1)
         return true;
      else if (lhs == 1 && rhs == 0)
         return true;
      else
      {
         if (op == 1)
         {
            printf("Error: Invalid expression for -= assignment\n");
            printf("Error: LHS is of type %i and RHS is of type %i\n", lhs, rhs);
         }
         else if (op == 2)
         {
            printf("Error: Invalid expression for *= assignment\n");
            printf("Error: LHS is of type %i and RHS is of type %i\n", lhs, rhs);
         }
         else
         {
            printf("Error: Invalid expression for /= assignment\n");
            printf("Error: LHS is of type %i and RHS is of type %i\n", lhs, rhs);
         }
         return false;
      }
   }
   else if (op == 4)
   {
      if (lhs == 0 && rhs == 0)
         return true;
      else
      {
         printf("Error: Invalid expression for %%= assignment\n");
         printf("Error: LHS is of type %i and RHS is of type %i\n", lhs, rhs);
         return false;
      }
   }
   else if (op == 5 || op == 6)
   {
      if (lhs == 7 && rhs == 7)
         return true;
      else
      {
         if (op == 5)
         {
            printf("Error: Invalid expression for &= assignment\n");
            printf("Error: LHS is of type %i and RHS is of type %i\n", lhs, rhs);
         }
         else
         {
            printf("Error: Invalid expression for |= assignment\n");
            printf("Error: LHS is of type %i and RHS is of type %i\n", lhs, rhs);
         }
         return false;
      }
   }
   else if (op == 7)
   {
      if (lhs == rhs)
         return true;
      else if (lhs == 0 && rhs == 3)
      {
         return true;
      }
      else if (lhs == 0 && rhs == 1)
      {
         return true;
      }
      else if (lhs == 1 && rhs == 0)
      {
         return true;
      }
      else
      {
         printf("Error: Invalid expression for = assignment\n");
         printf("Error: LHS is of type %i and RHS is of type %i\n", lhs, rhs);
         return false;
      }
   }
   
}