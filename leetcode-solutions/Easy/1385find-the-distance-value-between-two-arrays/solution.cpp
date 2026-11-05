// ==========================================================================
// Problem: 1385. Find the Distance Value Between Two Arrays (Easy)
// LeetCode: https://leetcode.com/problems/find-the-distance-value-between-two-arrays/
// Language: C++
// Runtime: 0
ms (beats 100.00%)
// Memory: 16.57
MB (beats 75.81%)
// Synced by Code_Raginii
// ==========================================================================
class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {

        int count=0;
        for(int i=0;i<arr1.size();i++){
            bool valid=true;

            for(int j=0;j<arr2.size();j++){
                if(abs(arr1[i]-arr2[j])<=d){
                    valid=false;
                    break;
                }
            }
