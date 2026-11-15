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

           
            if(arr[mid]<arr[mid+1]){
                start=mid+1;
            }
            else{
                end=mid;
            }
    }
        return start;
};
    int peakIndexInMountainArray(vector<int>& arr) {
        int n=arr.size();
public:
class Solution {
