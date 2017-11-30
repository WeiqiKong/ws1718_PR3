#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include "liste1end.h"


int main(void) {

    struct knoten *kopf = NULL, *ende = NULL;
    struct knoten *kn1, *kn2, *kn3, *kn4, *kn5, *kn6, *such, *entf;


    kn1 = (struct knoten *) malloc(sizeof(*kn1));
    kn1->wert = 5;

    if (einfuegen_kopf(&kopf, kn1, &ende) != 0) {
        printf("Fehler beim einfuegen\n");
        return -1;
    }
    puts("Nach einfuegen_kopf(kn1):");
    durchlaufen(kopf, ende);
    printf("Ende Knoten:%d\n", ende->wert);

    kn2 = (struct knoten *) malloc(sizeof(*kn2));
    kn2->wert = 6;
    einfuegen_nach(kn1, kn2, &ende);
    puts("Nach einfuegen_nach(kn1, kn2):");
    durchlaufen(kopf, ende);
    printf("Ende Knoten:%d\n", ende->wert);

    kn3 = (struct knoten *) malloc(sizeof(*kn3));
    kn3->wert = 10;
    einfuegen_nach(kn1, kn3, &ende);
    puts("Nach einfuegen_nach(kn1, kn3):");
    durchlaufen(kopf, ende);
    printf("Ende Knoten:%d\n", ende->wert);

    kn4 = (struct knoten *) malloc(sizeof(*kn4));
    kn4->wert = 12;
    einfuegen_ende(&ende, kn4);
    puts("Nach einfuegen_end(ende, kn4):");
    durchlaufen(kopf, ende);
    printf("Ende Knoten:%d\n", ende->wert);

    entfernen_ende(&kopf, &ende);
    puts("Nach Entfernen_end(kopf,ende):");
    durchlaufen(kopf, ende);
    printf("Ende Knoten:%d\n", ende->wert);

    entfernen(&kopf, kn3);
    puts("Nach Entfernen(kopf,knoten):");
    durchlaufen(kopf, ende);
    printf("Ende Knoten:%d\n", ende->wert);

    /*
    kopf = malloc(sizeof(struct knoten));
    ende = malloc(sizeof(struct knoten));

    kopf->next = ende;

    kn1 = (struct knoten *) malloc(sizeof(*kn1));
    kn1->wert = 5;

    if (einfuegen_kopf(&kopf, kn1) != 0) {
        printf("Fehler beim einfuegen\n");
        return -1;
    }
    puts("Nach einfuegen_kopf(kn1):");
    durchlaufen(kopf, ende);

    kn2 = (struct knoten *) malloc(sizeof(*kn2));
    kn2->wert = 6;
    einfuegen_nach(kn1, kn2);
    puts("Nach einfuegen_nach(kn1, kn2):");
    durchlaufen(kopf, ende);

    kn3 = (struct knoten *) malloc(sizeof(*kn2));
    kn3->wert = 10;
    einfuegen_nach(kn1, kn3);
    puts("Nach einfuegen_nach(kn1, kn3):");
    durchlaufen(kopf, ende);

    kn4 = (struct knoten *) malloc(sizeof(*kn1));
    kn4->wert = 12;
    einfuegen_ende(&ende, &kn4);
    puts("Nach einfuegen_end(ende, kn4):");
    durchlaufen(kopf, ende);

    kn5 = (struct knoten *) malloc(sizeof(*kn1));
    kn5->wert = 14;
    kn6 = (struct knoten *) malloc(sizeof(*kn1));
    kn6->wert = 16;
    einfuegen_ende(&ende, &kn5);
    einfuegen_ende(&ende, &kn6);
    puts("Mehr Datei einspeichern (kn5, kn6):");
    durchlaufen(kopf, ende);

    puts("suche 12: ");
    such = suchen(kopf, ende, 12);
    if (such == NULL || such->wert != 12) {
        printf("Fehler: 12 nicht gefunden\n");
    } else
        puts("suche 12 erfolgreich!");

    puts("suche 19: ");
    such = suchen(kopf, ende, 19);
    if (such == ende || such->wert != 19) {
        printf("Fehler: 19 nicht gefunden\n");
    } else
        puts("suche 19 erfolgreich!");

    entf = entfernen(&kopf, ende, kn4);
    if (entf == NULL) {
        printf("Fehler: entfernen. 5 nicht gefunden\n");
        return -1;
    } else
        puts("entferne kn4 (12) erfolgreich!");
    durchlaufen(kopf, ende);

*/


    return 0;
};