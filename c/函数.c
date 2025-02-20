#include <stdio.h>
int add(int x,int y)
{
    int z =0;
    z=x+y;
    return z;

}
int main()
{
    int n1 = 10;
    int n2 = 20;
    int sum = n1+n2;
    printf("%d\n",sum);
    int t1 = 100;
    int t2 = 200;

    int res = add(t1,t2);

    printf("%d\n",add(t1,t2));

}