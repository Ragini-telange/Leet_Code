// ==========================================================================
// Problem: 875. Koko Eating Bananas (Medium)
// LeetCode: https://leetcode.com/problems/koko-eating-bananas/
// Language: C++
// Synced by Code_Raginii
// ==========================================================================
int minEatingSpeed(vector<int>& piles, int h) {
        int start=1;
        int end=*max_element(piles.begin(),piles.end());
        int ans=end;


        while(start<=end){
            int mid=start+(end-start)/2;

            if(totalhours(piles,mid)<=h){
                ans=mid;
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
        return ans;
    }   
};
