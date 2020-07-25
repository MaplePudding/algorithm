class Solution {
public:
    void search(TreeNode* root, vector<int>& res){
        if(root -> left != nullptr){
            search(root -> left, res);
        }
            if(root -> val != NULL){
            res.push_back(root -> val);
            }
    
        if(root -> right != nullptr){
            search(root -> right, res);
        }
        
    }
    
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> res;
        if(root == nullptr){
            return res;
        }
        search(root, res);
        return res;
    }
};