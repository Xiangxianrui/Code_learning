#include <stdio.h>
#include <string.h> // 添加string.h头文件以使用strlen

void reverse(char *str)
{
    int len = strlen(str);
    if (len > 1)
    {
        // 交换首尾字符
        char tmp = str[0];
        str[0] = str[len - 1];
        str[len - 1] = tmp;

        // 将字符串缩短，递归处理中间部分
        str[len - 1] = '\0'; // 暂时截断最后一个字符
        reverse(str + 1);    // 递归处理子字符串

        // 恢复最后一个字符为交换后的结果
        str[len - 1] = tmp; // 关键修复：这里要恢复交换后的字符
    }
}

int main() // 修正main函数语法
{
    char arr[] = "abcdef";
    reverse(arr);
    printf("%s\n", arr); // 输出fedcba
    return 0;
}