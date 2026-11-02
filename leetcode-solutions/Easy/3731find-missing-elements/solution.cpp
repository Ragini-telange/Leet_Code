// ==========================================================================
// Problem: 3731. Find Missing Elements (Easy)
// LeetCode: https://leetcode.com/problems/find-missing-elements/
// Language: C++
// Synced by Code_Raginii
// ==========================================================================
int n=nums.size();
        sort(nums.begin(),nums.end());
       

        vector<int>ans;
        for(int i=0;i<n-1;i++){
            
            if(nums[i+1]-nums[i]>1){

                for(int j=nums[i]+1;j<nums[i+1];j++)
                {
                            ans.push_back(j);
    nums) {
class Solution {
public:
    vector<int> findMissingElements(vector<int>&
