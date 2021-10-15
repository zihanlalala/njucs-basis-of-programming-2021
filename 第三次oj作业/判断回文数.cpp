#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    // 根据输入的数是几位数分别处理。

    if(a >=1000){
        // 输入为4位数
        // 个位是 a%10, 千位是 a/1000， 十位是 a%100/10, 百位是a/100%10
        if(a%10 == a/1000 && a%100/10 == a/100%10){
            cout << 1;
        }else{
            cout << 0;
        }
    }else if(a >= 100){
        // 输入为3位数
        // 个位是 a%10， 百位是a/100
        if(a %10 == a/100){
            cout << 1;
        }else{
            cout << 0;
        }
    }else if(a >= 10){
        // 输入为2位数
        // 个位是 a%10, 十位是 a/10
        if(a % 10 == a / 10){
            cout << 1;
        }else{
            cout << 0;
        }
    }else{
        // 1位数一定是回文数
        cout << 1;
    }


    return 0;
}
