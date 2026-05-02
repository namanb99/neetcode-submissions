class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = 10000;
        int maxProfit = 0;

        int res;

        for(int i=0;i<prices.size();++i){
            minPrice = min(prices[i], minPrice);
            maxProfit = max(maxProfit, (prices[i]-minPrice));
        }
        
        return maxProfit;
    }
};
