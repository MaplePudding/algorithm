class Solution:
    def maxPathSum(self , root ):
        # write code here
        self.res = float('-inf')#负无穷
        def dfs(root):
            if not root:
                return 0
            l = dfs(root.left)
            r = dfs(root.right)
            self.res = max(self.res, root.val+l+r, root.val)
            return max(0,max(l,r)+root.val)
          
        _ = dfs(root)
        return self.res