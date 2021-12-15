#include <stdio.h>

int max(int a, int b)
{
    return a >= b ? a : b;
}
/* lead函数计算从当前数组开始玩，先手的人最多能领先后手的人多少分
nums: 数组
start: 数组可取范围的第一个索引
end： 数组可取范围的最后一个索引
*/
int lead(int* nums, int start, int end) {
    if (start == end) {
        return nums[start];  // 如果只有一个元素，则该元素值就是领先分
    }
    // 如果本轮先手的人从前面拿，计算先手的人能取得的最高分
    int scoreStart = nums[start] - lead(nums, start + 1, end);
    // 如果本轮先手的人从后面拿，计算先手的人能取得的最高分
    int scoreEnd = nums[end] - lead(nums, start, end - 1);
    // 玩家总是选择自己能取得的最高分
    return max(scoreStart , scoreEnd );
}

int main()
{
    int n;
    int arr[30];
    scanf("%d",&n);
    int i;
    for(i=0;i<n;i++)
        scanf("%d", &arr[i]);
    // 如果先手的人领先分大于等于0，输出1，否则输出2
    printf(lead(arr,0,n-1) >= 0 ? "1" : "2");
    return 0;
}
