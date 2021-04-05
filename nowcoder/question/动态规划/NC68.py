class Solution:
    def jumpFloor(self, number):
        # write code here
        dp = [1]*(number+1)
        if number<=1:
            return dp[number]
        for i in range(2, number+1):
            dp[i] = dp[i-1] + dp[i-2]
        return dp[number]