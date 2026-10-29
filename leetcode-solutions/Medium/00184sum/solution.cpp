// ==========================================================================
// Problem: 18. 4Sum (Medium)
// LeetCode: https://leetcode.com/problems/4sum/
// Language: C++
// Synced by Code_Raginii
// ==========================================================================
while(k<l && nums[k]==nums[k+1])k++;
                    while(k<l && nums[l]==nums[l-1])l--;
                    k++;
                    l--;
                }
            }
        }
     }
     return ans;
    }
};
