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

int minInsertions(string s1) {
        int n = s1.size();
        int DP[n+1][n+1];
        string s2  =s1;
        reverse(s1.begin(),s1.end());
        
        for(int i=0;i<=n;i++){
            for(int j=0;j<=n;j++){
                if(i==0 || j==0){
                    DP[i][j] = 0;
                }
                else if(s1[i-1]==s2[j-1]){
                    DP[i][j] = DP[i-1][j-1]+1;
                }
                else{
                    DP[i][j] = max(DP[i-1][j],DP[i][j-1]);
                }
            }
        }
    
        return n-DP[n][n];
    }

};