// ==========================================================================
// Problem: 28. Find the Index of the First Occurrence in a String (Easy)
// LeetCode: https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/
// Language: C++
// Synced by Code_Raginii
// ==========================================================================
for(int i=0;i<=n-m;i++){

        int j=0;
       }

        while(j<m && haystack[i+j]==needle[j]){
            j++;
        }
        if(m==j){
            return i;
        }

       return -1;
    }
};
