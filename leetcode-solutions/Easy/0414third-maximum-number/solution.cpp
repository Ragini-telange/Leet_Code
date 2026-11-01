// ==========================================================================
// Problem: 414. Third Maximum Number (Easy)
// LeetCode: https://leetcode.com/problems/third-maximum-number/
// Language: C++
// Runtime: 0
ms (beats 100.00%)
// Memory: 12.58
MB (beats 99.87%)
// Synced by Code_Raginii
// ==========================================================================
class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int count=1;

        for(int i=n-2;i>=0;i--){
            
            if(nums[i]!=nums[i+1]){
               count++;
            
                 if(count==3){
                        return nums[i];
                     } 

            }
