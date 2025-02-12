class Stack:
    def __init__(self):
        self.stack = []  # 初始化空栈

    def push(self, element):
        self.stack.append(element)

    def pop(self):
        return self.stack.pop()

    def get_top(self):
        if len(self.stack) > 0:
            return self.stack[-1]
        else:
            return None


# 使用 Stack 类
stack = Stack()  # 创建栈对象
stack.push(1)
stack.push(2)
print(stack.get_top())  # 打印栈顶元素