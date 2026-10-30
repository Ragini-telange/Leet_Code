// ==========================================================================
// Problem: 67. Add Binary (Easy)
// LeetCode: https://leetcode.com/problems/add-binary/
// Language: C++
// Runtime: 0
ms (beats 100.00%)
// Memory: 8.92
MB (beats 54.95%)
// Synced by Code_Raginii
// ==========================================================================
public:
    string addBinary(string a, string b) {


        int i=a.size()-1;
        int j=b.size()-1;
        int carry=0;

        string ans="";

        while(i>=0 || j>=0 || carry){
            int sum=carry;
        
            if(i>=0){
            sum+=a[i]-'0';
            i--;
        }
            if(j>=0){
            sum+=b[j]-'0';
            j--;
        }
            ans+=(sum%2)+'0';
            carry=sum/2;

    }
         reverse(ans.begin(),ans.end());
         return ans;
}
};
