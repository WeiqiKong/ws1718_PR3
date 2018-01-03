//
// Created by gravis on 25.12.17.
//

#include <iostream>
#include "Teilnehmer.h"
#include <random>
using std::cout;

Teilnehmer::Teilnehmer() {
    pos = 0;
}

int Teilnehmer::getPos() const {
    return pos;
}

void Teilnehmer::setPos(int pos) {
    Teilnehmer::pos = pos;
}

Teilnehmer::~Teilnehmer() {

}

void Igel::Move() {
    setPos(getPos() + 1);
}

void Igel::PrintRoad() {
    int pos = Teilnehmer::getPos();
    for (int i = 0; i < Ende; ++i) {
        if(i!=pos)
            cout << "-";
        else
            cout << "I";
    }
    cout << "\n";
}

void Hase::Move() {
    setPos(getPos() + getRandomNum());
}

void Hase::PrintRoad() {
    int pos = Teilnehmer::getPos();
    for (int i = 0; i < Ende; ++i) {
        if(i!=pos)
            cout << "-";
        else
            cout << "H";
    }
    cout << "\n";
}

int Hase::getRandomNum() {
    std::random_device r {};
    std::default_random_engine engine(r());
    std::uniform_int_distribution<int> uniform_dist(-10,10);
    int randomNum{uniform_dist(engine)};
    return randomNum;
}

