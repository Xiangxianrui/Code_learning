// 一共 n 级台阶，每一步可以走以及或者两级，请问一共有多少种走法
#include <stdio.h>

int Stairs(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else if (n == 2)
    {
        return 2;
    }
    else
    {
        return Stairs(n - 1) + Stairs(n - 2);
    }
}

int main()
{
    printf("请输入台阶数 n:>");
    int n = 0;
    scanf("%d", &n);
    int res = 0;
    res = Stairs(n);
    printf("%d 级台阶共有 %d种上法\n", n, res);

    return 0;
}