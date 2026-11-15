// ==========================================================================
// Problem: 852. Peak Index in a Mountain Array (Medium)
// LeetCode: https://leetcode.com/problems/peak-index-in-a-mountain-array/
// Language: C++
// Synced by Code_Raginii
// ==========================================================================
int start=0;
        int end=n-1;

        while(start<end){
            int mid=start+(end-start)/2;
        }

            if(arr[mid-1]<arr[mid] && arr[mid]>arr[mid+1]){
                return mid;
            }
            if(arr[mid]<arr[mid+1]){
                start=mid+1;
            }
            else{
                end=mid-1;
            }
    }
        return -1;
};
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n=arr.size();
