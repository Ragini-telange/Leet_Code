// ==========================================================================
// Problem: 414. Third Maximum Number (Easy)
// LeetCode: https://leetcode.com/problems/third-maximum-number/
// Language: C++
// Synced by Code_Raginii
// ==========================================================================
int thirdMax(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());

        for(int i=n-2;i>=0;i--){
            if(nums[i+1]!=nums[i]){

        int count=1;
                count++;

            }
            if(count==3){
                return nums[i];
            }
        }  
        return nums[n-1];
    }
};
public:
class Solution {
