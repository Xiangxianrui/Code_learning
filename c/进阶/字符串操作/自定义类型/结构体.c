#include <stdio.h>
struct Stu
{
    char name[20];
    int age;

}; // 可以加上s1,s2

struct Node
{
    int data;
    struct Node *next;
};

struct S1
{
    char c1;
    int i;
    char c2;
};

int main()
{
    // struct Stu s3;
    printf("%d", sizeof(struct S1));
    return 0;
}