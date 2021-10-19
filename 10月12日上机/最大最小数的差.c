// 最大数和最小数的差值

#include <stdio.h>
int main()
{
    int _max;   //存放最大数
    int _min;   //存放最小数


    int num;
    scanf("%d",&num);
    _max = _min = num;  // max和min的初值设成第一个数

    while(scanf("%d",&num)!=EOF)
    { 
        if (num>_max)
        {
            _max = num; // 读入数比_max大时，更新_max为读入数
        }
        if (num < _min)
        {
            _min = num; //读入数比_min小时，更新_min为读入数
        }
    }

    printf("%d",_max - _min);
}