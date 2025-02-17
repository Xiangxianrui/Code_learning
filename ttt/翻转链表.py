from 数据结构.二叉树 import preorder


class Node:
    def __init__(self,val):
        self.val=val
        self.next=None



class MyLinkedList:

    def __init__(self):
        self.head=None
        self.pre=None
        self.size=0

def solution(LinkList:MyLinkedList)->MyLinkedList:
    if LinkList.head==None or LinkList.head.next==None:
        return LinkList
    head=LinkList.head
    head.pre=None
    node=head
    while node.next:#给每个节点添加 pre 属性
        node.next.pre=node
        node=node.next
    LinkList.head=node#在这一步直接把头节点改变
    while node.pre:
        node.next=node.pre#利用 pre 改变 next 属性
        node=node.pre
    return LinkList
#第三种方法，双节点法
class ListNode:
     def __init__(self, val=0, next=None):
         self.val = val
         self.next = next
         self.pre=None


class Solution:
    def reverseList(self, head ):
        if head is None or head.next is None:
            return head
        prev=ListNode(next=head,pre=None)


