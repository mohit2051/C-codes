#include<iostream>
using namespace std;

int main(){
    const int monthsInYear = 12;
    double principal = 0.0, realInterest =0.0, interest = 0.0;
    int yearsOfLoan = 0;
    cout<<"Enter the principal amount: \n";
    cin>> principal;
    cout<<"Enter the real world interest: \n";
    cin>> realInterest;
    interest = realInterest/100;
    cout<< "Enter the years of loan: \n";
    cin>> yearsOfLoan;

    double monthlyInterest = (double)interest/monthsInYear;
    long monthsOfLoan = yearsOfLoan * monthsInYear;

    cout<< "principal = " << principal <<" interest = "<<interest<<" yearsofLoan = " << yearsOfLoan <<" monthlyInterest = " <<monthlyInterest<< " monthsOfLoan = "<<monthsOfLoan<<endl;

    return 0;

}