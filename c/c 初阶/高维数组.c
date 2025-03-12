#include <stdio.h>

int main()
{
    int arr[3][4] = {{1, 2}, {3, 4}, {5, 6, 7}};
    int i = 0;
    int j = 0;

    printf("请输入 12 个数\n"); // 修正1："输出" → "输入"

    // 输入部分
    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 3; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    // 地址打印部分
    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 3; j++)
        {
            // 修正2：j & arr → j, &arr （运算符错误）
            printf("&arr[%d][%d]=%p ", i, j, &arr[i][j]);
        }
        printf("\n");
    }

    // 单出传入一个数组的时候，传入的是数组首元素的地址
    //&arr 和 sizeof（arr），传入的是整个数组（显示的是首元素的地址）
}