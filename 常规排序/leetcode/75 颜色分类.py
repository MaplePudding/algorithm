class Solution:
    def sortColors(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        left = point = 0
        right = len(nums) - 1
        while point <= right:
            if nums[point] == 0:
                nums[point], nums[left] = nums[left], nums[point]
                left += 1
                point += 1
            elif nums[point] == 2:
                nums[point], nums[right] = nums[right], nums[point]
                right -= 1
            else:
                point += 1