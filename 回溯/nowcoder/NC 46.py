class Solution:
    def combinationSum2(self , num , target ):
        # write code here
        num.sort()
        def helper(tmp, num, res, start,target):
            if target == 0:
                return res.append(tmp)
            for i in range(start,len(num)):
                if num[i] > target:
                    return
                if i > start and num[i-1] == num[i]:
                    continue
                helper(tmp+[num[i]], num, res, i+1, target-num[i])
        res = []
        helper([], num, res, 0, target)
        return res