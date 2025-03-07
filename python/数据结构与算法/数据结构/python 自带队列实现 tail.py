from collections import deque
# q=deque([1,2,3,4,5],5)
# q.append(6)
# print(q.popleft())#队首出站-----自动出站，某个队列已经满了的情况下，在添加元素，则删除掉对首的元素


#q.appendleft(1)#队首进队
#q.pop()#队尾出队

def tail(n):
    with open('lines.txt','r') as f:
        q=deque(f,n)
        return q
for line in tail(5):
    print(line,end='')
