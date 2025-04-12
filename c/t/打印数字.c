#include <stdio.h>

int main()
{
    int a[] = {1, 2, 3, 4};

    printf("%d\n", sizeof(a));         // 16，a 是一个数组名，sizeof(a) 是整个数组的大小，4 个 int，每个 4 字节，共 16 字节
    printf("%d\n", sizeof(a + 0));     // 8，a + 0 是指针运算，结果是 int*，所以大小是指针的大小（64 位系统上为 8 字节）
    printf("%d\n", sizeof(*a));        // 4，*a 是 a[0]，是 int 类型，大小为 4 字节
    printf("%d\n", sizeof(a + 1));     // 8，同样是指针运算，结果类型仍是 int*，大小为 8 字节
    printf("%d\n", sizeof(a[1]));      // 4，a[1] 是 int，大小为 4 字节
    printf("%d\n", sizeof(&a));        // 8，&a 是 int(*)[4] 类型，是一个指向数组的指针，大小为指针大小（8 字节）
    printf("%d\n", sizeof(*&a));       // 16，*&a 就是 a，a 是数组，大小仍然是 16 字节
    printf("%d\n", sizeof(&a + 1));    // 8，&a 是指向整个数组的指针，加 1 后仍是指针，大小为 8 字节
    printf("%d\n", sizeof(&a[0]));     // 8，&a[0] 是 int*，大小为 8 字节
    printf("%d\n", sizeof(&a[0] + 1)); // 8，&a[0] + 1 仍是 int*，大小为 8 字节
                                       // 只要结果是指针（地址），sizeof 的结果就是 8
    // 结果是一个数，则求的是一个整形的地址，结果是 4
    return 0;
}