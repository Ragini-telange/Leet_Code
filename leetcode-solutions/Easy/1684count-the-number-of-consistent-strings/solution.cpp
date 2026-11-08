// ==========================================================================
// Problem: 1684. Count the Number of Consistent Strings (Easy)
// LeetCode: https://leetcode.com/problems/count-the-number-of-consistent-strings/
// Language: C++
// Synced by Code_Raginii
// ==========================================================================
class Solution {
public:
    int countConsistentStrings(string 
    allowed, vector<string>& words) {

        int count=0;

        for (int i=0;i<words.size();i++){
            bool flag=true;
            
            for(int j=0;j<words[i].size();j++)
            {
                if(allowed.find(words[i][j])
                ==string::npos){
                   flag=false;
                   break;
                }
            }            
     if(flag==true){
     count++;
     }
        }
