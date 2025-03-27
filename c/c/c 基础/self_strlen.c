#include <stdio.h>
#include <assert.h>
int my_strlen(char *parr)
{
    int len = 0;
    // assert(*parr != NULL);   防止*空解引用，而不是元素为空
    assert(parr != NULL);

    while (*parr != '\0')
    {
        len += 1;
        parr++;
    }
    return len;
}
// int my_strlen2(char *parr)
// {
//     int len = 0;
//     // assert(*parr != NULL);   防止*空解引用，而不是元素为空
//     assert(parr != NULL);

//     while (*parr ++)
//     {
//         len += 1;

//     }
//     return len;
// }

int main()
{
    char arr[] = "hello bit";
    int len = my_strlen(arr);
    printf("%d\n", len);

    return 0;
}