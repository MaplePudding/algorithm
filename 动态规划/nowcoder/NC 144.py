class Solution:
    def subsequence(self , n , array ):
        # write code here
        if n == 0:
            return 0
        if n == 1:
            return array[0]
        dp = [0 for i in range(n)]
        dp[0] = array[0]
        dp[1] = max(dp[0], array[1])
        for i in range(2, n):
            dp[i] = max(dp[i - 1], dp[i - 2] + array[i])
        return dp[n - 1]