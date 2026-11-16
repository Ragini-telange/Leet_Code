// ==========================================================================
// Problem: 2243. Calculate Digit Sum of a String (Easy)
// LeetCode: https://leetcode.com/problems/calculate-digit-sum-of-a-string/
// Language: C++
// Synced by Code_Raginii
// ==========================================================================
class Solution {
public:
    string digitSum(string s, int k) {

       while(s.length()>k){
        string temp="";

        for(int i=0;i<s.length();i+=k){
            int sum=0;

            for(int j=i;j<min(i+k,(int)s.length
            ());j++){
                sum +=s[j]-'0';
            }
            temp+=to_string(sum);
     }
     s=temp;
