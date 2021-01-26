function mergeTwoLists(l1: ListNode | null, l2: ListNode | null): ListNode | null {
    let dummy : ListNode = new ListNode(-1, null)
    let head : ListNode = dummy
    
    while(l1 && l2){
        if(l1.val > l2.val){
            head.next = l2
            l2 = l2.next
        }else{
            head.next = l1
            l1 = l1.next
        }
        head = head.next
    }
    
    if(l1){
        head.next = l1
    }
    
    if(l2){
        head.next = l2
    }
    
    return dummy.next
};