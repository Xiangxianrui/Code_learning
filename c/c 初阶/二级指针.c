#include <stdio.h>
int main()
{
    int a = 10;
    int *pa = &a;          //*说明这是一个指针 int 说明*pa 指向的对象是 int 整型
    int **ppa = &pa;       // 第一个*说明 ppa是一个指针，第二个*是和 int一起的，int *表示 *ppa 只想的对象是一个指针
    printf("%d\n", **ppa); // 实际上，*pa 指向 a，* *pa 指向*pa 指向的地址

    // 指针数组
    // 存放指针的数组就是指针数组
    int b = 20;
    int c = 30;
    int i = 0;
    int *arr[10] = {&a, &b, &c};
    for (i = 0; i < 3; i++)
    {
        printf("%d\n", *arr[i]); // 指针数组实际上就是一种二级指针
    }

    return 0;
}