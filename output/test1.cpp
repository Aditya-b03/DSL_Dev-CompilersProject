#include "../Phase3/teamScribe.h"
/* sementic checks */

int main(){
    int a = 0;
    int b = 1;
    int c = a + b;

    float d = 0.0;
    float e = 1.0;
    float f = d + e;

    string g = "hello";
    string h = "world";
    string i = g + h;

    bool j = TRUE;
    bool k = FALSE;

      l = {{1,2,3},{4,5,6}};
      m = {{1.0,2.0,3.0},{4.0,5.0,6.0}};
      n = {{"hello","world"},{"hello","world"}};

    if(a >= b){
        a = 1;
    }
    else{
        a = 2;
    }

    if(a){
        print("hello");
    }

    while(a < 10){
        a = a + 1;
    }

    return 0;
}