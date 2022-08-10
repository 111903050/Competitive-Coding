/*
Input: prices = [7,1,5,3,6,4]
Output: 5
Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.
Note that buying on day 2 and selling on day 1 is not allowed because you must buy before you sell.*/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n =prices.size();
        int maxprofit=0;
        int minprice=INT_MAX;
        for(int i=0;i<n-1;i++){
            if(prices[i]<minprice){
                minprice=prices[i];
            }
            else if(prices[i]-minprice> maxprofit)
                maxprofit = prices[i]-minprice;
        }
        return maxprofit;
    }
};
