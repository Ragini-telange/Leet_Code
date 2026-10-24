// ==========================================================================
// Problem: 1910. Remove All Occurrences of a Substring (Medium)
// LeetCode: https://leetcode.com/problems/remove-all-occurrences-of-a-substring/
// Language: C++
// Synced by Code_Raginii
// ==========================================================================
class Solution {
public:
    string removeOccurrences(string s, string part) {
    while(s.length()>0 && s.find(part)<s.length()){
        s.erase(s.find(part),part.length());
    }
    }
    return s;
};
