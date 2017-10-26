#include <stdio.h>
#include <time.h>

void tausche_array(int *a, int *b) {
    for (int i = 0; i < 5; ++i) {
        *(b + 4 - i) = *(a + i);
    }
}

void tausche_int(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main(void) {
//    Aufgabe 6
    char *wday[] = {"So.", "Mo.", "Di.", "Mi.", "Do.", "Fr.", "Sa."};
    time_t time_array[2] = {645703200, 49888800};
    time_t *tp = time_array;
    struct tm *tm1;
    tm1= localtime(&time_array[1]);
    printf("Jahr:%d Monate:%02d Tag:%02d", (1900 + tm1->tm_year), (1 + tm1->tm_mon), tm1->tm_mday);
    printf(" %s ", wday[tm1->tm_wday]);
    printf("%02d:%02d:%02d\n", tm1->tm_hour, tm1->tm_min, tm1->tm_sec);


//     Aufgabe_5
     int a[5]={1,2,3,4,5};
     int b[5]={};
     tausche_array(a,b);
     for (int i = 0; i < 5; ++i) {
         printf("%d", b[i]);
     }



// Aufgabe_2
    /*int a[] = {1, 5, 19, -4, 3};
    int *p;
    int i;
    p = a;
    for (i = 1; i < 5; i++) {
        if (*(a+i) > *p) {
            p = &(a[i]);
        }
    }
    printf("Maximum: %d\n", *p);




//     Aufgabe_1

     int i = 1;
    int j = 2;
    printf("i = %d, j = %d\n", i, j);
//     Gibt 1 und 2 aus
    tausche_int(&i, &j);
    printf("i = %d, j = %d\n", i, j);
//     Gibt 2 und 1 aus*/
    return 0;
}