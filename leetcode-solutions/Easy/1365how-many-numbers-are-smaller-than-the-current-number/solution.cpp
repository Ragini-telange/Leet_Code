// ==========================================================================
// Problem: 1365. How Many Numbers Are Smaller Than the Current Number (Easy)
// LeetCode: https://leetcode.com/problems/how-many-numbers-are-smaller-than-the-current-number/
// Language: C++
// Synced by Code_Raginii
// ==========================================================================
class Solution{
    public:
    vector<int> smallerNumbersThanCurrent(vector<int>& 
    nums) {
        int n=nums.size();
        vector<int> ans;

        for(int i=0;i<n;i++){
            int count=0;
            for(int j=0;j<n;j++){
                if(nums[j]<nums[i]){
                    count++;    
                }
            }
            ans.push_back(count);
        }
        return ans;
    }
};
