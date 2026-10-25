// ==========================================================================
// Problem: 26. Remove Duplicates from Sorted Array (Easy)
// LeetCode: https://leetcode.com/problems/remove-duplicates-from-sorted-array/
// Language: C++
// Runtime: 0
ms (beats 100.00%)
// Memory: 22.54
MB (beats 76.26%)
// Synced by Code_Raginii
// ==========================================================================
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        if(nums.empty()){
            return 0;
        }

        int n=nums.size();

        int i=0;
        for(int j=0;j<n;j++){
            if(nums[j]!=nums[i]){
                i++;
                nums[i]=nums[j];
            }
        }
        return i+1;
    }
};
