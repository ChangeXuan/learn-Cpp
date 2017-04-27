//
// Created by Day on 2017/4/19.
//
#include <iostream>
#include "test.h"
using namespace std;
test::test() {
    cout << "this defualt init" << endl;
}

test::test(int &a, int &b) {
    oneNum = a;
    twoNum = b;
    cout << a << ":" << b << endl;
    cout << "this self init" << endl;
}

test::~test() {
    cout << "this delete self" << endl;
}

ostream &operator << (ostream &os, const test &num) {
    os << num.oneNum;
    return os;
}
