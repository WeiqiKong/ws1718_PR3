//
// Created by XUEXI on 2017/11/24.
//

#ifndef U_7_LISTE1END_H
#define U_7_LISTE1END_H
struct knoten {
    int wert;
    struct knoten *next;
};
void durchlaufen(struct knoten *kopf,struct knoten *ende);
struct knoten *suchen(struct knoten *kopf,int gesuchter_wert);
int einfuegen_kopf(struct knoten **kopfref, struct knoten *einzufueg,struct knoten **enderef);
int einfuegen_ende(struct knoten **enderef, struct knoten *einzufueg);
int einfuegen_nach(struct knoten *nachdiesem, struct knoten *einzufueg,struct knoten **ende);
struct knoten *entfernen_ende(struct knoten **kopfref,struct knoten **ende);
struct knoten *entfernen(struct knoten **kopfref,struct knoten *auszufueg);
#endif //U_7_LISTE1END_H
