// ==========================================================================
// Problem: 35. Search Insert Position (Easy)
// LeetCode: https://leetcode.com/problems/search-insert-position/
// Language: C++
// Synced by Code_Raginii
// ==========================================================================
int n=nums.size();
        int start=0;
        int end=n-1;

        while(start<=end){
            int mid=start+(end-start)/2;

            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]<target){
                start=mid+1;
            }
            else{
                end=mid-1;
            }
