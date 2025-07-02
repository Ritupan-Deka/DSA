// class Solution {
// public:
//     int maxProfit(vector<int>& prices) {
//         int min_price = INT_MAX, maxProfit = 0;
//         for (int i = 0; i < prices.size(); i++) {
//             if (prices[i] < min_price) 
//                 min_price = prices[i];
            
//             if (prices[i] - min_price > maxProfit)
//                 maxProfit = prices[i] - min_price;
//         }
//         return maxProfit;
//     }
// };

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_price = INT_MAX, maxProfit = 0;
        for (int i = 0; i < prices.size(); i++) {
                min_price = min(min_price,prices[i]);
                maxProfit = max(maxProfit,prices[i] - min_price);
        }
        return maxProfit;
    }
};