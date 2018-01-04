//
// Created by gravis on 15.12.17.
//

#include "Int20.h"
#include <string>
Int20::Int20(char *val) {
    length = strlen(val);
    for (int i = 0; i < INT_LENGTH; ++i) {
        if (i < length) {
            stellen[INT_LENGTH - 1 - i] = val[length - i - 1];
        } else {
            stellen[INT_LENGTH - 1 - i] = '0';
        }
    }
}

//
//void Int20::print() {
//
//    for (int i = 0; i < length; ++i) {
//        printf("%c", stellen[INT_LENGTH - length + i]);
//    }
//    std::cout << std::endl;
//}

Int20 &Int20::operator=(const Int20 &i) {
    if (this == &i)
        return *this;
    strcpy(stellen, i.stellen);
    length=i.getLength();
    return *this;
}

Int20 & Int20::operator+=(const Int20 &i) {
    return add20(i);
}

Int20 Int20::operator+(const Int20 &i) {

    return add20(*this, i);
}


const char *Int20::getStellen() const {
    return stellen;
}


int Int20::getLength() const {
    return length;
}


Int20 Int20::add20(Int20 &a, const Int20 &b) {
    Int20 sum;
    int sum_2_stellen;

    for (int i = 0; i < INT_LENGTH; ++i) {
        sum_2_stellen = a_plus_b_inArray(a, b, INT_LENGTH - 1 - i);
        if (sum_2_stellen >= 10) {
            sum_2_stellen = sum_2_stellen - 10;
            sum.stellen[INT_LENGTH - 1 - i] += sum_2_stellen;
            sum.stellen[INT_LENGTH - 2 - i]++;
        } else if ((sum_2_stellen == 9) && (sum.stellen[INT_LENGTH - 1 - i] == '1')) {
            sum.stellen[INT_LENGTH - 2 - i]++;
        } else
            sum.stellen[INT_LENGTH - 1 - i] += sum_2_stellen;
    }
    int sum_length = INT_LENGTH, temp = 0;
    while (sum.stellen[temp] == '0') {
        sum_length--;
        temp++;
    }
    sum.length = sum_length;
    return sum;
}

Int20 & Int20::add20(const Int20 &b) {
    Int20 sum;
    int sum_2_stellen;

    for (int i = 0; i < INT_LENGTH; ++i) {
        sum_2_stellen = a_plus_b_inArray(*this, b, INT_LENGTH - 1 - i);
        if (sum_2_stellen >= 10) {
            sum_2_stellen = sum_2_stellen - 10;
            sum.stellen[INT_LENGTH - 1 - i] += sum_2_stellen;
            sum.stellen[INT_LENGTH - 2 - i]++;
        } else if ((sum_2_stellen == 9) && (sum.stellen[INT_LENGTH - 1 - i] == '1')) {
            sum.stellen[INT_LENGTH - 2 - i]++;
        } else
            sum.stellen[INT_LENGTH - 1 - i] += sum_2_stellen;
    }
    int sum_length = INT_LENGTH, temp = 0;
    while (sum.stellen[temp] == '0') {
        sum_length--;
        temp++;
    }
    length=sum.length = sum_length;
    init(sum);
    return *this;
}

int Int20::a_plus_b_inArray(Int20 &a, const Int20 &b, int pos) {
    return a.stellen[pos] + b.stellen[pos] - '0' - '0';
};


bool Int20::operator<(const Int20 &i) {
    int j;
    for(j=0;j<20;j++){
        if(stellen[j]<i.stellen[j])
            return true;
        if(stellen[j]>i.stellen[j])
            return false;
    }
    return false;
}

Int20::Int20() {
    length=0;
    strcpy(stellen, "");
}

void Int20::init(const Int20 &int20) {
    length=int20.length;
    strcpy(stellen,int20.stellen);
}


std::ostream& operator<<(std::ostream &os, const Int20 &int20) {
    using std::string;
    string s;
    for (int i = 0; i < int20.length; ++i) {
        s.push_back(int20.stellen[INT_LENGTH - int20.length + i]);
    }
    os << s;
    return os;
}



