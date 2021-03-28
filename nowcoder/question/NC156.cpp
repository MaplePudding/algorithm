class Solution {
public:
    /**
     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
     *
     *
     * @param arr intvector
     * @param k int
     * @return int
     */
    int foundOnceNumber(vector<int>& arr, int k) {
        // write code here
        sort(arr.begin(), arr.end());
        for (int i = 0; i < arr.size() - 1; ++i) {
            if (arr[i] == arr[i + 1]) {
                i += k - 1;
            }
            else {
                return arr[i];
            }
        }
        return *(arr.end() - 1);
    }
};