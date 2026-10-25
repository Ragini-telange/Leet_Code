// ==========================================================================
// Problem: 151. Reverse Words in a String (Medium)
// LeetCode: https://leetcode.com/problems/reverse-words-in-a-string/
// Language: C++
// Synced by Code_Raginii
// ==========================================================================
for(int i=0;i<n;i++){
            string word="";
        }
            while(i<n && s[i]!=' '){
                word+=s[i];
            }
                i++;
            reverse(word.begin(),word.end());
            if(word.size()>0){
                ans+=" "+word;
            }
        return ans.substr(1);

    }
};
