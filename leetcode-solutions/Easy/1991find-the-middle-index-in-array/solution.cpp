// ==========================================================================
// Problem: 1991. Find the Middle Index in Array (Easy)
// LeetCode: https://leetcode.com/problems/find-the-middle-index-in-array/
// Language: C++
// Synced by Code_Raginii
// ==========================================================================
for(int num:nums){
            totalsum+=num;
        }
        
return -1;
        int totalsum=0;
        int leftsum=0;
        for(int i=0;i<n;i++){
            int rightsum=totalsum-leftsum-nums[i];
        }

            if(leftsum==rightsum){
                return i;
            }
    }

            leftsum+=nums[i];
};
    int findMiddleIndex(vector<int>& nums) {
        int n=nums.size();
class Solution {
public:
