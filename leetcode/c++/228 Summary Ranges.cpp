class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> res;
        if(nums.size() == 0){
            return res;
        }else{
            int index1 = 0;
            int index2 = 0;
            
            if(nums.size() == 1){
                res.push_back(to_string(nums[0]));
                return res;
            }
            
            while(index2 < nums.size() - 1){
                if(nums[index2] + 1 != nums[index2 + 1]){
                    if(index1 == index2){
                        res.push_back(to_string(nums[index1]));                       
                        index1 = index2 + 1;

                    }else{
                        res.push_back(to_string(nums[index1]) + "->" + to_string(nums[index2]));
                        index1 = index2 + 1;
                    
                    }
                }
                ++index2;
            }
            if(index1 == index2){
                res.push_back(to_string(nums[index1]));
            }else{
                res.push_back(to_string(nums[index1]) + "->" + to_string(nums[index2]));
            }
        }
        return res;
    }
};