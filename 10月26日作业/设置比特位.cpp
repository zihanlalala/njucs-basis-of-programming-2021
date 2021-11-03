#include<iostream>
using namespace std;

int main(){
    int n,i,j;
    cin >> n >> i >> j;
    if(j == 0){
        n &= ~(1 << i);
    }
    else if(j == 1){
        n |= 1 << i;
    }
    cout << n <<endl;
}
