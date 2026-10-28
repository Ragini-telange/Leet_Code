// ==========================================================================
// Problem: 35. Search Insert Position (Easy)
// LeetCode: https://leetcode.com/problems/search-insert-position/
// Language: C++
// Runtime: 0
ms (beats 100.00%)
// Memory: 13.46
MB (beats 97.43%)
// Synced by Code_Raginii
// ==========================================================================
return mid;
        }
        else if(target>nums[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
       }
        if(target==nums[mid]){

        int mid=start+(end-start)/2;
       while(start<=end){

       int end=n-1;
       int start=0;
