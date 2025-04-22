#include <stdio.h>
// struct S1
// {               // 后面增加了一些东西就是位断
//     int _a : 2; // 表示_a 只分配 2 个比特位。比如说 int flag只表示 0 或者 1，则只需要两个比特
//     int _b : 3;
// };

struct S
{              // 后面增加了一些东西就是位断
    int a : 3; // 表示_a 只分配 2 个比特位。比如说 int flag只表示 0 或者 1，则只需要两个比特
    int b : 4;
    int c : 5;
    int d : 4; // 自定义的大小不能超过类型的 bit 最大值
};
int main()
{
    // printf("%lu ", sizeof(struct S1)); // 如果是int 类型，虽然只占用了那么多的比特，但开辟空间的时候是按照一个 int 开辟的，一定是 4 的倍数
    // 如果是 char 类型，则每次开辟 1 个字节

    struct S s1 = {0};
    s.a = 10;
    s.b = 12;
    s.c = 3;
    s.d = 4;

    return 0;
}