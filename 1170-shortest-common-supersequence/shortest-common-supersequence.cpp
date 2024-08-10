class Solution {
public:
    string shortestCommonSupersequence(string str1, string str2) {
        int n = str1.length();
        int m = str2.length();
        
        // Step 1: Create the DP table for LCS length
        vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));
        
        // Fill the DP table
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                if (str1[i - 1] == str2[j - 1]) {
                    dp[i][j] = 1 + dp[i - 1][j - 1];
                } else {
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
                }
            }
        }
        
        // Step 2: Backtrack to find the LCS
        string res = "";
        int i = n, j = m;
        
        while (i > 0 && j > 0) {
            if (str1[i - 1] == str2[j - 1]) {
                res.push_back(str1[i - 1]);
                i--;
                j--;
            } else if (dp[i - 1][j] > dp[i][j - 1]) {
                i--;
            } else {
                j--;
            }
        }
        
        reverse(res.begin(), res.end());
        cout<<res;
        // Step 3: Build the SCS using LCS
        string output = "";
         int a= 0,b=0,c = 0;


        while(a<n || b<m){
            if(a<n && str1[a]!=res[c]){
                output += str1[a];
                a++;
            }
            else if(b<m && str2[b]!=res[c]){
                output += str2[b];
                b++;
            }
            else{
                output += res[c];
                c++;
                a++;
                b++;
            }
        }
        
        return output;
    }
};
