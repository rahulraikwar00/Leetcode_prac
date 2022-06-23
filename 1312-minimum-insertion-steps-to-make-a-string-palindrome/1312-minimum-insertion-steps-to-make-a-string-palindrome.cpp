class Solution {
public:
//     int f(int i ,int j,string s, string t, vector<vector<int>> &dp){
//         if(i<0||j<0) return 0;
        
//         if(dp[i][j]!=-1)return dp[i][j];
//         if(s[i]==t[j]){
//             return 1+f(i-1,j-1,s,t,dp);
//         }
//         return  dp[i][j] =max(f(i-1,j,s,t,dp),f(i,j-1,s,t,dp));
        
//     }
    int minInsertions(string s) {
        int n = s.length();
        // vector<vector<int>> dp(n+1,vector<int>(n+1,0));
        int dp[n+1][n+1];
        string t = s;
        reverse(s.begin(),s.end());
        
        
        for(int i=0 ;i<=n;i++){
            for(int j=0;j<=n;j++){
                if(i==0||j==0) dp[i][j]=0;
                else if(s[i-1]==t[j-1]) dp[i][j]=1+dp[i-1][j-1];
                else dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
        return (n-dp[n][n]);
    }
};