//
// Created by XUEXI on 2017/11/24.
//
#include <stdio.h>
#include <stdlib.h>
#include "liste1end.h"

/*
 * void durchlaufen(struct knoten *kopf, struct knoten **ende) {
    struct knoten *laufzeiger;
    laufzeiger = kopf->next;
    while (laufzeiger != *ende) {
        printf("%d ", laufzeiger->wert);
        laufzeiger = laufzeiger->next;
    }
    printf("\n");
}*/

//void durchlaufen(struct knoten *kopf,struct knoten en) {
//    struct knoten *laufzeiger;
//    laufzeiger = kopf;
//    while (laufzeiger!=NULL) {
//        printf("%d ",laufzeiger->wert);
//        laufzeiger = laufzeiger->next;
//    }
//    printf("\n");
//}

void durchlaufen(struct knoten *kopf, struct knoten *ende) {
    struct knoten *laufzeiger;
    laufzeiger = kopf;
    printf("%d ", laufzeiger->wert);
    while (ende!=laufzeiger)
    {
        laufzeiger=laufzeiger->next;
        printf("%d ", laufzeiger->wert);
    }
    printf("\n");
}


/*struct knoten *suchen(struct knoten *kopf, struct knoten *ende, int gesuchter_wert) {
    struct knoten *laufzeiger;
    laufzeiger = kopf;
    while ((laufzeiger != ende) && (laufzeiger->wert != gesuchter_wert)) {
        laufzeiger = laufzeiger->next;
    }
    return laufzeiger;
}*/

struct knoten *suchen(struct knoten *kopf, int gesuchter_wert) {
    struct knoten *laufzeiger;
    laufzeiger = kopf;
    while ((laufzeiger->next != NULL) && (laufzeiger->wert != gesuchter_wert)) {
        laufzeiger = laufzeiger->next;
    }
    return laufzeiger;
}




/*
int einfuegen_kopf(struct knoten **kopfref, struct knoten *einzufueg) {
    if ((einzufueg==NULL)||(kopfref==NULL)) return -1;
    einzufueg->next = *kopfref;
    *kopfref = einzufueg;
    return 0;
}
*/

//int einfuegen_kopf(struct knoten **kopfref, struct knoten *einzufueg) {
//    if ((einzufueg == NULL) || (kopfref == NULL)) return -1;
//    einzufueg->next = (*kopfref)->next;
//    (*kopfref)->next = einzufueg;
//    return 0;
//}
int einfuegen_kopf(struct knoten **kopfref, struct knoten *einzufueg, struct knoten **enderef) {
    if ((einzufueg == NULL) || (kopfref == NULL)) return -1;
    if ((*kopfref) == NULL) {
        *kopfref = einzufueg;
        *enderef = einzufueg;
    } else {
        einzufueg->next = *kopfref;
        *kopfref = einzufueg;
    }
    return 0;
}

/*
int einfuegen_ende(struct knoten **kopfref, struct knoten *einzufueg) {
    struct knoten *ende;
    if ((einzufueg==NULL)||(kopfref==NULL)) return -1;
    if (*kopfref==NULL) {
        einzufueg->next = NULL;
        *kopfref = einzufueg;
    } else {
        ende = *kopfref;
        while (ende->next!=NULL) {
            ende = ende->next;
        }
        einfuegen_nach(ende,einzufueg);
    }
    return 0;
}
*/
int einfuegen_ende(struct knoten **enderef, struct knoten *einzufueg) {
    if (enderef == NULL || einzufueg == NULL) return -1;
    (*enderef)->next=einzufueg;
    *enderef=einzufueg;
    return 0;
}

int einfuegen_nach(struct knoten *nachdiesem, struct knoten *einzufueg,struct knoten **ende) {
    if ((nachdiesem == NULL) || (einzufueg == NULL)) return -1;
    if(nachdiesem==*ende)
        *ende=einzufueg;
    einzufueg->next = nachdiesem->next;
    nachdiesem->next = einzufueg;
    return 0;
}

struct knoten *entfernen_ende(struct knoten **kopfref, struct knoten **enderef) {
    struct knoten *vor_ende, *t_ende;
    if(*kopfref==*enderef){
        printf("Das Letzte Element!!");
        free(*enderef);
    }

    vor_ende=*kopfref;

    while(vor_ende->next!=*enderef){
        vor_ende=vor_ende->next;
    }

    t_ende=vor_ende->next;
    vor_ende->next=NULL;
    *enderef=vor_ende;
    return t_ende;
}

/*struct knoten *entfernen_ende(struct knoten **kopfref, struct knoten *ende) {
    struct knoten *ent_ende;
    if ((kopfref == NULL) || (*kopfref == NULL) || (ende == NULL)) return NULL;
    while ((*kopfref)->next->next != ende) {
        *kopfref = (*kopfref)->next;
    }
    ent_ende = (*kopfref)->next;
    (*kopfref)->next = ende;
    return ent_ende;
}*/




/*
struct knoten *entfernen(struct knoten **kopfref, struct knoten *ende, struct knoten *auszufueg) {
    struct knoten *vor_auszufueg;
    if ((auszufueg == NULL) || (kopfref == NULL) || (*kopfref == NULL)) return NULL;
    vor_auszufueg = *kopfref;
    while (vor_auszufueg->next != auszufueg) {
        if (vor_auszufueg->next == ende) return ende;
        vor_auszufueg = vor_auszufueg->next;
    }
    vor_auszufueg->next = auszufueg->next;
    return auszufueg;
}
*/

struct knoten *entfernen(struct knoten **kopfref, struct knoten *auszufueg) {
    struct knoten *vor_auszufueg;
    if ((auszufueg == NULL) || (kopfref == NULL) || (*kopfref == NULL)) return NULL;
    if (auszufueg == *kopfref) {
        *kopfref = (*kopfref)->next;
        return auszufueg;
    }
    vor_auszufueg = *kopfref;
    while (vor_auszufueg->next != auszufueg) {
        if (vor_auszufueg->next == NULL) return NULL;
        vor_auszufueg = vor_auszufueg->next;
    }
    vor_auszufueg->next = auszufueg->next;
    return auszufueg;
}




