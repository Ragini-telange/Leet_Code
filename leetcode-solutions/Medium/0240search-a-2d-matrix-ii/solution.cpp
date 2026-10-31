// ==========================================================================
// Problem: 240. Search a 2D Matrix II (Medium)
// LeetCode: https://leetcode.com/problems/search-a-2d-matrix-ii/
// Language: C++
// Synced by Code_Raginii
// ==========================================================================
while(r<m && c>=0){
        if(target==mat[r][c]){
            return true;
        }
        else if(target<mat[r][c]){
            c--;
        }
        else{
            r++;
        }
     }
     return false;
       }
};
