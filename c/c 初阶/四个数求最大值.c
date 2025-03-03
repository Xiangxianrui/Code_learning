#include <stdio.h>
int main()
{
    int arr[4] = {0};
    int i = 1;
    while (i < 4)
    {
        scanf("%d", &arr[i]);
        i++;
    }
    int max_num = arr[0];
    int j = 0;
    while (j < 4)
    {
        if (arr[i] > max_num)
        {
            max_num = arr[i];
            j++;
        }
    }
}
