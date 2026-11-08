// ==========================================================================
// Problem: 389. Find the Difference (Easy)
// LeetCode: https://leetcode.com/problems/find-the-difference/
// Language: C++
// Synced by Code_Raginii
// ==========================================================================
char ans=0;
       for(char ch:s){
        ans^=ch;
       }   

       for(char ch:t){
        ans^=ch;
       }
       return ans;
       
 }
};
