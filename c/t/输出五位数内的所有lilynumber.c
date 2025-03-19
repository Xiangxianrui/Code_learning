// #include <stdio.h>

// int is_lil_number(int n)
// {
//     int i = 0;
//     int num1 = 0;
//     int num2 = 0;
//     for (i = 10; i < 10000; i *= 10)
//     {
//         num1 = n % i;
//         num2 = (n - num1) / (10000 / n);
//         if (num1 * num2 == n)
//         {
//             return 1;
//         }

//     }return 0;
// }

// int main()
// {
//     int i = 0;
//     for (i = 10000; i < 99999; i++)
//     {
//         if is_lily_number (i)
//         {
//             printf("%d\n", i);
//         }
//     }

//     return 0;
// }

#include <stdio.h>

int is_lily_number(int n)
{
    int num1, num2;
    int i;

    // 依次切分 10, 100, 1000, 10000
    for (i = 10; i <= 10000; i *= 10)
    {
        num1 = n % i;         // 取 n 的后几位
        num2 = n / i;         // 取 n 的前几位
        if (num1 * num2 == n) // 如果满足乘积等于自身
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int i;
    for (i = 1; i < 100000; i++) // 5 位数范围
    {
        if (is_lily_number(i)) // 修正 if 语法
        {
            printf("%d\n", i);
        }
    }
    return 0;
}