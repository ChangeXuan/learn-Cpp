//
// Created by Day on 2017/4/20.
//
#include <iostream>
#include "Tv.h"

bool Tv::volUp() {
    if(volume < maxVal) {
        volume ++;
        return true;
    }
    return false;
}

bool Tv::volDown() {
    if(volume > minVal) {
        volume --;
        return true;
    }
    return false;
}

void Tv::chanUp() {
    if(channel < maxChannel) {
        channel ++;
    } else {
        channel = 1;
    }
}

void Tv::chanDown() {
    if(channel > 1) {
        channel --;
    } else {
        channel = maxChannel;
    }
}

void Tv::setting() const {
    using std::cout;
    using std::endl;

    cout << "tv" << (state == Off ? "Off":"On") << endl;
    if(state == On) {
        cout << volume << endl;
        cout << channel << endl;
        cout << (mode == Antenna ? "Antenna":"Cable") << endl;
        cout << (input == TV ? "TV" : "DVD") << endl;
    }

}