#include <stdio.h>
int main()
{
    // again://这是一个标签。可以用来跳转，但必须在一个函数内跳转
    //     printf("hehe\n");
    //     printf("haha\n");
    //     goto again;
    //     return 0;
    // 关机程序
    int i = 0;
    for (i = 1; i <= 100; i++)
    {
        if (i % 2 == 1)
            printf("%d\n", i);
    }
}