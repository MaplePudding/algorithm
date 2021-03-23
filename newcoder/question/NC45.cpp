class Solution {
public:
    /**
     *
     * @param root TreeNode¿‡ the root of binary tree
     * @return int’˚–Õvector<vector<>>
     */
    void preOrders(TreeNode* root, vector<int>* res) {
        if (root) {
            (*res).push_back(root->val);
            preOrders(root->left, res);
            preOrders(root->right, res);
        }
    }

    void midOrders(TreeNode* root, vector<int>* res) {
        if (root) {
            midOrders(root->left, res);
            (*res).push_back(root->val);
            midOrders(root->right, res);
        }
    }

    void lastOrders(TreeNode* root, vector<int>* res) {
        if (root) {
            lastOrders(root->left, res);
            lastOrders(root->right, res);
            (*res).push_back(root->val);
        }
    }


    vector<vector<int> > threeOrders(TreeNode* root) {
        // write code here
        vector<vector<int>> res;
        vector<int> r1;
        vector<int> r2;
        vector<int> r3;

        vector<int>* rp1 = &r1;
        vector<int>* rp2 = &r2;
        vector<int>* rp3 = &r3;

        preOrders(root, rp1);
        midOrders(root, rp2);
        lastOrders(root, rp3);

        res.push_back(r1);
        res.push_back(r2);
        res.push_back(r3);
        return res;
    }
};