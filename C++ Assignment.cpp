#include <iostream>

using namespace std;

int main()
{
    int hours = 0;
    int gross_pay = 0;
    int children = 0;
    double edufund = 0;
    double income_tax = 0;
    double NHCL = 0;
    double district_tax = 0;
    double netpay = 0;

    cout <<"How many hours do you work in a week?"<< endl;
    cin >> hours;
    if (hours <= 40) {
        gross_pay= 5* hours;
    } else {
        gross_pay= 200+ (7.5*(hours-40));
        // 200 is the is the maximum gross pay for regular hours worked
    }
    cout<<"How many children do you have?" << endl;
    cin>> children;
    if (children >3) {
        edufund= 0.50* (children-3);
    } else {
        edufund = 0;
    }
    income_tax = 0.15 * gross_pay;
    NHCL = 0.025 * gross_pay;
    district_tax = 0.01 * gross_pay;
    netpay = gross_pay - (income_tax + NHCL + district_tax + edufund);
    cout << "Your gross pay is GHC"<< gross_pay << endl;
    cout << "Your income tax is GHC"<< income_tax << endl;
    cout << "Your National Health Contribution Levy is GHC"<< NHCL << endl;
    cout << "Your District tax is GHC"<< district_tax << endl;
    cout << "Your netpay is GHC"<< netpay << endl;
    return 0;
}
