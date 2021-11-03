#include<iostream>
using namespace std;
int main(){
    int x,y;
    cin >> x >> y;
    int d = x ^ y;
    int dis = 0;
    for( int i =0;i< 32;++i){
        if((d & (1 << i)) != 0){
            dis++;
        }
    }
    cout << dis<< endl;
}
