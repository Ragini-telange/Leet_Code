// ==========================================================================
// Problem: 14. Longest Common Prefix (Easy)
// LeetCode: https://leetcode.com/problems/longest-common-prefix/
// Language: C++
// Runtime: 0
ms (beats 100.00%)
// Memory: 11.73
MB (beats 79.84%)
// Synced by Code_Raginii
// ==========================================================================
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

       string ans="";
       for(int i=0;i<strs[0].size();i++){
        char c=strs[0][i];

        for(int j=0;j<strs.size();j++){
            if(i>=strs[j].size() || strs[j][i]!=c){
                return ans;
            }
        }
        ans+=c;

       }
       return ans;
    
    }
};
