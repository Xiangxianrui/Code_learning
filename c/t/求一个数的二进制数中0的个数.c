#include <stdio.h>
int count_1(unsigned int n)
{
    int count = 0;

    while (n)
    {
        if (n % 2 == 1)
            count++;
        n = n / 2;
    }
    return count;
}
int count_12(int n)
{
    int i = 0;
    int count = 0;
    for (i = 0; i < 32; i++)
    {
        if (((n >> i) & 1) == 1)
        {
            count++;
        }
        return count;
    }
}

// if ((n&(n-1)) == 0)  判断一个数是不是 2 的n 次方

int count_13(int n)
{
    int count = 0;
    while (n)
    {
        count += 1;
        n = n & (n - 1);
    }
    return count;
}

int main()
{
    int num = 0;
    printf("请输入一个数:>");
    scanf("%d", &num);
    int count = count_13(num);
    printf("%d\n", count);

    return 0;
}

count_different_ones(int m, int n)
{
    int i = 0;
    int count = 0;
    for (i = 0; i < 32; i++)
    {
        if ((m >> i) & 1)
            != ((n >> i) & 1)
            {
                count++
            }
    }
    return count;
}

count_different_ones(int m, int n)
{
    // int i = 0;
    int count = 0;
    int res = m ^ n; // 相同为 0，不同为 1
    while (res)
    {
        res = res & (res - 1); // 统计 1 的个数
        count += 1;
    }

    return count;
}
