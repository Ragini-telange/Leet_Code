// ==========================================================================
// Problem: 35. Search Insert Position (Easy)
// LeetCode: https://leetcode.com/problems/search-insert-position/
// Language: C++
// Runtime: 0
ms (beats 100.00%)
// Memory: 13.61
MB (beats 47.23%)
// Synced by Code_Raginii
// ==========================================================================
while(start<=end){
        int mid=start+(end-start)/2;
       }
        else if(target>nums[mid]){
            start=mid+1;
        }
        else {
        if(target==nums[mid]){
            return mid;
        }
            end=mid-1;
        }
       return start;
    }
};

       int end=n-1;
       int start=0;
