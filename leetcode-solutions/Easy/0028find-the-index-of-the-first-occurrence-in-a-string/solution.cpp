// ==========================================================================
// Problem: 28. Find the Index of the First Occurrence in a String (Easy)
// LeetCode: https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/
// Language: C++
// Synced by Code_Raginii
// ==========================================================================
int h = haystack.size();
        int n = needle.size();

        for (int i = 0; i <= h - n; i++) {
            string ans = "";

            for (int j = i; j < i + n; j++) {
                ans = ans + haystack[j];
            }

            if (ans == needle) {
                return i;
            }
        }

        return -1;
public:
    int strStr(string haystack, string needle) {
class Solution {
