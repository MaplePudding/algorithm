class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int index = 0;
        int left;
        int right;
        if(nums.size() == 0){
            return false;
        }
        
        if(nums.size() == 1){
            if(nums.back() == target){
                return true;
            }
            else{
                return false;
            }
        }
        
        for(int i = 0; i < nums.size() - 1; ++i){
            if(nums[i + 1] < nums[i]){
                index = i;
                break;
            }
        }
        
        if(target <= nums[index] && target >= nums[0]){
            left = 0;
            right = index;
            index = (right + left) / 2;
            while(left + 1 != right){
                if(target == nums[index]){
                    return true;
                }
                if(target < nums[index]){
                    right = index;
                    index = (right + left) / 2;
                }
                else{
                    left = index;
                    index = (right + left) / 2;
                }
            }
            if(nums[left] != target && nums[right] != target){
                return false;
            }
            return true;
            
        }else if(target >= nums[index + 1] && target <= nums.back()){
            left = index + 1;
            right = nums.size() - 1;
            index = (right + left) / 2;

            while(left + 1 != right){
                if(target == nums[index]){
                    return true;
                }
                if(target < nums[index]){
                    right = index;
                    index = (right + left) / 2;
                }
                else{
                    left = index;
                    index = (right + left) / 2;
                }
            }
            if(nums[left] != target && nums[right] != target){
                return false;
            }
            return true;
        }
        return false;
    }
};