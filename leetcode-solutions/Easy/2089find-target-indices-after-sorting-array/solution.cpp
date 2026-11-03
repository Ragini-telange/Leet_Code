// ==========================================================================
// Problem: 2089. Find Target Indices After Sorting Array (Easy)
// LeetCode: https://leetcode.com/problems/find-target-indices-after-sorting-array/
// Language: C++
// Runtime: 0
ms (beats 100.00%)
// Memory: 15.07
MB (beats 73.55%)
// Synced by Code_Raginii
// ==========================================================================
class Solution {
public:
    vector<int>targetIndices(vector<int>& nums, int target) {
       sort(nums.begin(),nums.end());
       int n=nums.size();
       vector<int>ans;
       for(int i=0;i<n;i++){
        if(nums[i]==target){
            ans.push_back(i);
        }
       }
       return ans;
    }
};
