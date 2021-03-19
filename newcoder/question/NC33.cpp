class Solution {
public:
    /**
     *
     * @param l1 ListNodeÀà
     * @param l2 ListNodeÀà
     * @return ListNodeÀà
     */
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        // write code here
        ListNode* dummyHead = new ListNode(-1);
        ListNode* pre = dummyHead;
        while (l1 && l2) {
            if (l1->val < l2->val) {
                pre->next = l1;
                l1 = l1->next;
                pre = pre->next;
            }
            else {
                pre->next = l2;
                l2 = l2->next;
                pre = pre->next;
            }
        }
        pre->next = l1 ? l1 : l2;
        return dummyHead->next;
    }
};