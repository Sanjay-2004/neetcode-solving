class Solution {
public:
    int maxProfit(vector<int>& prices) {
        vector<int> next(2, 0);
        vector<int> cur(2,0);
        int n = prices.size();
        for(int i = n-1; i>=0; i--){
            for(int buy = 0; buy<2;buy++){
                if(buy){
                    cur[buy] = max(-prices[i] + next[0], next[1]);
                } else {
                    cur[buy] = max(prices[i] + next[1], next[0]);
                }
            }
            next = cur;
        }
        return next[1];
    }
};