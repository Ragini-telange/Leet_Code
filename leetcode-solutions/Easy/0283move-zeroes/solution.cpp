// ==========================================================================
// Problem: 283. Move Zeroes (Easy)
// LeetCode: https://leetcode.com/problems/move-zeroes/
// Language: C++
// Synced by Code_Raginii
// ==========================================================================
class Solution {
public:
    void moveZeroes(vector<int>& nums) {

        int n=nums.size();

        int start=0;

        for(int i=0;i<n;i++){
            if(nums[i]!=0){
              swap(nums[i],nums[start]);
            }
        }
    }
              start++;
};
