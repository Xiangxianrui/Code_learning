#include <stdio.h>
struct S
{
    int sum;
    int data[1000];
}

void
print1(struct S ss)
{
    for (int i = 0; i < 3; i++)
    {
        printf("%d ", ss.data[i]);
    }
    printf("%d\n", ss.sum);
}

int main()
{
    struct S s1 = {{1, 2, 3}, 100};
    print1(s);
    // print2(&s);
    return 0;
}