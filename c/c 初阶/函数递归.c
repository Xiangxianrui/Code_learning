#include <stdio.h>
int feblaic(int n)
{
    if (1 == n)
        return 1;
    else if (2 == n)
        return 1;
    else
        return feblaic(n - 1) + feblaic(n - 2);
}

int print_last(int num)
{
    if (num > 9)
    {
        print_last(num / 10);
    }
    printf("%d\n", num % 10);
    return 0;
}
int jiechen(int n)
{
    if (n == 1)
        return 1;
    else
        return n * jiechen(n - 1);
}

// 不使用递归计算斐波拉契数列的第 n 项

int Feb2(int n)
{

    int a = 1;
    int b = 1;
    int c = 1;
    while (n >= 3)
    {
        c = a + b;
        a = b;
        b = c;
        c--;
    }
    return c;
}

#include <string.h>
// 不使用临时变量，求解字符串的长度
int My_strlen(char *str)
{
    if (*str != '\0')
        return My_strlen(str + 1) + 1;
    else
        return 0;
}

// %d 打印有符号数   %u 打印无符号数
int main()
{
    // int n = 4;
    // int a = 6;
    // printf("%d %d", feblaic(n), feblaic(a));

    // //接受一个无符号整型，按照顺序打印他的每一位
    // unsigned int num = 0;
    // scanf("%d",&num);
    int num = 0;
    printf("请输入一个数\n");
    scanf("%d", &num);
    // // print_last(num);
    // MY_strlen();
    printf("%d\n", jiechen(num));

    return 0;
}