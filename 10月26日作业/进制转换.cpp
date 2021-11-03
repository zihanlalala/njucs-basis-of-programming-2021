#include<iostream>
using namespace std;


void dtob(double x){
    cout << "0.";
    for(int i=0;i<5;++i){
        x *= 2;
        if(x>=1){
            cout << 1;
            x -=1;
        }
        else{
            cout << 0;
        }
    }
    cout << " ";
}

int main(){
    double x;
    cin >> x;
    dtob(x);

    char c;
    int res = 0;
    while(cin>>c){
        int d = c - '0';
        res = res*2 + d;
    }
    cout << res;
}
