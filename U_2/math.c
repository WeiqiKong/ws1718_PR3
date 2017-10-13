//
// Created by XUEXI on 2017/10/11.
//

#include <stdio.h>
#include "summe.h"
#include "differenz.h"

void berechne(void) {
    int result;
    char zeichen;
    printf("Ihre Wahl: \n <S>umme oder <D>ifferenz?");
    scanf("%c", &zeichen);
    if (zeichen == 's' || zeichen == 'S') {
        result = summe();
        printf("Ergebnis:%d", result);
    } else if (zeichen == 'd' || zeichen == 'D') {
        result = differenz();
        printf("Ergebnis:%d", result);
    } else {
    }

}

int main(void) {
    berechne();
    return 0;
}
