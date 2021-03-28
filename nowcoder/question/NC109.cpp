class Solution {
public:
    /**
     * 判断岛屿数量
     * @param grid char字符型vector<vector<>>
     * @return int整型
     */
    void bfs(vector<vector<char> >& grid, int i, int j) {
        grid[i][j] = '2';
        if (i - 1 >= 0 && grid[i - 1][j] == '1') {
            bfs(grid, i - 1, j);
        }
        if (j + 1 < grid[0].size() && grid[i][j + 1] == '1') {
            bfs(grid, i, j + 1);
        }
        if (i + 1 < grid.size() && grid[i + 1][j] == '1') {
            bfs(grid, i + 1, j);
        }
        if (j - 1 >= 0 && grid[i][j - 1] == '1') {
            bfs(grid, i, j - 1);
        }
    }

    int solve(vector<vector<char> >& grid) {
        // write code here
        if (grid.size() == 0) {
            return 0;
        }
        int res = 0;
        for (int i = 0; i < grid.size(); ++i) {
            for (int j = 0; j < grid[0].size(); ++j) {
                if (grid[i][j] == '1') {
                    ++res;
                    bfs(grid, i, j);
                }
            }
        }
        return res;
    }
};