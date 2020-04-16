#ifndef HEADER_1302194037_H_INCLUDED
#define HEADER_1302194037_H_INCLUDED
#define tail(Q) (Q).tail
#define head(Q) (Q).head

/*  Nama    : Fahmi Abdillah Al Amien
    NIM     : 1302194037
    Kelas   : SE-43-03
*/

void createQueue(Queue &Q);

bool isFull(Queue Q);

bool isEmpty(Queue Q);

void Add(Queue &Q, int ukuran, int no, string filename);

void Del(Queue &Q, int &ukuran, int &no, string &filename);

void printQueue(Queue Q);

void kirimData(Queue &Q, int fileSize, string filename);


#endif // HEADER_1302194037_H_INCLUDED
