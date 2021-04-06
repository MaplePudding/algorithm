class Solution {
public:
    /**
     * retrun the longest increasing subsequence
     * @param arr int整型vector the array
     * @return int整型vector
     */
    vector<int> LIS(vector<int>& arr) {
        // write code here
        int len = arr.size();
        vector<int> res;
        vector<int> temp;  //每个位置为终点的LIS长度
        res.emplace_back(arr.front());
        temp.emplace_back(1);
        for (unsigned int i = 1; i < len; ++i)
            if (arr[i] > res.back())
            {
                res.emplace_back(arr[i]);
                temp.emplace_back(res.size());
            }
            else {
                int pos = lower_bound(res.begin(), res.end(), arr[i]) - res.begin();
                res[pos] = arr[i];
                temp.emplace_back(++pos);
            }
        for (int i = len - 1, k = res.size() - 1; k >= 0; --i)
            if (temp[i] - 1 == k)
            {
                res[k] = arr[i];
                --k;
            }
        return res;
    }
};