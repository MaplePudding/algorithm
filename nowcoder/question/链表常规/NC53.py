class Solution:
    def removeNthFromEnd(self , head , n ):
        # write code here
        if not head.next:
            return None
        listLen = 0
        tempNode = head
        while tempNode:
            listLen += 1
            tempNode = tempNode.next
        if n == listLen:
            return head.next
        else:
            pre = head
            cur = head
            while n - 1:
                pre = pre.next
                n -= 1
            while pre.next:
                pre = pre.next
                cur = cur.next
                
            back = head
            while back.next != cur:
                back = back.next
            back.next = cur.next
            return head
            