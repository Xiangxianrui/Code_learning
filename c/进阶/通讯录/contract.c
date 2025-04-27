// 修正后的 contract.c

#include "contract.h"
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <stdlib.h>
#include <errno.h> // 确保包含 errno.h

// 检查容量，如果需要则扩容
void CheckCapacity(Contract *pc)
{
    assert(pc);
    // 检查当前联系人数量是否已达到容量上限
    if (pc->count == pc->capacity)
    {
        printf("容量已满，尝试扩容...\n");
        // 尝试使用 realloc 增加容量
        PeoInfo *ptr = (PeoInfo *)realloc(pc->data, (pc->capacity + INC_SZ) * sizeof(PeoInfo));
        if (ptr == NULL) // 检查 realloc 是否失败
        {
            perror("CheckCapacity::realloc 失败"); // 输出 realloc 的错误信息
            printf("错误：扩容失败！\n");
            // 这里需要考虑如何处理扩容失败的情况，可能需要退出或返回错误码
            // 当前实现仅打印错误并返回，容量不会增加
            return;
        }
        else // realloc 成功
        {
            pc->data = ptr;         // 更新 data 指针指向新的内存块
            pc->capacity += INC_SZ; // 增加容量值
            printf("扩容成功，新容量: %d\n", pc->capacity);
        }
    }
    // 如果 count < capacity，则不需要做任何事
}
// 加载通讯录

void LoadContract(Contract *pc)
{
    FILE *pfRead = fopen("contract.c", "rb");
    if (pfRead == NULL)
    {
        perror("fopen");
        return;
    }
    PeoInfo tmp = {0};
    while (fread(&tmp, sizeof(PeoInfo), 1, pfRead) == 1)
    {
        CheckCapacity(pc); // 先保证空间，CheckCapacity 检查空间，空间不够的话就扩容

        pc->data[pc->count] = tmp; // 每次都放到最后面，因为删除某个联系人的时候也是把每个联系人都往前移动
        pc->count++;
    }

    fclose(pfRead);
    pfRead = NULL;
}

// 动态版本初始化
int InitContract(Contract *pc)
{
    assert(pc); // 断言确保 pc 不是 NULL 指针
    pc->count = 0;
    // 使用 calloc 初始化，分配 DEFAULT_SZ 个 PeoInfo 大小的空间，并清零
    pc->data = (PeoInfo *)calloc(DEFAULT_SZ, sizeof(PeoInfo));
    if (pc->data == NULL)
    {
        // 如果内存分配失败，打印错误信息
        perror("InitContract::calloc 失败"); // perror 会根据 errno 输出具体的错误信息
        return 1;                            // 返回 1 表示初始化失败
    }
    pc->capacity = DEFAULT_SZ; // 设置初始容量
    // printf("通讯录初始化成功，初始容量: %d\n", pc->capacity);

    LoadContract(pc);

    return 0; // 返回 0 表示初始化成功
}

void AddContract(Contract *pc)
{
    assert(pc);
    // 添加联系人前先检查容量
    CheckCapacity(pc);
    // 注意：如果 CheckCapacity 内部处理失败的方式只是打印错误并返回，
    // 这里的代码可能会在容量不足且扩容失败的情况下继续执行。
    // 更健壮的设计是让 CheckCapacity 返回状态码或在失败时采取更明确的措施。
    // 假设 CheckCapacity 成功或采取了适当的错误处理：

    // 提示用户输入信息，并使用 scanf 读取
    // 注意：对 scanf 使用 %19s 等格式限制符，防止缓冲区溢出
    printf("请输入名字:>");
    scanf("%19s", pc->data[pc->count].name);
    printf("请输入年龄:>");
    scanf("%d", &(pc->data[pc->count].age)); // 读取整数，注意取地址符 &

    printf("请输入性别:>");
    scanf("%9s", pc->data[pc->count].sex);

    printf("请输入号码:>");
    scanf("%11s", pc->data[pc->count].tele);

    printf("请输入住址:>");
    scanf("%29s", pc->data[pc->count].address);

    pc->count++; // 增加联系人数量
    printf("联系人添加成功\n");
}

void ShowContract(const Contract *pc)
{
    assert(pc);
    if (pc->count == 0)
    {
        printf("通讯录为空。\n");
        return;
    }
    printf("\n--- 通讯录列表 ---\n");
    // 调整格式化输出，使其对齐更美观
    printf("%-20s %-5s %-10s %-15s %-30s\n", "姓名", "年龄", "性别", "电话", "地址");
    printf("-----------------------------------------------------------------------------------\n");
    for (int i = 0; i < pc->count; i++)
    {
        printf("%-20s %-5d %-10s %-15s %-30s\n",
               pc->data[i].name,
               pc->data[i].age,
               pc->data[i].sex,
               pc->data[i].tele,
               pc->data[i].address);
    }
    printf("-----------------------------------------------------------------------------------\n");
}

// 按姓名查找联系人 (内部静态函数)
// 参数 pc 和 name 标记为 const，因为此函数不应修改它们
static int FindByName(const Contract *pc, const char name[])
{
    assert(pc);
    for (int i = 0; i < pc->count; i++)
    {
        // 使用 strcmp 比较姓名
        if (strcmp(pc->data[i].name, name) == 0)
        {
            return i; // 找到则返回索引
        }
    }
    return -1; // 未找到则返回 -1
}

void DelContract(Contract *pc)
{
    assert(pc);
    char name[MAX_NAME] = {0};

    if (pc->count == 0)
    {
        printf("通讯录为空，无法删除。\n");
        return;
    }
    printf("请输入要删除人的名字:>");
    scanf("%19s", name); // 限制输入长度

    // 1. 查找联系人
    int pos = FindByName(pc, name);

    if (pos == -1) // 未找到
    {
        printf("未找到联系人 '%s'，删除失败。\n", name);
        return;
    }

    // 2. 删除联系人（通过覆盖的方式向前移动元素）
    for (int i = pos; i < pc->count - 1; i++)
    {
        pc->data[i] = pc->data[i + 1]; // 结构体可以直接赋值拷贝
    }
    pc->count--; // 联系人数量减一

    // 可选：如果需要，可以清空最后一个（现在未使用的）元素的数据
    // memset(&(pc->data[pc->count]), 0, sizeof(PeoInfo));

    printf("联系人 '%s' 删除成功。\n", name);
}

// 查找联系人并显示
void SearchContract(const Contract *pc) // 将 pc 标记为 const
{
    assert(pc);
    char name[MAX_NAME] = {0};
    printf("请输入要查找的联系人姓名：>");
    scanf("%19s", name); // 限制输入长度

    int pos = FindByName(pc, name); // 只调用一次 FindByName

    if (pos == -1)
    {
        printf("未找到联系人 '%s'。\n", name);
    }
    else
    {
        printf("\n--- 查找到的联系人 ---\n");
        printf("%-20s %-5s %-10s %-15s %-30s\n", "姓名", "年龄", "性别", "电话", "地址");
        printf("-----------------------------------------------------------------------------------\n");
        printf("%-20s %-5d %-10s %-15s %-30s\n",
               pc->data[pos].name,
               pc->data[pos].age,
               pc->data[pos].sex,
               pc->data[pos].tele,
               pc->data[pos].address);
        printf("-----------------------------------------------------------------------------------\n");
    }
}

// 修改指定联系人信息
void ModifyContract(Contract *pc)
{
    assert(pc);
    char name[MAX_NAME] = {0};
    printf("请输入要修改的联系人姓名：>");
    scanf("%19s", name); // 限制输入长度

    int pos = FindByName(pc, name); // 只调用一次 FindByName

    if (pos == -1)
    {
        printf("未找到联系人 '%s'，无法修改。\n", name);
        return;
    }
    else
    {
        printf("找到联系人 '%s'，请输入新信息：\n", name);
        // 读取新的联系人信息
        printf("请输入新名字:>");
        scanf("%19s", pc->data[pos].name);
        printf("请输入新年龄:>");
        scanf("%d", &(pc->data[pos].age));
        printf("请输入新性别:>");
        scanf("%9s", pc->data[pos].sex);
        printf("请输入新号码:>");
        scanf("%11s", pc->data[pos].tele);
        printf("请输入新住址:>");
        scanf("%29s", pc->data[pos].address);
        printf("联系人 '%s' 修改成功。\n", pc->data[pos].name); // 使用修改后的名字确认
    }
}

// 用于 qsort 的比较函数 (按姓名)
int cmp_peo_by_name(const void *e1, const void *e2)
{
    // 正确地进行类型转换并比较 name 成员
    return strcmp(((PeoInfo *)e1)->name, ((PeoInfo *)e2)->name);
}

// 对通讯录按姓名排序
void SortContract(Contract *pc)
{
    assert(pc);
    if (pc->count < 2)
    {
        printf("联系人数量不足，无需排序。\n");
        return; // 如果只有0个或1个元素，不需要排序
    }
    // 调用 C 标准库的 qsort 函数进行排序
    qsort(pc->data,         // 指向要排序的数组
          pc->count,        // 数组中的元素数量 (修正了拼写错误 conut -> count)
          sizeof(PeoInfo),  // 每个元素的大小
          cmp_peo_by_name); // 指向比较函数的指针
    printf("通讯录已按姓名排序。\n");
}

// 销毁通讯录 (释放内存)
void DestroyContract(Contract *pc) // 统一函数名拼写 (Destroy)
{
    assert(pc);
    // 确保 data 指针非空才释放
    if (pc->data != NULL)
    {
        free(pc->data);  // 释放动态分配的内存
        pc->data = NULL; // 将指针设为 NULL，防止悬挂指针 (修正了冒号为分号)
    }
    pc->count = 0;    // 重置计数
    pc->capacity = 0; // 重置容量
}

// 保存通讯录到文件
void SaveContract(const Contract *pc) // 如果函数不修改 pc，可以标记为 const
{
    assert(pc);
    // 使用二进制写模式 ("wb") 打开文件，建议使用 .dat 或其他非 .txt 扩展名表示二进制
    FILE *pfWrite = fopen("contract.dat", "wb");
    if (pfWrite == NULL)
    {
        perror("SaveContract::fopen 打开文件失败"); // 输出具体的错误信息
        return;
    }

    // 可选：先写入联系人数量或容量，这有助于后续加载
    // fwrite(&(pc->count), sizeof(int), 1, pfWrite);

    // 将联系人数据写入文件
    // fwrite 返回实际成功写入的元素数量
    size_t written_count = fwrite(pc->data,        // 数据源
                                  sizeof(PeoInfo), // 每个元素的大小
                                  pc->count,       // 要写入的元素数量
                                  pfWrite);        // 文件指针

    // 检查是否所有元素都成功写入
    if (written_count != (size_t)pc->count)
    {
        perror("SaveContract::fwrite 写入文件时发生错误");
        fprintf(stderr, "错误：应写入 %d 个联系人，实际只写入了 %zu 个。\n", pc->count, written_count);
        // 这里可以考虑更复杂的错误处理，比如删除不完整的文件
    }
    else
    {
        printf("通讯录成功保存到 contract.dat\n");
    }

    fclose(pfWrite); // 关闭文件
    pfWrite = NULL;  // 将文件指针设为 NULL 是个好习惯，尽管函数即将结束
}

// 注意：原始文件末尾多余的 '}' 已被移除

// 考虑添加从文件加载通讯录的功能:
/*
void LoadContract(Contract *pc) {
    assert(pc);
    // 使用二进制读模式 ("rb") 打开文件
    FILE *pfRead = fopen("contract.dat", "rb");
    if (pfRead == NULL) {
        // 如果文件不存在 (通常是第一次运行程序)，这是正常情况
        if (errno == ENOENT) { // ENOENT: No such file or directory
             printf("未找到 contract.dat 文件。将以空通讯录开始。\n");
        } else {
            // 如果是其他错误 (如权限问题)，则报告错误
            perror("LoadContract::fopen 打开文件失败");
        }
        // 即使文件加载失败，也要确保通讯录处于有效的初始状态
        // 检查 pc->data 是否为 NULL，避免重复初始化
        if (pc->data == NULL) {
             InitContract(pc); // 调用初始化函数
        }
        return; // 退出加载函数
    }

    // 如果成功打开文件进行加载，先清空当前内存中的数据以防内存泄漏
    DestroyContract(pc);
    // 重新初始化以获得基础内存分配
    InitContract(pc);

    PeoInfo temp; // 临时变量用于读取数据
    size_t read_count = 0; // 记录成功读取的联系人数量
    // 循环读取文件，直到文件末尾或发生错误
    // fread 返回成功读取的元素数量，每次读取 1 个 PeoInfo
    while(fread(&temp, sizeof(PeoInfo), 1, pfRead) == 1) {
        CheckCapacity(pc); // 确保有足够容量存放读取到的数据
        // 健壮性检查：检查 CheckCapacity 是否成功
        pc->data[pc->count] = temp; // 将读取到的数据拷贝到通讯录中
        pc->count++;                // 增加计数
        read_count++;
    }

    // 检查循环结束的原因：是正常到达文件末尾 (feof) 还是发生了读取错误 (!feof)
    if (!feof(pfRead)) {
        perror("LoadContract::fread 读取文件时发生错误");
        fprintf(stderr, "错误：在读取 %zu 个联系人后发生读取错误。\n", read_count);
    } else {
        printf("从 contract.dat 文件成功加载 %zu 个联系人。\n", read_count);
    }

    fclose(pfRead); // 关闭文件
}
*/