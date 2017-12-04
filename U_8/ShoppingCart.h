//
// Created by XUEXI on 2017/12/1.
//

#ifndef U_8_SHOPPINGCART_H
#define U_8_SHOPPINGCART_H


#include <vector>
#include "CartItem.h"

class ShoppingCart {
private:
    vector<CartItem*> cartItems;
public:
    ShoppingCart();

    void add(CartItem* cartItem);

    double getTotalCost();

    CartItem *getItem(int pos);

    int getNumberOfItems();

    void toString();

    long *getTeamIds();

    const vector<CartItem *> &getCartItems() const;

    void setCartItems(const vector<CartItem *> &cartItems);
};


#endif //U_8_SHOPPINGCART_H
