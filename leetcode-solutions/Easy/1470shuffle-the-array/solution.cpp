// ==========================================================================
// Problem: 1470. Shuffle the Array (Easy)
// LeetCode: https://leetcode.com/problems/shuffle-the-array/
// Language: C++
// Runtime: 2
ms (beats 84.36%)
// Memory: 13.42
MB (beats 46.88%)
// Synced by Code_Raginii
// ==========================================================================
class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {

        vector<int>ans;
        

        for(int i=0;i<n;i++){

            ans.push_back(nums[i]);
            ans.push_back(nums[i+n]);
        }
        return ans;
    }
};
