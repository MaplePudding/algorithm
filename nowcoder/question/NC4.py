class Solution:
    def hasCycle(self , head ):
        # write code here
        fast = head;
        low = head;
        if head == None or head.next == None:
            return False
        while True:
            if(fast != None and fast.next != None):
                fast = fast.next.next
            else:
                return False
            low = low.next
            if(fast == low):
                return True