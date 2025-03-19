// #include <stdio.h>
// #include <string.h>
// void remove_chat(char *parr, char target, int sz)
// {
//     int slow = 0;
//     int fast = 0;
//     for (fast = 0; fast < sz; fast++){
//         if (parr[fast] != target){
//             parr[slow] = parr[fast];
//             slow ++;
//         } 
//     }
//     parr[slow] = '\0';
// }

// int main()
// {
//     char arr[100] = {0};
//     // int target = 0;
//     char target;

//     printf("请输入一个整数字符串\n");
//     scanf("%s", arr);
//     printf("请输入要删除的数字(1-10):>");
//     int sz = strlen(arr);
//     scanf("%c",&target);

//     remove_char(arr, target, sz);
//     printf("%s\n",arr);
// return 0; 
// }
#include <stdio.h>
#include <string.h>

void remove_char(char *parr, char target, int sz)
{
    int slow = 0;
    for (int fast = 0; fast < sz; fast++) {
        if (parr[fast] != target) {
            parr[slow] = parr[fast];
            slow++;
        }
    }
    parr[slow] = '\0';  // 确保字符串以 '\0' 结尾
}

int main()
{
    char arr[100];  // 预留足够空间
    char target;

    printf("请输入一个整数字符串: ");
    scanf("%s", arr);

    printf("请输入要删除的数字(0-9): ");
    scanf(" %c", &target);  // **注意前面的空格，防止缓冲区问题**

    int sz = strlen(arr);
    remove_char(arr, target, sz);

    printf("处理后的字符串: %s\n", arr);
    return 0;
}
