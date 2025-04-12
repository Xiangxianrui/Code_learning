#include <stdio.h>

void bubble_sort(void *base, int sz, int width, int (*cmp)(const void *, const void *))
{
    int i = 0;
    for (i = 0; i < sz - 1; i++)
    {
        int flag = 1; // 假设数组已有序
        int j = 0;
        for (j = 0; j < sz - 1 - i; j++)
        {
            // 比较相邻元素
            char *elem1 = (char *)base + j * width;
            char *elem2 = (char *)base + (j + 1) * width;
            if (cmp(elem1, elem2) > 0)
            {                              // 注意：cmp应返回类似strcmp的数值
                Swap(elem1, elem2, width); // 需实现Swap函数交换内存内容
                flag = 0;
            }
        }
        if (flag == 1)
        {
            break;
        }
    }
}
int main
{

    return 0;
}