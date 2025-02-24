#include <stdio.h>
#include <string.h>

int main() {
    // %d 打印整型
    // %c 打印字符
    // %s 打印字符串
    // %f 打印 float 类型
    // %lf 打印 double
    // %zu 打印 sizeof

    // \n 换行符
    printf("abcd\n");

    // \? 防止被解释成特殊字符，类似 Markdown 格式（这里不需要反斜杠）
    printf("%s\n", "are you ok ?");

    // 打印字符：输出单引号字符 '
    printf("%c\n", '\''); // 如果不加转义，会被认为是引号中的一个，而不是一个符号

    // 打印字符串
    printf("%s\n", "siugid");

    // 打印包含零字符的字符串，只会输出 "abcd" 因为 \0 代表字符串结束
    printf("abcd\n");

    // 打印包含反斜杠的字符串
    printf("abcd\\ef\n"); // 防止反斜杠被理解为转义字符，保持原样输出
    // \t是一个水平制表符
    printf("c:\\test\\test.c\n");//打印路径的时候要加上一个\，表示这个\这是一个字符串
    printf("\a");//让你的电脑响一声
    printf("%c\n",'\130');//把 130（八进制）转化成十进制，然后以这个十进制数作为 ASCII 码打印出字符
    printf("%c\n",'\x60');
    printf("%lu\n", strlen("c:\test\628\test.c")); // 转义字符转化后算一个字符------有一些转义符有其他效果，不管他们的效果，当做一个字符
    
    

    return 0;
}

 //使用一些字符，改变字符的作用
 // \n,换行
 // \0,字符串结束