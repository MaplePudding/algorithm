class Solution {
public:
    int getLongestPalindrome(string A, int n) {
        // write code here
        int dp[n][n];
        int maxLen = 1;
        int tempLen = 3;
        memset(dp, 0, sizeof(dp));

        if (n < 2) {
            return n;
        }

        for (int i = 0; i < n; ++i) {
            dp[i][i] = 1;
        }

        for (int i = 0; i < n - 1; ++i) {
            if (A[i] == A[i + 1]) {
                dp[i][i + 1] = 1;
                maxLen = 2;
            }
        }

        while (tempLen <= n) {
            for (int i = 0; i < n - tempLen + 1; ++i) {
                if (A[i] == A[i + tempLen - 1]) {
                    if (dp[i + 1][i + tempLen - 2]) {
                        dp[i][i + tempLen - 1] = 1;
                        maxLen = tempLen;
                    }
                }
                else {
                    dp[i][i + tempLen - 1] = 0;
                }
            }
            ++tempLen;
        }
        return maxLen;
    }
};