#include <stdio.h>

union Un
{
    int a;
    char c;
};
int check_keys()
{
    int a = 1;
    return *(char *)&a;
}

int check_keys1()
{
    union Un // 可以吧 Un 去掉，代表匿名，因为也只需要用一次，不需要重复使用
    {
        char c;
        int i;
    } u;
    u.i = 1;
    return u.c;
}
int main()
{

    union Un u1;
    // printf("%lu\n", sizeof(u1));
    // printf("%p\n", &u1);
    // printf("%p\n", &(u1.a));
    // printf("%p\n", &(u1.c));
    u1.a = 0x11223344;
    u1.c = 0x00;
    if (check_keys1() == 1)
        printf("小端\n");
    else
        printf("大端\n");

    return 0;
}