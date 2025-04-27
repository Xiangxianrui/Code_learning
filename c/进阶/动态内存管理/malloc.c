#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>
// int main()
// {
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

//     int *p = (int *)malloc(40);
//     if (NULL == p)
//     {
//         printf("%s\n", strerror(errno));
//     }
//     printf("%p\n", &p);
//     for (int i = 0; i < 10; i++)
//     {
//         *(p + i) = i + 1;
//     }
//     int *p2 = realloc(p, 80);
//     printf("%p\n", &p2); // 是重新找到一个新的大空间，然后把现在的内容 copy 到新内存区。

//     return 0; // return 0 means return normally
// }

// 指针的接收

// char *GetMemory(char *p)
// {
//     p = malloc(100);
//     return p;
// }
// void Test()
// {
//     char *str = NULL;
//     char *s1 = GetMemory(str);
//     strcpy(s1, "hello world");
//     printf("%s\n", s1);
// }
// int main()
// {
//     Test();

//     return 0;
// }

//  int f1(void){
//     int x = 0;
//     return(&x);//函数内部是临时变量，函数调用结束后就被销毁了，无法使用，是一个野指针
//  }

//  int f2(void){
//     int *ptr;//不初始化就会导致随机访问
//     *ptr = 10;
//     return ptr;
//  }

char *GetMemory(void)
{
    char p[] = "hello world"; // p 的类型是 char *(),内容是 “h”的地址
    return p;                 // 在函数结束后空间就已经回收了，内容可能被覆盖；
}
void test(void)
{
    char *str = NULL;
    str = GetMemory();
    printf("%s\n", str);
}

int main()
{

    test();

    return 0;
}