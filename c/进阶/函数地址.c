#include <stdio.h>
int Add(int x, int y)
{
    return x + y;
}
int main()
{
    printf("%p\n", &Add);
    printf("%p\n", Add); // 对于函数来说，直接传参数和取地址都是函数的地址

    int (*pf)(int, int) = &Add; // 最前面表示函数的返回类型，括号内表示指针，最后面的括号表示函数的参数类型
    int res = pf(2, 3);         // 实际上pf 就可以代替 add 的作用
    printf("%d\n", res);

    return 0;
}