#include <stdio.h>

int my_strlen(char *parr)
{
    int len = 1;
    while (*parr != '\0')
    {
        len++;
        parr++;
    }
    return len;
}

int main()
{
    char arr[] = "ahdihigi";
    int len = my_strlen(arr);
    printf("%d\n", len);

    return 0;
}