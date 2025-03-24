#include <stdio.h>
int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int i = 0;
    while (i < 9)
    {
        printf("%d\t", arr[i]);
        i++;
    }
    return 0;
}
