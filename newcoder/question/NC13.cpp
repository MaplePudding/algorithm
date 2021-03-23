class Solution {
public:
    /**
     *
     * @param root TreeNodeÀà
     * @return intÕûÐÍ
     */
    int maxDepth(TreeNode* root) {
        // write code here
        if (root == nullptr) {
            return 0;
        }

        int leftDepth = maxDepth(root->left);
        int rightDepth = maxDepth(root->right);

        return max(leftDepth, rightDepth) + 1;
    }
};