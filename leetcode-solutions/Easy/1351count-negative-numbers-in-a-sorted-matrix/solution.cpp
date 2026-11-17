// ==========================================================================
// Problem: 1351. Count Negative Numbers in a Sorted Matrix (Easy)
// LeetCode: https://leetcode.com/problems/count-negative-numbers-in-a-sorted-matrix/
// Language: C++
// Synced by Code_Raginii
// ==========================================================================
int start=0;
        int n=grid.size();
        int end=n-1;

        int count=0;

        for(int i=0;i<grid.size();i++){

            int start=0;
            int end=grid[i].size()-1;
            int ans=grid[i].size();

            while(start<=end){
                int mid=start+(end-start)/2;

                if(grid[i][mid]<0){
                    ans=mid;
