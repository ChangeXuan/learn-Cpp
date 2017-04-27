//
// Created by Day on 2017/4/19.
//

#ifndef LEARNCPP_STRINGCLASS_H
#define LEARNCPP_STRINGCLASS_H

#include <iostream>
using std::ostream;
using std::istream;

class stringClass {
private:
    char *str;
    int len;
    static int numFlag;
    static const int cinLim = 80;
public:
    //
    stringClass();
    stringClass(const char *s);
    stringClass(const stringClass &str);
    ~stringClass();
    int getLength() const {return len;}
    //
    stringClass &operator=(const stringClass &);
    stringClass &operator=(const char *);
    char &operator[](int i) const;
    //
    friend bool operator<(const stringClass &s1, const stringClass &s2);
    friend bool operator>(const stringClass &s1, const stringClass &s2);
    friend bool operator==(const stringClass &s1, const stringClass &s2);
    friend ostream &operator<<(ostream &os, const stringClass &s);
    friend istream &operator>>(istream &is,stringClass &s);
    //
    static int howMany();

};

#endif //LEARNCPP_STRINGCLASS_H
