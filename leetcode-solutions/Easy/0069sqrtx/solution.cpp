// ==========================================================================
// Problem: 69. Sqrt(x) (Easy)
// LeetCode: https://leetcode.com/problems/sqrtx/
// Language: C++
// Synced by Code_Raginii
// ==========================================================================
int start=0;
    int end=x;
    long long ans=0;

    while(start<=end){
        int mid=start+(end-start)/2;

        if(mid*mid==x){
            return mid;
        }
