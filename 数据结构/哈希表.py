class Node:
    def __init__(self, data=None):
        self.data = data  # 节点的数据
        self.next = None  # 节点的指针，指向下一个节点


class LinkedList:
    def __init__(self):
        self.head = None  # 链表的头节点，初始化为空

    # 1. 插入节点到链表的末尾
    def append(self, data):
        new_node = Node(data)  # 创建一个新节点
        if not self.head:
            self.head = new_node  # 如果链表为空，将新节点设置为头节点
            return
        last = self.head
        while last.next:  # 遍历到链表的最后一个节点
            last = last.next
        last.next = new_node  # 将新节点链接到最后一个节点的后面

    # 2. 插入节点到链表的开头
    def prepend(self, data):
        new_node = Node(data)
        new_node.next = self.head  # 新节点指向当前的头节点
        self.head = new_node  # 更新头节点为新节点

    # 3. 删除指定节点
    def delete_node(self, key):
        current = self.head

        # 如果要删除的是头节点
        if current and current.data == key:
            self.head = current.next  # 头节点指向下一个节点
            current = None  # 删除当前节点
            return

        # 查找要删除的节点
        prev = None
        while current and current.data != key:
            prev = current
            current = current.next

        if current is None:  # 如果找不到要删除的节点
            print(f"Node with value {key} not found.")
            return

        # 删除节点
        prev.next = current.next
        current = None  # 删除节点

    # 4. 查找链表中的节点
    def find(self, key):
        current = self.head
        while current:
            if current.data == key:
                return current
            current = current.next
        return None  # 没有找到该节点

    # 5. 打印链表内容
    def print_list(self):
        current = self.head
        while current:
            print(current.data, end=" -> ")
            current = current.next
        print("None")  # 打印链表末尾的 None

    # 6. 获取链表长度
    def length(self):
        count = 0
        current = self.head
        while current:
            count += 1
            current = current.next
        return count

    # 7. 删除链表的最后一个节点
    def delete_last(self):
        if not self.head:
            print("The list is empty.")
            return

        current = self.head
        if not current.next:  # 如果链表只有一个节点
            self.head = None
            return

        while current.next and current.next.next:
            current = current.next

        current.next = None  # 删除最后一个节点

    # 8. 插入节点到指定位置（索引）
    def insert_at(self, index, data):
        if index < 0 or index > self.length():
            print("Index out of range.")
            return

        new_node = Node(data)

        # 如果在头部插入
        if index == 0:
            new_node.next = self.head
            self.head = new_node
            return

        current = self.head
        count = 0
        while count < index - 1:  # 寻找插入位置的前一个节点
            current = current.next
            count += 1

        # 在指定位置插入新节点
        new_node.next = current.next
        current.next = new_node

    # 9. 删除链表的指定位置的节点
    def delete_at(self, index):
        if index < 0 or index >= self.length():
            print("Index out of range.")
            return

        current = self.head

        # 删除头节点
        if index == 0:
            self.head = current.next
            current = None
            return

        count = 0
        while count < index - 1:  # 寻找要删除节点的前一个节点
            current = current.next
            count += 1

        # 删除指定位置的节点
        node_to_delete = current.next
        current.next = node_to_delete.next
        node_to_delete = None

#
# # 测试链表功能
# if __name__ == "__main__":
#     ll = LinkedList()
#
#     ll.append(10)
#     ll.append(20)
#     ll.append(30)
#     ll.append(40)
#     print("Initial List:")
#     ll.print_list()  # 输出: 10 -> 20 -> 30 -> 40 -> None
#
#     ll.prepend(5)
#     print("After Prepending 5:")
#     ll.print_list()  # 输出: 5 -> 10 -> 20 -> 30 -> 40 -> None
#
#     ll.delete_node(20)
#     print("After Deleting 20:")
#     ll.print_list()  # 输出: 5 -> 10 -> 30 -> 40 -> None
#
#     ll.delete_last()
#     print("After Deleting Last Node:")
#     ll.print_list()  # 输出: 5 -> 10 -> 30 -> None
#
#     ll.insert_at(1, 15)
#     print("After Inserting 15 at index 1:")
#     ll.print_list()  # 输出: 5 -> 15 -> 10 -> 30 -> None
#
#     ll.delete_at(2)
#     print("After Deleting Node at index 2:")
#     ll.print_list()  # 输出: 5 -> 15 -> 30 -> None
#
#     print(f"Length of the list: {ll.length()}")  # 输出: Length of the list: 3
class Hash_Table:
    def __init__(self,size=101):
        self.size=size
        self.T=[LinkedList() for i in range(self.size)]

    def h(self,k):
        return k%self.size

    def find(self,k):
        i=self.h(k)
        return self.T[i].find(k)

    def insert(self,k):
        i=self.h(k)
        if self.find(k):
            print('重复添加，该元素已在表中')
        else:
            self.T[i].append(k)
            print('添加成功')

ht=Hash_Table()
ht.insert(2)
ht.insert(3)
ht.insert(2)


