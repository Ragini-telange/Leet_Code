// ==========================================================================
// Problem: 240. Search a 2D Matrix II (Medium)
// LeetCode: https://leetcode.com/problems/search-a-2d-matrix-ii/
// Language: C++
// Synced by Code_Raginii
// ==========================================================================
int r=0;
     int c=n-1;


     while(r<m && c>=0){
        if(mat[r][c]==target){
            return true;
        }
        else if(mat[r][c]>target){
            c--;
        }   
        }
        else{
            r++;
        }  
   }
        return false;
};
