#include <stdio.h>

// 定义人员结构体
struct Peo
{
    char name[20]; // 姓名
    char tele[12]; // 电话
    char sex[5];   // 性别
    int high;      // 身高
};

// 定义班级结构体，包含一个 Peo 类型的成员
struct Class
{
    struct Peo student;  // 班级中的一个学生
    int stu_num;         // 学生人数
    float average_score; // 平均成绩
};

int main()
{
    // 初始化一个人员
    struct Peo p1 = {"张三", "15596668862", "男", 181};

    // 初始化一个班级，注意是嵌套初始化
    struct Class class1 = {{"李四", "13058073103", "女", 167}, 45, 87.5};

    // 打印 p1 的电话
    printf("%s\n", p1.tele);

    return 0;
}