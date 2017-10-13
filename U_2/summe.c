//
// Created by XUEXI on 2017/10/11.
//

#include "summe.h"
#include "input.h"

int summe(void){
    int first,second;
    first = get_input("Erster Summand");
    second = get_input("Zweiter Summand");
    return first + second;
}

