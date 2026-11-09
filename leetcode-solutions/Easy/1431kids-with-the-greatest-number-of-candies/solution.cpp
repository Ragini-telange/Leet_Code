// ==========================================================================
// Problem: 1431. Kids With the Greatest Number of Candies (Easy)
// LeetCode: https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/
// Language: C++
// Synced by Code_Raginii
// ==========================================================================
int max_candie=*max_element(candies.begin(),candies.end());

        vector<bool>ans;

        for(int i=0;i<n;i++){
            if(candies[i]+extraCandies>=max_candie){
               ans.push_back(true);

            }
            else{
                 ans.push_back(false); 
            }
     }
     return ans;
    }
        int n=candies.size();
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {

public:
class Solution {
