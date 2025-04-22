#include <string.h>

// 人的类型
typedef struct PeoInfo
{
    char name[20];
    int age;
    char sex[10];
    int tele[12];
    char address[30];
} PeoInfo;

typedef struct Contract
{
    PeoInfo data[100];
    int count; // 当前通讯录中人数
} Contract;

void InitContract(Contract *pc);