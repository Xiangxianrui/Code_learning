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
}
#include <string.h>
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
    print_last(num);

    return 0;
}