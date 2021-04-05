class Solution:
    def search(self , nums , target ):
        # write code here
        low = 0
        high = len(nums) - 1
        while(low <= high):
            mid = math.floor((low + high) / 2)
            if target < nums[mid]:
                high = mid - 1
            elif target > nums[mid]:
                low = mid + 1
            else:
                while mid > 0 and nums[mid - 1] == target:
                    mid -= 1
                return mid
        return -1