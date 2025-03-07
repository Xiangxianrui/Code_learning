#include <stdio.h>

// 交换两个整数的值
void Swap(int *px, int *py)
{
    int temp = *px;
    *px = *py;
    *py = temp;
}

int main()
{
    // int a = 0;
    // int b = 0;

    // printf("请输入两个整数: ");
    // scanf("%d%d", &a, &b);

    // printf("交换前: a = %d, b = %d\n", a, b);
    // Swap(&a, &b);
    // printf("交换后: a = %d, b = %d\n", a, b);

    return 0;
}