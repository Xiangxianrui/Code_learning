# Definition for singly-linked list.
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next
class Solution:
    def removeNthFromEnd(self, head, n) :
        dummy_head=ListNode(next=head)
        fn = dummy_head#first_node 前面的节点
        sn = fn.next
        if  not sn.next:
            dummy_head.next=None

        for _ in range(n-1):#相差 n-1个节点
            sn=sn.next
        if sn.next==None:
            head.next=head.next
        else:
            while sn.next:
                fn=fn.next
                sn=sn.next
            fn.next = fn.next.next

        return dummy_head.next

