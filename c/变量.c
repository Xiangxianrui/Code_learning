#include <stdio.h>

// 全局变量
int globalVar = 10;  // 全局变量，生命周期是整个程序运行期间

void demoFunction() {
    // 局部变量
    int localVar = 5;  // 局部变量，生命周期是函数执行期间

    // 常量变量
    const int constantVar = 20;  // 常量变量，值不可修改

    // 动态分配的变量
    int *dynamicVar = malloc(sizeof(int));  // 使用 malloc 分配内存

    // 检查内存分配是否成功
    if (dynamicVar != NULL) {
        *dynamicVar = 30;  // 设置动态分配的内存的值
        printf("Dynamic Variable Value: %d\n", *dynamicVar);
    }

    // 显示局部变量和常量的值
    printf("Local Variable Value: %d\n", localVar);
    printf("Constant Variable Value: %d\n", constantVar);

    // 修改并显示全局变量
    globalVar = 100;
    printf("Global Variable Value: %d\n", globalVar);

    // 释放动态分配的内存
    free(dynamicVar);
    const int a = 8;//const修饰的是一个常变量（是一个变量，但是不能像其他变量一样修改，像一个常量）
}

int main() {
    printf("Global Variable Initial Value: %d\n", globalVar); // 显示全局变量的值
    demoFunction();  // 调用函数，展示局部变量、常量和动态分配的变量

    // 试图访问局部变量
    // printf("Trying to access localVar: %d\n", localVar);  // 这行代码会报错，因为 localVar 只在 demoFunction() 中可用
    #define MAX 100;//#定义的标识符量，其实就是一个没有类型的值

    return 0;
}