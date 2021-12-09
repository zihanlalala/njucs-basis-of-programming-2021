#include <stdio.h>


int main()
{
    char str[22];
    scanf("%s",str);    // 读取string
    int len = 0;

    // 获得字符串的长度，当然也可以用库函数strlen.注意这里的长度不包含结束符'\0'
    while (str[len]!='\0')
    {
        ++len;
    }

    int idx;
    int modify = 0; // 记录是否修改过

    //修改从末尾数第一个不为z的字符
    for (idx = len - 1; idx >= 0; idx--)
    {
        if (str[idx] != 'z')
        {
            str[idx] = str[idx] + 1;
            str[idx+1] = '\0';
            modify = 1;
            break;
        }
    }
    
    // 如果从未修改，说明是全z，此时在末尾加上一个a
    if (!modify)
    {
        str[len] = 'a';
        str[len+1] = '\0';  //注意此时字符串长度比输入字符串长1，所以一开始必须要开一个长度大于20的数组。
    }

    printf("%s",str);
}