class Solution {
public:
    bool canJump(vector<int>& nums) {
        int lastPosition = nums.size() - 1;
        for(int i = lastPosition - 1; i >=0; --i){
            if(nums[i] + i >= lastPosition){
                lastPosition = i;
            }
        }
        return lastPosition == 0;
    }
};