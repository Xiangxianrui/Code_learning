// #include <stdio.h>
// void print1(int arr[3][5], int r, int c)

// {
//     for (int i = 0; i < r; i++)
//     {
//         for (int j = 0; j < c; j++)
//         {
//             printf("%d   ", arr[i][j]);
//         }
//         printf("\n");
//     }
// }

// void print2(int *p, int r, int c)
// {
//     int i = 0;
//     for (i = 0; i < r; i++)
//     {
//         int j = 0;
//         for (j = 0; j < c; j++)
//         {
//             // printf("%d ", (*(*p + i))[j]);
//             printf("%d ", *(*(p + i) + j));
//         }
//     }
//     printf("\n");
// }

// int main()
// {

//     int arr[3][5] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
//     print2(arr[3][4], 3, 5);

//     return 0;
// }

#include <stdio.h>

void print1(int arr[3][5], int r, int c)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d   ", arr[i][j]);
        }
        printf("\n");
    }
}

void print2(int *p, int r, int c)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", p[i * c + j]); // 正确的一维化访问
        }
        printf("\n"); // 换行修正
    }
}

int main()
{
    // 明确的二维初始化
    int arr[3][5] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15}};

    print2(&arr[0][0], 3, 5); // 正确传递指针

    return 0;
}