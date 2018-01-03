//
// Created by XUEXI on 2017/10/13.
//
#define INT_LENGTH 25

#ifndef PR3_U_3_INT20_H
#define PR3_U_3_INT20_H
typedef struct {
    char stellen[INT_LENGTH];
    int length;
} int20;


Int20 create20(char val[]);

Int20 add20(Int20 a, Int20 b);

/*von links nach rechts drucken, die Male der Ausdrucke hängt von der Länge ab*/
void print20(Int20 zahl);

#endif //PR3_U_3_INT20_H
