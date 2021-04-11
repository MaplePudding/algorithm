class Solution:
    def subsets(self, nums: List[int]) -> List[List[int]]:
        res = []
        n = len(nums)

        def helper(index, temp):
            res.append(temp)
            for i in range(index, n):
                helper(i + 1, temp + [nums[i]])
        helper(0, [])
        return res  