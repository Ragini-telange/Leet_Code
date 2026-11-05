// ==========================================================================
// Problem: 3498. Reverse Degree of a String (Easy)
// LeetCode: https://leetcode.com/problems/reverse-degree-of-a-string/
// Language: C++
// Synced by Code_Raginii
// ==========================================================================
class Solution {
public:
    int reverseDegree(string s) {

   int ans=0;

   for(int i=0;i<s.size();i++){
            
    int revpos=26-(s[i]-'a');
   }
        }
    ans+=revpos*(i+1);
   return ans;
    };
