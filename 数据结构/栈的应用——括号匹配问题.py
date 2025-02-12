'''
# 判断括号各种括号是否匹配

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

    def is_match(chars):
        stack1 = Stack()
        stack2 = Stack()
        qiankuohao = ['(', "[", '{']
        houkouhao = [')', ']', '}']
        for char in chars:
            top = stack1.get_top()
            if char in qiankuohao:
                stack1.push(char)
            if char == '(' and top == ')' or char == '[' and top == ']' or char == '{' and top == '}':
                stack1.pop(char)
        return stack1 == stack2


stack = Stack()


def is_match(chars):
    stack1 = Stack()
    stack2 = Stack()
    qiankuohao = ['(', "[", '{']
    houkouhao = [')', ']', '}']
    for char in chars:
        top = stack1.get_top()
        if char in qiankuohao:
            stack1.push(char)
        if char == '(' and top == ')' or char == '[' and top == ']' or char == '{' and top == '}':
            stack1.pop(char)
    return stack1 == stack2


li = "[({[]})[]()]"
for fu in li:
    stack.push(fu)
stack.is_match()
'''
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

    def is_empty(self):
        return len(self.stack) == 0


# 检查括号是否匹配的函数
def is_match(chars):
    stack = Stack()
    # 定义括号对
    matching_pairs = {')': '(', ']': '[', '}': '{'}

    for char in chars:
        if char in matching_pairs.values():  # 左括号----加入列表
            stack.push(char)
        elif char in matching_pairs.keys():  # 右括号
            if stack.is_empty() or stack.get_top() != matching_pairs[char]:#右括号，第一种情况.a第一个就是反括号，直接退出，b.跟前面的一个不匹配

                return False
            stack.pop()#如果不是不匹配，也不是空，那就是匹配，就把这两个都删掉（前面的删掉，后面的不添加）

    # 检查栈是否为空
    return stack.is_empty()


# 测试代码
li = "[({[]})[]()]"
result = is_match(li)
print(result)  # 输出: True
