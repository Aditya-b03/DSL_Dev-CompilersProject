#include "../Phase3/teamScribe.h"
/* function Overloading and class members and method testing */

int add(int a, int b)
{
    return a + b;
}

int add(int a, int b, int c)
{
    return a + b + c;
}

float add(float a, float b)
{
    return a + b;
}

class Add
{
    int size = 0;
public:
    int add(int a, int b)
    {
        return a + b;
    }
    int add(int a, int b, int c)
    {
        return a + b + c;
    }
    float add(float a, float b)
    {
        return a + b;
    }
};






int main()
{
    print(add(1, 2));
    print(add(1, 2, 3));
    print(add(1.2, 2.3));

    Add a;
    print(a.add(1, 2));
    print(a.add(1, 2, 3));
    print(a.add(1.2, 2.3));
    print(a.size);
    return 0;
}