#include <stdio.h>
int main()
{
    int price = 0;
    int mouth = 0;
    int data = 0;
    int flag = 0;
    // int tmp = 0;
    scanf("%d %d %d %d", &price, &mouth, &data, &flag);
    {
        if (data == 11 && mouth == 11)
        {
            price *= 0.7;
        }
        else if (data == 11 && mouth == 11)
        {
            price *= 0.8;
        }
        price = ((price > 50) ? (price - 50) : 0);
        printf("%d\n", price);
    }

    return 0;
}