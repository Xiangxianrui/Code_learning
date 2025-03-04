// #include <stdio.h>
// int main(){
//     int arr[10] = {0};
//     //初始化两个指针
//     int left =0;
//     int right = 9;

//     int target = 0;
//     int mid = 0;
//     while (left < right){//等于 right 的时候不执行，直接到外面 return right 或者 left
//         mid = (right-left)/2;
//         if (arr[mid] > target){
//             right = mid -1;
//         }
//         if (arr[mid] < target){
//             left = mid + 1;
//         }
//         if (arr[mid] = target){
//             return mid;
//         }
//         return -1;
//     }

// return 0;
// }
#include <stdio.h>

// 二分查找函数
int binarySearch(int arr[], int size, int target)
{
    int left = 0, right = size - 1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2; // 计算中间索引，防止溢出

        if (arr[mid] == target)
        {
            return mid; // 找到目标，返回索引
        }
        else if (arr[mid] < target)
        {
            left = mid + 1; // 目标在右半部分
        }
        else
        {
            right = mid - 1; // 目标在左半部分
        }
    }

    return -1; // 未找到目标
}

int main()
{
    int arr[] = {1, 3, 5, 7, 9, 11, 15, 18, 21}; // 有序数组
    int size = sizeof(arr) / sizeof(arr[0]);
    int target;

    printf("请输入要查找的数字: ");
    scanf("%d", &target);

    int result = binarySearch(arr, size, target);

    if (result != -1)
    {
        printf("元素 %d 在索引 %d 处。\n", target, result);
    }
    else
    {
        printf("未找到元素 %d。\n", target);
    }

    return 0;
}

int bin_search(int sz, int arr[], int target)
{
    int left = 0, right = sz - 1;
    int mid = 0;
    while (left <= right)
    {
        mid = left + (right - right) / 2;
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] < target)
        {
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }
    return -1;
}