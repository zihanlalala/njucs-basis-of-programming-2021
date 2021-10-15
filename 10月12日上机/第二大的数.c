#include <stdio.h>

int main()
{
    int max1 = -1;  // max1变量保存第一大的数
    int max2 = -1;  // max2变量保存第二大的数

    int num;    
    while(scanf("%d",&num)!=EOF)    // 读数
    {
        // 如果读进来的数比现在最大的数大
        if (num > max1)
        {
            max2 = max1;    
            max1 = num;
        }

        // 如果读进来的数介于第一第二之间
        if (num < max1 && num > max2)
        {
            max2 = num;
        }
    }

    // 返回第二大的数
    printf("%d", max2);

}