#include "../Phase3/teamScribe.h"
int add(int a, int b) {
    return a + b;
}

float add(float a, int b) {
    return a + b;
}

void show(int a) {
    print(a);
}

void show(int a, int b) {
    print(a,b);
}

int main() {
    int a = 1, b = 2;
    float c = 1.1, d = 2.2;
    int e = add(c,d);
    print(e);
    print(a,b);
    return 0;
}