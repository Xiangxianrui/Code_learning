#include <stdio.h>
#include "contract.h"

void menu()
{
    printf("*****************************************\n");
    printf("********* 1.add         2.del    *******\n");
    printf("********* 3.search     4.modify  *******\n");
    printf("********* 5.show       6.sort    *******\n");
    printf("********* 0.exit                 *******\n");
    printf("*****************************************\n");
}

int main()
{
    int input = 0;
    Contract con;

    // 初始化通讯录
    InitContract(&con);

    do
    {
        menu();
        printf("please make your choice:>\n");
        scanf("%d", &input);
        getchar(); // 消耗掉 scanf 留下的换行符，避免后续输入问题

        switch (input)
        {
        case 1:
            // 添加联系人
            AddContract(&con);
            break;
        case 2:
            // 删除联系人
            DelContract(&con);
            break;
        case 3:
            // 查找联系人
            SearchContract(&con);
            break;
        case 4:
            // 修改联系人
            ModifyContract(&con);
            break;
        case 5:
            // 显示所有联系人
            ShowContract(&con);
            break;
        case 6:
            // 排序联系人
            // printf("排序功能待实现\n");
            SortContract(&con);
            break;
        case 0:
            printf("退出程序\n");
            break;
        default:
            printf("无效的选择，请重新输入\n");
            break;
        }
    } while (input);

    return 0;
}