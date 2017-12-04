//
// Created by XUEXI on 2017/11/24.
//

#include <stdio.h>

void print(void);

void (*printptr)(void);

void times(int, void (*print)(void));

void print2(int);

void (*print2ptr)(int);


void times2(int i, void (*pFunction)(int));

int main() {
    printptr = &print;
    int i = 3;
    times(i, printptr);

    print2ptr = &print2;
    times2(i, print2ptr);

    return 0;
}

void times2(int i, void (*pFunction)(int)) {
    (*pFunction)(i);
}


void print(void) {
    printf("Hallo\n");
}

void times(int i, void (*print)(void)) {
    for (int j = 0; j < i; ++j) {
        print();
    }
}

void print2(int i) {
    for (int j = 1; j < i + 1; ++j)
        printf("%d", j);
}