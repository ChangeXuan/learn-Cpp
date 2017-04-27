//
// Created by Day on 2017/4/20.
//

#ifndef LEARNCPP_BRASS_H
#define LEARNCPP_BRASS_H
#include <string>

class Brass {
private:
    std::string fullName;
    long accName;
    double balance;
public:
    Brass(const std::string &s="no",long an = -1,double bal=0.0);
    void depositF(double amt);
    double balanceF() const;
    virtual void withDraw(double amt);
    virtual void viewAcct() const;
    virtual ~Brass();
};

class BrassPlus :Brass {
private:
    double maxLoan;
    double rate;
    double owesBank;
public:
    BrassPlus(const std::string &s = "no",long an=-1,
              double bal=0.0, double ml=500,
    double r = 0.11125);
    BrassPlus(const Brass &ba,double ml=500,double r=0.11125);
    void resetMax(double m) {maxLoan = m;};
    void resetRate(double r) {rate = r;};
    void resetOwes() {owesBank = 0;};
    virtual void viewAcct() const;
    virtual void withDraw(double amt);
};


#endif //LEARNCPP_BRASS_H
