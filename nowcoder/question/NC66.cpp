class Solution {
public:
    ListNode* FindFirstCommonNode(ListNode* pHead1, ListNode* pHead2) {
        ListNode* p1 = pHead1;
        ListNode* p2 = pHead2;

        while (p1) {
            while (p2) {
                if (p1 == p2) {
                    return p1;
                }
                p2 = p2->next;
            }
            p1 = p1->next;
            p2 = pHead2;
        }
        return p1;
    }
};