//
// Created by XUEXI on 2017/12/1.
//

#include <sstream>
#include <iomanip>
#include <iostream>
#include "ShoppingCart.h"

void ShoppingCart::add(CartItem* cartItem){
    cartItems.push_back(cartItem);
}

double ShoppingCart::getTotalCost(){
    double summe=0;
    for(CartItem *cartItem:cartItems)
        summe=summe+cartItem->getCost();
    return summe;
}

CartItem * ShoppingCart::getItem(int pos){
    return cartItems.at(pos);
    //siez_type __u was kann das bedeuten?
}

int ShoppingCart::getNumberOfItems(){
    return cartItems.size();
}

ShoppingCart::ShoppingCart() {
}

void ShoppingCart::toString() {
    ostringstream os;
    for(auto item:cartItems)
        item->toString();

    os<<right<<setw(49)<<getTotalCost()<<endl;
    std::cout << os.str();
}

long* ShoppingCart::getTeamIds() {
    long *array {new long[CartItem::lastId]};
    for (int i = 0; i <CartItem::lastId; ++i) {
        array[i]=getCartItems().at(i)->getTeamId();
    }
    return array;

}

const vector<CartItem *> &ShoppingCart::getCartItems() const {
    return cartItems;
}

void ShoppingCart::setCartItems(const vector<CartItem *> &cartItems) {
    ShoppingCart::cartItems = cartItems;
}


