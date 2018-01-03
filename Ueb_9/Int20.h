//
// Created by gravis on 15.12.17.
//

#ifndef UEB_9_INT20_H
#define UEB_9_INT20_H

#define INT_LENGTH 20

#include <cstring>
#include <iostream>

class Int20 {
private:
    char stellen[INT_LENGTH];
    int length;

    Int20 add20(Int20 &a, const Int20 &b);

    int a_plus_b_inArray(Int20 &a, const Int20 &b, int pos);

    Int20 &add20(const Int20 &b);

public:

    Int20(char[]);

    Int20();

    Int20 &operator=(const Int20 &i);

    Int20 &operator+=(const Int20 &i);

    Int20 operator+(const Int20 &i);

    bool operator<(const Int20 &i);

    const char *getStellen() const;

    int getLength() const;

    void init(const Int20 &int20);

    friend std::ostream& operator<<(std::ostream &os, const Int20 &int20);
};


#endif //UEB_9_INT20_H
