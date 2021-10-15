#include <iostream>
#include <iomanip>  // iomanip库用于控制输出格式

using namespace std;

int main()
{
    float weight;
    float height;
    float bmi;
    
    cin >> weight >> height;    
    bmi = weight / (height * height);   // bmi值的计算
    cout << fixed << setprecision(1);   // 设置保留小数点后一位
    cout << bmi << endl;    // 输出
     
    return 0;
}
