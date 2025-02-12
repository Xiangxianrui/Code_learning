'''def partition(data,left,right):


    :param data:给定的数列
    :param left: 开始的位置
    :param right: 结束的位置
    :return: 给下一个二分过程提供范围

    tmp=data[left]
    while left>=right:
        while data[right]>=tmp:
            right-=1
        data[left]=data[right]
        while data[left]<=tmp:
            left+=1
        data[right]=data[left]
    data[left]=tmp

    return left
list1=[2,5,7,6,3,1,4,9,8]
print(list1)
mid=partition(list1,0,len(list1)-1)
print(f'调整后的数列{list1}')
print(mid)
'''

def partition(data, left, right):
    """
    :param data: 给定的数列
    :param left: 开始的位置
    :param right: 结束的位置
    :return: 给下一个二分过程提供范围
    """
    tmp = data[left]
    while left < right:  # 这里修改为left < right，不然可能会多走一轮循环
        while left < right and data[right] >= tmp:
            right -= 1
        data[left] = data[right]
        while left < right and data[left] <= tmp:
            left += 1
        data[right] = data[left]
    data[left] = tmp  # 将基准值放到最终确定的位置（left和right相遇的位置）
    return left


list1 = [5, 2, 7, 6, 3, 1, 4, 9, 8]
list2=[8,3,5,2,56,97,1,865]
def poce(list):
    print(f'原数列{list1}')
    mid = partition(list1, 0, len(list1) - 1)
    print(f'基准数{list1[mid]},调整后的数列{list1}，基准数的位置{mid+1}')

def quick_sort(data,left,right):
    if left<=right:
        mid=partition(data,left,right)
        quick_sort(data,left,mid-1)
        quick_sort(data,mid+1,right)
quick_sort(list1,0,len(list1)-1)
quick_sort(list2,0,len(list2)-1)
print(list1)
print(list2)

