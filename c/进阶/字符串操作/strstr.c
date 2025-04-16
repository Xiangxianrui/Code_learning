#include <stdio.h>

char *my_strstr(const char *str1, const char *str2)
{                      // str2是否在 str1 中
    char *str1 = str1; // 记录没匹配上的位置，匹配不上就回溯重新开始比较
    char *str2 = str2;
    char *p = str1;
    while (*p1 != **p2)
    { // 开头如果匹配不上就一直向后找
        p1++;
    } // 退出循环后两个指针指向的地方是相同的
    char **str1 = str2; // 把开始位置对齐
    // 现在两个指针都指向了开始的位置而且第一个位置是匹配的
    while (*p)
    { // 只要短链还没有结束就一直对比
        s1 = p;
        s2 = str2;
        while ((*s1 != '\0') && (*s2 != '\0'))
            (*s1 == *s2)
            {
                s1++;
                s2++;
            }
        if (*p2 == '\0')
        {
            return (char *)p;
        }
        p++;
    }
    return NULL;
}

int main()
{

    return 0;
}