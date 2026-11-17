// ==========================================================================
// Problem: 704. Binary Search (Easy)
// LeetCode: https://leetcode.com/problems/binary-search/
// Language: C++
// Synced by Code_Raginii
// ==========================================================================
while(start<=end){
            int mid=start+(end-start)/2;

            if(target==arr[mid]){
                return mid;
            }
            else if(target>arr[mid]){
                start=mid+1;
            }
        int start=0;
        int end=n-1;

        int n=arr.size();
public:
    int search(vector<int>& arr, int target) {

class Solution {
