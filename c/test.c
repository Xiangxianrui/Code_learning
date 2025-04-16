#include <stdio.h>
#include <string.h>
int Add(int x, int y)
{
    return x + y;
}
int main()
{
    // // int arr[10] = {1, 2, 3, 4};
    // // int *parr = &arr;
    // // int *new_parr = parr + 1;
    // printf("%p\n", &Add);
    // int (*pf)(int, int) = &Add;
    // int res = (*pf)(3, 5);
    // printf("%d\n", res);
    // int a[5][5];
    // int (*p)[4];
    // p = a;
    // printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);     主要设计不同大小数组的内存重新划分

    // char arr[] = {'a', 'n', 'c', 'h', '\0'};
    // int len = strlen(arr);
    // printf("%d\n", len);
    // 条件操作服（三目表达式）
    // int a = 10;
    // int b = 20;
    // int c = 0;
    // int r = a > b ? a : b; // 如果a>b,返回a（表达式 1），否则返回b（表达式 2）
    // // erpress1 ? express2: erpress3
    // printf("%c\n", (strlen("abc") - strlen("abcd")) ? ('>') : ('<'));

    int a = 3;
    char *pa = (char *)&a;
    printf("%p\n", *pa);

    return 0;
}