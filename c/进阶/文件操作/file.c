#include <stdio.h>
#include <string.h>
#include <errno.h>
int main()
{
    // 写文件
    //  FILE *pf = fopen("test.text", "w");
    //  if (pf == NULL)
    //  {
    //      printf("%s\n", strerror(errno));

    //     return 1;
    // }
    // // else{
    // //     printf("打开成功")
    // // }
    // char i = 0;
    // for (i = 'a'; i <= 'z'; i++)
    // {
    //     fputc(i, pf);
    // }

    // fclose(pf);
    // pf = NULL;

    // 读文件
    // FILE *pf = fopen("test.text", "r");
    // if (pf == NULL)
    // {
    //     printf("%s\n", strerror(errno));

    //     return 1;
    // }
    // 一个一个读，每次都会往后面读一个
    //  int c = fgetc(pf);
    //  printf("%c\n", c);

    // int a1 = fgetc(pf);
    // printf("%c\n", a1);

    // int a2 = fgetc(pf);
    // printf("%c\n", a2);

    // char ch = 0;
    // while ((ch = fgetc(pf)) != EOF)
    // {
    //     printf("%c ", ch);
    // }

    // 写一行数据-------------写文件的时候，会把所有内容全部清空然后再重新写入
    // FILE *pf = fopen("test.text", "w");
    // if (pf == NULL)
    // {
    //     printf("%s\n", strerror(errno));

    //     return 1;
    // }
    // fputs("hello bit\n", pf);
    // fputs("hello bit\n", pf);

    // FILE *pf = fopen("test.text", "r");
    // if (pf == NULL)
    // {
    //     printf("%s\n", strerror(errno));

    //     return 1;
    // }
    // char arr[20] = {0};
    // fgets(arr, 5, pf);//虽然说是读五个，但有用的内容只有四个，因为读的内容还包括了'\0'
    // printf("%s", arr);

    struct S
    {
        char name[20];
        float score;
        int num;
    };
    struct S s = {"zhangsan", 17.2f, 30};

    FILE *pf = fopen("test.text", "w");
    if (pf == NULL)
    {
        printf("%s\n", strerror(errno));
        return 1;
    }

    // fprintf(pf, "%s %f %d", s.name, s.score, s.num);

    fclose(pf);
    pf = NULL;

    return 0;
}