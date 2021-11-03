#include <stdio.h>


// 自加
int zijia(int a)
{
    int yushu = 0;
    int ret = 0;
    while(a!=0)
    {
        yushu = a % 10;
        a = a / 10;
        ret = ret + yushu; // 不停加每次算出来的余数
    }
    return ret;
}

// 自乘
int zichen(int a)
{
    int yushu = 0;
    int ret = 1;
    while(a!=0)
    {
        yushu = a % 10;
        a = a / 10;
        ret = ret * yushu;  // 不停乘每次算出的余数
    }
    return ret;

}


int main()
{
    int a;
    scanf("%d",&a);
    // 自加的自乘
    int ret1 = zichen(zijia(a));
    // 自乘的自加
    int ret2 = zijia(zichen(a));
    printf("%d %d",ret1, ret2);
}