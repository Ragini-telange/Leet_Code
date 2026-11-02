// ==========================================================================
// Problem: 2293. Min Max Game (Easy)
// LeetCode: https://leetcode.com/problems/min-max-game/
// Language: C++
// Runtime: 0
ms (beats 100.00%)
// Memory: 13.45
MB (beats 63.66%)
// Synced by Code_Raginii
// ==========================================================================
}
        while(nums.size()>1){

            int n=nums.size();
            vector<int>newNums(n/2);

            for(int i=0;i<n/2;i++){
                if(i%2==0){
                   newNums[i]= min(nums[2 * i], nums[2 * i + 1]);
            }
                else{
                    newNums[i]=max(nums[2*i],nums[2*i+1]);
                }

public:
    int minMaxGame(vector<int>& nums) {
class Solution {
