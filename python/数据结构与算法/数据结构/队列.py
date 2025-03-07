class Queue:
    def __init__(self, size):
        self.size = size
        self.queue = [None] * size
        self.front = 0  # 队首指针
        self.rear = 0  # 队尾指针

    def push(self, element):
        if not self.is_filled():#队列没满的时候
            self.rear = (self.rear + 1) % self.size
            self.queue[self.rear] = element
        else:
            raise IndexError("Queue is filled.")

    def pop(self):
        if not self.is_empty():
            self.front = (self.front + 1) % self.size
            return self.queue[self.front]
        else:
            raise IndexError("Queue is empty.")

    # 判断队空
    def is_empty(self):
        return self.rear == self.front

    # 判断队满
    def is_filled(self):
        return (self.rear + 1) % self.size == self.front
# class Queue:
#     def __init__(self,size=100):
#         self.queue=[0 for _ in range(size)]
#         self.rear=0
#         self.front=0
#         self.size=size
#         self.max_size=size-1
#
#     def push(self,element):
#         self.rear=(self.rear+1)%self.max_size
#         self.rear=element
#
#     def is_empty(self):
#         return self.rear==self.front
#
#     def is_field(self):
#         return  self.rear==self.front+1
