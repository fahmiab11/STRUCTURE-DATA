#include "header_1302194037.h"
#include <iostream>

void createStack(stack &S){
    Top(S) = -1;
}

bool isEmpty(stack S){
    return Top(S) == -1;
}

bool isFull(stack S){
    return Top(S) == 9;
}

void push(stack &S, infotype x){
    if(!isFull(S)){
        Top(S) = Top(S)+1;
        info(S)[Top(S)] = x;
    }
}

int pop(stack &S){
    infotype x;

    x = info(S)[Top(S)];
    Top(S) = Top(S)-1;

    return x;
}

void printInfo(stack S){
    int i;

    for(i = Top(S); i >= 0; i--){
        cout << S.info[i] << " ";
    }
    cout << endl;
}

void ascending(stack &S){
    int pass;
    int j;
    int tmp;

    for (pass = 1; pass <= Top(S); pass++){
        for (j = Top(S); j>0; j--){
            if(info(S)[j] > info(S)[j-1]){
                tmp = info(S)[j];
                info(S)[j] = info(S)[j-1];
                info(S)[j-1] = tmp;
            }
        }
    }
}

void descending(stack &S){
    int pass, j, tmp;

    for(pass = 1; pass<= Top(S); pass++){
        for(j = Top(S); j>1; j--){
            if(info(S)[j] < info(S)[j-1]){
                tmp = info(S)[j];
                info(S)[j] = info(S)[j-1];
                info(S)[j-1] = tmp;
            }
        }
    }
}
