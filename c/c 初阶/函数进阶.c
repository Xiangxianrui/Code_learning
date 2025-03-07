#include <stdio.h>

// 交换两个整数的值
void Swap(int *px, int *py)
{
    int temp = *px;
    *px = *py;
    *py = temp;
} // 只读不写的话就只传值，既要读还要写，就得传地址

int Add(int x, int y)
{

    return x + y;
}

int main()
{
    int a = 0;
    int b = 0;

    printf("请输入两个整数: ");
    scanf("%d%d", &a, &b);

    printf("交换前: a = %d, b = %d\n", a, b);
    Swap(&a, &b);
    printf("交换后: a = %d, b = %d\n", a, b);

    int res = Add(a, b);
    printf("a + b =%d\n", res);

    return 0;
}