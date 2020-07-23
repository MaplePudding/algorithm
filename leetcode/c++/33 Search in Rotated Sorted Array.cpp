class Solution {
public:
    int search(vector<int>& nums, int target) {
        int index = -1;
        int left;
        int right;
        if(nums.size() == 0){
            return -1;
        }
        
        if(nums.size() == 1){
            if(nums[0] == target){
                return 0;
            }else{
                return -1;
            }
        }
        
        for(int i = 0; i < nums.size() - 1; ++i){
            if(nums[i + 1] < nums[i]){
                index = i;
            }
        }
        
        if(index == -1){
            if(target < nums[0] || target > nums.back()){
                return -1;
            }
            
            
            left = 0;
            right = nums.size() - 1;
            index = (left + right) / 2;
            while(left < right){
                if(target == nums[index]){
                    return index;
                }     
                if(target < nums[index]){
                    right = index;
                    index = (left + right) / 2;
                }else{
                    left = index;
                    index = (left + right) / 2;
                }
                
                if(left + 1 == right && nums[left] != target && nums[right] != target){
                    return -1;
                }
                
                if(left + 1 == right){
                    if(nums[left] == target){
                        return left;
                    }
                    else return right;
                }
            }
            
        }else{
            if(target >= nums[0] && target <= nums[index]){
                left = 0;
                right = index;
                index = (left + right) / 2;
                while(left < right){
                if(target == nums[index]){
                    return index;
                }     
                if(target < nums[index]){
                    right = index;
                    index = (left + right) / 2;
                }else{
                    left = index;
                    index = (left + right) / 2;
                }
                
                if(left + 1 == right && nums[left] != target && nums[right] != target){
                    return -1;
                }
                    
                if(left + 1 == right){
                    if(nums[left] == target){
                        return left;
                    }
                    else return right;
                }
            }
            }else if(target >= nums[index + 1] && target <= nums[nums.size() - 1]){
                left = index + 1;
                right = nums.size() - 1;
                index = (left + right) / 2;
                            while(left < right){
                if(target == nums[index]){
                    return index;
                }     
                if(target < nums[index]){
                    right = index;
                    index = (left + right) / 2;
                }else{
                    left = index;
                    index = (left + right) / 2;
                }
                
                if(left + 1 == right && nums[left] != target && nums[right] != target){
                    return -1;
                }
                                
                if(left + 1 == right){
                    if(nums[left] == target){
                        return left;
                    }
                    else return right;
                }
            }
            }
            else{
                return -1;
            }
        }
        
        return index;
    }
};