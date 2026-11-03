// ==========================================================================
// Problem: 3736. Minimum Moves to Equal Array Elements III (Easy)
// LeetCode: https://leetcode.com/problems/minimum-moves-to-equal-array-elements-iii/
// Language: C++
// Synced by Code_Raginii
// ==========================================================================
class Solution {
public:
    int minMoves(vector<int>& nums) {
        int mx=*max_element(nums.begin(), nums.end());
        int moves=0;

        for(int num:nums){
            moves+=mx-num;
        }
        return moves;
    }
};
