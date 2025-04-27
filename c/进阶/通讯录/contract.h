// 修正后的 contract.h

#ifndef CONTRACT_H // 使用头文件保护宏是个好习惯
#define CONTRACT_H

#include <string.h>
#include <assert.h>
#include <stdlib.h>
#include <stdio.h> // 如果函数原型中使用了 FILE (例如 Save/Load)，则需要包含
#include <errno.h> // 需要包含 errno.h 以便使用 errno

#define MAX_NAME 20
#define DEFAULT_SZ 3
#define INC_SZ 2

// 联系人信息结构体定义
typedef struct PeoInfo
{
    char name[MAX_NAME];
    int age;
    char sex[10];
    char tele[12];
    char address[30];
} PeoInfo;

// 通讯录结构体 - 动态版本 (删除或注释掉此前的静态版本)
typedef struct Contract
{
    PeoInfo *data; // 指向动态分配内存的指针
    int count;     // 当前联系人数量
    int capacity;  // 当前分配的容量
} Contract;

// 函数原型声明
int InitContract(Contract *pc);
void CheckCapacity(Contract *pc); // 添加 CheckCapacity 的原型声明
void AddContract(Contract *pc);
void ShowContract(const Contract *pc);
void DelContract(Contract *pc);
void SearchContract(const Contract *pc);
void ModifyContract(Contract *pc);
void SortContract(Contract *pc);
// 推荐将 DestoryContract 的拼写改为 DestroyContract
void DestroyContract(Contract *pc);    // 销毁通讯录 (释放内存)
void SaveContract(const Contract *pc); // 保存通讯录到文件
// 可以考虑添加: void LoadContract(Contract* pc); // 从文件加载通讯录

void LoadContract(Contract *pc);

#endif // CONTRACT_H