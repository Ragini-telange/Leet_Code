// ==========================================================================
// Problem: 28. Find the Index of the First Occurrence in a String (Easy)
// LeetCode: https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/
// Language: C++
// Runtime: 0
ms (beats 100.00%)
// Memory: 8.86
MB (beats 99.30%)
// Synced by Code_Raginii
// ==========================================================================
int n=needle.size();

      for(int i=0;i<=m-n;i++){
        int j=0;
        while(j<n && haystack[i+j]==needle[j]){
            j++;
        }
        if(j==n){
            return i;
        }

      }
      return -1;

    }
      int m=haystack.size();
    int strStr(string haystack, string needle) {
public:
class Solution {
