#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double a,b,c;
    cin >> a >> b >> c;
    // 计算 delta
    double delta = b*b - 4*a*c;
    double sqrt_delta = sqrt(delta);
    // 计算两个根
    double x1, x2;
    x1 = (-b + sqrt_delta) / (2 * a);
    x2 = (-b - sqrt_delta) / (2 * a);
    cout << x1 << " "<< x2<<endl;
    return 0;
}
