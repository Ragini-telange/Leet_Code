// ==========================================================================
// Problem: 55. Jump Game (Medium)
// LeetCode: https://leetcode.com/problems/jump-game/
// Language: C++
// Runtime: 1
ms (beats 32.87%)
// Memory: 52.18
MB (beats 93.64%)
// Synced by Code_Raginii
// ==========================================================================
class Solution {
public:
    bool canJump(vector<int>& nums) {

        int n=nums.size();
        int maxreach=0;

        for(int i=0;i<n;i++){
            if(i>maxreach){
                return false;
            }
            maxreach=max(maxreach,i+nums[i]);
        }
        return true;
    }
};
