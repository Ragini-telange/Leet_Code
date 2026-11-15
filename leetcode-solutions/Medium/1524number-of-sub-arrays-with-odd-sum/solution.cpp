// ==========================================================================
// Problem: 1524. Number of Sub-arrays With Odd Sum (Medium)
// LeetCode: https://leetcode.com/problems/number-of-sub-arrays-with-odd-sum/
// Language: C++
// Synced by Code_Raginii
// ==========================================================================
public:
    int numOfSubarrays(vector<int>& arr) {

        const int MOD=1000000007;

        long long ans=0;
        int odd=0;
        int even=1;
        int sum=0;

        for(int x:arr){
            sum+=x;

            if(sum%2){
                ans+=even;
                odd++;
            }
            else{
                ans+=odd;
                even++;
            }
            ans%=MOD;
        }
        return ans;
