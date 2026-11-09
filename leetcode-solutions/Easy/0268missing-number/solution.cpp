// ==========================================================================
// Problem: 268. Missing Number (Easy)
// LeetCode: https://leetcode.com/problems/missing-number/
// Language: C++
// Synced by Code_Raginii
// ==========================================================================
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        

        int n=nums.size();
        for(int i=0;i<n;i++){

        int sum=0;

        int expectedsum = n*(n+1)/2;
