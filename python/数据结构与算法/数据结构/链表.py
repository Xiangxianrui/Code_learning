class Node:
    def __init__(self, data):
        self.data = data  # 存储节点数据
        self.next = None  # 默认指向 None


class LinkedList:
    def __init__(self):
        self.head = None  # 初始化链表为空，头节点为 None

    # 头插法：将新节点添加到链表头部
    def prepend(self, data):
        new_node = Node(data)  # 创建新节点
        new_node.next = self.head  # 新节点指向当前头节点
        self.head = new_node  # 更新头节点为新节点

    # 尾插法：将新节点添加到链表末尾
    def append(self, data):
        new_node = Node(data)  # 创建新节点
        if not self.head:  # 如果链表为空
            self.head = new_node  # 新节点成为头节点
            return
        last = self.head
        while last.next:  # 遍历到链表的最后一个节点
            last = last.next
        last.next = new_node  # 将最后一个节点的 next 指向新节点

    # 打印链表中的所有元素
    def print_list(self):
        current = self.head  # 从头节点开始遍历
        while current:  # 如果当前节点不是空
            print(current.data, end=" -> ")  # 打印当前节点的数据
            current = current.next  # 移动到下一个节点
        print("None")  # 链表结束


# 示例：创建一个链表并展示尾插法和头插法

ll = LinkedList()  # 创建空链表

# 使用尾插法添加元素
ll.append(1)
ll.append(2)
ll.append(3)

print("使用尾插法后的链表：")
ll.print_list()

# 使用头插法添加元素
ll.prepend(0)

print("使用头插法后的链表：")
ll.print_list()