class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size() == 1){
            return 0;
        }
        int index_1 = 0;
        int index_2 = 0;
        int res = 0;
        for(index_1 = 0; index_1 < prices.size() - 1; ++index_1){
            for(index_2 = index_1 + 1; index_2 < prices.size(); ++index_2){
                if(prices[index_2] > prices[index_2 - 1]){
                    if(index_2 == prices.size() - 1){
                        res += prices[index_2] - prices[index_1];
                        return res;
                    }
                }
                else{
                    res += prices[index_2 - 1] - prices[index_1];
                    index_1 = index_2 - 1;
                    break;
                }
            }
        }
        return res;
    }
};