#include <stdio.h>
// typedef unsigned int unit;//给某个类型取个名字

// int main(){
//     //语言本身带的一些字
//     // break，跳出循环
//     //typedef-->类型定义

//     unit num2 = 3;
//     printf("%D\n",num2);

//     //static 1.修饰局部变量

//     // 2.修饰全局变量 3。修饰函数

// }

// 3。修饰函数
// static 1.修饰局部变量
//  void test(){
//      //int a = 1;
//      static int a = 1;//静态化 就算出了作用于也不会销毁。放到静态区了，使得生命周期变得跟整个程序的生命周期一样长了。---->不会重新创建，而是会调用
//      a++;  // a 增加 1
//      printf("%d ", a);  // 输出 a 的值
//  }

// int main(){
//     int i = 0;

//     while (i < 10){
//         test();  // 调用 test 函数
//         i++;  // i 增加 1
//     }
//     return 0;  // 程序正常结束
// }
// 2.修饰全局变量

int main()
{
    extern int n1; // 引入外部变量。如果在这个全局变量的地方的源代码前面加一个 static，那就不可以被其他文件引用了
    // 全局变量的作用域是整个工程，加上一个 static 之后，作用域就是当前文件
    return 0;
}

// static 修饰函数
int main()
{
    int a = 0;
    int b = 20;

    return 0;
}