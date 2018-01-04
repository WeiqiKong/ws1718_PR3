#include <iostream>
#include <vector>
#include "Int20.h"
#include "Teilnehmer.h"

#define ROUND 10

int main() {
    using namespace std;
    vector<Teilnehmer *> teilnehmers;
    teilnehmers.push_back(new Igel());
    teilnehmers.push_back(new Hase());

    for (int j = 0; j < ROUND; ++j) {
        if (j == 0) {
            cout << "Start:\n";
            teilnehmers[0]->PrintRoad();
            teilnehmers[1]->PrintRoad();
        } else {
            cout << "Schritt " << j << ":\n";
            for (int i = 0; i < 2; ++i) {
                teilnehmers[i]->Move();
                teilnehmers[i]->PrintRoad();
            }
        }

    }

    for (int i = 0; i < 2; ++i) {
        delete teilnehmers[i];
    }





//    using namespace std;
//    Int20 int20 {"123456"};
//    cout<<int20<<endl;
//    cout << " address:" << &int20 << endl;
//
//    Int20 int20_copy = int20;
//    cout<<int20<<endl;
//    cout << " address:" << &int20_copy << endl;
//
//    int20 += int20_copy;
//    cout<<int20<<endl;
//    cout << " address:" << &int20 << endl;
//
//    Int20 int20_plus = int20 + int20_copy;
//    cout<<int20<<endl;
//    cout << " address:" << &int20_plus << endl;
//    cout<<boolalpha<<(int20<int20_plus)<<endl;

    return 0;
}