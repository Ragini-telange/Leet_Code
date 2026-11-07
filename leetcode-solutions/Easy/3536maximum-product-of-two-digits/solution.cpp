// ==========================================================================
// Problem: 3536. Maximum Product of Two Digits (Easy)
// LeetCode: https://leetcode.com/problems/maximum-product-of-two-digits/
// Language: C++
// Synced by Code_Raginii
// ==========================================================================
int maxProduct(int n) {

       vector<int>digits;
       int maxprod;

       while(n>0){
        digits.push_back(n%10);
        n/=10;
       }

       for(int i=0;i<digits.size();i++){
        for(int j=i+1;j<digits.size();j++){
            maxprod=max(maxprod,digits[i]*digits[j]);
        }
       }
       return maxprod;
    }
};
class Solution {
public:
