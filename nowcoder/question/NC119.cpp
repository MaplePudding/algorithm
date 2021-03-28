class Solution {
public:
    vector<int> GetLeastNumbers_Solution(vector<int> input, int k) {
        sort(input.begin(), input.end());
        if (k > input.size()) {
            return {};
        }
        else {
            vector<int> res(input.begin(), input.begin() + k);
            return res;
        }
    }
};