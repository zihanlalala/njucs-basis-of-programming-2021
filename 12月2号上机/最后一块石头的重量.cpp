#include <stdio.h>

// 碰撞
void collide(int arr[], int n);

// 判断数组里是否有两个及以上非0的数
int more_than_two(int arr[], int n);

int main(int argc, char* argv[])
{
   
   // 读取输入
   int arr[30];
   int n;
   scanf("%d",&n);
   int i = 0;
   while(i < n)
   {
       scanf("%d", &arr[i]);
       i++;
   }

   // 持续碰撞
   while(more_than_two(arr, n))
   {
       collide(arr,n);
   }

   // 输出结果
   if(arr[0]!=0){
       printf("%d", arr[i]);
   }else{
        printf("0");
   }
//    for (int i = 0; i<n;i++)
//    {
//        if (arr[i] != 0)
//        {   
//            // 打印输出
//            printf("%d", arr[i]);
//            return 0;
//        }
//    }

   return 0;
}

void collide(int arr[], int n)
{
    // 找出最大的两个数
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                int tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
            }
        }
    }
    // 相等的情况
    if (arr[n-1] == arr[n-2])
    {
        arr[n-1] = arr[n-2] = 0;
    }
    // 不等的情况
    else
    {
        arr[n-1] = arr[n-1] - arr[n-2];
        arr[n-2] = 0;
    }
}

int more_than_two(int arr[], int n)
{
    int cnt = 0;
    for(int i = 0; i<n;i++)
    {
        if (arr[i] != 0)
        {
            cnt +=1;
            if (cnt >= 2)   
                return 1;
        }
    }
    return 0;
}