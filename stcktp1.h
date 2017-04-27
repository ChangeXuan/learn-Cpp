//
// Created by Day on 2017/4/24.
//

#ifndef LEARNCPP_STCKTP1_H
#define LEARNCPP_STCKTP1_H

#include <iostream>

template <class Type>
class Stcktp {
private:
    enum {MAX = 10};
    int stackSize;
    Type *items;
    int top;
public:
    Stcktp(int size = MAX);
    Stcktp(const Stcktp &s);
    ~Stcktp() {delete []items;}
    bool isEmpty();
    bool isFull();
    bool push(const Type &item);
    bool pop(Type &item);
    Stcktp &operator=(const Stcktp &st);
    void getItems() {
        for (int index = 0;index < top; index ++) {
            std::cout<<items[index]<<std::endl;
        }
    }
};

template <class Type>
Stcktp<Type>::Stcktp(int size):stackSize(size),top(0) {
    items = new Type[size];
}

template <class Type>
Stcktp<Type>::Stcktp(const Stcktp &s) {
    stackSize = s.stackSize;
    top = s.top;
    items = new Type[stackSize];
    for(int index = 0;index<top;index ++) {
        items[index] = s.items[index];
    }
}

template <class Type>
bool Stcktp<Type>::isEmpty() {
    return top == 0;
}

template <class Type>
bool Stcktp<Type>::isFull() {
    return top == MAX;
}

template <class Type>
bool Stcktp<Type>::push(const Type &item) {
    if (top < MAX) {
        items[top++] = item;
        return true;
    }
    return false;
}

template <class Type>
bool Stcktp<Type>::pop(Type &item) {
    if (top > 0) {
        item = items[--top];
        std::cout << item << std::endl;
        return true;
    }
    return false;
}

template <class Type>
Stcktp& Stcktp<Type>::operator=(const Stcktp &st) {
    if (this == &st) {
        return *this;
    }
    delete []items;
    stackSize = st.stackSize;
    top = st.top;
    items = new Type[stackSize];
    for(int index = 0;index<top;index ++) {
        items[index] = st.items[index];
    }

    return *this;

}

#endif //LEARNCPP_STCKTP1_H
