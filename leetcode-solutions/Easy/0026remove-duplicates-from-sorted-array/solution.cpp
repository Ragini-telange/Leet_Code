// ==========================================================================
// Problem: 26. Remove Duplicates from Sorted Array (Easy)
// LeetCode: https://leetcode.com/problems/remove-duplicates-from-sorted-array/
// Language: C++
// Synced by Code_Raginii
// ==========================================================================
int removeDuplicates(vector<int>& nums) {
        if(nums.empty()){
            return 0;
        }

        
        int i=0;
        for(int j=0;j<nums.size();j++){
            if(nums[j]!=nums[i]){
                i++;
                nums[i]=nums[j];
            }
        }
        return i+1;
    }

};
