class Solution {
public:
    /**
     * Ѱ������ɽ��
     * @param a int����һά����
     * @param aLen int a���鳤��
     * @return int����
     */
    int solve(int* a, int aLen) {
        // write code here
        for (int i = aLen - 1; i >= 0; i--) {
            if (a[i] > a[i - 1]) return i;
        }
        return 0;
    }
};