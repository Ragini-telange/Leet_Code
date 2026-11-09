// ==========================================================================
// Problem: 217. Contains Duplicate (Easy)
// LeetCode: https://leetcode.com/problems/contains-duplicate/
// Language: C++
// Synced by Code_Raginii
// ==========================================================================
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
        }
        return false;
                if(nums[i]==nums[j]){
            }
                    return true;
                }
    }
};
