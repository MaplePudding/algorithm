class Solution:
    def getLongestPalindrome(self, A, n):
        # write code here
        if n < 2:
            return n
        maxLen = 1
        for i in range(2, n + 1):
            index = 0
            while index + i <= n:
                if A[index:index + i] == A[index + i - 1 - n : index - 1 - n : -1]:
                    maxLen = i
                    break
                index += 1
        return maxLen