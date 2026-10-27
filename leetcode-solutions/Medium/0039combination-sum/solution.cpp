// ==========================================================================
// Problem: 39. Combination Sum (Medium)
// LeetCode: https://leetcode.com/problems/combination-sum/
// Language: C++
// Synced by Code_Raginii
// ==========================================================================
solve(idx,candidates,target-candidates[idx],cur);
        cur.push_back(candidates[idx]);

        }
            return ;
        if(idx>=candidates.size()|| target<0){

        //backtrak
        }
            return ;
        cur.pop_back();

        solve(idx+1,candidates,target,cur);
    }

    vector<vector<int>>combinationSum(vector<int>&candidates,int target){
        vector<int >cur;
