//
// Created by Day on 2017/4/19.
//

#ifndef LEARNCPP_TEST_H
#define LEARNCPP_TEST_H

class test {
private:
    int oneNum;
    int twoNum;
public:
    test();
    test(int &,int &);
    ~test();
    friend std::ostream &operator << (std::ostream &os, const test &num);
};

#endif //LEARNCPP_TEST_H
