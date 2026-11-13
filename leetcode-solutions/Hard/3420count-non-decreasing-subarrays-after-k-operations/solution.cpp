// ==========================================================================
// Problem: 3420. Count Non-Decreasing Subarrays After K Operations (Hard)
// LeetCode: https://leetcode.com/problems/count-non-decreasing-subarrays-after-k-operations/
// Language: C++
// Synced by Code_Raginii
// ==========================================================================
int maxval=nums[i];

            for(int j=i;j<n;j++){

            if(nums[j]<maxval){
                operations+=maxval-nums[j];
            }
            else{
                maxval=nums[j];
            }


            long long  operations=0;
        for(int i=0;i<n;i++){
        long long ans=0;

        int n=nums.size();

    long long countNonDecreasingSubarrays(vector<int>& nums, int k) {
class Solution {
public:
