// ==========================================================================
// Problem: 17. Letter Combinations of a Phone Number (Medium)
// LeetCode: https://leetcode.com/problems/letter-combinations-of-a-phone-number/
// Language: C++
// Synced by Code_Raginii
// ==========================================================================
for(char ch :letters){
            solve(idx+1,digits,curr+ch);
        }
    }    



    
    vector<string> letterCombinations(string digits) {
       if(digits.empty())
       return{};
       solve(0,digits,"");
       return  ans;

    }
};
