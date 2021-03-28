class Solution {
public:
    int MoreThanHalfNum_Solution(vector<int> numbers) {
        map<int, int> mp;
        for (int i = 0; i < numbers.size(); ++i) {
            ++mp[numbers[i]];
        }

        for (auto i : mp) {
            if (i.second > numbers.size() / 2) {
                return i.first;
            }
        }
        return 0;
    }
};