class Node:
    def __init__(self, data):
        self.data = data
        self.next = None


class LinkTable:
    def __init__(self):
        self.head = None
        self.tail = None

    def prepend(self, data):  # 头插法，所有新加的元素都加在前面
        new_node = Node(data)  # 创建新节点
        new_node.next = self.head  # 新节点指向当前的 head
        self.head = new_node  # 更新 head 为新节点

        # 如果链表为空，新插入的节点既是头节点也是尾节点
        if self.tail is None:
            self.tail = new_node

    def append(self, data):  # 尾插法，新元素插在后面
        new_node = Node(data)  # 创建新节点
        if self.head is None:  # 如果链表为空
            self.head = new_node
            self.tail = new_node
        else:
            self.tail.next = new_node  # 当前尾节点指向新节点
            self.tail = new_node  # 更新尾节点为新节点

    def printall(self):
        current = self.head
        while current:
            if current.next:  # 如果不是最后一个节点
                print(f'{current.data} --> ', end='')
            else:  # 最后一个节点
                print(f'{current.data}')
            current = current.next


# 创建链表实例
lk = LinkTable()

# 使用头插法插入元素
for i in range(1, 10, 2):
    lk.prepend(i)

# 打印链表
lk.printall()