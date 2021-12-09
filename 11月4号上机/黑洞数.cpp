#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
    int x;
    cin >> x;
    if(x % 111 == 0){
        cout << "NOT";
        return 0;
    }
    cout << x;
    if(x == 495){
        return 0;
    }
    for(int i=0;i<7;++i){
        int a,b,c;
        a = x / 100;
        c = x % 10;
        b = x / 10 % 10;

        if(a < c){
            int d = a;
            a = c;
            c = d;
        }
        if(c < b){
            int d = c;
            c = b;
            b = d;
        }
        if(a < c){
            int d = a;
            a = c;
            c = d;
        }
        int biggest = 100 * a + 10 * c + b;
        int smallest = 100 * b + 10 * c + a;
        x = biggest - smallest;
        cout << "-" << x;
        if(x == 495){
            break;
        }

    }
}
