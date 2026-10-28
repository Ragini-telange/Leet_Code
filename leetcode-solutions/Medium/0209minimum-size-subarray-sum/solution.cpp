// ==========================================================================
// Problem: 209. Minimum Size Subarray Sum (Medium)
// LeetCode: https://leetcode.com/problems/minimum-size-subarray-sum/
// Language: C++
// Synced by Code_Raginii
// ==========================================================================
for(int end=0;end<nums.size();end++){
        sum+=nums[end];
      }
        while(sum>=target){
            ans=min(ans,end-start+1);
        }
            sum-=nums[start];
            start++;
      return ans==INT_MAX?0:ans;
      int ans=INT_MAX;
      int start=0;
    int minSubArrayLen(int target, vector<int>& nums) {
      int sum=0;
class Solution {
public:
