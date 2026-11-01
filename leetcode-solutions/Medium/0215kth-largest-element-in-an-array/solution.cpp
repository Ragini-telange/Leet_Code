// ==========================================================================
// Problem: 215. Kth Largest Element in an Array (Medium)
// LeetCode: https://leetcode.com/problems/kth-largest-element-in-an-array/
// Language: C++
// Synced by Code_Raginii
// ==========================================================================
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int n=nums.size();

        return nums[n-k];
    }
};
