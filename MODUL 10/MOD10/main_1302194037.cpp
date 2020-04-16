#include <iostream>
#include "header_1302194037.h"

/* NAMA    : FAHMI ABDILLAH AL AMIEN
   KELAS   : SE - 43 - 03
   NIM     : 1302194037
*/

using namespace std;

int main(){

    graph G;
    createGraph(G);
    cout<<"MEMBUAT NODE PADA GRAF"<<endl;
    addNode(G, 'A');
    addNode(G, 'B');
    addNode(G, 'C');
    addNode(G, 'D');
    printGraph(G);
    cout<<"\nMEMBUAT EDGE PADA GRAF"<<endl;
    connect(G, 'A', 'C');
    connect(G, 'A', 'D');
    connect(G, 'B', 'D');
    connect(G, 'D', 'C');
    cout<<"\nMENAMBAHKAN NODE LAIN PADA GRAF"<<endl;
    addNode(G,'A');
    addNode(G,'B');
    addNode(G,'E');
    addNode(G,'C');
    addNode(G,'H');
    addNode(G,'D');
    addNode(G,'F');
    printGraph(G);
    cout<<"\nMENAMBAHKAN EDGE BARU PADA GRAF"<<endl;
    connect(G,'A','E');
    connect(G,'E','B');
    connect(G,'H','B');
    connect(G,'F','D');
    connect(G,'C','F');
    connect(G,'C','E');
    connect(G,'D','H');
    connect(G,'E','H');
    connect(G,'F','A');
    printGraph(G);
    inDegree(G, 'A');
    inDegree(G, 'B');
    inDegree(G, 'C');
    inDegree(G, 'D');
    inDegree(G, 'E');
    inDegree(G, 'H');
    inDegree(G, 'F');

    return 0;
}
