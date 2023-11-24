#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print(char* s)
{
   fprintf(yyout,"%s",s);
}

void make_vector(char**s,int i, char* data_type, int dim) 
{   
    if(dim == 0)
    {
        print(")");
        return;
    }
    for(int i = 0; i < dim; i++)
    {
        print("vector<");
    }
    print(data_type);
    for(int i = 0; i < dim; i++)
    {
        print(">");
    }
    print(" ");

    print("(");
    print(s[i]);
    print(",");
    make_vector(s, i + 1, data_type, dim - 1);
    print(")");

}

// Function to generate C++ code for vector initialization
char* generate_cpp_vector_initializer(const char *str) 
{
    int i = 0, k = 0, l = strlen(str);
    int list = 0, colon = 0;
    int dims = 0;
    while(i < l)
    {
        if(str[i] == '[')
            dims++;
    }
    char **size_expression = (char **)malloc(dims * sizeof(char *));
    char *data_type = (char *)malloc(100 * sizeof(char));
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
            strncpy(size_expression[k], str + i + 1, j - i - 1);
            size_expression[k][j - i - 1] = '\0';
            k++;
            i = j;
        }
        
        if(str[i] == ':')
            colon++;
        if(colon && str[i] != ' '){
            int j = i;
            while(str[j] != ' ')
            {
                j++;
                if(j >= l)
                {
                    printf("Error: Invalid initialization\n");
                    exit(1);
                }
            }
            strncpy(data_type, str + i, j - i);
            data_type[j - i] = '\0';
            break;
        }
        i++;
    }

    make_vector(size_expression, 0, data_type, dims);
    
}