// ==========================================================================
// Problem: 121. Best Time to Buy and Sell Stock (Easy)
// LeetCode: https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
// Language: C++
// Synced by Code_Raginii
// ==========================================================================
class Solution {
public:
    int maxProfit(vector<int>& price) {
    int n=price.size();
    int bestBuy=price[0];
    int maxprofit=0;
    for(int i=0;i<n;i++){
        bestBuy=min(bestBuy,price[i]);
        maxprofit=max(maxprofit,price[i]-bestBuy);
    }
    return maxprofit;
    }  
};
