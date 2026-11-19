// ==========================================================================
// Problem: 2913. Subarrays Distinct Element Sum of Squares I (Easy)
// LeetCode: https://leetcode.com/problems/subarrays-distinct-element-sum-of-squares-i/
// Language: C++
// Runtime: 36
ms (beats 71.59%)
// Memory: 36.36
MB (beats 43.73%)
// Synced by Code_Raginii
// ==========================================================================
int n=nums.size();
        int ans=0;

        for(int i=0;i<n;i++){
            unordered_set<int>st;

            for(int j=i;j<n;j++){
                st.insert(nums[j]);

                int distinct=st.size();
                ans+=distinct*distinct;

            }
        }
        return ans;
    }
};
