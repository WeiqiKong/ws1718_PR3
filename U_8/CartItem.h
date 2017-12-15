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
    const long itemId;

public:
    static long lastId;

    long getItemId() const;

    CartItem(const string &name, int anzahl, double einheit);

    CartItem(const CartItem & cartItem);

    CartItem& operator= (const CartItem & );

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
