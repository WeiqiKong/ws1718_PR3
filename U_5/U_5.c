#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define NAME_LEN 40
#define ARRAYGROESSE 10
typedef struct {
    char name[NAME_LEN + 1];
    int personalnummer;
    float gehalt;
} angestellter;

void print_all(angestellter *array[]);

void free0(char **p);

int main(void) {

/* Aufgabe 5.4
 *
 * char *p = malloc(10);
    printf("%p\n", p);
     Ausgabe z. B. 0x470228
    free0(&p);
    printf("%p\n", p);
     Ausgabe 0x0 oder 0 oder (nil) o. ä. */

   /* Aufgabe 5.2*/

     int i = 0;
    angestellter *array[ARRAYGROESSE] = {};

    while (i < 10) {
        printf("print eine Zahl > 10 zu endnen!\n");
        printf("i: ");
        scanf("%d", &i);
        do {} while (getchar() != '\n');

        if (i > 10) {
            break;
        }

        if (array[i] != NULL) {
            printf("Es gab in %d-ter Position schon einen Angesteller\n", i);
            free(array[i]);
            printf("und es wurde nämlcih erfolgreich gelöscht!!\n");
        } else {
            array[i] = (angestellter *) malloc(sizeof(angestellter));
            printf("Name: ");
            scanf("%50[^\n]", array[i]->name);
//             ausgeben

            do {} while (getchar() != '\n');

            printf("Personalnummer: ");
            scanf("%d", &(array[i]->personalnummer));
//             ausgeben

            do {} while (getchar() != '\n');

            printf("Gehalt: ");
            scanf("%f", &(array[i]->gehalt));

            print_all(array);
        }
    }

    for (int j = 0; j < 10; ++j) {
        free(array[0]);
    }



//    int i;
//    char name[50 + 1];
//    /* Zahl einlesen */
//    printf("i: ");
//    scanf("%d", &i);
//    /* Puffer leeren */
//    do {} while (getchar() != '\n');
//    /* Zeichenkette einlesen */
//    printf("Name: ");
//    scanf("%50[^\n]", name);
//    /* ausgeben */
//    printf("%d\n", i);
//    printf("%s\n", name);








/*
    char passwort[32] = "GeHeIm";
    char eingabe[32];
    printf("Adress von eingabe:%p\n",eingabe);
    printf("Adress von passwort:%p\n",passwort);
    printf("Bitte Passwort fuer den Hochsicherheitsbereich eingeben:\n");
    scanf("%31[^\n]", eingabe);
    if (!strncmp(eingabe, passwort, strlen(passwort))) {
        printf("Passwort korrekt - Willkommen im Hochsicherheitsbereich!\n");
        return 0;
    } else {
        printf("Passwort falsch - Zugang verweigert!\n");
        return -1;
    }*/



    /*für selbst Test
     *
     * char ort[11];
strcpy(ort,"langweilig");
printf("%s", ort);

angestellter angestellter1={"kongweiqi",12323,1231.23};
strcpy(angestellter1.name,"kongweiqi");
angestellter1.gehalt=123.23;
angestellter1.personalnummer=123123;

printf("\n%p %p %p",&(angestellter1.name),&(angestellter1.personalnummer),&(angestellter1.gehalt));

angestellter *angestellter2;
angestellter2 = (angestellter *)malloc(sizeof(angestellter));

strcpy(angestellter2->name,"kongweiqi");
angestellter2->gehalt=123.23;
angestellter2->personalnummer=123123;

printf("\n%p %p %p",&(angestellter2->name),&(angestellter2->personalnummer),&(angestellter2->gehalt));*/
}

void free0(char **pp) {
    free(*pp);
    *pp = 0;
}

void print_all(angestellter *array[]) {
    for (int i = 0; i < ARRAYGROESSE; ++i) {
        if (array[i] != NULL) {
            printf("************************\n");
            printf("Der %d-te Angesteller heißt : %s \nPersonalnummer ist :%d, Gehalt ist:%f\n",
                   i, array[i]->name, array[i]->personalnummer, array[i]->gehalt);
        }
    }
    printf("************************\n");
}