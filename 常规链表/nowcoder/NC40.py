class Solution:
    def addInList(self , head1 , head2 ):
        # write code here
        a1 = []
        a2 = []
        a3 = []
        while head1:
            a1.append(head1.val)
            head1 = head1.next
        while head2:
            a2.append(head2.val)
            head2 = head2.next
        a1 = a1[::-1]
        a2 = a2[::-1]
        index1 = 0
        index2 = 0
        carry = 0
        while index1 != len(a1) and index2 != len(a2):
            a3.append((a1[index1] + a2[index2] + carry) % 10)
            carry = math.floor((a1[index1] + a2[index2] + carry) / 10)
            index1 += 1
            index2 += 1
            
        while index1 != len(a1):
            a3.append((a1[index1] + carry) % 10)
            carry = math.floor((a1[index1] + carry) / 10)
            index1 += 1
        while index2 != len(a2):
            a3.append((a2[index2] + carry) % 10)
            carry = math.floor((a2[index2] + carry) / 10)
            index2 += 1
        if carry != 0:
            a3.append(carry)
        a3 = a3[::-1]
        head = ListNode(0)
        dummyNode = head
        for i in range(len(a3)):
            tempNode = ListNode(a3[i])
            dummyNode.next = tempNode
            dummyNode = dummyNode.next
        return head.next