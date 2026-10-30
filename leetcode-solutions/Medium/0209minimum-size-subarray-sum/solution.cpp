// ==========================================================================
// Problem: 209. Minimum Size Subarray Sum (Medium)
// LeetCode: https://leetcode.com/problems/minimum-size-subarray-sum/
// Language: C++
// Synced by Code_Raginii
// ==========================================================================
int n=nums.size();
    int ans=INT_MAX;
    int sum=0;
    for(int end=0;end<n;end++){
        sum+=nums[end];
    }
        while(sum>=target){
            ans=min(ans,end-start+1);
        }
     }
            sum-=nums[start];
            start++;
    return ans==INT_MAX?0:ans;

};
