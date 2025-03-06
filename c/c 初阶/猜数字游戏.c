// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>
// void menu()
// {
//     printf("****************\n");
//     printf("****1:play******\n");
//     printf("****0:exit******\n");
// }

// void game()
// {
//     int guess_num = 0;
//     // srand((unsigned int)time(NULL));
//     // 01.生成随机数
//     int ret = rand() % 100 + 1; // 生成随机数的函数
//     // scanf("%d",&guess_num);
//     // 02.猜数字
//     while (1)
//     {
//         scanf("%d", &guess_num);
//         if (guess_num > ret)
//         {
//             printf("猜大了\n");
//         }
//         else if (guess_num < ret)
//         {
//             printf("猜小了\n");
//         }
//         else
//         {
//             printf("猜对了\n");
//             break;
//         }
//     }
// }

// int main()
// {
// srand((unsigned int)time(NULL));
//     int input = 0;
//     // scanf("%d",&input);

//     // 电脑随机产生一个数字（1～100）
//     // 猜数字，猜大了或者猜小了都得有反馈
//     do
//     {
//         menu();
//         printf("请选择:>\n");
//         scanf("%d", &input);
//         switch (input)
//         {
//         case 1:
//             printf("猜数字\n");
//             break;
//         case 0:
//             printf("已退出\n");
//             break;
//         default:
//             printf("输入错入，请重试\n");
//             break;
//         }

//     } while (input);

//     return 0;
// }
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// 显示菜单
void menu()
{
    printf("****************\n");
    printf("**** 1: Play ****\n");
    printf("**** 0: Exit ****\n");
    printf("****************\n");
}

// 猜数字游戏逻辑
void game()
{
    int guess_num = 0;
    int ret = rand() % 100 + 1; // 生成 1~100 的随机数

    printf("我已经想好了一个 1 到 100 的数字，快来猜吧！\n");

    while (1)
    {
        printf("请输入你的猜测: ");
        scanf("%d", &guess_num);

        if (guess_num > ret)
        {
            printf("猜大了！\n");
        }
        else if (guess_num < ret)
        {
            printf("猜小了！\n");
        }
        else
        {
            printf("恭喜你，猜对了！\n");
            break;
        }
    }
}

int main()
{
    int input = 0;

    // 初始化随机数种子
    srand((unsigned int)time(NULL));

    do
    {
        menu(); // 显示菜单
        printf("请选择: ");
        scanf("%d", &input);

        switch (input)
        {
        case 1:
            game(); // 进入游戏
            break;
        case 0:
            printf("已退出游戏，再见！\n");
            break;
        default:
            printf("输入错误，请重新选择！\n");
            break;
        }
    } while (input != 0); // 当输入为 0 时退出程序

    return 0;
}