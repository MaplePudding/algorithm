class Solution {
public:
    void search(vector<vector<int>>& res, vector<int>& nums, vector<int>& temp, vector<int>& visited, int n, int index){
        if(n == 0){
            res.push_back(temp);
            return;
        }
        for(int i = index; i < nums.size(); ++i){
            if(visited[i] == 1){
                continue;
            }
            if(i != 0 && nums[i] == nums[i - 1] && visited[i - 1] == 0){
                continue;
            }
            temp.push_back(nums[i]);
            visited[i] = 1;
            search(res, nums, temp, visited, n - 1, i + 1);
            temp.pop_back();
            visited[i] = 0;
        }
    }
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> temp;
        vector<int> visited(nums.size(), 0);
        int n = 1;
        
        sort(nums.begin(), nums.end());
        
        res.push_back(temp);
        
        if(nums.size() == 0){
            return res;
        }
        
        while(n <= nums.size()){
            search(res, nums, temp, visited, n, 0);
            ++n;
        }
        return res;
    }
};