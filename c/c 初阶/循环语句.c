#include <stdio.h>
int main()
{
    // // 打印 1-10 的数字
    // int i = 1;
    // while (i <= 10)
    // {
    //     printf("%d\n", i);
    //     i++;
    // }

    // return 0;

    // break 跳出整个循环。continue 跳出当前循环

    // int ch = getchar();//获取一个字符
    // EOF;//end of file

    // printf("%cc\n", ch); // 1
    // putchar(ch);         // 2

    // int ch; // 存储从输入读取的字符

    // 从标准输入中读取字符直到遇到 EOF
    // while ((ch = getchar()) != EOF) {
    //     putchar(ch);  // 输出读取的字符
    // }

    char ch;

    // 循环读取输入直到遇到 EOF
    while ((ch = getchar()) != EOF)
    {
        // 判断是否为数字字符
        if (ch >= '0' && ch <= '9')
        {
            printf("%d\n", ch); // 打印数字字符的 ASCII 值
        }
    }

    return 0;
}
