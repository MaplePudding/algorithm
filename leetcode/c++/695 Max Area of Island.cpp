class Solution {
public:
    vector<vector<int> > d={{1,-1,0,0},{0,0,1,-1}};
        int n,m,curr=0,ans=0;

    
    void dfs(int x,int y,vector<vector<int> > &g){
        if(x<0 || y<0 || x>=n || y>=m || g[x][y]==2 || g[x][y]==0) return;
        g[x][y]=2;
        curr++;
        for(int i=0;i<4;i++)
        {
            dfs(x+d[0][i],y+d[1][i],g);
        }
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        n=grid.size();
        if(n==0) return 0;
        m=grid[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1){
                    curr=0;
                    dfs(i,j,grid);
                    ans=max(ans,curr);
                }
            }
        }return ans;
    }
};