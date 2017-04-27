//
// Created by Day on 2017/4/24.
//

#ifndef LEARNCPP_ARRAYTP_H
#define LEARNCPP_ARRAYTP_H

#include <iostream>

template <class Type,int n>
class ArrayTp {
private:
    Type arry[n];
public:
    ArrayTp() {}
    ArrayTp(const Type &v);
    virtual Type &operator[] (int i);
    virtual Type operator[] (int i) const;
};

template <class Type,int n>
ArrayTp<Type,n>::ArrayTp(const Type &v) {
    for (int i = 0;i < n;i++) {
        arry[i] = v;
    }
}

template <class Type,int n>
Type ArrayTp<Type,n>::operator[](int i) const {
    if (i<0 && i>=n) {
        std::exit(EXIT_FAILURE);
    }
    return arry[i];
}

template <class Type,int n>
Type& ArrayTp<Type,n>::operator[](int i) {
    if (i<0 && i>=n) {
        std::exit(EXIT_FAILURE);
    }
    return arry[i];
}

#endif //LEARNCPP_ARRAYTP_H
