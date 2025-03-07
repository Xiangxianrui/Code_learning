'''
计数排序：
遍历整个列表，记录每个数的个数，然后从小到大，把每个数都加入到新列表（个数也要算）


'''


def count_sort(li,max_count=100):

    count=[0 for i in range(max_count+1)]
    for val in li:
        count[val]+=1
    li.clear()
    for ind,val in enumerate(count):
        for i in range(val):
            li.append(ind)



def count_sort1(li,max_mun):
    count=[0 for i in range(max_mun+1)]
    for val in li:
        count[val]+=1
    li.clear()
    for ind,val in enumerate(count):
        for i in range(val):
            li.append(ind)

import random
list1=[i for i in range(1000)]
random.shuffle(list1)
print(list1)
count_sort1(list1,max_mun=1001)
print(list1)

































