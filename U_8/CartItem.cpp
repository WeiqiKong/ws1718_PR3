//
// Created by XUEXI on 2017/12/1.
//

#include <sstream>
#include <iomanip>
#include <iostream>
#include "CartItem.h"

long CartItem::lastId = 0;

const string &CartItem::getName() const {
    return name;
}

void CartItem::setName(const string &name) {
    CartItem::name = name;
}

int CartItem::getAnzahl() const {
    return anzahl;
}

void CartItem::setAnzahl(int anzahl) {
    CartItem::anzahl = anzahl;
}

double CartItem::getEinheit() const {
    return einheit;
}

void CartItem::setEinheit(double einheit) {
    CartItem::einheit = einheit;
}

CartItem::CartItem(const string &name, int anzahl, double einheit) : name(name), anzahl(anzahl), einheit(einheit) {
    CartItem::lastId++;
    this->teamId = CartItem::lastId;
}

double CartItem::getCost() {
    return CartItem::getAnzahl() * CartItem::getEinheit();
}

void CartItem::toString() {
    ostringstream os;

    os << fixed << left << anzahl
       << " x " << setw(30) << getName()
       << setw(10) << setprecision(2) << getEinheit();
    os << right << setw(5) << setprecision(2) << getCost() << endl;
    std::cout << os.str();
}

long CartItem::getTeamId() const {
    return teamId;
}

void CartItem::setTeamId(long teamId) {
    CartItem::teamId = teamId;
}
