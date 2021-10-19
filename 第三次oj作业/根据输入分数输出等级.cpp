#include<iostream>
using namespace std;

int main(){
    int a;
    cin >> a;
    // 对于输入的分数，用if , else if ,else 来处理不同等级的情况。
    if(a >=90){
        cout << "A";
    }else if(a >= 80){
        cout << "B";
    }else if(a >= 70){
        cout << "C";
    }else if(a >= 60){
        cout << "D";
    }else {
        cout<<"E";
    }
    return 0;
}
