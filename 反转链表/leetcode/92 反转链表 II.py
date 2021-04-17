# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def reverseBetween(self, head: ListNode, left: int, right: int) -> ListNode:
        dummy = ListNode(-1)
        dummy.next = head
        res = dummy
        pre = dummy
        p = head
        i = 1
        while i < left:
            pre = pre.next
            p = p.next
            i += 1

        while i < right:
            temp = p.next
            p.next = temp.next
            temp.next = pre.next
            pre.next = temp
            i += 1

        return res.next