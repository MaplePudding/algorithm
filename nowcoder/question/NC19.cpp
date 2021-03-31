class Solution {
public:
    /**
     * max sum of the subarray
     * @param arr int����vector the array
     * @return int����
     */
    int maxsumofSubarray(vector<int>& arr) {
        // write code here
        int res = INT_MIN;
        int cur = 0;
        for (int i = 0; i < arr.size(); ++i) {
            cur += arr[i];
            res = max(res, cur);
            cur = cur < 0 ? 0 : cur;
        }
        return res;
    }
};