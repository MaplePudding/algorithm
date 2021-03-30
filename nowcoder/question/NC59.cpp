class Solution {
public:
    /**
     *
     * @param matrix int整型vector<vector<>> the matrix
     * @return int整型
     */
    int minPathSum(vector<vector<int> >& matrix) {
        // write code here
        int m = matrix.size();
        int n = matrix[0].size();
        if (matrix.size() == 0) {
            return 0;
        }
        int dp[m][n];
        memset(dp, 0, sizeof(dp));
        dp[0][0] = matrix[0][0];

        for (int i = 1; i < n; ++i) {
            dp[0][i] = dp[0][i - 1] + matrix[0][i];
        }

        for (int i = 1; i < m; ++i) {
            dp[i][0] = dp[i - 1][0] + matrix[i][0];
        }

        for (int i = 1; i < m; ++i) {
            for (int j = 1; j < n; ++j) {
                dp[i][j] = min(dp[i - 1][j], dp[i][j - 1]) + matrix[i][j];
            }
        }

        return dp[m - 1][n - 1];
    }
};