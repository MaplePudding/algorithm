class Solution:
    def maxLength(self , arr ):
        # write code here
        if not arr:return 0
        left = 0
        lookup = set()
        n = len(arr)
        max_len = 0
        cur_len = 0
        for i in range(n):
            cur_len += 1
            while arr[i] in lookup:
                lookup.remove(arr[left])
                left += 1
                cur_len -= 1
            if cur_len > max_len:max_len = cur_len
            lookup.add(arr[i])
        return max_len