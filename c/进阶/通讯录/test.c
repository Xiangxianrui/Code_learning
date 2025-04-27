// 修正后的 test.c
#include <stdio.h>
#include "contract.h" // 包含头文件

// 菜单函数
void menu()
{
    printf("\n*****************************************\n");
    printf("********* 1. 添加联系人      *********\n");
    printf("********* 2. 删除联系人      *********\n");
    printf("********* 3. 查找联系人      *********\n");
    printf("********* 4. 修改联系人      *********\n");
    printf("********* 5. 显示所有联系人  *********\n");
    printf("********* 6. 排序联系人      *********\n");
    printf("********* 0. 退出程序        *********\n");
    printf("*****************************************\n");
}

// 定义枚举类型表示选项 (修正了拼写 enmu -> enum)
enum Option
{
    EXIT,   // 对应 0
    ADD,    // 对应 1
    DEL,    // 对应 2
    SEARCH, // 对应 3
    MODIFY, // 对应 4
    SHOW,   // 对应 5
    SORT    // 对应 6
}; // 枚举定义末尾需要分号

int main()
{
    int input = 0; // 用于存储用户输入的选择
    Contract con;  // 声明通讯录结构体变量

    // 初始化通讯录
    if (InitContract(&con) != 0)
    {
        // 处理初始化失败的情况 (例如内存分配失败)
        fprintf(stderr, "严重错误：通讯录初始化失败，程序退出。\n");
        return 1; // 返回错误码
    }

    // *** 可选：在初始化后从文件加载联系人 ***
    // LoadContract(&con); // 如果你实现了 LoadContract 函数，在这里取消注释

    // 主循环，直到用户选择退出
    do
    {
        menu(); // 显示菜单
        printf("请输入你的选择:>");

        // 检查 scanf 是否成功读取一个整数
        if (scanf("%d", &input) != 1)
        {
            printf("输入无效，请输入菜单对应的数字。\n");
            // 清空输入缓冲区，防止因错误输入（如字符）导致无限循环
            while (getchar() != '\n')
                ;       // 读取并丢弃缓冲区中直到换行符的所有字符
            input = -1; // 将 input 设为一个无效选项，以便重新显示菜单
            continue;   // 跳过本次循环的 switch 部分，直接开始下一次循环
        }

        // 读取并丢弃 scanf("%d", ...) 留在缓冲区中的换行符
        getchar();

        // 根据用户输入执行相应操作
        switch (input)
        {
        case ADD: // 添加
            AddContract(&con);
            break;
        case DEL: // 删除
            DelContract(&con);
            break;
        case SEARCH: // 查找
            SearchContract(&con);
            break;
        case MODIFY: // 修改
            ModifyContract(&con);
            break;
        case SHOW: // 显示
            ShowContract(&con);
            break;
        case SORT: // 排序
            SortContract(&con);
            // ShowContract(&con); // 可以选择在排序后自动显示结果
            break;
        case EXIT:                 // 退出
            SaveContract(&con);    // 退出前保存通讯录
            DestroyContract(&con); // 释放内存 (使用修正后的函数名)
            printf("程序已退出，再见！\n");
            break;
        default: // 无效选择
            printf("无效的选择，请重新输入。\n");
            break;
        }
    } while (input != EXIT); // 当用户输入不是 0 (EXIT) 时继续循环

    return 0; // 程序正常退出
}