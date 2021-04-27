class Solution:
    def rotateRight(self, head: ListNode, k: int) -> ListNode:
        temp = head
        listLen = 0
        while temp:
            listLen += 1
            temp = temp.next
        
        if listLen < 2:
            return head
        
        k %= listLen

        if k == 0:
            return head

        fast = head
        low = head

        while k:
            fast = fast.next
            k -= 1
        
        while fast.next:
            fast = fast.next
            low = low.next

        tempHead = low.next
        fast.next = head
        low.next = None
        return tempHead