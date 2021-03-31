class Solution {
public:
    /**
     * 寻找最后的山峰
     * @param a int整型一维数组
     * @param aLen int a数组长度
     * @return int整型
     */
    int solve(int* a, int aLen) {
        // write code here
        for (int i = aLen - 1; i >= 0; i--) {
            if (a[i] > a[i - 1]) return i;
        }
        return 0;
    }
};