class Solution {
public:
    int minInsertions(string s) {
        string str = s;
        int left = 0;
        int right = str.length() - 1;
        while (left < right) {
            swap(str[left], str[right]);
            left++;
            right--;
        }
        int n = s.length();
        int m = str.length();
        vector<vector<int>> dp(n+1,vector<int>(m+1,0));
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(s[i-1]==str[j-1]){
                    dp[i][j]=1+dp[i-1][j-1];
                }
                else{
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        return n-dp[n][m];
    }
};