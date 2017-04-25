#include <bits/stdc++.h>
#include "Lexical_Analyzer.h"

using namespace std;

int main(int arg, char* args[])
{
    if(arg > 0){
        char *inpath = args[1];
        Lexical_Analyzer la (inpath);
    }
    return 0;
}
