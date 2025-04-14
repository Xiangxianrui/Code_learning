#include <stdio.h>

void my_strcpy(char *parr1, char *parr2)
{
    // 把第二个参数（字符串）的内容覆盖到第一个字符串. 2是内容 1是目标地
    while ('\0' != (*parr2))
    {
        *parr1 = *parr2;
        parr1 += 1;
        parr2 += 1;
    }
    *parr1 = '\0';
}

void my_strcpy2(char *parr1, char *parr2)
{
    assert(parr1)
        assert(parr2)

        // 把第二个参数（字符串）的内容覆盖到第一个字符串. 2是内容 1是目标地
        while (*parr2)
    {
        *parr1++ = *parr2++;
    }
    *parr1 = '\0';
    return parr1;
}

int main()
{
    char arr1[20] = {0};
    char arr2[] = "abcdef";

    my_strcpy2(arr1, arr2);
    printf("%s\n", arr1);

    return 0;
}