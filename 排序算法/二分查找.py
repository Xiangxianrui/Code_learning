import random
def binalary_search(target,li):
    left=0
    right=len(li)-1
    while left <= right:
        mid=(left+right)//2
        if li[mid]>target:
            right=mid-1
        if li[mid]<target:
            left=mid+1
        else:
            return mid
    return None
#li=[random.randint(10,100) for i in range(100)]
li=[1,2,4,6,8,9,10,19,25,38]
print(li)
print(binalary_search(19,li))
