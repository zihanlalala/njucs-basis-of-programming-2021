
#include<iostream>
#include<cmath>
#include<stdio.h>
using namespace std;

double factorial(int n){
    // 计算阶乘
    double res = 1;
    while(n != 0){
        res *= n;
        n--;
    }
    return res;
}

double n_item(int n, double x){
    // 计算第i项的值
    double res = pow(-1, n) * pow(x, 2*n+1) / factorial(2*n+1);
    //cout<< n << "n item is " << res << "pow "<< pow(-1, n)<< "pow2" << pow(x, 2*n+1) << "fac"<< factorial(2*n+1) <<endl;
    return res;
}


int main(){
    double x;
    cin >> x;
    int n;
    cin >> n;
    double res = 0;
    for(int i=0;i<=n;++i){
        res += n_item(i, x);
    }

    printf("%.5lf", res);
}
