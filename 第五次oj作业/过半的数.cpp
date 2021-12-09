#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[21] = {0};
    for(int i=0;i<n;++i){
        cin >> a[i];
    }
    int res = a[0];
    for(int i=0;i<n;++i){
        // 对于每一个元素都遍历数组计算出现的次数
        int cnt = 0;
        for(int j=0;j<n;++j){
            if(a[j] == a[i]){
                cnt++;
            }
            if(cnt > n/2){
                cout<< a[i];
                return 0;
            }
        }
    }

}
