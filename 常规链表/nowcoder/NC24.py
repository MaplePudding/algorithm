class Solution:
    def deleteDuplicates(self , head ):
        # write code here
        dummy = ListNode(-1)
        dummy.next = head
        
        pre = dummy
        cur = head
        while cur and cur.next:
            if cur.val != cur.next.val:
                pre = pre.next
                cur = cur.next
            else:
                while cur.val == cur.next.val:
                    cur = cur.next
                    if not cur.next:
                        break
                pre.next = cur.next
                cur = cur.next
        return dummy.next