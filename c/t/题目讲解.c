#include <stdio.h>
int main()
{
    // printf("%c\n", 97);如果是%d，输出的是数字97，如果是%c，输出的是字符a
    // printf("%d\n", 'a');输出的是字符a的ASCII码值
    int arr[10] = {73, 32, 99, 97, 110, 32, 100, 32, 100, 111, 32, 105, 116, 33};
    int i = 0;
    // sizeof 求的是数组的总大小，单位是字节
    // int sz = sizeof(arr) / sizeof(arr[0]);    可以不用自己手动求数组长度
    while (i < 14)
    {
        printf("%c", arr[i]); // 用 %c 输出就可以某个东西代表的字符
        i++;
    }

    return 0;
}