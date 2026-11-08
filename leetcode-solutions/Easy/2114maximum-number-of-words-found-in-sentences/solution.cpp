// ==========================================================================
// Problem: 2114. Maximum Number of Words Found in Sentences (Easy)
// LeetCode: https://leetcode.com/problems/maximum-number-of-words-found-in-sentences/
// Language: C++
// Synced by Code_Raginii
// ==========================================================================
int maxi=0;

        for(int i=0;i<n;i++){
            int count=0;

            for(int j=0;j<sentences[i].size();j++){


        if(sentences[i][j]==' '){
            count++;
        }
    }
    count=count+1;
    maxi=max(maxi,count);
}
        return maxi;
    }
};
