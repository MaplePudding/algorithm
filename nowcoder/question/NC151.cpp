class Solution {
public:
    /**
     * �����е����������������������Ѿ�ָ���������޸ģ�ֱ�ӷ��ط����涨��ֵ����
     *
     * ���a��b�����Լ����
     * @param a int
     * @param b int
     * @return int
     */
    int gcd(int a, int b) {
        // write code here        while(a != b){
        while (a != b) {
            if (a > b) a -= b;
            else b -= a;
        }
        return a;
    }
};