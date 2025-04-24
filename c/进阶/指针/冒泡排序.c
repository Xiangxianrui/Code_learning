#include <stdio.h>
void bubble_sort(int arr[], int sz)
{
    for (int i = 0; i < sz - 1; i++)
    {
        for (int j = 0; j < sz - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }
}
int main()
{
    int arr[] = {2, 3, 1, 5, 0, 9, 6, 8, 7, 4};
    int sz = sizeof(arr) / sizeof(arr[0]);
    bubble_sort(arr, sz);
    for (int i = 0; i < sz - 1; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}