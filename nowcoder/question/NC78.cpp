class Solution {
public:
    ListNode* ReverseList(ListNode* pHead) {
        ListNode* dummy = NULL;
        ListNode* cur = pHead;
        while(pHead){
            pHead = pHead -> next;
            cur -> next = dummy;
            dummy = cur;
            cur = pHead;
        }
        return dummy;
    }
};