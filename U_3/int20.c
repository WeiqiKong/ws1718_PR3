//
// Created by XUEXI on 2017/10/13.
//

#include "int20.h"
#include <string.h>
#include <stdio.h>


int20 create20(char val[]);

/*Die Summe zewier array mit pos-ten Stlle*/
int a_plus_b_inArray(int20 a,int20 b,int pos);
/* Eine Zahle ist immer mit der Länge 20, von links nach rechts
 * z.B 123 -> [0,...,0,1,2,3]*/



int20 create20(char val[]) {
    int20 zahl={};
    zahl.length = strlen(val);
    for (int i = 0; i < INT_LENGTH; ++i) {
        if (i < zahl.length) {
            zahl.stellen[INT_LENGTH-1 - i] = val[zahl.length - i - 1];
        } else {
            zahl.stellen[INT_LENGTH-1 - i] = '0';
        }
    }
    return zahl;
}

/*von links nach rechts drucken, die Male der Ausdrucke hängt von der Länge ab*/
void print20(int20 zahl) {
    for (int i = 0; i < zahl.length; ++i) {
        printf("%c", zahl.stellen[INT_LENGTH-zahl.length+i]);
    }
};

/* */
int20 add20(int20 a, int20 b){
    char sum_array[]={};
    int20 sum=create20(sum_array);

    int sum_2_stellen;
    for (int i = 0; i <INT_LENGTH ; ++i) {
        sum_2_stellen=a_plus_b_inArray(a,b,INT_LENGTH-1-i);
        if(sum_2_stellen>=10){
            sum_2_stellen = sum_2_stellen-10;
            sum.stellen[INT_LENGTH-1-i]+=sum_2_stellen;
            sum.stellen[INT_LENGTH-2-i]++;
        } else if((sum_2_stellen==9)&&(sum.stellen[INT_LENGTH-1-i]=='1')){
            sum.stellen[INT_LENGTH-2-i]++;}
        else
            sum.stellen[INT_LENGTH-1-i]+=sum_2_stellen;
    }

    //um die Länge zu ermitteln
    int sum_length=INT_LENGTH,temp=0;
    while(sum.stellen[temp]=='0'){
        sum_length--;
        temp++;
    }

    sum.length=sum_length;
    return sum;

}

int a_plus_b_inArray(int20 a,int20 b,int pos){
    return a.stellen[pos]+b.stellen[pos]-'0'-'0';
};






//int20 add20(int20 a, int20 b) {
//    int temp = (a.length > b.length) ? b.length : a.length;
//    int20 groesser = (a.length > b.length) ? a : b;
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
//    int20 int20_sum = create20(temp_sum);
//    int20_sum.length = stelle_count;
//
//    return int20_sum;
//
//}






/*int change_to_int(int20 zahl){
    int temp_int=0;
    for (int i = 0; i <zahl.length; ++i) {
        temp_int=temp_int+(zahl.stelle[zahl.length-i]-'0')*((int)pow(10,i));
    }
    return temp_int;
} */
