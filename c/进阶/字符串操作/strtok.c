#include <stdio.h>
#include <string.h>
int main()
{
    const char *sep = "@.";
    char email[] = "shengwan211@gmail.com";
    char cp[30] = {0};
    strcpy(cp, email);

    // char *ret = strtok(cp, sep);
    // printf("%s\n", ret);

    // ret = strtok(NULL, sep);
    // printf("%s\n", ret);

    // ret = strtok(NULL, sep);
    // printf("%s\n", ret);
    char *ret = NULL;
    // for (ret = strtok(cp, sep); ret != NULL; ret = strtok(NULL, sep))
    // {
    //     printf("%s\n", ret);
    // }

    do
    {
        ret = strtok(cp, sep);
        printf("%s\n", ret);
    } while (ret != NULL);
    {
        ret = strtok(NULL, sep);
        printf("%s\n", ret);
    }

    return 0;
}