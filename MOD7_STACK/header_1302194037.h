#ifndef HEADER_1302194037_H_INCLUDED
#define HEADER_1302194037_H_INCLUDED
#define Top(S) S.Top
#define info(S) S.info
#include <iostream>

using namespace std;

typedef int infotype;
struct stack{
    infotype info[10];
    int Top;
};

void createStack(stack &S);
bool isEmpty(stack S);
bool isFull(stack S);
void push(stack &S, infotype x);
int pop(stack &S);
void printInfo(stack S);
void ascending(stack &S);
void descending(stack &S);

#endif // HEADER_1302194037_H_INCLUDED
