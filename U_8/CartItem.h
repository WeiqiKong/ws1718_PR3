//
// Created by XUEXI on 2017/12/1.
//

#ifndef U_8_CARTITEM_H
#define U_8_CARTITEM_H

#include <string>

using namespace std;
class CartItem {
private:
    string name;
    int anzahl;
    double einheit;
    long teamId;
public:
    static long lastId;

    long getTeamId() const;

    void setTeamId(long teamId);

    CartItem(const string &name, int anzahl, double einheit);

    const string &getName() const;

    void setName(const string &name);

    int getAnzahl() const;

    void setAnzahl(int anzahl);

    double getEinheit() const;

    void setEinheit(double einheit);

    double getCost();

    void add(CartItem *cartItem);

    void toString();
};




#endif //U_8_CARTITEM_H
