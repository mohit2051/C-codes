#include<iostream>
#include<cmath>
using namespace std;

const double pi = 4.0 * atan(1.0) ;
/*
Approximating the CDF integral using the numerical scheme
*/

int main(){
    // setting the constant values for numerical formula.
    const double a1=0.319381530, a2=-0.356563782, a3=1.781477937,a4=-1.821255978, a5=1.330274429; 
    double X, CDF, n, N;
    double k = 0;
    cout<<"Enter the value of the random variable X "<<endl;
    cin>> X;
    X = fabs(X);

    k = (double) 1/(1+0.2316419*X);
    n = (double)exp(-0.5*X*X)/sqrt(2*pi);
    N = 1 - n * (a1*k + a2*pow(k,2) + a3*pow(k,3) + a4*pow(k,4)+ a5*pow(k,5));

    CDF = N;

// if the value of random variable X is negative then we subtract the value by 1 accordig to the numerical scheme method for CDF
    if(X<0){
        CDF = 1 - N;
    }
    cout<<"Final value of CDF  = "<< CDF<<endl;
    return 0;

}