#include <stdio.h>
#include <stdlib.h>
struct S
{
    int n;
    int arr[];
};

int main()
{
    printf("%lu\n", sizeof(struct S));
    // 柔性数组开辟空间时必须要使用 malloc 来动态开辟，前面的是开辟给int a 的，后面的是开辟给柔性数组的

    struct S *ps = (struct S *)malloc(sizeof(struct S) + 40); // 先开批空间，然后利用这片空间初始化一个数组
    ps->n = 100;                                              // 初始化 n
    for (int i = 0; i < 100; i++)
    {
        ps->arr[i] = i;
    }
    for (int i = 0; i < 100; i++)
    {
        printf("%d ", ps->arr[i]);
    }
    // 扩容
    struct S *ptr = (struct S *)realloc(ps, sizeof(struct S) + 80); // 把 ps 后面的所有内容都已经拷贝过来了。
    if (ptr != NULL)
    {
        ps = ptr; // 再把原本的指针指向新的起点
    }

    return 0;
}
FILE