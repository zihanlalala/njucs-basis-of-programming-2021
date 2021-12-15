// chocolate and wrapper
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#define SZ_BUFF 50

// 该函数用来找出字符串第一个左括号括起来内容的长度（包含括号）。参数str代表字符串，n为字符串长度。
// 例如：对ab3[c4[dc]]ef这个字符串，我们调用bracket_size(str, 13) 应当返回8, 代表[c4[dc]]的长度
int bracket_size(char str[], int n)
{   int i;
    int left_bracket = 0;
    int right_bracket = 0;
    for(i =0; i < n; i++)
    {
        if (str[i] == '[')
            left_bracket++;
        else if (str[i] == ']')
            right_bracket++;
        if (left_bracket == right_bracket && left_bracket!=0)
        {
            return i+1;
        }
    } 
}

// 解码函数，str为待处理的字符串，n为字符串的长度
void decode(char str[], int n)
{
    if (n == 0) // 如果字符串大小为0直接返回
    {
        return;
    }
    // 如果以字符开头则直接打印这些字符
    if (str[0] >= 'a' && str[1] <= 'z')
    {
        int i;
        for (i = 0; i < n; i++)
        {
            if (str[i] <= 'z' && str[i] >='a')
                printf("%c", str[i]);
            else
                break;
        }
        // 遇到非字符，递归处理后面的部分
        decode(str+i, n-i);
    }
    // 如果以数字开头
    else
    {
        int number = str[0] - '0';  // 数字的值
        int sz = bracket_size(str+1,n-1);  // 计算数字后面括号括起来的东西的长度

        // 多次打印括号里面的东西
        int i;
        for (i = 0; i < number; i++)
        {
            decode(str+2, sz-2);
        }
        // 递归处理括号后面剩余的部分
        decode(str+sz+1,n-sz-1);
    }
}

int main()
{
    char str[SZ_BUFF];
    int n;
    scanf("%d",&n);
    scanf("%s",str);
    decode(str,n);
}
