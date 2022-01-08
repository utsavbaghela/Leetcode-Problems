E-121. Best Time to Buy and Sell Stock


class Solution {
public:
    int maxProfit(vector<int>& prices) {
    int profit=0;
    int minimum=prices[0];
    for (int i=1;i<prices.size();i++)
    {
        int new_val = prices[i]-minimum;
        profit=max(profit,new_val);
        minimum=min(minimum,prices[i]);
    }
        return profit;
    }
};