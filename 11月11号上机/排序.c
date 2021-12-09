#include <stdio.h>


// 返回一个整型数的绝对值
int abs(int a)
{
    return a > 0 ? a : -a;
}


int main()
{
    int arr[20];
    int n;
    
    // 读入
    scanf("%d",&n);
    for (int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }

    // 冒泡排序
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-1-i; j++)
        {
            if (abs(arr[j]) > abs(arr[j+1]) )   
            {
                int tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
            }
        }
    }


    // 输出
    for (int i = 0; i < n; i++)
    {
        if (i != n-1)
        {
            printf("%d ", arr[i]);
        }else{
            printf("%d", arr[n-1]);
        }
        
    }

}