#include <stdio.h>

int main() {
    // float a = 7 / 2.0;  // 浮点数除法
    // int b = 7 % 2;       // 取余运算（只能用于整数）

    // // 输出浮点数，保留3位小数
    // printf("%.3f\n", a);

    // // 输出 int 类型的字节大小
    // int arr[10] = {0};
    // printf("%zu\n", sizeof(int));// sizeof 计算的单位是字节
    // printf("%zu\n",sizeof(arr[0]));
    

    // int a = 10;
    // // int b = a++;// 后置++，先使用，后++----->b=a,a++
    // int b = ++a;//先++，后使用
    // printf("%d\n",a);
    // printf("%d\n",b);

    // && 并且，相当于python 里的 and
    // || 或者相当于 python 里的 or

    //条件操作服（三目表达式）
    int a = 10;
    int b = 20;
    int c = 0;
    int r = a>b ? a:b;//如果a>b,返回a（表达式 1），否则返回b（表达式 2）
    // erpress1 ? express2: erpress3

    //逗号表达式

    int d = (c=a-2,a=b+c,c-3);//每个值依次往后算，最后一个表达式的值就是整个表达式的返回值



    return 0;
}