#ifndef HEADER_1302194037_H_INCLUDED
#define HEADER_1302194037_H_INCLUDED
#include <iostream>
#define head(Q) Q.head
#define tail(Q) Q.tail
#define info(P) P->info
#define next(P) P->next
#define NIL NULL

using namespace std;

typedef string infotype;
typedef struct elmQueue *address;
struct elmQueue{
    infotype info;
    address next;
};
struct Queue{
    address head;
    address tail;
};

void MasukKanTransaksi(Queue &Q, string data);
void ProsesTransaksi(Queue &Q);
void PrintQueue(Queue &Q);
void CreateQueue(Queue &Q);


#endif // HEADER_1302194037_H_INCLUDED
