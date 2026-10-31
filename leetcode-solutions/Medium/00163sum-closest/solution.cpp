// ==========================================================================
// Problem: 16. 3Sum Closest (Medium)
// LeetCode: https://leetcode.com/problems/3sum-closest/
// Language: C++
// Synced by Code_Raginii
// ==========================================================================
class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;

        int closest=nums[0]+nums[1]+nums[2];

        for(int i=0;i<n-2;i++){
           int  j=i+1;
           int  k=n-1;

            while(j<k){
                int sum=nums[i]+nums[j]+nums[k];

            if(abs(target-sum)<abs(target-closest)){
                closest=sum;
