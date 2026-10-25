// ==========================================================================
// Problem: 18. 4Sum (Medium)
// LeetCode: https://leetcode.com/problems/4sum/
// Language: C++
// Synced by Code_Raginii
// ==========================================================================
vector<vector<int>>ans;


      for(int i=0;i<n;i++){
        if(i>0 && nums[i]==nums[i-1])continue;

        for(int j=i+1;j<n;j++){
            if(j>i+1 && nums[j]==nums[j-1])continue;

           int k=j+1;
             int l=n-1;

            while(k<l){

                 
                long long  sum=1LL*nums[i]+nums[j]+nums[k]+nums[l];

                if(sum>target){
                    l--;
                }
                else if(sum<target){
                    k++;
                }
                else {
                    ans.push_back({nums[i],nums[j],nums[k],nums[l]});
