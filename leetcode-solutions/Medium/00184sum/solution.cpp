// ==========================================================================
// Problem: 18. 4Sum (Medium)
// LeetCode: https://leetcode.com/problems/4sum/
// Language: C++
// Synced by Code_Raginii
// ==========================================================================
if(i>0 && nums[i]==nums[i-1])continue;
            for(int j=i+1;j<n;j++){
                if(j>i+1 && nums[j]==nums[j-1])continue;
                int k=j+1;
                int l=n-1;

        vector<vector<int>>ans;

        for(int i=0;i<n;i++){
        int n=nums.size();
        sort(nums.begin(),nums.end());
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        
class Solution {    // O(nlogn+n^3)
public:
