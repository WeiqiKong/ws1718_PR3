//
// Created by XUEXI on 2017/10/13.
//

#include "int20_c.h"
#include <string.h>
#include <stdio.h>


Int20 create20(char val[]);

/*Die Summe zewier array mit pos-ten Stlle*/
int a_plus_b_inArray(Int20 a, Int20 b, int pos);


/* Eine Zahle ist immer mit der Länge 20, von links nach rechts
 * z.B 123 -> [0,...,0,1,2,3]*/
Int20 create20(char val[]) {
    Int20 zahl = {};
    zahl.length = strlen(val);
    for (int i = 0; i < INT_LENGTH; ++i) {
        if (i < zahl.length) {
            zahl.stellen[INT_LENGTH - 1 - i] = val[zahl.length - i - 1];
        } else {
            zahl.stellen[INT_LENGTH - 1 - i] = '0';
        }
    }
    return zahl;
}

/*von links nach rechts drucken, die Male der Ausdrucke hängt von der Länge ab*/
void print20(Int20 zahl) {
    for (int i = 0; i < zahl.length; ++i) {
        printf("%c", zahl.stellen[INT_LENGTH - zahl.length + i]);
    }
};

/*Der grundlegende Gedankengang ist, eine type Int20 belegt immer 20 Byte für die char Array,
 * aber die Attirubute der Länge ist keine 20, sondern wurde zwischen der Initialisierung berechnet.
 *
 * Die Reihefolge des Addierenes ist von links nach rechts. z.B
 *              {'0','0','7','7','0','9'}
 *              {'0','0','4','0','0','2'}
 * 9 + 2 wurde von Anfang an durchgefürcht, und es gibt normalerweise 3 Fälle, eine ist result>=10
 * und zwischen 0 und 8, sowie einen besondere Fall 9. Ist result >9, wird die Summe -10 und die linke Stelle
 * erstmal +1. Sind result 9 und die Lücke schon 1, wird dann 0 an dieser Stelle sein und wiederum die linke
 * Stelle +1 machen.
 *
 * Letztendlich wird mit einer For-Schleife die Länge der Summe berechnet.
 * es wird von rechts nach links überprüft, ob es '0' ist, bis genau dann einer andere Zahle vorkommt.
 */
Int20 add20(Int20 a, Int20 b) {
    char sum_array[] = {};
    Int20 sum = create20(sum_array);

    int sum_2_stellen;
    for (int i = 0; i < INT_LENGTH; ++i) {
        sum_2_stellen = a_plus_b_inArray(a, b, INT_LENGTH - 1 - i);
        if (sum_2_stellen >= 10) {
            sum_2_stellen = sum_2_stellen - 10;
            sum.stellen[INT_LENGTH - 1 - i] += sum_2_stellen;
            sum.stellen[INT_LENGTH - 2 - i]++;
        } else if ((sum_2_stellen == 9) && (sum.stellen[INT_LENGTH - 1 - i] == '1')) {
            sum.stellen[INT_LENGTH - 2 - i]++;
        } else
            sum.stellen[INT_LENGTH - 1 - i] += sum_2_stellen;
    }

    //um die Länge zu ermitteln
    int sum_length = INT_LENGTH, temp = 0;
    while (sum.stellen[temp] == '0') {
        sum_length--;
        temp++;
    }

    sum.length = sum_length;
    return sum;
}

int a_plus_b_inArray(Int20 a, Int20 b, int pos) {
    return a.stellen[pos] + b.stellen[pos] - '0' - '0';
};






//Int20 add20(Int20 a, Int20 b) {
//    int temp = (a.length > b.length) ? b.length : a.length;
//    Int20 groesser = (a.length > b.length) ? a : b;
//    int add_2_stellen = 0;
//    char plus = 0;
//    //neue Zahle
//    char sum[20] = {};
//    int stelle_count = 0;
//    for (int l = 0; l < 20; ++l) {
//        sum[l] = groesser.stellen[l];
//    }
//    for (int i = 0; i < temp; ++i) {
//        add_2_stellen = a.stellen[a.length - i - 1] - '0' + b.stellen[b.length - i - 1] - '0';
//        if (add_2_stellen > 9) {
//            sum[19 - i] = sum[19 - i] + b.stelle[b.length - i - 1] - 10 + '0';
//            sum[18 - i] = sum[18 - i] + 1;
//        } else {
//            sum[19 - i] = sum[19 - i] + b.stelle[b.length - i - 1] + '0';
//        }
//
//    }
//
//
//    //erzeugt neue char-Array, um die unnötige Stellen wegzulassen
//    for (int j = 0; j < 20; ++j) {
//        if (sum[j] != '\0')
//            stelle_count++;
//    }
//
//    char temp_sum[] = {};
//    for (int k = 0; k < stelle_count; ++k) {
//        temp_sum[k] = sum[20 - stelle_count + k];
//    }
//
//    Int20 int20_sum = create20(temp_sum);
//    int20_sum.length = stelle_count;
//
//    return int20_sum;
//
//}
/*int change_to_int(Int20 zahl){
    int temp_int=0;
    for (int i = 0; i <zahl.length; ++i) {
        temp_int=temp_int+(zahl.stelle[zahl.length-i]-'0')*((int)pow(10,i));
    }
    return temp_int;
} */
