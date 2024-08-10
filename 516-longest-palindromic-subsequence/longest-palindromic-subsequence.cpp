class Solution {
public:
    int longestPalindromeSubseq(string s) {
        string s1 = s;

         int left = 0;
    int right = s1.length() - 1;

    // Loop until the two pointers meet in the middle
    while (left < right) {
        // Swap characters at position left and right
        swap(s1[left], s1[right]);

        // Move the left pointer to the right
        left++;

        // Move the right pointer to the left
        right--;
    }

        int n = s.length();
        int m = s1.length();
        int c = 0;
        vector<vector<int>>dp(n+1,vector<int>(m+1,0));
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(s[i-1]==s1[j-1]){
                    dp[i][j]=1+dp[i-1][j-1];
                }
                else{
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        return dp[n][m];
    }
};