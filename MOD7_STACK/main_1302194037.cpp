#include "header_1302194037.h"
#include <iostream>

using namespace std;

int main()
{
    stack S;
    createStack(S);
    push(S, 12);
    push(S, 17);
    push(S, 5);
    push(S, 10);
    push(S, 15);
    push(S, 25);
    push(S, 11);
    push(S, 22);
    push(S, 19);
    printInfo(S);
    ascending(S);
    printInfo(S);
    descending(S);
    printInfo(S);
    return 0;
}
