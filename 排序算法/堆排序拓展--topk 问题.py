'''
求一个数列前 k 大的数
1，取列表前k 个数建立小根堆
2.


'''
def sift(li,low,high):
    i=low
    j=2*i+1
    tmp=li[low]
    while j<=high:
        if j+1<=high and li[j]>li[j+1]:
            j=j+1
        if li[j]<tmp:
            li[i]=li[j]
            i=j
            j=2*i+1
        else:
            li[i]=tmp
            break
    else:
        li[i]=tmp

def heap_sort(li):
    n=len(li)
    for i in range((n-2)//2,-1,-1):
        sift(li,i,n-1)
    for i in range(n-1,-1,-1):
        li[i],li[0]=li[0],li[i]
        sift(li,0,i-1)
'''
def topk(li,k):
    heap=li[0:k]
    sift(heap,0,k-1)
    for i in li:
        #if i>k-1:#只考虑截取范围外数列的值
        if i>heap[0]:
            #if li[i]>heap[0]:
            if i>heap[0]:
                heap[0]=li[i]
                sift(heap,0,k-1)
    heap_sort(heap)
    return heap

'''


def topk(li, k):
    if k == 0:
        return []

    # 初始堆化，堆的大小为 k
    heap = li[:k]
    for i in range(k // 2 - 1, -1, -1):  # 从非叶节点开始堆化
        sift(heap, i, k - 1)

    # 遍历剩余的元素，更新堆
    for num in li[k:]:
        if num > heap[0]:  # 如果新元素比堆顶元素大
            heap[0] = num  # 替换堆顶元素
            sift(heap, 0, k - 1)  # 重新调整堆

    # 返回排序后的前 k 大元素（从大到小）
    return sorted(heap, reverse=True)

list1=[87,3,1,4,59,82,37,87,98,64]
print(topk(list1,3))




