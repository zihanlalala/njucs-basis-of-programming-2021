 #include <stdio.h>

 int main()
 {
    int cnt = 0; // 计数器
    int key = 2021; 
    int guess;
    int last_guess; // 用来保存上次猜的数字
    for(int i = 0; i < 50; i++)
    {
        ++cnt;  // 每猜一次计数器加1
        scanf("%d",&guess);
        if (i!=0 && last_guess == guess) // 如果和上次猜的一样，本次就不计数
            --cnt;

        
        if (guess == key)   // 如果相等，打印计数器
        {
            printf("%d",cnt);
            break;
        }
        else if (guess > key)   // 如果太大
            printf("too big\n");
        else
            printf("too small\n"); // 如果太小

        last_guess = guess; // 将last_guess变量置为guess
    }
        
 }