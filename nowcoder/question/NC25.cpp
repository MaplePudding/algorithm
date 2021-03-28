ListNode* deleteDuplicates(ListNode* head) {
    // write code here
    ListNode* cur = head;
    if (head == NULL) {
        return head;
    }
    while (cur->next) {
        if (cur->val == cur->next->val) {
            cur->next = cur->next->next;
        }
        else {
            cur = cur->next;
        }

    }
    return head;
}
};