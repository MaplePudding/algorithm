class Solution {
public:
    /**
     * �����е����������������������Ѿ�ָ���������޸ģ�ֱ�ӷ��ط����涨��ֵ����
     *
     * @param str string�ַ��� ���жϵ��ַ���
     * @return bool������
     */
    bool judge(string str) {
        // write code here
        if (str.length() == 0)
            return false;
        if (str.length() == 1)
            return true;
        for (int i = 0; i < str.length(); i++) {
            if (str[i] != str[str.length() - 1 - i]) {
                return false;
            }
        }
        return true;
    }
};