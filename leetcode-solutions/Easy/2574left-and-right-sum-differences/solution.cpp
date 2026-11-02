// ==========================================================================
// Problem: 2574. Left and Right Sum Differences (Easy)
// LeetCode: https://leetcode.com/problems/left-and-right-sum-differences/
// Language: C++
// Runtime: 0
ms (beats 100.00%)
// Memory: 14.87
MB (beats 89.92%)
// Synced by Code_Raginii
// ==========================================================================
int leftsum=0;
        vector<int>answer;

        for(int i=0;i<nums.size();i++){
            int rightsum=totalsum-leftsum-nums[i];

            answer.push_back(abs(leftsum-rightsum));

            leftsum+=nums[i];
        }
        return answer;
    }
};
