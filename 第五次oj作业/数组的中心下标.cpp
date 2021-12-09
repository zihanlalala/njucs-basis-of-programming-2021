#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[21] = {0};

    // leftsum 表示左边部分的和
    int leftsum = 0;
    // rightsum 表示右边部分的和
    int rightsum = 0;

    for(int i=0;i<n;++i){
        cin >> a[i];
        // 最开始左边之和为0， 右边之和为整个数组的和
        rightsum += a[i];
    }
    // 对于每一个元素，判断其是否为中心
    for(int i=0;i<n;++i){
        // 中心元素不计入左右
        rightsum -= a[i];
        if(rightsum == leftsum){
            cout << i;
            return 0;
        }
        // i 元素不是中心，加到左边
        leftsum += a[i];
    }
    cout << "-1";
    return 0;

}
