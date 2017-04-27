//
// Created by Day on 2017/4/18.
//

#ifndef LEARNCPP_MYTIME_H
#define LEARNCPP_MYTIME_H

class myTime {
private:
    int hours;
    int minutes;
public:
    myTime();
    myTime(int h,int m = 0);
    void addMin(int m);
    void addHr(int h);
    void reset(int h=0,int m=0);
    myTime operator+(const myTime &t) const;
    myTime *operator-(const myTime &t) const;
    void show() const;
};

#endif //LEARNCPP_MYTIME_H
