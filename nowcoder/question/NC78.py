class Solution:
    # 返回ListNode
    def ReverseList(self, pHead):
        # write code here
        if pHead == None or pHead.next == None:
            return pHead;
        dummy = None
        cur = pHead
        while pHead:
            pHead = pHead.next
            cur.next = dummy
            dummy = cur
            cur = pHead
        return dummy