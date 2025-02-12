def merge(li,low,mid,high):#low是真个数列开始的最前面，high 是真个数列的最后面
    i=low
    j=mid+1
    #mid=(low+high)//2
    ltmp=[]
    while i<=mid and j<=high:
        if li[i]<li[j]:
            ltmp.append(li[i])
            i+=1
        else:
            ltmp.append(li[j])
            j+=1
        #while执行完，肯定有一部分没数了。   一部分没数了整个过程都会停止，但另一部分其实应该继续

        while i<=mid:#两个while肯定只有一个执行
            ltmp.append(li[i])
            i+=1
        while j<=high:
            ltmp.append(li[j])
            j+=1

        li[low:high+1]=ltmp
'''list1=[2,4,5,7,1,3,6,8]
merge(list1,0,3,7)
print(list1)


作用范围：
列表左右两端都是有序的列表
'''
def merge_sort(li,low,high):
    if low<high:#至少有两个元素
        mid=(low+high)//2
        merge_sort(li,low,mid)
        merge_sort(li,mid+1,high)
        merge(li,low,mid,high)
import random

li=[i for i in range(100)]

random.shuffle(li)
print(li)
merge_sort(li,0,101)