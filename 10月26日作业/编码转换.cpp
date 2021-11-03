#include<iostream>
#include<bitset>
using namespace std;

int main(){
    const int bitnum = 16;
    int n;
    cin >> n;


    cout << bitset<bitnum>(n) << endl;
}
