class Solution {
public:
    /**
     *
     * @param root TreeNode¿‡
     * @return int’˚–Õvector<vector<>>
     */
    vector<vector<int> > zigzagLevelOrder(TreeNode* root) {
        // write code here
        vector<vector<int>> res;
        vector<int> temp;
        queue<TreeNode*> q;
        int height = 1;

        if (root == nullptr) {
            return res;
        }

        q.push(root);

        while (!q.empty()) {
            int queueSize = q.size();
            for (int i = 1; i <= queueSize; ++i) {
                TreeNode* dummy = q.front();
                q.pop();
                temp.push_back(dummy->val);
                if (dummy->left) {
                    q.push(dummy->left);
                }
                if (dummy->right) {
                    q.push(dummy->right);
                }
            }
            if (height % 2 == 0) {
                reverse(temp.begin(), temp.end());
            }
            res.push_back(temp);
            temp.clear();
            ++height;
        }
        return res;
    }
};