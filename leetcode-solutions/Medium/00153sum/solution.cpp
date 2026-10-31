// ==========================================================================
// Problem: 15. 3Sum (Medium)
// LeetCode: https://leetcode.com/problems/3sum/
// Language: C++
// Synced by Code_Raginii
// ==========================================================================
int k=n-1;

        while(j<k){
            int sum=nums[i]+nums[j]+nums[k];

            if(sum>0){
                k--;
            }
            else if(sum<0){
                j++;
            }
            else{
                ans.push_back({nums[i],nums[j],nums[k]});

                while(j<k && nums[j]==nums[j+1])j++;
                while(j<k && nums[k]==nums[k-1])k--;
                j++;
                k--;
