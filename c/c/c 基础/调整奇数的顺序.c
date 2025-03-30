#include <stdio.h>
int is_jishu(int num)
{
    return num % 2;
}
int is_oushu(int num)
{
    return num % 2 == 0; // 余数为0的是偶数
}
// void adjust_num(int arr, int sz)
void adjust_num(int *arr, int sz)

{
    int *left = arr;
    // int right = arr + sz;
    int *right = arr + sz - 1;

    int tmp = 0;
    while (left < right)
    {
        // while (is_jishu(left))
        while (left < right && is_jishu(*left)) // 防止循环内部越界访问数组
        {
            left++;
        }
        while (left < right && is_oushu(*right))
        {
            right--;
        }
        // 新加
        if (left < right)
        {
            tmp = *left;
            *left = *right;
            *right = tmp;
        }
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};

    int sz = sizeof(arr) / sizeof(arr[0]);
    adjust_num(arr, sz);
    // printf("%n\n", arr);
    for (int i = 0; i < sz; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}