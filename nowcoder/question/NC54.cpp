class Solution {
public:
    vector<vector<int> > threeSum(vector<int>& num) {
        vector<vector<int>> res;
        vector<int> temp;
        if (num.size() < 3) {
            return res;
        }
        sort(num.begin(), num.end());
        for (int index = 0; index < num.size() - 2; ++index) {
            int i = index + 1;
            int j = num.size() - 1;
            while (i < j) {
                if (num[index] + num[i] + num[j] > 0) {
                    --j;
                }
                else if (num[index] + num[i] + num[j] < 0) {
                    ++i;
                }
                else {
                    res.push_back({ num[index], num[i], num[j] });
                    while (i < j && num[i] == num[i + 1]) {
                        ++i;
                    }
                    while (i < j && num[j] == num[j - 1]) {
                        --j;
                    }
                    ++i;
                    --j;
                }
            }
            while (index < num.size() - 2 && num[index] == num[index + 1]) {
                ++index;
            }
        }
        return res;
    }
};