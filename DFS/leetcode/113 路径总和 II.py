class Solution:
    def pathSum(self, root: TreeNode, sum: int) -> List[List[int]]:
        res = []
        if not root: return []
        def helper(root,sum, tmp):
            if not root:
                return 
            if not root.left and not root.right and sum - root.val == 0 :
                tmp += [root.val]
                res.append(tmp)
                return 
            helper(root.left, sum - root.val, tmp + [root.val])
            helper(root.right, sum - root.val, tmp + [root.val])
        helper(root, sum, [])
        return res