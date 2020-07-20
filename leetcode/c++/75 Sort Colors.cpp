class Solution {
public:
    void sortColors(vector<int>& nums) {
        int l = 0;
        int r = nums.size() - 1;
        for(int i = 0; i < nums.size(); ++i){
            while(nums[i] == 2 && i < r){
                int tmp = nums[i];
                nums[i] = nums[r];
                nums[r] = tmp;
                --r;
            }
            while(nums[i] == 0 && i > l){
                int tmp = nums[i];
                nums[i] = nums[l];
                nums[l] = tmp;
                ++l;
            }
        }
    }
};