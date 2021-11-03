#include <stdio.h>


// 计算阶乘
int factorial(int n)
{
    int ret = 1;
    do{
        ret *= n;
        --n;
    }while(n >=2);

    return ret;
}

// 计算a_mn, m在上,n在下
int a_mn(int m, int n)
{
    return factorial(n) / factorial(n-m);
}

// 计算c_mn，m在上，n在下
int c_mn(int m, int n)
{
    return factorial(n) / (factorial(m) * factorial(n-m));
}

int main()
{
    int m, n;
    scanf("%d %d",&m,&n);
    // 输出，中间有空格
    printf("%d %d",a_mn(m,n),c_mn(m,n));

}