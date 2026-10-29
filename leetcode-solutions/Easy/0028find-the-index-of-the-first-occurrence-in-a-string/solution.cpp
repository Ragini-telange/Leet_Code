// ==========================================================================
// Problem: 28. Find the Index of the First Occurrence in a String (Easy)
// LeetCode: https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/
// Language: C++
// Synced by Code_Raginii
// ==========================================================================
class Solution {
public:
    int strStr(string haystack, string needle) {
        
        for(int i = 0;i<haystack.size()-needle.size();i++){
            int j=0;
            while(j<needle.size()&& haystack[i+j]==needle[j]){
                j++;
            }
            if(j==needle.size()){
                return i;

            }
        }
return -1;
    }
};
