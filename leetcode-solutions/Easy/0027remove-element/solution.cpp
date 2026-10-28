// ==========================================================================
// Problem: 27. Remove Element (Easy)
// LeetCode: https://leetcode.com/problems/remove-element/
// Language: C++
// Synced by Code_Raginii
// ==========================================================================
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        
    int k=0;
     for(int i=0;i<nums.size();i++){
        if(nums[i]!=val){
            nums[k]=nums[i];


     }
        return k;
            k++;
        }
    }
};
