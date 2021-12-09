#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100], ret[100];
    scanf("%s",str1);
    scanf("%s",str2);
    int len_str1 = strlen(str1);
    int len_str2 = strlen(str2);

    int p1 = 0, p2 = 0, p_ret = 0;
    
    // 两个数组都没结束时
    while (p1 < len_str1 && p2 < len_str2)
    {
        if (str1[p1] < str2[p2])
        {
            ret[p_ret] = str1[p1];
            p1++;
        }else
        {
            ret[p_ret] = str2[p2];
            p2++;
        }
        ++p_ret;
    }


    if (p1 < len_str1)
    {
        for (int i = p1; i < len_str1; i++)
        {
            ret[p_ret] = str1[i];
            p_ret++;
        }
    }
    if (p2 < len_str2)
    {
        for (int i = p2; i< len_str2; i++)
        {
            ret[p_ret] = str2[i];
            p_ret++;
        }
    }
    ret[p_ret] = 0; //最后一个为0


    printf("%s", ret);
}