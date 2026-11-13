// ==========================================================================
// Problem: 229. Majority Element II (Medium)
// LeetCode: https://leetcode.com/problems/majority-element-ii/
// Language: C++
// Runtime: 0
ms (beats 100.00%)
// Memory: 23.96
MB (beats 41.49%)
// Synced by Code_Raginii
// ==========================================================================
}
        }


        vector<int>ans;

        if(count1>n/3){
            ans.push_back(candidate1);
        }

        if(count2>n/3){
            ans.push_back(candidate2);
        }
        return ans;
    }
};
