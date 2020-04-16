/*  Nama    : Fahmi Abdillah Al Amien
    NIM     : 1302194037
    Kelas   : SE-43-03
*/

#include "header_1302194037.h"
#include <iostream>

using namespace std;

void createQueue(Queue &Q){
    (Q).tail = NULL;
    (Q).head = NULL;
}


bool isFull(Queue Q){
    (Q.head = (Q).tail;
}

bool isEmpty(Queue Q){
    (Q).head = 0;
    (Q).tail = 0;
}
void Add(Queue &Q, int ukuran, int no, string filename) {
int i, j;

    if(Q.head == 0 && Q.tail == nMax-1){
        cout<<"Data Penuh"<<endl;
    } else if (Q.head == -1 &&Q.tail == -1){
        Q.head = Q.head+1;
        Q.tail = Q.tail+1;
        Q.info[Q.tail] = x;
    } else if(Q.tail == nMax-1){
        i = Q.head;
        j= 0;
        while (i<Q.tail){
            Q.info[j] = Q.info[i];
            i++;
            j++;
        }
        Q.head = 0;
        Q.tail = j;
        Q.info[Q.tail] = x;
    } else {
        Q.tail = Q.tail+1;
        Q.info[Q.tail] = x;
    }
}

void Del(Queue &Q, int &ukuran, int &no, string &filename){
if (Q.head == -1 &&Q.tail == -1){
        cout<<"Data Kosong";
    } else {
        x = Q.info[Q.head];
        if (Q.head == Q.tail){
            Q.head = -1;
            Q.tail = -1;
        }else {
            Q.head++;
        }
    }
}

void printQueue(Queue Q){
int i;
    i = Q.head;
    while (i <= Q.tail){
        cout<<Q.info[i];
        i++;
    }
    cout<<endl;
}

void kirimData(Queue &Q, int fileSize, string filename){
}
