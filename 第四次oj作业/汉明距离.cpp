#include<iostream>
using namespace std;
int main(){
    int x,y;
    cin >> x >> y;
    // 用异或运算将所有不相同的位置为1，相同的位置位0
    int d = x ^ y;
    int dis = 0;
    for( int i =0;i< 32;++i){
        //  遍历int型的32个比特位，统计1的个数
        if((d & (1 << i)) != 0){
            dis++;
        }
    }
    cout << dis<< endl;
}
