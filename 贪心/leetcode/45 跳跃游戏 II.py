class Solution:
    def jump(self, nums: List[int]) -> int:
        #贪心
        n = len(nums)
        step = 0
        cur_can_right = 0   
        nxt_start = 0      
        for i in range(n - 1):
            cur_can_right = max(cur_can_right, i + nums[i])
            if i == nxt_start:    
                nxt_start = cur_can_right   
                step += 1
        return step