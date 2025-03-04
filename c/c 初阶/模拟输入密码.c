#include <stdio.h>

int main()
{
    int i = 0;
    // 只能输入三次，判断输入的东西跟密码是否匹配
    char password[20] = {0}; // 实际上密码是 abcdef
    for (i = 1; i < 3; i++)
    {
        printf("请输入密码：>");
        scanf("%d", password);
        if (stramp(password, "abcdef") == 0)
        {
            printf("密码正确，登录成功\n");
            break;
        }
        else
        {
            printf("密码错误，请重新输入\n");
        }
    }
}