class Solution {
public:
    
//     int f(int i, int prev,vector<int> &nums, vector<vector<int>> &dp){
//         if(i==nums.size()) return 0;
        
//         if(dp[i][prev+1]!=-1) return dp[i][prev+1]; 
//         int len = f(i+1,prev,nums,dp);
//         if(prev == -1 || nums[i]>nums[prev]){
//             len = max(len, 1+f(i+1,i,nums,dp));
//         }
//         return dp[i][prev+1]= len;
//     }
    
    int lengthOfLIS(vector<int>& nums) {
        
        int n = nums.size();
        vector<vector<int>> dp(n+1,vector<int>(n+1,0));
        for(int i=n-1;i>=0;i--){
            for(int prev = i-1;prev>=-1;prev--){
                
                int len = dp[i+1][prev+1];
                if(prev == -1 || nums[i]>nums[prev])
                    len = max(len, 1+dp[i+1][i+1]);
                dp[i][prev+1]= len;
                

                }
       
        }
         return dp[0][0];
        
    }
};