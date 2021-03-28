class Solution {
public:
    /**
     *
     * @param numbers int整型vector
     * @param target int整型
     * @return int整型vector
     */
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int, int> um;
        for (int i = 0; i < numbers.size(); i++) {
            if (um.find(numbers[i]) != um.end()) {
                return { um[numbers[i]] + 1,i + 1 };
            }
            else {
                um[target - numbers[i]] = i;
            }
        }
        return { -1,-1 };
    }
};