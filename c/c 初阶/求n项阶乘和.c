#include <stdio.h>
int main()
// {
//     // 外层循环控制 n 次，每一个循环算一个阶乘，循环外 res += sum
//     // 内层循环控制求数字为 n 的阶乘
//     int n = 0;
//     int i = 1;
//     int chen_res = 1;
//     int sum_res = 0;
//     scanf("%d", &n);
//     for (i = 1; i <= n; i++)
//     {
//         chen_res = chen_res * i;
//         sum_res = sum_res + chen_res;
//     }
//     printf("前n 项的阶乘和为%d\n", sum_res);
//     return 0;
// }5

{
    int n = 0;
    int factorial = 1; // 存储阶乘值
    int sum_res = 0;   // 存储累加的阶乘和

    printf("请输入 n 的值: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        factorial *= i;       // 计算当前阶乘
        sum_res += factorial; // 累加到总和
    }

    printf("前 %d 项的阶乘和为 %d\n", n, sum_res);
    return 0;
}