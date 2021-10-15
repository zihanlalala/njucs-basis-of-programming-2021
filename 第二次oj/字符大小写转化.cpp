#include<iostream>
using namespace std;
int main(){
    char a,b,c,d;
    cin >> a >> b >> c >> d;
    // 利用ASCII码进行转化，'a' 的ASCII是97， 'A'的ASCII是65.
    a = a - 'a' + 'A';
    b = b - 'a' + 'A';
    c = c - 'A' + 'a';
    d = d - 'A' + 'a';
    // 逆序输出
    cout << d << c << b << a << endl;

}
