// #include <stdio.h>
// int get_sum(int num)
// {
//     if (num % 10 < 10)
//         return num;
//     else
//         return num % 10 + get_sum(num - num % 10);
// }

// int main()
// {
//     int num = 0;
//     scanf("%d", num);
//     int res = 0;

//     res = get_sum(num);

//     printf("%d\n", res);
// }
#include <stdio.h>

// int get_sum(int num)
// {
//     if (num == 0) // 递归终止条件
//         return 0;
//     return num % 10 + get_sum(num / 10); // 逐位求和
// }

// int main()
// {
//     int num = 0;
//     scanf("%d", &num); // 传入地址
//     int res = get_sum(num);
//     printf("%d\n", res);
//     return 0;
// }

// 求n的 k 次方
#include <stdio.h>
#include <math.h>

// 递归计算整数次方
double get_k(int n, int k)
{
    if (k == 0)
        return 1;
    if (k > 0)
        return n * get_k(n, k - 1);
    else
        return 1.0 / get_k(n, -k); // 处理负指数情况
}

int main()
{
    printf("请输入 n 和 k，将输出 n 的 k 次方\n");
    double n = 0;
    double k = 0;
    scanf("%lf %lf", &n, &k);

    // 处理 n == 0 的特殊情况
    if (n == 0 && k <= 0)
    {
        printf("错误：0 的非正指数次幂未定义！\n");
        return 1;
    }

    // 处理 k 是否为整数
    if (k == (int)k)
    {
        double res = get_k((int)n, (int)k);
        printf("%f\n", res);
    }
    else
    {
        double res = pow(n, k); // 处理小数指数
        printf("%f\n", res);
    }

    return 0;
}