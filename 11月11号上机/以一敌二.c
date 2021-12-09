#include <stdio.h>


int main()
{
    int arr[20];
    int n;
    scanf("%d", &n);
    //读入元素
    for (int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }


    int max = 0;
    int max_idx = 0;
    // 找出最大的元素
    for (int i=0; i<n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            max_idx = i;
        }
    }

    // 判断是否足够大
    for (int i = 0; i < n; i++)
    {
        if (i!=max_idx && max <= 2*arr[i])
        {
            printf("-1");
            return 0;
        }
    }

    printf("%d",max_idx);
    return 0;
}