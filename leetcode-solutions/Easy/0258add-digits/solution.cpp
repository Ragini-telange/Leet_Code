// ==========================================================================
// Problem: 258. Add Digits (Easy)
// LeetCode: https://leetcode.com/problems/add-digits/
// Language: C++
// Synced by Code_Raginii
// ==========================================================================
public:
    int addDigits(int num) {
       
        while(num>=10){

            int sum=0;

            while(num>0){

            int digit=num%10;
            sum+=digit;
            num/=10;
        }
        num=sum;
    }
    return num;
    }
};
