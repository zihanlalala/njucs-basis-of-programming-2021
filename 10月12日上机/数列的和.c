#include <stdio.h>

//求和
int main()
{
    // 读入输入
    int n;
    scanf("%d",&n);


    int i;
    int ret;    // ret存放要返回的答案
    for (i=1;i<=n;i++)
    {
        if (i%3!=0 && i%7!=0)   // 不能被3整除也不能被7整除的数是符合条件的，ret加上该数
        {
            ret += i;
        }
    }
    // 返回最终答案
    printf("%d", ret);
}