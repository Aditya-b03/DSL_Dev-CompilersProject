#include <iostream>
#include <string>
#include <vector>
#include "teamScribe.h"
#include "teamScibe.h"

/*checks*/
int sum1 (int d,string s){
    d++;
    return d;
}

string gen_ID()
{

    string s = "";
    for (int i = 0; i < 10; i++)
    {
        s += character_string[rand()