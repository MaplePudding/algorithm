class Solution {
public:
    /**
     * ��ȱʧ����
     * @param a int����һά���� ���������ִ�
     * @param aLen int a���鳤��
     * @return int����
     */
    int solve(int* a, int aLen) {
        // write code here
        for (int i = 0; i < aLen; ++i) {
            if (a[i] != i) {
                return i;
            }
        }
        return aLen;
    }
};