//
// Created by XUEXI on 2017/10/11.
//

#include "input.h"
#include <stdio.h>

int get_input(char *prompt) {
    int i;
    printf("%s:", prompt);
    scanf("%d", &i);
    return i;
}

int input(void) {
    return 0;
}

