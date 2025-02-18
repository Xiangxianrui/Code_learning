include <stdio.h>  // 正确写法，包含标准输入输出库

// 语法错误：intmain() 应为 int main()，主函数需要空格
int main() {
    int a = 10;
    short age = 20;
    int high = 180;
    float weight = 88.5;

    // printf 格式错误：缺少 % 符号来打印变量 a 的值
    printf("a=%d\n", a);  // 正确使用 %d 来打印整型变量 a
    extern int a;//声明来自外部的变量,来自其他文件内的变量（外部变量）

    return 0;  // return 0 表示程序正常结束
}
