// ==========================================================================
// Problem: 367. Valid Perfect Square (Easy)
// LeetCode: https://leetcode.com/problems/valid-perfect-square/
// Language: C++
// Synced by Code_Raginii
// ==========================================================================
class Solution {
public:
    bool isPerfectSquare(int num) {

        if(num<=0){
            return false;
        }
        int start=1;
        int end=num/2;

        while(start<=end){
            int mid=start+(end-start)/2;

            long long square=1LL *mid*mid;

            if(square==num){
