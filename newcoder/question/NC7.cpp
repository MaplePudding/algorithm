class Solution {
public:
    /**
     *
     * @param prices int整型vector
     * @return int整型
     */
    int maxProfit(vector<int>& prices) {
        // write code here
        int minValue = prices[0];
        int profit = 0;
        for (int i = 0; i < prices.size(); ++i) {
            if (minValue > prices[i]) {
                minValue = prices[i];
            }
            profit = max(profit, prices[i] - minValue);
        }
        return profit;
    }
};