#include <stdio.h>
int main()
{
    int n = 0;
    printf("请输入一个数字n:");
    while (scanf("%d", &n) == 1)
    {
        int i = 0;
        int j = 0;
        // for (i = 0; i < n; i++)
        // {
        //     for (j = 0; j < n; j++)
        //     {
        //         if (i + j < n - 1)
        //         {
        //             printf("  ");
        //         }
        //         else
        //         {
        //             printf("* ");
        //         }
        //     }
        //     printf("\n");
        // }
        for (i = 0; i < n; i++)
        {                                   // 外层循环控制输出次数
            for (j = n - 1 - i; j > 0; j--) // 需要动态调整打印个数
            {                               // 先打印空格，
                printf("  ");
            }
            for (int n = 0; n < i - j; n++)
            { // 先打印空格，
                printf("* ");
            }
            printf("\n");
        }
    }

    return 0;
}