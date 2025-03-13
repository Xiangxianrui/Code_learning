#include <stdio.h>

void print(int arr[], int sz)
{
    int i = 0;
    for (i = 0; i < sz; i++)
        printf("%d ", arr[i]);
}

void reverse(int arr[], int sz)
{
    int left = 0;
    int right = sz - 1;
    int tmp = 0;
    while (left < right)
    {
        tmp = arr[left];
        arr[left] = arr[right];
        arr[right] = tmp;
        left++;
        right--;
    }
}

void init(int arr[], int sz)
{
    int i = 0;
    for (i = 0; i < sz; i++)
        arr[i] = 0;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int sz = sizeof(arr) / sizeof(arr[0]);

    reverse(arr, sz);
    print(arr, sz);

    init(arr, sz);
    print(arr, sz);

    return 0;
}