//
// Created by XUEXI on 2017/11/24.
//
#include <stdio.h>
#include <stdlib.h>

#define NAME_LEN 30

typedef struct {
    char name[NAME_LEN + 1];
    int personalnummer;
    float gehalt;
} angestellter;

void binaer_speichern(angestellter arr[], int anz);
//const char *convertAngToString(angestellter *arr, int i);

void binaer_laden_und_ausgeben(void);

int main() {
    angestellter angs[] = {{"kongweiqi", 1351698, 2000},
                           {"phlipp",    1381323, 2000},
                           {"leo",       1311332, 4999},
                           {"frank",     1384123, 4999},
                           {"kai",       1223123, 4999}};
    binaer_speichern(angs, 5);
    binaer_laden_und_ausgeben();
    return 0;
}

void binaer_speichern(angestellter arr[], int anz) {
    angestellter *ang = arr;
    FILE *fp;
    fp = fopen("angestellte.dat", "w");
    fprintf(fp,"%d",anz);
    for (int i = 0; i < anz; ++i) {
        fprintf(fp, "%s %d %0.2f",ang->name, ang->personalnummer, ang->gehalt);
//        fprintf(fp,arr[i]->personalnummer);
//        fprintf(fp,arr[i]->gehalt);
        ang++;
    }
    fclose(fp);
}

void binaer_laden_und_ausgeben(void) {
    FILE *fp;
    fp = fopen("angestellte.dat", "r");
    int gross=1;
    fscanf(fp, "%d", &gross);
    angestellter *angs;
    angs= (angestellter *) malloc(gross*sizeof(angestellter));
    for (int i = 0; i < gross; ++i) {
        fscanf(fp, "%s %d %f", angs[i].name, &(angs[i].personalnummer), &(angs[i].gehalt));
        printf("%s %d %f\n", angs[i].name, angs[i].personalnummer, angs[i].gehalt);
    }
}

//const char *convertAngToString(angestellter *arr, int i) {
//    char *datei = (char *) malloc(i * sizeof(arr));
//    for (int j = 0; j < i; ++j) {
//        datei=datei+arr[j].name
//    }
//    return NULL;
//}

