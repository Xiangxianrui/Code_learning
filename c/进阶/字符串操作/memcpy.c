#include <stdio.h>
#include <assert.h>

char *my_memcpy(void *dest, void *src, size_t byte_num) // 参数改为 size_t 类型
{
    assert(dest && src); // 检查空指针
    char *ret = dest;    // 保存起始地址用于返回
    for (size_t i = 0; i < byte_num; i++)
    {
        *(char *)dest = *(char *)src; // 逐字节拷贝
        dest = (char *)dest + 1;      // 正确指针递增
        src = (char *)src + 1;
    }
    return ret; // 返回目标起始地址
}

// char *my_memcpy2(void *dest, void *src, size_t byte_num)
// {
//     char *p = dest;

//     char tmp_parr[40] = {0};
//     my_memcpy(dest, src, byte_num); // 先把要拷贝的内容转移到另一片内存中存储起来
//     // 再把 dest 的内容转移回去

//     my_memcpy(src, tmp_parr, byte_num);
//     return p;
// }

int main()
{
    int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    // char arr3[40] = "successfully changed"; // 扩容确保容量足够（网页4）

    // my_memcpy(arr3, arr1, 36); // 安全拷贝

    // // 正确输出验证：打印 arr3 的原始字节内容
    // printf("Copied bytes: ");
    // for (size_t i = 0; i < 36; i++)
    // {
    //     printf("%02X ", (unsigned char)arr3[i]);
    // }

    my_memcpy(arr1, arr1 + 3, 36);
    int num = 36;
    int i = 0;
    while (num--)
    {
        printf("%d ", arr1[i]);
        i++;
    }

    return 0;
}