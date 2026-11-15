// ==========================================================================
// Problem: 1524. Number of Sub-arrays With Odd Sum (Medium)
// LeetCode: https://leetcode.com/problems/number-of-sub-arrays-with-odd-sum/
// Language: C++
// Synced by Code_Raginii
// ==========================================================================
class Solution {
public:
    int numOfSubarrays(vector<int>& nums) {

        int n=nums.size();

        int count=0;

        for(int i=0;i<n;i++){

            int sum=0;
            for(int j=i;j<n;j++){
                sum+=nums[j];

            if(sum%2!=0){
                count++;
            }
            }
        }
     return count;   
    }
};
