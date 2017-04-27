//
// Created by Day on 2017/4/17.
//
#include <iostream>
#include "stock.h"

stock::stock() {
    std::cout << "default" << std::endl;
    company = "no name";
    shares = 0;
    shareVal = 0.0;
    totalVal = 0.0;
}

stock::stock(const std::string &co, long n, double pr) {
    std::cout << "self" << std::endl;
    company = co;
    shares = n;
    shareVal = pr;
    setTot();
}

stock::~stock() {
    std::cout << "good bye" << std::endl;
}

void stock::upDate(double price) {
    shareVal = price;
    setTot();
}

void stock::show() {
    std::cout << company << std::endl;
    std::cout << shares << std::endl;
    std::cout << shareVal << std::endl;
    std::cout << totalVal << std::endl;
}