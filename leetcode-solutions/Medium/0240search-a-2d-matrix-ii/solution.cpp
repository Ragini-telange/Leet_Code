// ==========================================================================
// Problem: 240. Search a 2D Matrix II (Medium)
// LeetCode: https://leetcode.com/problems/search-a-2d-matrix-ii/
// Language: C++
// Synced by Code_Raginii
// ==========================================================================
int c=n-1;
return false;

     while(r<m && c>=0){
        if(mat[r][c]==target){
            return true;
        }

        else if(mat[r][c]>target) {
            c--;
        } 
        else{
            r++;
        }   }
     int n=mat[0].size();
     int r=0;
     int m=mat.size();
public:
    bool searchMatrix(vector<vector<int>>& mat, int target) {
class Solution {
