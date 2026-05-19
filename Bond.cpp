#include "Bond.h"
#include <cmath>

Bond::Bond(double fv,
           double cr,
           double my,
           int mat,
           int freq) {

    faceValue = fv;
    couponRate = cr;
    marketYield = my;
    maturity = mat;
    frequency = freq;
}

void Bond::display() const {

    cout << "Bond Details" << endl;

    cout << "Face Value: " << faceValue << endl;
    cout << "Coupon Rate: " << couponRate << "%" << endl;
    cout << "Market Yield: " << marketYield << "%" << endl;
    cout << "Maturity: " << maturity << " years" << endl;
    cout << "Frequency: " << frequency << endl;
}

double Bond::calculatePV() const {

    if (frequency == 0) {

        double pv = faceValue /
                    pow(1 + (marketYield / 100), maturity);

        return pv;
    }

    double couponPayment =
        (faceValue * (couponRate / 100)) / frequency;

    double periodicYield =
        (marketYield / 100) / frequency;

    int totalPeriods =
        maturity * frequency;

    double pv = 0.0;

    for (int t = 1; t <= totalPeriods; t++) {

        pv += couponPayment /
              pow(1 + periodicYield, t);
    }

    pv += faceValue /
          pow(1 + periodicYield, totalPeriods);

    return pv;
}

string Bond::bondType() const {

    if (couponRate > marketYield) {
        return "Premium Bond";
    }

    else if (couponRate < marketYield) {
        return "Discount Bond";
    }

    else {
        return "Par Bond";
    }
}

double Bond::annualCoupon() const {

    return faceValue * (couponRate / 100);
}




