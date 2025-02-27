#include <stdio.h>

int main()
{
    //     if (3 == 5)
    //     {
    //         printf("hh\n");
    //     }
    //     int age = 20;
    //     if (age > 18)//只能跟一条语句，如果要执行多个执行语句的话，需要用{}括起来
    //     {
    //         printf("成年\n");
    //     }
    // int age = 20;
    // scanf("%d", &age);
    // if (age < 20)
    //     printf("未成年\n");
    // else if (age >= 18 && age < 28) // 跟 Python 不一样，不是根据缩进来判断，else 是跟前面的 if 匹配的
    //     printf("青年\n");

    // return 0;

    // switch语句
    int day = 0;
    sacnf("%d\n", &day);
    {
        switch (day)
        {
        case 1: // case 后面要接整型常量表达式（字符也行，因为存的是 ascll 码值）
            printf("星期一\n");
            break;
        case 2:
            printf("星期二\n");
            break; // case 只是规定了程序的入口，如果不加 break 的话，进入执行 case 的内容后还会接着往后运行后面不合规的代码

        default:
            printf("你在乱输\n");
            break; // 默认情况或者说匹配不上的情况
        }
    }
    return 0;
}