#include <stdio.h>
int main()
{
    printf("请输入两个数 n,m:");
    int n = 0;
    int m = 0;
    scanf("%d %d", &n, &m);
    int arr[n][m];
    int i = 0;
    int j = 0;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d ", &arr[j][i]);
        }
        printf("\n");
    }

    return 0;
}