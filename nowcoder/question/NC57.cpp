class Solution {
public:
    /**
     *
     * @param x int整型
     * @return int整型
     */
    int reverse(int x) {
        // write code here
        int res = 0;
        while (x) {
            if (res > INT_MAX / 10 || res < INT_MIN / 10) {
                return 0;
            }
            res = res * 10 + x % 10;
            x /= 10;
        }
        return res;
    }
};