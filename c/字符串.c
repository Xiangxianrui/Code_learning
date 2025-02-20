#include <stdio.h>
#include <string.h>  // 引入头文件以使用 strlen

int main() {
    const char *str = "Hello, World!";  // 定义一个字符串
    printf("%s\n", str);  // 使用 %s 来输出字符串
    char arr1[] = "dhihihu";
    
    int len = strlen("aiugi");  // 计算字符串 "aiugi" 的长度    strlen 是一个库函数，需要引用头文件，<string.h>
    printf("%d\n", len);  // 输出字符串的长度
    printf("%zu\n",strlen(arr1));

    return 0;
}
//枚举常量
// enum color {BLUE,//枚举常量
//             RED,
//             GREED };
// int main()
// {
// enum color c=RED;

// //char 字符类型
// char ch = 'w';
// //c语言没有字符串类型，要存一个字符串就要用一个数组来存
// char arr[10] = "dugu";//前面的数字表示有多少个字符，可以不写，不写的话就会自动判断有多少个字符。
// //在字符串内部，会多占用一个空间，因为需要存放\0,表示这个字符串结束
// char arr1[] = 'dhihihu';
// char arr2[] = {'a','b','c'};//这样创建的时候这个列表里就只有原本的元素，而不会有一个\0,
// //一个是字符，一个是字符串
//}
