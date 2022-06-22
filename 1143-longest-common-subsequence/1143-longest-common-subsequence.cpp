class Solution {
public:
    // int f(int i,int j,string &s, string &t,vector<vector<int>> &dp){
    //     if(i<0||j<0) return 0;
    //     if(dp[i][j]!=-1)return dp[i][j];
    //     if(s[i]==t[j]) return 1+f(i-1,j-1,s,t,dp);
    //     return dp[i][j]=max(f(i-1,j,s,t,dp),f(i,j-1,s,t,dp));
    // }
    int longestCommonSubsequence(string s, string t) {
        int m = s.size();
        int n = t.size();
        vector<vector<int>> dp(m+1,vector<int>(n+1,0));
        for(int i=0;i<=m;i++){
            for(int j=0;j<=n;j++){
                    if(i==0 || j==0){
                    dp[i][j] = 0;
                }
                else{
                
                    if(s[i-1]==t[j-1]){
                        dp[i][j]=1+dp[i-1][j-1];
                        }
                    else{
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);}
                    
                }
            }
        }
        return dp[m][n];
    }
};



// class Solution {
// public:
//     int longestCommonSubsequence(string text1, string text2) {
//         int n = text1.length();
//         int m = text2.length();
//         vector<vector<int>> dp(n+1, vector<int> (m+1, -1));
//         for(int i=0; i<=n; i++){
//             for(int j=0; j<=m; j++){
//                 if(i==0 || j==0){
//                     dp[i][j] = 0;
//                 }
//                 else{
//                     if(text1[i-1]== text2[j-1]){
//                         dp[i][j] = 1 + dp[i-1][j-1];
//                     } 
//                     else{
//                         dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
//                     }
//                 }
//             }
//         }
        
//         return dp[n][m];
//     }
// };