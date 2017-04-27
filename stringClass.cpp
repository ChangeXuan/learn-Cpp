//
// Created by Day on 2017/4/19.
//
#include <cstring>
#include "stringClass.h"
using std::cin;
using std::cout;

int stringClass::numFlag = 0;

int stringClass::howMany() {
    return numFlag;
}

stringClass::stringClass() {
    len = 4;
    str = new char[1];
    str[0] = '\0';
    numFlag ++;
}

stringClass::stringClass(const char *s) {
    len = std::strlen(s);
    str = new char[len+1];
    std::strcpy(str,s);
    numFlag ++;
}

stringClass::stringClass(const stringClass &st) {
    len = st.len;
    str = new char[len+1];
    std::strcpy(str,st.str);
    numFlag ++;
}

stringClass::~stringClass() {
    cout << "good by" << std::endl;
    delete []str;
}

stringClass &stringClass::operator=(const stringClass &s) {
    if(this == &s) {
        return *this;
    }
    delete []str;
    len = s.len;
    str = new char[len + 1];
    std::strcpy(str,s.str);
    return *this;
}

stringClass &stringClass::operator=(const char *s) {
    delete []str;
    len = std::strlen(s);
    str = new char[len+1];
    std::strcpy(str,s);
    return *this;
}

char &stringClass::operator[](int i) const {
    return str[i];
}




