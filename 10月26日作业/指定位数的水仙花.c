#include <stdio.h>
#include <math.h>


// 该函数判断数a是否为水仙花数
int is_sxx(int a)
{
    int origin = a; // origin用来保存a的副本
    int len = 0;    
    // 先算出这个数有几位
    while(a !=0 )
    {
        len += 1;
        a = a / 10;
    }


    a = origin;
    int yushu;  
    int result = 0; 
    while(a != 0)
    {
        yushu = a % 10;
        a = a / 10;
        result += pow(yushu,len);   // 计算每一位数的len次方，len为数的长度
    }

    // 如果算出的数和a相等，返回1
    if(result == origin)
    {
        return 1;
    }else{
        return 0;
    }

}


int sxx(int begin, int end)
{
    int i;
    int cnt; // 计数器
    // 从begin遍历到end
    for(i = begin; i <= end; i++)
    {
        if (is_sxx(i) == 1) cnt += 1;
    }

    return cnt;

}



int main()
{

    int begin, end;
    scanf("%d %d",&begin, &end);
    printf("%d", sxx(begin,end));
}