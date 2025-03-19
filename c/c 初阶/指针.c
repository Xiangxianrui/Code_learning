#include <stdio.h>
int main()
{
    int a = 10;
    int *p = &a;
    printf("%p\n", (void *)p); // 用 %p 打印指针地址，转换为 void * 避免警告

    return 0;
}