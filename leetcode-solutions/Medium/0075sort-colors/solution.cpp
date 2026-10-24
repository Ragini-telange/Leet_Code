// ==========================================================================
// Problem: 75. Sort Colors (Medium)
// LeetCode: https://leetcode.com/problems/sort-colors/
// Language: C++
// Synced by Code_Raginii
// ==========================================================================
if(arr[mid]==0){
                swap(arr[mid],arr[low]);
            }
                mid++;
                low++;
            else if(arr[mid]==1){
                mid++;
            }
            else{
                swap(arr[mid],arr[high]);
                high--;
            }
        }
    }
};
