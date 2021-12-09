#include<iostream>
#include<stdio.h>
#include<cmath>
#include<iomanip>
using namespace std;


const int alpha = 13;

int main(){


    cout << pow(10, 10000) << endl;
    cout << pow(10, 10000) * 0 << endl;

    int n;
    double x;
    cin >> n >> x;
    long double res=1;
    double last_coeffient = 1;

    for(int i=1;i<=13 && i < n;++i){
        last_coeffient = last_coeffient / i * (alpha - i + 1);
        res += last_coeffient * pow(x, i);
    }
    printf("%.0Lf\n", res);
    cout << fixed << setprecision(0) << res<<endl;
    printf("%.3lf", pow((1+x), 13));
}
