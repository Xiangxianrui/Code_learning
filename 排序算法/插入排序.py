def insertion_sort(arr):
    for i in range(1, len(arr)):#i每个循环无序区第一个数的索引
        key = arr[i]
        j = i - 1     #j 是有序区最后一个数
        # 将比 key 大的元素向后移动
        while j >= 0 and arr[j] > key:
            arr[j + 1] = arr[j]
            j -= 1#已排序区索引向前走，看还有没有没有排序成功的
        # 插入 key 到正确位置
        arr[j + 1] = key
    return arr

# 示例使用
arr = [4,6,1,3,2,9,19]
sorted_arr = insertion_sort(arr)
print("排序后的数组:", sorted_arr)

'''
外层循环遍历位置，表示整个数列调整到哪个位置了
内层循环将整个有序区和后面一个无序的数调整好---内层循环每次调整一个数（如果更大就到后面去）

'''



def insert_sort1(li):
    for i in range(1,len(li)):
        tmp=li[i]#i代表无序区
        j=i-1
        while j>0 and li[j]>tmp:
            li[i]=tmp
            j-=1







