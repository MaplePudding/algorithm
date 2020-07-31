class BSTIterator {
private:
    vector<TreeNode*> S;
public:
    BSTIterator(TreeNode* root){
        while(root){
            S.push_back(root);
            root = root->left;
        }
    }
    int next() {
        TreeNode* t = S.back();
        S.pop_back();
        int val = t->val;
        t = t->right;
        while(t){
            S.push_back(t);
            t = t->left;
        }
        return val;
    }
    bool hasNext() {
        return !S.empty();
    }
};