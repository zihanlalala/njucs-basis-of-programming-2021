#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    // a数组为输入的数组
    int a[21];
    // b数组为结果
    int b[21] = {0};
    for(int i=0;i<n;++i){
        cin >> a[i];
    }

    // 整体思路为： 先遍历数组，找到最小的元素，再遍历找到第二小的 ... 直到找到第 n 小的。
    // i 表示第 i 小的元素
    for(int i=0;i<n;++i){
        // 找到剩下的元素中最小的元素， mini为该元素的下标
        int mini;
        // 初始化mini为剩下所有元素中的第一个
        for(int t=0;t<n;++t){
            if(b[t] == 0){
                mini = t;
                break;
            }
        }

        // 在剩下的元素中找到最小元素的下标
        for(int j=0;j<n;++j){
            if(a[mini] > a[j] && b[j] == 0){
                mini = j;
            }
        }
        // 当前找到的下标是第i小的元素
        b[mini] = i+1;
    }
    for(int i=0;i<n;++i){
        cout << b[i]-1 << ' ';
    }

}
