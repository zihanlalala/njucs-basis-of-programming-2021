#include<iostream>
using namespace std;

int main(){
    int n,k;
    cin >> n >> k;
    int a[21] = {0};
    int sum = 0;
    int maxsum = 0;
    for(int i=0;i<n;++i){
        cin >> a[i];
        // 计算前 k 个元素，也就是第一个子数组的和
        if(i < k){
            sum += a[i];
        }
    }
    maxsum = sum;
    for(int i=k;i < n; ++i){
        // sum中保存了 i-k-1 到 i-1 的子数组的和
        // 因此 i-k 到 i 的子数组的和可以通过减去子数组最左边的元素再加入新增加的元素来得到
        sum = sum - a[i-k] + a[i];
        if (maxsum < sum){
            maxsum = sum;
        }
    }
    cout << maxsum;
    return 0;


}
