// ==========================================================================
// Problem: 1. Two Sum (Easy)
// LeetCode: https://leetcode.com/problems/two-sum/
// Language: C++
// Runtime: 0 ms
// Memory: 8.4 MB
// Synced by Code_Raginii
// ==========================================================================
class Solution {
public:      
vector<int>twoSum(vector<int>&arr,int tar){
int n=arr.size();
unordered_map<int,int>m;
vector<int>ans;
for(int i=0;i<n;i++){
    int first=arr[i];
    int sec=tar-first;

    if(m.find(sec)!=m.end()){
        ans.push_back(i);
        ans.push_back(m[sec]);

    }
    m[first]=i;
}
return ans;
}
};
