// ==========================================================================
// Problem: 7. Reverse Integer (Medium)
// LeetCode: https://leetcode.com/problems/reverse-integer/
// Language: C++
// Synced by Code_Raginii
// ==========================================================================
long long int reverse=0;
            long long digit;

            while(x!=0){
                digit=x%10;
                reverse=reverse*10+digit;
                if(reverse>2147483647 || reverse<-2147483648){
                    return 0;
                }
                
            }
    }
    
            return reverse;
    

    int reverse(int x) {
public:
class Solution {
                x=x/10;
