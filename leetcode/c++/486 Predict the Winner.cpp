class Solution {
public:
    bool PredictTheWinner(vector<int>& nums) {
        return canWin(nums, 0, 0, 1);
    }
    bool canWin(vector<int> nums, int sum1, int sum2, int player) {
        if (nums.empty()) return sum1 >= sum2;
        if (nums.size() == 1) {
            if (player == 1) return sum1 + nums[0] >= sum2;
            else if (player == 2) return sum2 + nums[0] > sum1;
        }
        vector<int> va = vector<int>(nums.begin() + 1, nums.end());
        vector<int> vb = vector<int>(nums.begin(), nums.end() - 1);
        if (player == 1) {
            return !canWin(va, sum1 + nums[0], sum2, 2) || !canWin(vb, sum1 + nums.back(), sum2, 2);
        } else if (player == 2) {
            return !canWin(va, sum1, sum2 + nums[0], 1) || !canWin(vb, sum1, sum2 + nums.back(), 1);
        }
    }
};