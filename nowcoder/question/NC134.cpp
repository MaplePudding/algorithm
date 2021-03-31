class Solution {
public:
    /**
     * �����е����������������������Ѿ�ָ���������޸ģ�ֱ�ӷ��ط����涨��ֵ����
     * �����������
     * @param prices int����vector ��Ʊÿһ��ļ۸�
     * @return int����
     */
    int maxProfit(vector<int>& prices) {
        // write code here
        int profit = 0;
        for (int i = 1; i < prices.size(); ++i) {
            if (prices[i] > prices[i - 1]) {
                profit += prices[i] - prices[i - 1];
            }
        }
        return profit;
    }
};