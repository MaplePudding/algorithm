class Solution {
public:
    void backtrack(vector<vector<int>>& res, vector<int>& nums, int index, int len){
        if(index == len){
            res.push_back(nums);
        }
        for(int i = index; i < len; ++i){
            swap(nums[index], nums[i]);
            backtrack(res, nums, index + 1, len);
            swap(nums[index], nums[i]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        backtrack(res, nums, 0, nums.size());
        return res;
    }
};