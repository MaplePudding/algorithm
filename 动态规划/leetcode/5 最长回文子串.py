class Solution:
    def longestPalindrome(self, s: str) -> str:
        ns = list(s)
        N = len(ns)
        dp = [[0] * (N+1) for _ in range(N+1)]
        res = s[0]
        for l in range(1,N):
            for i in range(N-l-1,-1,-1):
                j = i + l
                dp[i][i] = 1
                if ns[i] == ns[j]:
                    if j == i + 1:
                        dp[i][j] = 2
                    elif dp[i+1][j-1]:
                        dp[i][j] = dp[i+1][j-1] + 2
                if dp[i][j] > len(res):
                    res = s[i:j+1]
        return res