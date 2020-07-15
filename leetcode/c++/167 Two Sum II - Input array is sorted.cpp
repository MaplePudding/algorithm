class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> res;
        int index1 = 0;
        int index2 = numbers.size() - 1;
        while(index1 < index2){
            if(numbers[index1] + numbers[index2] == target){
                res.push_back(index1 + 1);
                res.push_back(index2 + 1);
                return res;
            }
            else if(numbers[index1] + numbers[index2] > target){
                --index2;
            }
            else{
                ++index1;
            }
        }
        return res;
    }
};