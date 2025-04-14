#include <stdio.h>
void my_strcat(char *dest, const char *cont)
{
    assert(cont && dest);
    // 先把第一个数移动到空位置
    while (*dest)

    {
        *dest++;
    } // 结束后 dest 已经指向了‘\0’
    while (*cont)
    {
        *dest++ = *cont++;
    }
    *dest = '\0';
}

int main()
{
    char arr1[20] = "hello ";
    my_strcat(arr1, "word");
    printf("%s\n", arr1);

    return 0;
}
