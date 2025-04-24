#include <stdio.h>

enmu Day{
    Mon,
    Tues,
    Wed,
    Thur,
    Fri,
    Sat,
    Sun}; // 入给一个量赋值的话，后面的数字会依次递增。默认从 0 开始
int main()
{

    enmu Day d = Fri;

    return 0;
}