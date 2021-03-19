class Solution {
public:
    /**
     *
     * @param prices int����vector
     * @return int����
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