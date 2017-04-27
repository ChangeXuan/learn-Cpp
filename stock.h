//
// Created by Day on 2017/4/17.
//

#ifndef LEARNCPP_STOCK_H
#define LEARNCPP_STOCK_H
#include <string>

class stock {
    private:
        std::string company;
        long shares;
        double shareVal;
        double totalVal;
        void setTot();

    public:
        stock();
        stock(const std::string &co,long n = 0,double pr = 0.0);
        ~stock();
        void upDate(double);
        void show();

};
inline void stock::setTot() {totalVal = shares * shareVal;}

#endif //LEARNCPP_STOCK_H
