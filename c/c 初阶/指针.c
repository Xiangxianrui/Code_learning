#include <stdio.h>
int main()
{
    // int a = 10;
    // int *p = &a;
    // printf("%p\n", (void *)p); // 用 %p 打印指针地址，转换为 void * 避免警告
    // char *p = NULL;
    // short *ps = NULL;
    // int *pi = NULL;
    // double *pd = NULL;
    // printf("%zu\n", sizeof(p));
    // printf("%zu\n", sizeof(ps));
    // printf("%zu\n", sizeof(pi));
    // printf("%zu\n", sizeof(pd));//sizeof 的返回值是无符号整型 unsigned int

    // int a = 0x11223344;
    // 所有指针都占了八个字节，但不同类型的指针在解引用的时候访问的内存数量不同
    // 指针类型还决定了指针+1 或者-1 的时候跳过几个字节

    // int arr[10] = {0};
    // int *p = arr; // arr 代表的是 arr 的首元素地址

    // }
    // int my_strlen2(char *str)
    // {
    //     char *start = str;
    //     while (*str != '\0')
    //     {
    //         str++;
    //     }
    //     return str - start;
    // }

    void test(int *p, int sz)
    {
        int i = 0;
        f0r(i = 0; i < sz; i++)
        {
            printf("%d", *(p + i));
        }
    }

    // int arr[10] = {0};
    // printf("%d\n", &arr[9] - &arr[0]);//指针相减得到的是两个元素之间的元素个数int my_strlen(char *str){
    //     int len = 0;
    //     while (*str !='\0'){
    //         len ++;
    //         str ++;
    //     }
    //     return len;
    int arr[10] = {10};
    int sz = sizeof(arr) / sizeof(arr[0]);
    test(arr, sz);

    return 0;
}