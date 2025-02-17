def binalary_search(target,li):
    left=0
    right=len(li)
    while left <= right:
        mid=(left+right)//2
        if li[mid]>target:
            right=mid-1
        if li[mid]<target:
            left=mid+1
        else:
            return mid-1
    return None

