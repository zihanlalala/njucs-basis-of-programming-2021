#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    // 闰年的定义是
    //  4年一闰，     百年不闰，    四百年再闰
    if((a % 4 == 0 && a%100 !=0) || a % 400 == 0){
        cout << 1;
    }else{
        cout << 0;
    }
    return 0;
}
