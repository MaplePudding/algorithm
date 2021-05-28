class Solution:
    def reorderList(self , head ):
        # write code here
        if not head or not head.next:
            return head
        else:
            fast = head.next
            slow = head
            while fast != None and fast.next != None :
                fast = fast.next.next
                slow = slow.next
            right = slow.next
            slow.next = None
            right_reverse = self.reverse(right)
            pright, pleft = right_reverse, head
            while pright != None:
                tmp = pleft.next
                pnet = pright.next
                pleft.next = pright
                pright.next = tmp
                pleft = tmp
                pright = pnet
            return head
    def reverse(self, head):
        if not head:
            return head
        else:
            pre = None
            cur = head
            while cur:
                tmp = cur.next
                cur.next = pre
                pre = cur
                cur = tmp
            return pre