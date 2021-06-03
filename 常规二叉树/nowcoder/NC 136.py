class Solution:
    def solve(self , xianxu , zhongxu ):
        result = []
        if not xianxu or not zhongxu or len(xianxu) != len(zhongxu):
            return
        root = self.rebuilt(xianxu, zhongxu)
        queue = [root]
        while queue:
            result.append(queue[-1].val)
            for i in range(len(queue)):
                tem = queue.pop(0)
                if tem.left:
                    queue.append(tem.left)
                if tem.right:
                    queue.append(tem.right)
        return result
    def rebuilt(self, xianxu, zhongxu):
        if not xianxu or not zhongxu or len(xianxu) != len(zhongxu):
            return
        root = TreeNode(xianxu[0])
        index = zhongxu.index(root.val)
        root.left = self.rebuilt(xianxu[1: 1+index], zhongxu[0: index])
        root.right = self.rebuilt(xianxu[1+index:], zhongxu[index+1:])
        return root