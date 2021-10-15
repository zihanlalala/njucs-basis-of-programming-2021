#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    int d;
    cin >>a >>b >>c;

    // 三角形成立条件是短边之和大于第三边
    // 因此先找到两个较短的边

    // 在a 和 b中，使 a 变成较小值，b变成较大值
    if(a > b){
        // 交换 a 和 b 的值
        d = b;
        b = a;
        a = d;
    }
    // 在b和c中， 使 b 变成较小值，c变成较大值
    if( b > c){
        // 交换 c 和 d 的值
        d = c;
        c = b;
        b = d;
    }

    // 现在a,b,c的大小关系为 a < b < c，计算短边只和是否大于第三边
    if ( a + b > c){
        cout << 1;
    }else{
        cout << 0;
    }
    return 0;
}
