// ==========================================================================
// Problem: 34. Find First and Last Position of Element in Sorted Array (Medium)
// LeetCode: https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/
// Language: C++
// Synced by Code_Raginii
// ==========================================================================
start=mid+1;
                }
                else{
                    end=mid-1;
                }
            }
            return last;
        }
   
       vector<int> searchRange(vector<int>& nums,int target){
         int first=findFirst(nums,target);
         int last=findLast(nums,target);

        return {first,last};   
    }
};
