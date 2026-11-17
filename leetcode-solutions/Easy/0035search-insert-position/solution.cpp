// ==========================================================================
// Problem: 35. Search Insert Position (Easy)
// LeetCode: https://leetcode.com/problems/search-insert-position/
// Language: C++
// Runtime: 0
ms (beats 100.00%)
// Memory: 13.73
MB (beats 15.81%)
// Synced by Code_Raginii
// ==========================================================================
int n=nums.size();

       int start=0;
       int end=n-1;

       while(start<=end){
        int mid=start+(end-start)/2;

        if(target==nums[mid]){
            return mid;
        }
        else if(target>nums[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
       }
       return start;
    }

    int searchInsert(vector<int>& nums, int target) {
class Solution {
public:
