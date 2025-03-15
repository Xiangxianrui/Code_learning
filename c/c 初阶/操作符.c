#include <stdio.h>
// /*
//  * 位移操作演示：
//  * 1. 左移（<<）：相当于乘 2 的幂，会导致高位丢失，低位补 0
//  * 2. 右移（>>）：相当于除 2 的幂，右移时低位丢失，视情况补 0 或 1（取决于补码规则）
//  *
//  * 关于源码（原码）和补码：
//  * - 源码：最高位是符号位，0 表示正数，1 表示负数，数值部分不变
//  * - 补码：计算机实际存储时采用补码，负数的补码 = 原码按位取反 + 1
//  * - 右移运算：对正数，逻辑右移和算术右移相同；对负数，算术右移保持符号位
//  */

// void test_negative_shift() {
//     int b = -5;  // -5 在补码中的二进制表示: 1111 1011 （32 位情况下）
//     printf("负数 b = %d 的补码二进制（假设 8 位）：1111 1011\n", b);
//     printf("右移 1 位 (b >> 1) 结果: %d\n", b >> 1);
// }

// int main() {
//     unsigned int a = 5;  // 5 的二进制表示: 0000 0101

//     // 左移操作（相当于乘 2 的幂）
//     unsigned int left_shift = a << 2;  // 5 左移 2 位，相当于 5 * (2^2) = 20

//     // 右移操作（相当于除 2 的幂）
//     unsigned int right_shift = a >> 1; // 5 右移 1 位，相当于 5 / 2 = 2（整数部分）

//     printf("原始值 a = %u\n", a);
//     printf("左移 2 位 (a << 2) 结果: %u\n", left_shift);
//     printf("右移 1 位 (a >> 1) 结果: %u\n", right_shift);

//     test_negative_shift();
//     return 0;
// }
int mian()
{
    int a = 3;
    int b = -5;
    int c = a & b;
    printf("%d\n", c);

    return 0;
}
