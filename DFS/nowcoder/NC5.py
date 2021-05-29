class Solution:
    def sumNumbers(self , root ):
        # write code here
        if not root:
            return 0
        else:
            arr = []
            def dfs(root, temp):
                if not root:
                    return
                temp = temp * 10 + root.val
                if not root.left and not root.right:
                    arr.append(temp)
                else:
                    dfs(root.left, temp)
                    dfs(root.right, temp)
            dfs(root, 0)
            return sum(arr)