// ==========================================================================
// Problem: 35. Search Insert Position (Easy)
// LeetCode: https://leetcode.com/problems/search-insert-position/
// Language: C++
// Synced by Code_Raginii
// ==========================================================================
int mid=start+(end-start)/2;

        if(target==nums[mid]){
            return mid;
        }
        else if(target<nums[mid]){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
       }
       while(start<=end){

       int end=n-1;
       int start=0;
       int n=nums.size();

    int searchInsert(vector<int>& nums, int target) {
public:
