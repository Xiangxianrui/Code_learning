def radix_sort(li):
    max_num=max(li)
    #判断要分几次类
    it=0
    while 10**it<max_num:
        buckets=[[] for i in range(10)]
        #digital表示在这一层要把这个数放到哪个桶里面
        #987--->1_7，2_8  先整除，再除以十取余
        for var in li:
            digital=(var//(10**it))%10
            buckets[digital].append(var)

        li.clear()
        for buc in buckets:
            li.extend(buc)
        it += 1
    return li
import random
list1=[random.randint(1,100000) for i in range(100000)]
radix_sort(list1)
print(list1)


