#include <stdio.h>
int Add(int, int); // 提前说明在后面有一个函数------>只是说明有一个，而不一定真的有
int main()
{
    // 函数的定义：
    int a = 0;
    int b = 0;
    scanf("%d %d", &a, &b);
    int sum = Add(a, b);
    printf("%d\n", sum);

    return 0;
}
int Add(int a, int b)
{
    int sum = a + b;

    return sum;
}
