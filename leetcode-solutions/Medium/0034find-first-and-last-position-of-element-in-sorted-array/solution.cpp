// ==========================================================================
// Problem: 34. Find First and Last Position of Element in Sorted Array (Medium)
// LeetCode: https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/
// Language: C++
// Runtime: 0
ms (beats 100.00%)
// Memory: 17.54
MB (beats 49.80%)
// Synced by Code_Raginii
// ==========================================================================
while(start<=end){
        int mid=start+(end-start)/2;
        if(nums[mid]==target){
            first=mid;
            end=mid-1;;

        }
        else if(nums[mid]>target){
            end=mid-1;
        }
        else {
            start=mid+1;
        }
    }
    return first;
public:
  int Findfirst(vector<int> & nums,int target){
    int start=0;
    int n=nums.size();
    int end=n-1;
    int first=-1;

class Solution {
