//
// Created by XUEXI on 2017/10/13.
//
#define INT_LENGTH 20

#ifndef PR3_U_3_INT20_H
#define PR3_U_3_INT20_H
typedef struct {
    char stellen[INT_LENGTH];
    int length;
} int20;


int20 create20(char val[]);

int20 add20(int20 a, int20 b);

/*von links nach rechts drucken, die Male der Ausdrucke hängt von der Länge ab*/
void print20(int20 zahl);

#endif //PR3_U_3_INT20_H
