#include <stdio.h>

// 输出 0-100 的奇数
int main()
{
    int time = 1; // 从 1 开始，因为 0 是偶数
    while (time <= 100)
    {
        if (time % 2 == 1)
        {
            printf("%d\n", time);
        }
        time++; // 递增 time
    }

    return 0;
}