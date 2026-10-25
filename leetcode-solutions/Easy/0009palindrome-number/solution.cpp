// ==========================================================================
// Problem: 9. Palindrome Number (Easy)
// LeetCode: https://leetcode.com/problems/palindrome-number/
// Language: C++
// Synced by Code_Raginii
// ==========================================================================
long long reverse=0;

   while(x!=0){
    int digit=x%10;
    reverse=reverse*10+digit;
    x=x/10;
    if(original==reverse){
        return true;
    }
    else{
        return false;
    }
   }

    
   int original=x;
   }
};
