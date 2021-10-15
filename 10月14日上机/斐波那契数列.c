//斐波那契数列的非递归解法


#include <stdio.h>


int main()
{
    //读取n
    int n;
    scanf("%d", &n);

    // 由于计算第n个数仅依赖于第n-1,n-2数。我们用a,b记录迄今为止数列最后两个数
    int a = 0;  
    int b = 1;
    int tmp;
    
    // n==0或者n==1输出n即可
    if (n==0 || n==1)
    {
        printf("%d",n);
    }else{  //其他情况
    
        // while(--n)内的语句会执行n-1次。另注：while(n--)内的语句则会被执行n次
        while(--n)
        {
            // 对于a,b。我们通过下列方式将其更新为b,a+b
            tmp = b;    
            b = a+b;    
            a = tmp;
        }
        // 返回数列最后一个数
        printf("%d",b);
    }

    return 0;
}