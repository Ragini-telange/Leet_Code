// ==========================================================================
// Problem: 13. Roman to Integer (Easy)
// LeetCode: https://leetcode.com/problems/roman-to-integer/
// Language: C++
// Synced by Code_Raginii
// ==========================================================================
{'L',50},
            {'C',100},
            {'D',500},
            {'M',1000}
        };

        int ans=0;
        for(int i=0;i<s.size();i++){
            
                if(i+1<s.size()&& mp[s[i]]<mp[s[i+1]])
                ans-=mp[s[i]];
                
                else
                ans+=mp[s[i]];
                
            
        }
            return ans;
        
    }
};
