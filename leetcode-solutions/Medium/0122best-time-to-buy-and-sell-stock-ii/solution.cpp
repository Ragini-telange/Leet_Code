// ==========================================================================
// Problem: 122. Best Time to Buy and Sell Stock II (Medium)
// LeetCode: https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/
// Language: C++
// Synced by Code_Raginii
// ==========================================================================
public:
    int maxProfit(vector<int>& prices) {

        int n=prices.size();

        int bestbuy=prices[0];
        int maxprofit=0;
        
        for(int i=0;i<prices.size();i++){
            
                if(prices[i]<prices[i+1]){
                    maxprofit+=prices[i+1]-prices[i];
                }
            }
            return maxprofit;
    }
};
