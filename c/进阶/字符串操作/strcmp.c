#include <stdio.h>
#include <assert.h>
int my_strcmp(char *parr1, char *parr2)
{
    assert(parr1 && parr2);
    // while((*parr1!='\0')&&(*parr2!='\0') && (*parr1 = *parr2)){
    while (*parr1 == *parr2)
    {
        if (*parr1 == '\0')
            return 0;
        parr1++;
        parr2++;
    }
    if (*parr1 > *parr2)
        return 1;
    else
        return -1;
}

int main()
{
    char arr1[20] = "zhangsan";
    char arr2[20] = "zhangsanfeng";
    printf("%d\n", my_strcmp("zhangsan", "zhangsanfeng")); // 第一个字符是否大于第二个字符

    return 0;
}