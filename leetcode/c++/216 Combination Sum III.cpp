class Solution {
public:
    vector<vector<int>> ans;
    vector<int >cur;
    vector<vector<int>> combinationSum3(int k, int n) {
        dfs(k,n,1);
        return ans;
    }
    void dfs(int k,int sum,int r)
    {
        if(k==0&&sum==0)
        {
            ans.push_back(cur);
            return ;
        }
        if(k==0||sum<0)
            return;
        for(int i=r;i<=9;i++)
        {
           
            cur.push_back(i);
            dfs(k-1,sum-i,i+1);
            cur.pop_back();
        }
        return;
    }
   
};