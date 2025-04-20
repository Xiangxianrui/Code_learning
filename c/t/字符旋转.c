#include <stdio.h>
#include <string.h>
void left_move(char *parr, int k)
{
    char *ptmp = NULL;
    char *p = NULL;
    p = parr;
    ptmp = parr;
    while (*ptmp)
    { // 先移动一个指针到最后
        ptmp++;
    }
    for (int i = 0; i < k; i++)
    {
        *ptmp = *parr;
        parr++;
        ptmp++;
    }
    memcpy(parr + 1, p, k);
    *(ptmp + 1) = "\0";
}
int main()
{
    int k = 0;
    scanf("%d", &k);
    char arr[] = "abcdefg";
    left_move(arr, k);
    printf("%s ", arr);

    return 0;
}
