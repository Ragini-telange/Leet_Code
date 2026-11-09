// ==========================================================================
// Problem: 122. Best Time to Buy and Sell Stock II (Medium)
// LeetCode: https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/
// Language: C++
// Runtime: 0
ms (beats 100.00%)
// Memory: 19.98
MB (beats 77.60%)
// Synced by Code_Raginii
// ==========================================================================
public:
    int maxProfit(vector<int>& prices) {

        int n=prices.size();

        int maxprofit=0;
        
        for(int i=0;i<n-1;i++){
            
                if(prices[i]<prices[i+1]){
                    maxprofit+=prices[i+1]-prices[i];
                }
            }
            return maxprofit;
    }
};
