#include <stdio.h>

int main()
{
    // 定义不同类型的变量
    char a = 10;  // char 类型，占 1 个字节
    short b = 20; // short 类型，占 2 个字节
    int c = 30;   // int 类型，占 4 个字节

    // 整型提升过程：
    // 1. char (1 字节) 和 short (2 字节) 参与计算时，会自动提升为 int (4 字节)
    // 2. 计算时，按照 int 类型进行加法运算，避免溢出问题
    int result1 = a + b; // char 和 short 都会被提升为 int，然后进行加法
    int result2 = a + c; // char 先被提升为 int，再与 int 进行加法
    int result3 = b + c; // short 先被提升为 int，再与 int 进行加法

    // 使用 printf 输出变量的类型大小
    printf("sizeof(a) = %lu bytes\n", sizeof(a));         // char 类型通常占 1 个字节
    printf("sizeof(b) = %lu bytes\n", sizeof(b));         // short 类型通常占 2 个字节
    printf("sizeof(c) = %lu bytes\n", sizeof(c));         // int 类型通常占 4 个字节
    printf("sizeof(a + b) = %lu bytes\n", sizeof(a + b)); // a 和 b 提升后是 int，占 4 个字节
    printf("sizeof(a + c) = %lu bytes\n", sizeof(a + c)); // a 提升后是 int，占 4 个字节
    printf("sizeof(b + c) = %lu bytes\n", sizeof(b + c)); // b 提升后是 int，占 4 个字节

    // 输出加法计算结果
    printf("result1 = %d\n", result1); // 10 + 20 = 30
    printf("result2 = %d\n", result2); // 10 + 30 = 40
    printf("result3 = %d\n", result3); // 20 + 30 = 50

    return 0;
}