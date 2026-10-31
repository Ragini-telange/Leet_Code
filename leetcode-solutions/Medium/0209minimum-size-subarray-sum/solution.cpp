// ==========================================================================
// Problem: 209. Minimum Size Subarray Sum (Medium)
// LeetCode: https://leetcode.com/problems/minimum-size-subarray-sum/
// Language: C++
// Synced by Code_Raginii
// ==========================================================================
int ans=INT_MAX;

        for(int end=0;end<n;end++){
            sum+=nums[end];
        }
            while(sum>=target){
                ans=min(ans,end-start+1);
            }
                sum-=nums[start];
                start++;
        int sum=0;
        int n=nums.size();
        int start=0;
    int minSubArrayLen(int target, vector<int>& nums) {

public:
class Solution {
