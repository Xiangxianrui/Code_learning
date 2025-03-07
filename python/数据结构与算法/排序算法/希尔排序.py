#本质：连续多次分组的插入排序
def insertion_sort(arr,gap):
    for i in range(gap, len(arr)):#i每个循环无序区第一个数的索引
        key = arr[i]
        j = i - gap    #j 是有序区最后一个数
        # 将比 key 大的元素向后移动
        while j >= 0 and arr[j] > key:
            arr[j + gap] = arr[j]
            j -= gap#已排序区索引向前走，看还有没有没有排序成功的
        # 插入 key 到正确位置
        arr[j + gap] = key


'''
从思想上看是根据间隔分为不同的组，但实际上是把



'''
def shell_sort(li):
    d=len(li)//2
    while d>=1:
        insertion_sort(li,d)
        d=d//2