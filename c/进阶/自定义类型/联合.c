#include <stdio.h>

union Un
{
    int a;
    char c;
};

int main()
{

    union Un u1;
    printf("%lu\n", sizeof(u1));
    printf("%p\n", &u1);
    printf("%p\n", &(u1.a));
    printf("%p\n", &(u1.c));
}