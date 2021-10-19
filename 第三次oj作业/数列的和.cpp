#include<iostream>
using namespace std;
int main(){
    int a, sum;
    sum = 0;
    // 数列求和
    //我们不需要用数组保留所有输入的数， 只需要记录求和的结果
    while(cin >> a){
        sum += a;
    }
    cout << sum;
}

