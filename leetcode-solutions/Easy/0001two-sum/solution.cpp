// ==========================================================================
// Problem: 1. Two Sum (Easy)
// LeetCode: https://leetcode.com/problems/two-sum/
// Language: C++
// Synced by Code_Raginii
// ==========================================================================
class Solution {
public:      
vector<int>twoSum(vector<int>&nums,int tar){
int n=nums.size();
for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        if(nums[i]+nums[j]==tar){
    }
}
            return {i,j};
        }
}
return{};
};
