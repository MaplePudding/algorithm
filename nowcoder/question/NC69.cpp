class Solution {
public:
    /**
     * �����е����������������������Ѿ�ָ���������޸ģ�ֱ�ӷ��ط����涨��ֵ����
     *
     *
     * @param pHead ListNode��
     * @param k int����
     * @return ListNode��
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