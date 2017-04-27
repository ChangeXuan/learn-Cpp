//
// Created by Day on 2017/4/17.
//

#ifndef LEARNCPP_COORDIN_H
#define LEARNCPP_COORDIN_H

struct polar {
    double distance;
    double angle;
};

struct rect {
    double x;
    double y;
};

polar *rectToPolar(rect *);
void showPolart(polar *);

#endif //LEARNCPP_COORDIN_H
