class Solution:
    def knapsack(self , V , n , vw ):
        dp = [0 for _ in range(V + 1)]
        for i in range(n):
            v = vw[i][0]
            w = vw[i][1]
            for j in range(V, -1, -1):
                if j >= v:
                    dp[j] = max(dp[j-v] + w, dp[j])
        return max(dp)