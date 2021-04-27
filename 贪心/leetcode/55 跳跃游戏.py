class Solution:
    def canJump(self, nums: List[int]) -> bool:
        n = len(nums)
        cur_can_right = 0       #当前往右最远可以跳到的位置
        for i in range(n):
            if cur_can_right < i:   #跳不到i这个点
                return False
            cur_can_right = max(cur_can_right, i + nums[i])
        return True