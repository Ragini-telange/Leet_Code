// ==========================================================================
// Problem: 18. 4Sum (Medium)
// LeetCode: https://leetcode.com/problems/4sum/
// Language: C++
// Synced by Code_Raginii
// ==========================================================================
vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        
class Solution {    // O(nlogn+n^3)
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        for(int i=0;i<n;i++){
            if(i>0 && nums[i]==nums[i-1])continue;
            for(int j=i+1;j<n;j++){
                if(j>i+1 && nums[j]==nums[j-1])continue;
                int k=j+1;
                int l=n-1;
