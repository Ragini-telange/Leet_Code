// ==========================================================================
// Problem: 1539. Kth Missing Positive Number (Easy)
// LeetCode: https://leetcode.com/problems/kth-missing-positive-number/
// Language: C++
// Runtime: 0
ms (beats 100.00%)
// Memory: 13.16
MB (beats 85.47%)
// Synced by Code_Raginii
// ==========================================================================
class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {

        for(int num:arr){
            if(num<=k){
            k++;
        }
    }
            else{
            break;
            }
        return k;
    }
};
