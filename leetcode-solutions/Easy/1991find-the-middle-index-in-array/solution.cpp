// ==========================================================================
// Problem: 1991. Find the Middle Index in Array (Easy)
// LeetCode: https://leetcode.com/problems/find-the-middle-index-in-array/
// Language: C++
// Synced by Code_Raginii
// ==========================================================================
int findMiddleIndex(vector<int>& nums) {
        
       
        int totalsum=0;

        for(int num:nums){
         totalsum+=num;
        }

        int leftsum=0;

        for(int i=0;i<nums.size();i++){

            int rightsum=totalsum-leftsum-nums[i];

            if(leftsum==rightsum){
                return i;
            }
            leftsum+=nums[i];

        }
