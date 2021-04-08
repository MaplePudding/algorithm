class Solution:
    def comparfe(self, a, b):
        a = str(a)
        b = str(b)
        if a + b < b + a:
            return -1
        elif a + b > b + a:
            return 1
        else:
            return 0
    def minNumber(self, nums: List[int]) -> str:
        nums.sort(key = functools.cmp_to_key(self.comparfe))
        return "".join([str(c) for c in nums])