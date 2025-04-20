#include <stdio.h>
int main()
{
    int n = 0;
    scanf("%d", &n);
    int arr[10][10] = {0};
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    // for (int i = 0; i < n; i++)
    // { // 扫描 n 列
    //     for (int j = 0; j < i - 1; j++)
    //     {
    //         if (arr[i][j] != 0)
    //         {
    //             printf("NO");
    //             break;
    //         }
    //     }
    // }
    // printf("YES");
    int flag = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[i][j] != 0)
            {
                flag = 0;
                goto end;
            }
        }
    }
end:
    if (flag == 0)
    {
        printf("NO\n");
    }
    else
    {
        printf("YES\n");
    }
    return 0;
}