#include <iostream>
using namespace std;

int main(){
    int m;
    int n;
    int t;
    int sum = 0;
    cin >> m >> n;
    // 不需要用数组来保存每个数的值
    // 每个数仅仅被输入，加到总和里，就不再使用，因此不需要保存。
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> t;
            sum = sum + t;
        }
    }
    cout << sum << endl;
}
