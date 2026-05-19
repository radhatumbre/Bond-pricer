#ifndef BOND_H
#define BOND_H

#include <iostream>

using namespace std;

class Bond {
private:
    double faceValue;
    double couponRate;
    double marketYield;
    int maturity;
    int frequency;

public:
    Bond(double fv,
         double cr,
         double my,
         int mat,
         int freq);

    void display() const;
    double calculatePV() const;
    string bondType() const;
    double annualCoupon() const;
};

#endif