//
// Created by XUEXI on 2017/12/1.
//

#include "A_1.h"
#include <iostream>

int* createArray(int length);

void releaseArray(int *pInt);

using namespace std;

int main() {
    int length=10;
    int * array = createArray(length);

    releaseArray(array);

    return 0;
}

void releaseArray(int *pInt) {
    delete pInt;
    pInt= nullptr;
}

int *createArray(int length) {
    int * array {new int[length]};
    return array;
}