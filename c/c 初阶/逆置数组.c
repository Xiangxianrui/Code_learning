#include <stdio.h>
#include <string.h>
// int main()
// {
//     char arr[10001] = {0};
//     gets(arr);
//     int left = 0;
//     int right = strlen(arr) - 1;
//     char tmp = 0;
//     while (left < right)
//     {
//         tmp = arr[left];
//         arr[left] = arr[right];
//         arr[right] = tmp;

//         left++;
//         right--;
//     }
//     printf("%s\n", arr);

//     return 0;
// // }
// #include <math.h>
// //得到 aaa 这样的数的前 项和
// int get_num(int a, int n)
// { // 得到 aaaaaa
//     // a 是一个小于 10的数
//     int tmp = 0;
//     for (int i = 0; i < n; i++)
//     {
//         tmp += (a * pow(10, i));
//     }

//     return tmp;
// }

// int main()
// {
//     // 得到每一位都是 a 的前 n 项和

//     // 函数得到 a，aa，aaa
//     int a = 0;
//     int n = 0;
//     // scanf("%d %d", &a ,&n);
//     scanf("%d %d", &a, &n);
//     printf("%d\n", get_num(a, n));
//     int sum = 0;
//     for (int c = 0; c < n; c++)
//     {
//         sum += get_num(a, c + 1);
//     }
//     printf("%d\n", sum);

//     return 0;
// }
int get_sum(n)
{
    if (n < 10)
    {
        return n * n;
    }
    else
    {
        return get_num(n / 10)
    }
}

int mian()
{
    for (int i = 0; i < 10001; i++)

        return 0;
}