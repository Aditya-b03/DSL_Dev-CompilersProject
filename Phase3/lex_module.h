#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print(char* s)
{
   fprintf(yyout,"%s",s);
}

 char* concat(char* s1, char* s2){
   int i = 0;
   int strlen1 = strlen(s1);
    int strlen2 = strlen(s2);
    char* s3 = (char*)realloc(s1, strlen1+strlen2+1);
    for(int j = strlen1; j<strlen1+strlen2; j++){
      s3[j] = s2[i];
      i++;
    }
    s3[strlen1+strlen2] = '\0';
    return s3;
 }

 char* make_vector(char* v ,char **s, int i, char *data_type, int dim) 
{   
    if(dim == 0 || strlen(s[i]) == 0)
        return "";

    for(int i = 0; i < dim; i++)
        print("vector<");
    
    print(data_type);

    for(int i = 0; i < dim; i++)
        print(">");

    concat(v, " ");
    concat(v, "(");
    concat(v, s[i]);
    if(dim > 1)
        concat(v, ", ");
    
    make_vector(v,s, i + 1, data_type, dim - 1);
    concat(v, ")");
    return v;
}

// Function to generate C++ code for vector initialization
char* gen_vec(const char *str) 
{
    int i = 0, k = 0, l = strlen(str);
    int list = 0, colon = 0;
    int dims = 0;
    while(i < l)
    {
        if(str[i] == '[')
            dims++;
        i++;
    }
    char **size_expression = (char**) malloc(dims * sizeof(char *));
    char *data_type = (char*) malloc(100 * sizeof(char));
    i = 0;
    while(i < l) {
        if(str[i] == 'l')
        {
            while(str[i] != '[')
            {
                i++;
                if(i >= l)
                {
                    printf("Error: Invalid initialization\n");
                    exit(1);
                }
            }
            list++;
        }
        if(str[i] == '[')
        {
            int j = i;
            while(str[j] != ']')
            {
                j++;
                if(j >= l)
                {
                    printf("Error: Invalid initialization\n");
                    exit(1);
                }
            }
            size_expression[k] = (char*) malloc((j - i - 1) * sizeof(char));
            strncpy(size_expression[k], str + i + 1, j - i - 1);
            size_expression[k][j - i - 1] = '\0';
            k++;
            i = j;
        }
        
        if(str[i] == ':')
        {
            colon++;
            i++;
        }
        if(colon && str[i] != ' '){
            int j = i;
            strncpy(data_type, str + i, l - i);
            data_type[l - i] = '\0';
            break;
        }
        i++;
    }
    char* v = (char*)malloc(1*sizeof(char));
    make_vector(v,size_expression, 0, data_type, dims);
    return v;
}