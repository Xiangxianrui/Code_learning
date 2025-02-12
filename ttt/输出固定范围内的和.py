times = int(input('请输入个数'))
li = []
for i in range(times):
    val = eval(input())
    li.append(val)
data = input().strip()
start, end = map(int, data.split())
sum = 0
for i in range(start, end + 1):
    sum += li[i]
print(sum)
#优化版
n=int(input('请输出次数'))
sums=[0 for i in range(n)]
total_sum=0
for num in range(n):
    n=int(input())
    sum+=num
    total_sum[num]=sum

