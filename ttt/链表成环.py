# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def detectCycle(self, head) :
        if not head or not head.next:
            return None
        fast = head
        slow = head
        while fast and fast.next:
            slow=slow.next
            fast=fast.next.next
            if slow==fast:
                slow=head
                while slow!=head:
                    slow=slow.next
                    fast=fast.next
                return slow
        return None








