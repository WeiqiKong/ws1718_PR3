#include <iostream>
#include "Person.h"
#include "CartItem.h"
#include "ShoppingCart.h"

using namespace std;

int main() {
    auto hundefutter = new CartItem{"Hundefutter", 6, 3.20};
    auto kekse = new CartItem{"Kekse", 4, 1.59};
    auto milch = new CartItem{"Milch", 1, 0.69};
    auto erdbeermarmelade = new CartItem{"Erdbeermarmelade", 3, 2.19};
    auto kekes2 = *kekse;

    cout<<kekes2.getItemId()<<endl;
    ShoppingCart shoppingCart{};
    shoppingCart.add(hundefutter);
    shoppingCart.add(kekse);
    shoppingCart.add(milch);
    shoppingCart.add(erdbeermarmelade);
    shoppingCart.toString();

    for (int i = 0; i < 4; ++i) {
        cout << shoppingCart.getItem(i)->getName() << ": ID - "
             << shoppingCart.getItem(i)->getItemId() << endl;
    }

//    cout << shoppingCart.getCartItems().size() << endl << sizeof(ids)<<endl<<CartItem::lastId;

    return 0;
}

//using namespace std;
//
//int main() {
//    Person *person = new Person {"Müller", 1234};
//    person->print();
//
//    return 0;
//}







//
//#include <iostream>
//using namespace std;
//
//int main() {
//
//    return 0;
//}


