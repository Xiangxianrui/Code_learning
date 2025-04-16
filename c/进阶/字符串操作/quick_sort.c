#include <stdio.h>
#include <string.h>

// 字节级交换函数
void swap(void *a, void *b, size_t size)
{
    char *p1 = (char *)a;
    char *p2 = (char *)b;
    for (size_t i = 0; i < size; i++)
    {
        char tmp = p1[i];
        p1[i] = p2[i];
        p2[i] = tmp;
    }
}

// 自定义qsort实现
void my_qsort(void *base, size_t num, size_t size,
              int (*cmp)(const void *, const void *))
{
    if (num <= 1)
        return;

    char *pBase = (char *)base;
    size_t mid = num / 2;
    swap(pBase, pBase + mid * size, size); // 基准元素交换到首位

    size_t last = 0; // 分区点
    for (size_t i = 1; i < num; i++)
    {
        if (cmp(pBase + i * size, pBase) < 0)
        {
            last++;
            swap(pBase + last * size, pBase + i * size, size);
        }
    }
    swap(pBase, pBase + last * size, size); // 基准元素归位

    // 递归处理左右分区
    my_qsort(pBase, last, size, cmp);
    my_qsort(pBase + (last + 1) * size, num - last - 1, size, cmp);
}