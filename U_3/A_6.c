//
// Created by XUEXI on 2017/10/13.
//
#include "int20.h"
#include <stdio.h>

int main(void) {
    int20 a = create20("7700");
    int20 b = create20("4000");
    int20 sum = add20(a, b);
    print20(a);
    printf("\n");
    print20(b);
    printf("\n");
    print20(sum);
    printf("\n");

    return 0;
};
