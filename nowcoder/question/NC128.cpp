class Solution {
public:
    /**
     * max water
     * @param arr int����vector the array
     * @return long������
     */
    long long maxWater(vector<int>& arr) {
        // write code here
        long long res = 0;
        int left = 0;
        int right = arr.size() - 1;
        if (arr.size() <= 2) {
            return res;
        }

        while (left < right) {
            int minH = min(arr[left], arr[right]);
            while (left < right && arr[left] <= minH) {
                res += minH - arr[left++];
            }

            while (left < right && arr[right] <= minH) {
                res += minH - arr[right--];
            }
        }
        return res;
    }
};