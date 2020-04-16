#include "header_1302194037.h"
#include <iostream>
int main()
{
    Queue Q;
    CreateQueue(Q);
    MasukKanTransaksi(Q, "Andi Transfer Doni 50.000");
    PrintQueue(Q);
    MasukKanTransaksi(Q, "Doni Transfer Saras 10.000");
    PrintQueue(Q);
    MasukKanTransaksi(Q, "Tono Transfer Bill 20.000");
    PrintQueue(Q);
    ProsesTransaksi(Q);
    PrintQueue(Q);

    return 0;
}
