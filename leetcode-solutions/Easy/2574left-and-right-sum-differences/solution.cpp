// ==========================================================================
// Problem: 2574. Left and Right Sum Differences (Easy)
// LeetCode: https://leetcode.com/problems/left-and-right-sum-differences/
// Language: C++
// Synced by Code_Raginii
// ==========================================================================
for(int i=0;i<n;i++){

            int rightsum=totalsum-leftsum-nums[i];
        int leftsum=0;

            answer.push_back(abs(leftsum-rightsum));

            leftsum+=nums[i];

        }
        return answer;
    }
};
