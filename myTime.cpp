//
// Created by Day on 2017/4/18.
//
#include <iostream>
#include "myTime.h"

myTime::myTime() {
    hours = minutes = 0;
}

myTime::myTime(int h, int m) {
    hours = h;
    minutes = m;
}

void myTime::addMin(int m) {
    minutes = m;
}

void myTime::addHr(int h) {
    hours = h;
}

void myTime::reset(int h, int m) {
    hours = h;
    minutes = m;
}

myTime myTime::operator+(const myTime &t) const {
    myTime allTime;
    allTime.minutes = (minutes+t.minutes)%60;
    allTime.hours = (hours+t.hours)+(minutes+t.minutes)/60;
    return allTime;

}

myTime *myTime::operator-(const myTime &t) const {
    myTime *allTime = new myTime();

    int oneSum = hours*60+minutes;
    int twoSum = t.hours*60+t.minutes;
    oneSum -= twoSum;
    allTime->hours = oneSum / 60;
    allTime->minutes = oneSum % 60;

    return allTime;

}

void myTime::show() const {
    std::cout << hours << ":" << minutes << std::endl;
}