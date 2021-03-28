class Solution {
public:
    /**
     *
     * @param root TreeNode¿‡
     * @return int’˚–Õvector<vector<>>
     */
    vector<vector<int> > levelOrder(TreeNode* root) {
        // write code here
        queue<TreeNode*> q;
        vector<vector<int>> res;
        vector<int> temp;

        if (root == nullptr) {
            return res;
        }
        q.push(root);

        while (q.size()) {
            int s = q.size();
            for (int i = 0; i < s; ++i) {
                TreeNode* cur = q.front();
                q.pop();
                temp.push_back(cur->val);
                if (cur->left) {
                    q.push(cur->left);
                }
                if (cur->right) {
                    q.push(cur->right);
                }
            }
            res.push_back(temp);
            temp.clear();
        }
        return res;
    }
};