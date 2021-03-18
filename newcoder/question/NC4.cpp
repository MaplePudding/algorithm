class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* fast = head;
        ListNode* low = head;
        if(head == NULL){
            return false;
        }
        if(head -> next == NULL){
            return false;
        }
        
        while(true){
            if(fast == NULL || fast -> next == NULL){
                return false;
            }
            fast = fast -> next -> next;
            low = low -> next;
            if(fast == low){
                return true;
            }
        }
        return false;
    }
};