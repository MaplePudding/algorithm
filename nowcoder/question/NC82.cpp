class Solution {
public:
    vector<int> maxInWindows(const vector<int>& num, unsigned int size)
    {
        vector<int> result;
        int pos = 0;
        int length = num.size();
        int move_times = length - size + 1;
        if (size == 0)return result;

        while (move_times-- > 0) {
            result.push_back(*max_element(num.begin() + pos, num.begin() + pos + size));//用到了<algorithm>中STL算法
            pos++;
        }

        return result;
    }
};