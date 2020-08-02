class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        deque<TreeNode*> q;
        vector<int> res;
        int len = 0;
        if(root == nullptr){
            return res;
        }else{
            q.push_back(root);
            len = q.size();
            while(q.size() > 0){
                len = q.size();
                for(int i = 0; i < len; ++i){
                    root = q.front();
                    q.pop_front();
                    if(i == len - 1){
                        res.push_back(root -> val);
                    }
                    if(root -> left != NULL){
                        q.push_back(root -> left);
                    }
                    if(root -> right != NULL){
                        q.push_back(root -> right);
                    }
                }
            }
            return res;
        }
        return res;
    }
};