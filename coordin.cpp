//
// Created by Day on 2017/4/17.
//
#include <iostream>
#include <cmath>
#include "coordin.h"
using namespace std;

polar *rectToPolar(rect *r) {

    polar *d = new polar;
    d->distance = sqrt(r->x*r->x+r->y*r->y);
    d->angle = atan2(r->y,r->x);
    return d;

}

void showPolart(polar *p) {
    const double radToDeg = 57.29577951;
    cout << p->distance << endl;
    cout << p->angle*radToDeg << endl;
}