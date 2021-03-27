class Solution {
public:
    /**
     *
     * @param arr int整型vector the array
     * @return int整型
     */
    int maxLength(vector<int>& arr) {
        // write code here
        map<int, int> mp;
        int left = 0, right = 1, maxLen = 1;
        while (right < arr.size() && left <= right) {
            if (mp.count(arr[right])) {
                while (arr[left] != arr[right]) {
                    mp.erase(arr[left]);
                    ++left;
                }
                ++left;
            }
            mp[arr[right]] = 1;
            maxLen = max(maxLen, right - left + 1);
            ++right;
        }
        return maxLen;
    }
};