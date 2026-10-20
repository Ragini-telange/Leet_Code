// ==========================================================================
// Problem: 13. Roman to Integer (Easy)
// LeetCode: https://leetcode.com/problems/roman-to-integer/
// Language: C++
// Runtime: 9
ms (beats 34.02%)
// Memory: 13.49
MB (beats 16.73%)
// Synced by Code_Raginii
// ==========================================================================
class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> mp = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };

        int ans = 0;

        for (int i = 0; i < s.size(); i++) {
            if (i + 1 < s.size() && mp[s[i]] < mp[s[i + 1]])
                ans -= mp[s[i]];
            else
                ans += mp[s[i]];
        }

        return ans;
