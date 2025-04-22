#include <stdio.h>
#include "contract.h"
void menu()
{
    printf("*****************************************\n");
    printf("*********  1.add         2.del    *******\n");
    printf("*********  3.search     4.modify  *******\n");
    printf("*********  5.show       6.sort    *******\n");
    printf("*********  6.exit                 *******\n");
}

int main()
{
    int input = 0;

    PeoInfo data[100];
    Contract con;
    // 初始化通讯录
    InitContract(&con);

    do
    {
        menu();
        printf("please make your chice:>\n");
        scanf("%d", &input);
        switch (input)
        {
        case 1:
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        default:
            printf("wrong choice\n");
            break;
        }
    } while (input);
    {
    }

    return 0;
}