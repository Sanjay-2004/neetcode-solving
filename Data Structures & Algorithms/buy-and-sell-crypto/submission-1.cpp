class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (prices.empty()) return 0;
        int l = 0, r = 0;
        int n = prices.size();
        int profit = 0;
        while(r<n){
            if(prices[l]>prices[r]){
                l = r;
            }
            profit = max(profit, prices[r]-prices[l]);
            r++;
        }
        return profit;
    }
};
