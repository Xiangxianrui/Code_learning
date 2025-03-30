#include <stdio.h>
int main()
{
    int arr1[1000];
    int arr2[1000];
    int m = 0;
    int n = 0;

    printf("请输入正整数 m 和n\n");
    scanf("%d %d", &n, &m);

    int new_arr[m + n];
    printf("请输入%d正整数\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
    }

    printf("请输入%d个正整数", m);
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &arr2[i]);
    }

        int j = 0; // arr1 的指针
    int k = 0; // arr2 的指针
    int t = 0;
    while ((j < n) && (k < m))
    {

        if (arr1[j] < arr2[k])
        { // arr1 中的数字更小
            new_arr[t] = arr1[j];
            j++;
            t++;
        }
        else
        {
            new_arr[t] = arr2[k]; // arr2 中的数字更小
            k++;
            t++;
        }

    } // 某一个数列已经走完了

    // arr1遍历完了导致循环跳出
    if (j == n)
    {
        while (k < m)
        {
            new_arr[t++] = arr2[k++];
        }
    }

    if (k == m)
    {
        while (j < n)
        {
            new_arr[t++] = arr1[j++];
        }
    }

    for (int i = 0; i < n + m; i++)
    {
        printf("%d ", new_arr[i]);
    }
    printf("\n");

    return 0;
}
