// ==========================================================================
// Problem: 1351. Count Negative Numbers in a Sorted Matrix (Easy)
// LeetCode: https://leetcode.com/problems/count-negative-numbers-in-a-sorted-matrix/
// Language: C++
// Synced by Code_Raginii
// ==========================================================================
int end=grid[i].size()-1;
            int ans=grid[i].size();

            while(start<=end){
                int mid=start+(end-start)/2;

                if(grid[i][mid]<0){
                    ans=mid;
                    end=mid-1;
                }
                else{
                    start=mid+1;
                }
            }
            count+=grid[i].size()-ans;
        }
            return count;
        }
