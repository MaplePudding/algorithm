class Solution {
public:
    TreeNode* sortedListToBST(ListNode* head) {
        if (head == NULL) return NULL;
        ListNode *tail = head;
        ListNode *middle = head;
        ListNode *last = NULL;
        while (tail -> next != NULL && tail -> next -> next != NULL) {
            tail = tail -> next -> next;
            last = middle;
            middle = middle -> next;
        }
        cout << middle -> val << ' ' << tail -> val << endl;
        TreeNode *root = new TreeNode(middle -> val);
        if (last != NULL) {
            last -> next = NULL;
            root -> left = sortedListToBST(head);
        }
        if (middle -> next != NULL) {
            root -> right = sortedListToBST(middle -> next);
        }
        return root;
    }
};