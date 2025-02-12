# Definition for singly-linked list.
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val

        self.next = next


class Solution:

    def removeElements(self, head, val: int) :
        if head==None:
            return
        if head.data==val:
            if head.next==None:
                head==None
            else:
                head=head.next

        cur_node=head
        while cur_node.next!=None:
            if cur_node.next.data==val:
                cur_node.next=cur_node.next.next
            cur_node=cur_node.next

