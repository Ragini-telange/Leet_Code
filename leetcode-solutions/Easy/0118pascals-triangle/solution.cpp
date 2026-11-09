// ==========================================================================
// Problem: 118. Pascal's Triangle (Easy)
// LeetCode: https://leetcode.com/problems/pascals-triangle/
// Language: C++
// Synced by Code_Raginii
// ==========================================================================
class Solution {
public:
    vector<vector<int>> generate(int numRows) {

        vector<vector<int>>triangle;

        for(int i=0;i<numRows;i++){
            vector<int>row;

            for(int j=0;j<=i;j++){
                if(j==0 || j==i){
                    row.push_back(1);
                }
                else{
                    row.push_back(triangle[i-1][j-1]+triangle[i-1][j]);
                }
            }
            triangle.push_back(row);
