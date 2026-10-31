// ==========================================================================
// Problem: 2778. Sum of Squares of Special Elements (Easy)
// LeetCode: https://leetcode.com/problems/sum-of-squares-of-special-elements/
// Language: C++
// Runtime: 2
ms (beats 9.20%)
// Memory: 40.12
MB (beats 42.66%)
// Synced by Code_Raginii
// ==========================================================================
class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        
        int k=0;
        int n=nums.size();

        for(int i=1;i<=n;i++){
            if(n%i==0){
                k+=nums[i-1]*nums[i-1];
            }
        }
        return k;
    }
};
