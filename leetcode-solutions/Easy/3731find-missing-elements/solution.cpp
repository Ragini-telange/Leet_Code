// ==========================================================================
// Problem: 3731. Find Missing Elements (Easy)
// LeetCode: https://leetcode.com/problems/find-missing-elements/
// Language: C++
// Runtime: 1
ms (beats 69.30%)
// Memory: 32.08
MB (beats 95.63%)
// Synced by Code_Raginii
// ==========================================================================
if(nums[i+1]-nums[i]>1){
            for(int j=nums[i]+1;j<nums[i+1];j++){
                ans.push_back(j);
            }
        }
       sort(nums.begin(),nums.end());
       vector<int>ans;

       for(int i=0;i<n-1;i++){

       int n=nums.size();
    vector<int> findMissingElements(vector<int>& nums) {
class Solution {
public:
