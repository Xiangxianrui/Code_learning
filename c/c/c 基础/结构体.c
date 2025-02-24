#include <stdio.h>

struct Stu{
    //结构体的成员
    char name[20];
    int age;
    char sex[10];
    char tele[12];
};

int main() {
    //定义结构体变量
    struct Stu s ={"zhangsan",20,"nan","791696986"};
    printf("%s %d %s %s\n",s.name,s.age,s.sex,s.tele);//s.name 结构体变量.成员
    
    return 0;
}