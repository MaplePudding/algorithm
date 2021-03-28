bool isContains(TreeNode* root1, TreeNode* root2) {
    if (!root1)
        return false;
    if (isSame(root1, root2))
        return true;
    return isContains(root1->left, root2) || isContains(root1->right, root2);
}

bool isSame(TreeNode* s, TreeNode* t) {
    if (!t && !s)
        return true;
    if (!t || !s || t->val != s->val)
        return false;
    return isSame(t->left, s->left) && isSame(s->right, t->right);
}