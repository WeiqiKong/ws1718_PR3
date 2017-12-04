//
// Created by XUEXI on 2017/12/1.
//

#ifndef U_8_PERSON_H
#define U_8_PERSON_H
#include <cstdlib>
#include <string>
#include <iostream>

using namespace std;

class Person {
private:
    string name;
    int geburtsJahr;
public:

    Person(){
        this->name ="";
        this->geburtsJahr=0;
    }
    Person(string name,int geburtsJahr){
        this->name=name;
        this->geburtsJahr=geburtsJahr;
    }

    void print(){
        cout<<name<<"is in "<<geburtsJahr<<" geboren"<<endl;
    }

};


#endif //U_8_PERSON_H
