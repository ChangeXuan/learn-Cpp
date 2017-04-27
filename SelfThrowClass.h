//
// Created by Day on 2017/4/20.
//

#ifndef LEARNCPP_SELFTHROWCLASS_H
#define LEARNCPP_SELFTHROWCLASS_H
#include <iostream>

class OneThrow {
private:
    double one;
    double two;
public:
    OneThrow(double one=0,double two=0):one(one),two(two) {}
    const char *msg() {
        std::cout << "OneThrow:" << this->one << std::endl;
    }
};

class TwoThrow {
private:
    double one;
    double two;
public:
    TwoThrow(double one = 0,double two = 0):one(one),two(two) {}
    const char *msg() {
        std::cout << "TwoThrow:" << this->one << std::endl;
    };
};

#endif //LEARNCPP_SELFTHROWCLASS_H
