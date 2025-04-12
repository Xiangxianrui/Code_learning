#include <stdio.h>
int Add(int x, int y)
{
    return x + y;
}
int main()
{
    // int arr[10] = {1, 2, 3, 4};
    // int *parr = &arr;
    // int *new_parr = parr + 1;
    printf("%p\n", &Add);
    int (*pf)(int, int) = &Add;
    int res = (*pf)(3, 5);
    printf("%d\n", res);

    return 0;
}