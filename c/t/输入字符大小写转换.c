#include <stdio.h>
int main(){
    char ch = 0;
    while (scanf("%c",&ch) == 1){//%c会返回读取到的值的个数
        //scanf("%c",&ch) == EOF，scanf读取失败返回EOF
        if (ch >= 'a' && ch <= 'z'){
            printf("%c\n",ch-32);
        }
        else
        printf("%c\n",ch+32);

        getchar();
    }




return 0;
}