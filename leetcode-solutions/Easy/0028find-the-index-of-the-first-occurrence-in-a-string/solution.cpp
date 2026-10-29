// ==========================================================================
// Problem: 28. Find the Index of the First Occurrence in a String (Easy)
// LeetCode: https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/
// Language: C++
// Runtime: 0
ms (beats 100.00%)
// Memory: 9.12
MB (beats 44.09%)
// Synced by Code_Raginii
// ==========================================================================
class Solution {
public:
    int strStr(string haystack, string needle) {
        return haystack.find(needle);
    }
};
