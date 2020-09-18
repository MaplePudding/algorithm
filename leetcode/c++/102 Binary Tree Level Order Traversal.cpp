class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> res;
        if(root==NULL) return res;
        
        queue<TreeNode*> que;
        que.push(root);
        while(!que.empty())
        {
            vector<int> lev;
            int levnum = que.size();
            for(int i=0;i<levnum;i++)
            {
                TreeNode* head = que.front();
                que.pop();
                if(head->left) que.push(head->left);
                if(head->right) que.push(head->right);
                lev.push_back(head->val);
            }
            res.push_back(lev);
        }
        return res;
    }
};