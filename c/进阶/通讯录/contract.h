#include <string.h>
#include <assert.h>
#include <stdlib.h>
#define MAX 100
#define MAX_NAME 20 // Corrected the spelling here
#define DEFAULT_SZ 3
#define INC_SZ 2

// 人的类型
typedef struct PeoInfo
{
    char name[MAX_NAME];
    int age;
    char sex[10];
    char tele[12];
    char address[30];
} PeoInfo;
// 静态的版本
typedef struct Contract
{
    PeoInfo data[MAX];
    int count; // 当前通讯录中人数
} Contract;

// 动态的版本
typedef struct Contract
{
    PeoInfo *data;
    int count; // 当前通讯录中人数
    int capacity;
} Contract;

int InitContract(Contract *pc);
void AddContract(Contract *pc);
void ShowContract(const Contract *pc);
void DelContract(Contract *pc);
void SearchContract(Contract *pc);
// 修改联系人信息
void ModifyContract(Contract *pc);

// 按照名字排序
void SortContract(Contract *pc);

// 销毁通讯录
void DestoryContract(Contract *pc);