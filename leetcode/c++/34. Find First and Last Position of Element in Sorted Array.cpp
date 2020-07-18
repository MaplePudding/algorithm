class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> res;
        int index1 = 0;
        int index2 = nums.size() - 1;
        if(nums.size() == 0){
            res.push_back(-1);
            res.push_back(-1);
            return res;
        }
        
        if(target > nums[nums.size() - 1] || target < nums[0]){
            res.push_back(-1);
            res.push_back(-1);
            return res;
        }
        
        while(index1 <= index2){
            if(nums[index1] != target){
                ++index1;
            }
            
            if(nums[index2] != target){
                --index2;
            }
            
            if(nums[index1] == target && nums[index2] == target){
                break;
            }
        }
        
        if(index1 > index2){
            res.push_back(-1);
            res.push_back(-1);
            return res;
        }else{
            res.push_back(index1);
            res.push_back(index2);
            return res;
        }
    }
};