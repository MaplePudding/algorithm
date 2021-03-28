class Solution {
public:
    ListNode* detectCycle(ListNode* head) {
        ListNode* fast = head;
        ListNode* low = head;

        if (head == nullptr || head->next == nullptr) {
            return NULL;
        }

        while (fast->next && fast->next->next) {
            fast = fast->next->next;
            low = low->next;
            if (fast == low) {
                fast = head;
                while (fast != low) {
                    fast = fast->next;
                    low = low->next;
                }
                return fast;
            }
        }
        return NULL;
    }
};