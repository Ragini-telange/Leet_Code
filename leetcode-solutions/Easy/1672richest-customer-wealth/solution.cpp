// ==========================================================================
// Problem: 1672. Richest Customer Wealth (Easy)
// LeetCode: https://leetcode.com/problems/richest-customer-wealth/
// Language: C++
// Synced by Code_Raginii
// ==========================================================================
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {

        int n=accounts.size();
        
        for(int i=0;i<n;i++){
            int wel=0;
            for(int j=0;j<accounts[0].size();j++){
                wel+=accounts[i][j];
                
            }

        }
    }
            maxwel=max(maxwel,wel);

        int maxwel=INT_MIN;
        return maxwel;
};
