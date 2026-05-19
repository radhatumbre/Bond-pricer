#include "Bond.h"

int main() {

    // double faceValue;
    // double couponRate;
    // double marketYield;
    // int maturity;
    // int frequency;

    // cout << "Face Value: ";
    // cin >> faceValue;

    // cout << "Coupon Rate (%): ";
    // cin >> couponRate;

    // cout << "Market Yield (%): ";
    // cin >> marketYield;

    // cout << "Maturity (Years): ";
    // cin >> maturity;

    // cout << endl;
    // cout << "Frequency Options:" << endl;
    // cout << "0  = Zero Coupon" << endl;
    // cout << "1  = Annual" << endl;
    // cout << "2  = Semiannual" << endl;
    // cout << "4  = Quarterly" << endl;
    // cout << "12 = Monthly" << endl;

    // cout << "Enter Frequency: ";
    // cin >> frequency;

    // Bond bond(faceValue,
    //           couponRate,
    //           marketYield,
    //           maturity,
    //           frequency);

    // cout << endl;

    Bond bond(1000,5,7,5,2);

    bond.display();

    cout << endl;
    cout << "Bond Price: "
        << bond.calculatePV() << endl;

    cout << "Bond Type: "
        << bond.bondType() << endl;
        
    cout << "Annual Coupon: "
        << bond.annualCoupon() << endl;

    return 0;
}