'''单链表中的节点应该具备两个属性：val 和 next 。val 是当前节点的值，next 是指向下一个节点的指针/引用。

如果是双向链表，则还需要属性 prev 以指示链表中的上一个节点。假设链表中的所有节点下标从 0 开始。

实现 MyLinkedList 类：

MyLinkedList() 初始化 MyLinkedList 对象。
int get(int index) 获取链表中下标为 index 的节点的值。如果下标无效，则返回 -1 。
void addAtHead(int val) 将一个值为 val 的节点插入到链表中第一个元素之前。在插入完成后，新节点会成为链表的第一个节点。
void addAtTail(int val) 将一个值为 val 的节点追加到链表中作为链表的最后一个元素。
void addAtIndex(int index, int val) 将一个值为 val 的节点插入到链表中下标为 index 的节点之前。如果 index 等于链表的长度，那么该节点会被追加到链表的末尾。如果 index 比长度更大，该节点将 不会插入 到链表中。
void deleteAtIndex(int index) 如果下标有效，则删除链表中下标为 index 的节点。
'''
from tarfile import tar_filter


class Node:
    def __init__(self,val):
        self.val=val
        self.next=None



class MyLinkedList:

    def __init__(self):
        self.head=None
        self.tail=None
        self.size=0

    def get(self,index: int) -> int:#gggg
        if index>=self.size or index<0:#index 无效（大于目前的 size 或者小于 0）
            return -1

        current_node=self.head
        for i in range(index):
            current_node=current_node.next
        return current_node.val
    def get_node(self,index):
        if index>=self.size or index<0:
            return None
        current_node=self.head
        for _ in range(index):
            current_node=current_node.next
        return current_node


    def is_empty(self):

        return self.size==0







    def addAtHead(self, val: int) -> None:
        new_node=Node(val)
        if self.is_empty():
            self.head=new_node
            self.tail=new_node
        else:#这个链表不是空
            new_node.next=self.head
            self.head=new_node
        self.size+=1

    def addAtTail(self, val: int) -> None:
        new_node=Node(val)
        if self.is_empty():#目前还没有节点
            self.head=new_node
            self.tail=new_node
        else:
            self.tail.next=new_node
            self.tail=new_node
        self.size+=1

    def addAtIndex(self, index: int, val: int) -> None:
        if index > self.size:  # index 超出范围，不插入
            return
        if index == 0:  # 头插
            self.addAtHead(val)
            return
        if index == self.size:  # 尾插
            self.addAtTail(val)
            return

        prev = self.getNode(index - 1)  # 找到前一个节点
        if prev is None:  # 如果 prev 为空，说明 index 无效，直接 return
            return
        new_node = Node(val)
        new_node.next = prev.next
        prev.next = new_node
        self.size += 1




#void deleteAtIndex(int index) 如果下标有效，则删除链表中下标为 index 的节点。
    def deleteAtIndex(self, index: int) -> None:
        if index < 0 or index >= self.size:  # 下标无效
            return
        if index == 0:  # 删除头节点
            self.head = self.head.next
            if self.size == 1:  # 如果删除后链表为空，更新 tail
                self.tail = None
        else:
            prev = self.getNode(index - 1)
            if prev and prev.next:
                prev.next = prev.next.next
                if index == self.size - 1:  # 如果删除的是尾节点，更新 tail
                    self.tail = prev
        self.size -= 1





