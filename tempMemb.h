//
// Created by Day on 2017/4/24.
//

#ifndef LEARNCPP_TEMPMEMB_H
#define LEARNCPP_TEMPMEMB_H

#include <iostream>

template <class T>
class beta {
private:
    template <class V>
    class hold {
    private:
        V val;
    public:
        hold(V i=0):val(i) {};
        void show() const {std::cout << val << std::endl;}
        V getVal() const {return val;}
    };
    hold<T> one;
    hold<int> two;
public:
    beta(T one1,int two2):one(one1),two(two2) {};
    template <class U>
    U blab(U u,T t) {return (two.getVal()+one.getVal())*u/t;}
    void show() const {one.show();two.show();}
};



#endif //LEARNCPP_TEMPMEMB_H
