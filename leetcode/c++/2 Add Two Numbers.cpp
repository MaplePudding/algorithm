class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *head = new ListNode(-2);
        ListNode *index = head;
        int carry = 0;
        
        while(l1 || l2){
            int val1 = l1 ? l1 -> val : 0;
            int val2 = l2 ? l2 -> val : 0;
            int sum = val1 + val2 + carry;
            carry = sum / 10;
            sum %= 10;
            index -> next = new ListNode(sum);
            index = index -> next;
            if(l1){
                l1 = l1 -> next;
            }
            if(l2){
                l2 = l2 -> next;
            }
        }
        if(carry){
            index -> next = new ListNode(carry);
        }
        return head -> next;
    }
};