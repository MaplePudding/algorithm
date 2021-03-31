class Solution {
private:
    TreeNode* build(vector<int>& pre, int left1, int right1, vector<int>& vin, int left2, int right2) {
        TreeNode* root = new TreeNode(pre[left1]);
        int i = left2;
        while (vin[i] != pre[left1]) {
            ++i;
        }
        int lenl = i - left2;
        int lenr = right2 - i;
        if (lenl > 0) {
            root->left = build(pre, left1 + 1, left1 + lenl, vin, left2, i - 1);
        }
        if (lenr > 0) {
            root->right = build(pre, left1 + lenl + 1, right1, vin, i + 1, right2);
        }
        return root;
    }
public:
    TreeNode* reConstructBinaryTree(vector<int> pre, vector<int> vin) {
        if (pre.size() == 0) {
            return NULL;
        }
        return build(pre, 0, pre.size() - 1, vin, 0, vin.size() - 1);
    }
};