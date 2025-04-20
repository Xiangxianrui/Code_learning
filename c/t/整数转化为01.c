#include <stdio.h>
#include <math.h>
int main()
{
    int num = 0;
    scanf("%d", &num);
    int i = 0;
    int sum = 0;

    while (num)
    {
        int bit = num % 10; // 得到某一位上的数字
        bit = ((bit % 2 == 1) ? 1 : 0);

        sum += bit * pow(10, i);
        i++;
        num /= 10;
    }
    printf("%d\n", sum);

    return 0;
}