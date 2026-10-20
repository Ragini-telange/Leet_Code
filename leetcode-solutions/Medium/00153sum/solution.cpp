// ==========================================================================
// Problem: 15. 3Sum (Medium)
// LeetCode: https://leetcode.com/problems/3sum/
// Language: C++
// Runtime: 52
ms (beats 32.44%)
// Memory: 29.20
MB (beats 44.45%)
// Synced by Code_Raginii
// ==========================================================================
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
     int n=nums.size();
     vector<vector<int>>ans;
     sort(nums.begin(),nums.end());
     for(int i=0;i<n;i++){
        if(i>0 && nums[i]==nums[i-1])continue;
        int j=i+1;
        int k=n-1;
        while(j<k){
            int sum=nums[i]+nums[j]+nums[k];
            if(sum>0){
                k--;
            }
            else if(sum<0){
                j++;
            }
            else{
                ans.push_back({nums[i],nums[j],nums[k]});

                while(j<k && nums[j]==nums[j+1])j++;
                while(j<k && nums[k]==nums[k-1])k--;
