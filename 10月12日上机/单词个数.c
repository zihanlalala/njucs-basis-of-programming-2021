//求单词个数


#include <stdio.h>
int main()
{
    int ret = 0;    // 用作保存答案
    char ch;    
    while(scanf("%c",&ch)!=EOF) //读入字符
    {
        // 每当读到空格，计数器加1
        if (ch == ' ') ret++;
    }
    // 单词个数是空格个数+1
    printf("%d",ret+1);
    return 0;
}