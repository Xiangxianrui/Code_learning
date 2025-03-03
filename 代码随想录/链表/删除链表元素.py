class Node:
    def __init__(self,val):
        self.val = val
        self.next = None


class Solution:
    def removeElements(self, head, val: int):
       #遍历列表，if node.data == val,则删除。操控待删除节点的上一个节点
        Fake_first_node = Node(None)
        Fake_first_node.next = head
        node = Fake_first_node
        while node.next:
            while node.next.val == val:
                node.next = node.next.next
            node = node.next
        return Fake_first_node.next


