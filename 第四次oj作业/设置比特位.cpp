#include<iostream>
using namespace std;

int main(){
    int n,i,j;
    cin >> n >> i >> j;
    if(j == 0){
        // 将第i位置为0
        // 1 << i 得到只有第i位为1，其他位为0的数
        // 用~取反后，得到只有第i位为0，其他位为1的数。
        // 将n与该数做与运算，则其他位保持不变，只有第i位变成0
        n &= ~(1 << i);
    }
    else if(j == 1){
        // 将第i位置为1
        // 将第i位置位0， 1 << i 得到只有第i位为1，其他位为0的数
        // 将n与该数做或运算，则其他位保持不变，只有第i位变成1
        n |= 1 << i;
    }
    cout << n <<endl;
}
