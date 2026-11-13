// ==========================================================================
// Problem: 229. Majority Element II (Medium)
// LeetCode: https://leetcode.com/problems/majority-element-ii/
// Language: C++
// Synced by Code_Raginii
// ==========================================================================
else{
                count1--;
                count2--;
            }
        }

        count1=0;
        count2=0;

        for(int i=0;i<n;i++){

            if(nums[i]==c1){
                count1++;
            }
            else if(nums[i]==c2){
                count2++;
            }
        }


        vector<int>ans;
