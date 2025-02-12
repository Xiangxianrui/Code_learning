def radix_sort(li):
    max_num=max(li)
    it=0
    #判断要分几次类
    while 10**it<max_num:
        buckets=[[] for _ in range(10)]#生成多个桶
        for var in li:
            digit=(var//10**it)%10#在这一层放入的桶的编号
            buckets[digit].append(var)
        li.clear()
        for buc in buckets:
            li.extend(buc)
        it+=1










