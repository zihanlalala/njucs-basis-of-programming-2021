#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
    int x;
    cin >> x;
    for(int i=x; i>=0; --i){
        if(i*i > x){
            continue;
        }
        for(int j=i; j >= 0; --j){
            if(i*i + j*j > x){
                continue;
            }
            for(int  k=j;k>=0;--k){
                if(i*i + j*j + k*k > x){
                    continue;
                }
                for(int l=k; l>=0; --l){
                    if(i*i + j*j + k*k + l*l == x){
                        printf("%d %d %d %d", i, j, k, l);
                        return 0;
                    }
                }
            }
        }
    }
}
