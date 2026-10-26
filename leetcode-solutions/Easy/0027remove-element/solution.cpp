// ==========================================================================
// Problem: 27. Remove Element (Easy)
// LeetCode: https://leetcode.com/problems/remove-element/
// Language: C++
// Runtime: 0
ms (beats 100.00%)
// Memory: 11.67
MB (beats 80.98%)
// Synced by Code_Raginii
// ==========================================================================
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
       int k=0;

       for(int i=0;i<nums.size();i++){
        if(nums[i]!=val){
            nums[k]=nums[i];
            k++;
        }
       }
       return k;
    }
};
