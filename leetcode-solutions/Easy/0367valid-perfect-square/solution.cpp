// ==========================================================================
// Problem: 367. Valid Perfect Square (Easy)
// LeetCode: https://leetcode.com/problems/valid-perfect-square/
// Language: C++
// Synced by Code_Raginii
// ==========================================================================
}
            else if(mid*mid>num){
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
        return false;    
    }
};
                return true;
