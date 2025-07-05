class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // int buy = INT_MAX,sell = 0, profit = 0;
        // int i = 0,j=i+1;
        // while(j<prices.size()){
        //     if(prices[i]<buy) buy = prices[i];
        //     if(prices[j]>sell) sell = prices[j];
        //     if(sell>buy) {
        //         profit+=sell-buy;
        //         buy=INT_MAX;
        //         sell=0;
        //         cout<<profit<<" ";
        //     }
        //         i++;
        //         // j++;
        int profit = 0;
        for (int i = 1; i < prices.size(); i++) {
            if (prices[i] > prices[i - 1])
                profit += prices[i] - prices[i - 1];
        }
        return profit;
    }
};