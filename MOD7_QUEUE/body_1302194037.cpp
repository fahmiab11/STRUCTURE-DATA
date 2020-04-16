#include "header_1302194037.h"

void CreateQueue(Queue &Q){
    head(Q) = NIL;
    tail(Q) = NIL;
}
void MasukKanTransaksi(Queue &Q, string data){
    address P = new elmQueue;
    info(P) = data;
    next(P) = NIL;
    if(head(Q) == NIL){
        head(Q) = P;
        tail(Q) = P;
    } else {
        next(tail(Q)) = P;
        tail(Q) = P;
    }
}
void ProsesTransaksi(Queue &Q){
    address P = head(Q);
    if(P == tail(Q)) {
        head(Q) = NIL;
        tail(Q) = NIL;
    } else {
        head(Q) = next(P);
        next(P) = NIL;
    }
}
void PrintQueue(Queue &Q) {
    address P = head(Q);
    while(P != NIL) {
        cout << info(P) << " ";
        P = next(P);
    }
    cout << endl;
}
