//
// Created by Day on 2017/4/24.
//

#ifndef LEARNCPP_STACK_H
#define LEARNCPP_STACK_H

#include <iostream>

template <class Type>
class Stack {
private:
    enum {MAX = 10};
    Type items[MAX];
    int top;
public:
    Stack();
    bool isEmpty();
    bool isFull();
    bool push(const Type &item);
    bool pop(Type &item);
    void getItems() {
        for (int index = 0;index < top; index ++) {
            std::cout<<items[index]<<std::endl;
        }
    }
};

template <class Type>
Stack<Type>::Stack() {
    top = 0;
}

template <class Type>
bool Stack<Type>::isEmpty() {
    return top == 0;
}

template <class Type>
bool Stack<Type>::isFull() {
    return top == MAX;
}

template <class Type>
bool Stack<Type>::push(const Type &item) {
    if (top < MAX) {
        items[top++] = item;
        return true;
    }
    return false;
}

template <class Type>
bool Stack<Type>::pop(Type &item) {
    if (top > 0) {
        item = items[--top];
        std::cout << item << std::endl;
        return true;
    }
    return false;
}

#endif //LEARNCPP_STACK_H
