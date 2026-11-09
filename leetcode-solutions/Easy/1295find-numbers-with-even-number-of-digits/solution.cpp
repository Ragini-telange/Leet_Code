// ==========================================================================
// Problem: 1295. Find Numbers with Even Number of Digits (Easy)
// LeetCode: https://leetcode.com/problems/find-numbers-with-even-number-of-digits/
// Language: C++
// Synced by Code_Raginii
// ==========================================================================
for(int i=0;i<n;i++){

            int digits=0;
            int num=nums[i];

        while(num>0){
            num=num/10;
            digits++;
        }

        if(digits%2==0){
            count++;
        }
        }
        return count;
    }
};
