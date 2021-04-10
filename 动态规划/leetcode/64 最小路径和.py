class Solution:
    def minPathSum(self, grid: List[List[int]]) -> int:
        for i in range(1, len(grid[0])):
            grid[0][i] = grid[0][i - 1] + grid[0][i]
        for i in range(1, len(grid)):
            grid[i][0] = grid[i - 1][0] + grid[i][0]
        
        for i in range(1, len(grid)):
            for j in range(1, len(grid[0])):
                grid[i][j] = min(grid[i - 1][j], grid[i][j - 1]) + grid[i][j]
        return grid[-1][-1]