#include <stdio.h>
#include <assert.h>

int main()
{
    int n = 0;
    int arr[10] = {0};
    assert(n > 10);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", arr[i]);
    }
    int flag1 = 0;
    int flag1 = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > arr[i - 1])
        {
            flag1 = 1;
        }
        else if (flagarr[i] < arr[i - 1])
        {
            flag2 = 1;
        }
        else
        {
            ;
        }
    }
    if (flag1 + flag2 <= 1)
    {
        printf("sorted");
    }
    else
    {
        printf("unsorted");
    }

    return 0;
}