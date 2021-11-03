#include<iostream>
using namespace std;


void dtob(double x){
    // 十进制纯小数转二进制
    cout << "0.";
    for(int i=0;i<5;++i){
        x *= 2;
        // 根据转换公式，当个位为1时，对于的二进制位就是1，个位为0时，对应二进制位为0
        if(x>=1){
            cout << 1;
            x -=1;
        }
        else{
            cout << 0;
        }
    }
    cout << " ";
}

int main(){
    double x;
    cin >> x;
    dtob(x);

    char c;
    int res = 0;
    // 按字符读取每个数字
    while(cin>>c){
        // 利用ASCII码将字符表示转化为数字
        int d = c - '0';
        res = res*2 + d;
    }
    cout << res;
}
