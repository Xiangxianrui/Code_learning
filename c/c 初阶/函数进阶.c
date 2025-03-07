#include <stdio.h>
#include <math.h>

// // 交换两个整数的值
// void Swap(int *px, int *py)
// {
//     int temp = *px;
//     *px = *py;
//     *py = temp;
// } // 只读不写的话就只传值，既要读还要写，就得传地址

// int Add(int x, int y)
// {

//     return x + y;
// }
// int is_sushu(int i);
// int main()

//     int a = 0;
//     int b = 0;

//     printf("请输入两个整数: ");
//     scanf("%d%d", &a, &b);

//     printf("交换前: a = %d, b = %d\n", a, b);
//     Swap(&a, &b);
//     printf("交换后: a = %d, b = %d\n", a, b);

//     int res = Add(a, b);
//     printf("a + b =%d\n", res);

// // 打印 1-100 的素数
// {
//     int i = 0;
//     for (i = 2; i <= 100; i++)
//     // {
//     //     int isPrime = 1; // 假设 i 是素数
//     //     for (j = 2; j <= sqrt(i); j++)
//     //     {
//     //         if (i % j == 0)
//     //         {                // 如果 i 能被 j 整除，说明 i 不是素数
//     //             isPrime = 0; // 标记 i 不是素数
//     //             break;       // 直接跳出 j 的循环，减少计算量
//     //         }
//     //     }
//     //     if (isPrime)
//     //     { // 只打印素数
//     //         printf("%d\n", i);
//     //     }
//     // }
//     {
//         if (is_sushu(i))
//         {
//             printf("%d\n", i);
//         }
//     }
//     return 0;
// }
// int is_sushu(int i) // 给定一个 i，判断 i 是不是素数
// {
//     int j = 0;

//     if (i <= 1)
//         return 0; // 处理 i <= 1 的情况

//     int isPrime = 1;               // 假设 i 是素数
//     for (j = 2; j <= sqrt(i); j++) // 遍历到 sqrt(i) 进行判断
//     {
//         if (i % j == 0)
//         {
//             isPrime = 0; // 标记 i 不是素数
//             break;       // 直接跳出 j 的循环，减少计算量
//         }
//     }
//     return isPrime;
// }//数组传参，传的是数组第一个元素的地址

// 一个函数，每调用一次 num 就会+1
void plus_one(int *num)
{
    (*num) += 1;
    // return (*p)++;是不行的，会先返回再添加，直接返回(*p)
}
int main()
{

    int number = 0;
    plus_one(&number);
    printf("%d\n", number);
    plus_one(&number);
    printf("%d\n", number);
    plus_one(&number);
    printf("%d\n", number);

    return 0;
}