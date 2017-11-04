#include <stdio.h>
double (*getBetrag[3])(double );
double berecheMwst(double);
double berecheBrutto(double);
double berecheNetto(double);

int main() {
    int fun = 0;
    double betrag=0.0;

    puts("Ihre Eingabe");
    puts("       <funktion> [<betrag>] ");
    puts("Bedeutung von <funktion>: 0=Mwst. vom Netto, 1=Brutto vom Netto, 2=Netto vom Brutto, 3=Ende ");
    puts("z. B. 0 99.95      (für die Berechnung der Mehrwertsteuer von 99.95 netto)");
    scanf("%d %lf", &fun, &betrag);
    getBetrag[0]=&berecheMwst;
    getBetrag[1]=&berecheBrutto;
    getBetrag[2]=&berecheNetto;

    printf("%0.2f", (getBetrag[fun])(betrag));

    return 0;
}

double berecheMwst(double betrag){
    return betrag*0.19;
};
double berecheBrutto(double betrag ){
    return betrag*1.19;
}
double berecheNetto(double betrag){
    return betrag/0.81;
}


