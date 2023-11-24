#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print(char* s)
{
   printf("%s",s);
}

void make_vector(char**s,int i, char* data_type, int dim) 
{   
    if(dim == 0)
    {
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
    if(dim > 1)
        print(",");
    if(strlen(s[i]) == 0)
        return;
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
        i++;
    }
    char **size_expression = (char **)malloc(dims * sizeof(char *));
    char *data_type = (char *)malloc(100 * sizeof(char));
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
            size_expression[k] = (char *)malloc((j - i - 1) * sizeof(char));
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
    // for(int i = 0; i < dims; i++)
    // {
    //     printf("%s\n", size_expression[i]);
    // }
    make_vector(size_expression, 0, data_type, dims);
    
}

int main()
{
    char *str = "list[1][][] : int";
    generate_cpp_vector_initializer(str);
    return 0;
}