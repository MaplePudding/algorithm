class Solution:
    def removeNthFromEnd(self, head: ListNode, n: int) -> ListNode:
        dummy = ListNode(-1)
        dummy.next = head

        fast = dummy
        low = dummy
        pre = dummy

        for i in range(n - 1):
            fast = fast.next
        
        while fast.next:
            fast = fast.next
            low = low.next

        while pre.next != low:
            pre = pre.next
        
        pre.next = low.next
        return dummy.next