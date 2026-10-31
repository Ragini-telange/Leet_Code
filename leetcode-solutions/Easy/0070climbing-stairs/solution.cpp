// ==========================================================================
// Problem: 70. Climbing Stairs (Easy)
// LeetCode: https://leetcode.com/problems/climbing-stairs/
// Language: C++
// Synced by Code_Raginii
// ==========================================================================
class Solution {
public:
    int climbStairs(int n) {
        if(n<2){
            return n;
        }

        int a=1;
        int b=2;

        for(int i=3;i<=n;i++){
            int c=a+b;
            a=b;
            b=c;
        }
        return b;
