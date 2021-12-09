#include<iostream>
using namespace std;

int main(){
    int n;
    int a[25] = {0};
    cin >> n;
    int x;
    for(int i=0;i<n;++i){
        cin >> x;
        // a[x] == 1 表示该数存在
        a[x] = 1;
    }
    for(int i=0;i<=n;++i){
        // a[x] == 0 表示该数不存在，输出结果
        if(a[i] == 0){
            cout << i << endl;
        }
    }
}