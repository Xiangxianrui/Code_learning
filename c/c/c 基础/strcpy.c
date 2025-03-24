// #include <stdio.h>

// void my_strcpy(char *target, char *model)
// {
//     while (*model != '\0')
//     {                     // model 是指针，应该解引用来获取字符
//         *target = *model; // 复制字符
//         target++;         // 移动 target 指针
//         model++;          // 移动 model 指针
//     }
//     *target = '\0'; // 末尾补上字符串终止符
// }

// int main()
// {
//     char arr1 = {"XXXXXXXXXX"};
//     char arr2 = {"hello bit"};
//     my_strcpy(arr1, arr2);
//     printf("%s\n", arr1);

//     return 0;
// }

#include <stdio.h>
#include <assert.h>

void my_strcpy(char *target, char *model)
{
    while (*model != '\0') // 遍历字符串直到 '\0'
    {
        *target = *model; // 复制字符
        target++;         // 移动指针
        model++;
    }
    *target = '\0'; // 末尾补上字符串终止符
}

// void stringcopy(char *dest, const char *src)
// {
//     assert(src != NULL);
//     assert(dest != NULL);
//     while (*dest++ = *src++)
//     {
//         ;
//     }
// }

int main()
{
    char arr1[20] = "XXXXXXXXXX"; // 确保 arr1 有足够的空间
    char arr2[] = "hello bit";    // 源字符串

    my_strcpy(arr1, arr2); // 调用自定义的 strcpy
    printf("%s\n", arr1);  // 输出复制后的 arr1

    const int num = 10;
    // num = 20;  const 修饰之后不能被修改
    int *p = &num;
    *p = 20;
    printf("%d\n", num);

    return 0;
}