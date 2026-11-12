// ==========================================================================
// Problem: 342. Power of Four (Easy)
// LeetCode: https://leetcode.com/problems/power-of-four/
// Language: C++
// Runtime: 2
ms (beats 5.13%)
// Memory: 7.82
MB (beats 44.18%)
// Synced by Code_Raginii
// ==========================================================================
class Solution {
public:
    bool isPowerOfFour(int n) {

        if(n<=0){
            return false;
        }

        while(n%4==0){
            n/=4;
        }
        return n==1;
    }
};
