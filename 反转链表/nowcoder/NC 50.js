function reverseKGroup( head ,  k ) {
    // write code here
    function shouldReverse(node){
        let temp = node
        let count = 0
        if(!node){
            return false
        }
        
        while(temp){
            if(count === k){
                return true
            }
            temp = temp.next
            ++count
        }
        
        return false
    }
    
    function reverse(preNode){
        let cur = preNode.next
        for(let i = 0; i < k - 1; ++i){
            let nxt = cur.next
            cur.next = nxt.next
            nxt.next = preNode.next
            preNode.next = nxt
        }
    }
    
    if(k < 2 || !head || !head.next){
        return head
    }
    
    let dummy = new ListNode(-1)
    dummy.next = head
    let cur = dummy
    if(!shouldReverse(dummy)){
        return dummy.next
    }
    
    while(shouldReverse(cur)){
        reverse(cur)
        for(let i = 0; i < k; ++i){
            cur = cur.next
        }
    }
    
    return dummy.next
}