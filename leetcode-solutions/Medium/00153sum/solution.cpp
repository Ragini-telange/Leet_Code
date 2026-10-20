// ==========================================================================
// Problem: 15. 3Sum (Medium)
// LeetCode: https://leetcode.com/problems/3sum/
// Language: C++
// Runtime: 53
ms (beats 29.76%)
// Memory: 29.10
MB (beats 71.76%)
// Synced by Code_Raginii
// ==========================================================================
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
        while(j<k){
            int sum=nums[i]+nums[j]+nums[k];
     sort(nums.begin(),nums.end());
     for(int i=0;i<n;i++){
        if(i>0 && nums[i]==nums[i-1])continue;
        int j=i+1;
        int k=n-1;
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
     int n=nums.size();
     vector<vector<int>>ans;
