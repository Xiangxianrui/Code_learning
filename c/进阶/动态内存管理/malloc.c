#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>
int main()
{
    // int arr[10] = {0};
    // int *p = (int *)malloc(40);
    // if (p == NULL)
    // {
    //     // printf("%s\n", strerror(errno));
    //     return 1;
    // }
    // for (int i = 0; i < 10; i++)
    // {
    //     *(p + i) = i;
    //     printf("%d ", *(p + i)); // p merely points to the starting memory location.
    // }
    // free(p); // 把内容抹除了。但 p 依然能找到那个空间
    // p = NULL;

    // int *p = calloc(10, sizeof(int));
    // if (p == NULL)
    // {
    //     printf("%s\n", strerror(errno));
    //     return 1;
    // }
    // //
    // for (int i = 0; i < 10; i++)
    // {
    //     printf("%d ", *((int *)p + i));
    // }

    int *p = (int *)malloc(40);
    if (NULL == p)
    {
        printf("%s\n", strerror(errno));
    }
    printf("%p\n", &p);
    for (int i = 0; i < 10; i++)
    {
        *(p + i) = i + 1;
    }
    int *p2 = realloc(p, 80);
    printf("%p\n", &p2); // 是重新找到一个新的大空间，然后把现在的内容 copy 到新内存区。

    return 0; // return 0 means return normally
}