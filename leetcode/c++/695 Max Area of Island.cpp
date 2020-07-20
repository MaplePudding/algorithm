class Solution {
public:
    int dfs(vector<vector<int>>& grid, int a, int b){
        
        int s = 0;
        if(a < 0 || a >= grid.size() || b < 0 || b >= grid[0].size()){
            return 0;
        }
        if(grid[a][b] == 1){
            ++s;
            grid[a][b] = 0;
        }else{
            return 0;
        }
        s += dfs(grid, a + 1, b);
        s += dfs(grid, a - 1, b);
        s += dfs(grid, a, b - 1);
        s += dfs(grid, a, b + 1);
        return s;
    }
    
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int res = 0;
        for(int a = 0; a < grid.size(); ++a){
            for(int b = 0; b < grid[0].size(); ++b){
                if(grid[a][b] == 1){
                    res = max(dfs(grid, a, b), res);
                }
            }
        }
        return res;
    }
};