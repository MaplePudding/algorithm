function addTwoNumbers(l1: ListNode | null, l2: ListNode | null): ListNode | null {
    let carry : number = 0
    let dummy : ListNode = new ListNode(-1, null)
    let head : ListNode = dummy
    
    while(l1 != null || l2 != null || carry != 0){
        let num1 : number = l1 ? l1.val : 0
        let num2 : number = l2 ? l2.val : 0
        let sum : number = num1 + num2 + carry
        carry = Math.floor(sum / 10)
        head.next = new ListNode(sum % 10)
        head = head.next
        l1 ? l1 = l1.next : null
        l2 ? l2 = l2.next : null
    }
    return dummy.next
};