class Solution {
public:
    /**
     *
     * @param head ListNode类
     * @param k int整型
     * @return ListNode类
     */
     //区间[start,end)
    ListNode* reverseInterval(ListNode* start, ListNode* end) {
        ListNode* pre = nullptr, * cur = start;
        while (cur != end) {
            ListNode* nxt = cur->next;
            cur->next = pre;
            pre = cur;
            cur = nxt;
        }
        return pre;
    }


    ListNode* reverseKGroup(ListNode* head, int k) {
        if (!head) return head;

        ListNode* a = head, * b = head;
        for (int i = 0; i < k; i++) {
            if (b == nullptr) return head;
            b = b->next;
        }

        ListNode* newHead = reverseInterval(a, b);
        a->next = reverseKGroup(b, k);
        return newHead;
    }
};