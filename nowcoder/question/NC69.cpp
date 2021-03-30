class Solution {
public:
    /**
     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
     *
     *
     * @param pHead ListNode类
     * @param k int整型
     * @return ListNode类
     */
    ListNode* FindKthToTail(ListNode* pHead, int k) {
        // write code here
        ListNode* fast = pHead;
        ListNode* low = pHead;

        if (pHead == NULL || k <= 0) {
            return NULL;
        }

        for (int i = k - 1; i > 0; --i) {
            if (fast->next) {
                fast = fast->next;
            }
            else {
                return NULL;
            }
        }

        while (fast->next) {
            fast = fast->next;
            low = low->next;
        }

        return low;
    }
};