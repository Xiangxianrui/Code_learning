#include <stdio.h>
#include <string.h>
int main()
{
    // char a = -1;//              10000001源码
    //                 //          11111110反码
    //                 //          11111111补码

    // signed char b = -1;//      相同
    // unsigned char c = -1;//     11111111

    // // printf("%d %d %d\n", a, b, c);
    // char a = -128;
    // //        源码 10000000 00000000 00000000 10000000
    // //        反码 11111111 11111111 11111111 01111111
    // //        补码 11111111 11111111 11111111 10000000
    // //        截断                            10000000
    // //        提升 11111111 11111111 11111111 10000000
    //             1
    // printf("%u\n", a);
    // return 0;

    char a[1000];
    int i;
    for (i = 0; i < 1000; i++)
    {
        a[i] = -1 - i;
    }

    printf("%lu\n", strlen(a));
    return 0;
}