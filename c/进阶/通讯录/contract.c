#include "contract.h"
#include <stdio.h>
#include <string.h> // Include string.h for memset
#include <assert.h>
#include <stdlib.h> // Include stdlib.h for exit

// enmu Option{
//     EXIT,
//     ADD,
//     DEL,
//     SEARCH,
//     MODIFY,
//     SHOW,
//     SORT
// };

// 静态版本

// void InitContract(Contract *pc)
// {
//     pc->count = 0;
//     memset(pc->data, 0, sizeof(pc->data));
// }

// 动态版本
int InitContract(Contract *pc)
{
    pc->count = 0;
    pc->data = calloc(DEFAULT_SZ, sizeof(PeoInfo)); // 初始化，开辟 3 个 PeoInfo 的空间大小。
    // 开辟失败则报错
    if (pc->data == NULL)
    {
        printf("%s\n", strerror(errno));
        return 1;
    }
    pc->capacity = DEFAULT_SZ;
    return 0;
}

void CheckCapacity(Contract *pc)
{
    if (pc->count == MAX)
    {
        PeoInfo *ptr == realloc(pc->data, (pc->capacity + INC_SZ) * sizeof(PeoInfo));
        if (ptr == NULL)
        {
            printf("%s\n", strerror(errno));
            return;
        }
        else
        {
            pc->data = ptr;
            pc->capacity += INC_SZ : printf("增容成功\n");
        }
    }
}

void AddContract(Contract *pc)
{
    assert(pc);
    CheckCapacity(pc);
    // {
    //     printf("Failed to add, contact list is full\n");
    //     return;
    // }

    printf("请输入名字:>\n");
    scanf("%s", pc->data[pc->count].name);
    printf("请输入年龄:>\n");
    scanf("%d", &(pc->data[pc->count].age));

    printf("请输入性别:>\n");
    scanf("%s", pc->data[pc->count].sex);

    printf("请输入号码:>\n");
    scanf("%s", pc->data[pc->count].tele); // Assuming tele is char[12]

    printf("请输入住址:>\n");
    scanf("%s", pc->data[pc->count].address);

    pc->count++;
    printf("Successfully added\n");
}

void ShowContract(const Contract *pc)
{
    assert(pc);
    printf("\n");
    printf("name\tage\tsex\tTele\taddress\n");
    printf("%20s\t%3s\t%5s\t%12s\t%30s\n", "Name", "Age", "Sex", "Telephone", "Address");
    for (int i = 0; i < pc->count; i++)
    {
        printf("%20s\t%3d\t%5s\t%12s\t%30s\n",
               pc->data[i].name,
               pc->data[i].age,
               pc->data[i].sex,
               pc->data[i].tele,
               pc->data[i].address);
    }
}
// 查找元素
static int FindByName(Contract *pc, char name[])
{
    assert(pc);
    for (int i = 0; i < pc->count; i++)
    {
        if (0 == strcmp(pc->data[i].name, name))
        {
            return i;
        }
    }
    return -1;
}
void DelContract(Contract *pc)
{
    char name[MAX_NAME] = {0};
    assert(pc);
    if (pc->count == 0)
    {
        printf("通讯录为空，不可删除。\n");
        return; // Corrected this line
    }
    printf("请输入要删除人的名字:>");
    scanf("%s", name); // Corrected this line

    // 1.查找元素
    int pos = FindByName(pc, name);

    if (pos == -1)
    {
        printf("要删除的联系人不存在，删除失败.\n");
        return;
    }
    // 2.删除元素
    for (int i = pos; i < pc->count - 1; i++)
    {
        pc->data[i] = pc->data[i + 1];
    }
    pc->count--;
    printf("删除成功;\n");
}

void SearchContract(Contract *pc)
{
    assert(pc);
    char name[MAX_NAME] = {0};
    printf("请输入要查找的联系人姓名：>");
    scanf("%s", name);
    if (FindByName(pc, name) == -1)
    {
        printf("查找的联系人不存在");
        return;
    }
    else
    {
        int pos = FindByName(pc, name);
        printf("name\tage\tsex\tTele\taddress\n");
        printf("%20s\t%3d\t%5s\t%12s\t%30s\n",
               pc->data[pos].name,
               pc->data[pos].age,
               pc->data[pos].sex,
               pc->data[pos].tele,
               pc->data[pos].address);
    }
}
// 修改指定联系人信息
void ModifyContract(Contract *pc)
{
    assert(pc);
    char name[MAX_NAME] = {0};
    printf("请输入要修改的联系人姓名：>");
    scanf("%s", name);
    if (FindByName(pc, name) == -1)
    {
        printf("要修改的联系人不存在");
        return;
    }
    else
    {
        int pos = FindByName(pc, name);
        printf("请输入名字:>\n");
        scanf("%s", pc->data[pos].name);
        printf("请输入年龄:>\n");
        scanf("%d", &(pc->data[pos].age));

        printf("请输入性别:>\n");
        scanf("%s", pc->data[pos].sex);

        printf("请输入号码:>\n");
        scanf("%s", pc->data[pos].tele);

        printf("请输入住址:>\n");
        scanf("%s", pc->data[pos].address);
        printf("修改成功");
    }
}

int cmp_peo_by_name(const void *e1, const void *e2)
{
    return strcmp((((PeoInfo *)e1)->name, ((PeoInfo *)e1)->name));
}

void SortContract(Contract *pc)
{
    assert(pc);
    qsort(pc->data, pc->conut, sizeof(PeoInfo), cmp_peo_by_name);
}

// destroy whole contract(clear the memory)
void DestoryContract(Contract *pc)
{
    assert(pc);
    free(pc->data);
    pc->data = NULL:
}
