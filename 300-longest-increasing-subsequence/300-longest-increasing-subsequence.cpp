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
        vector<int> cur(n+1,0);
        vector<int> pr(n+1,0);
        for(int i=n-1;i>=0;i--){
            for(int prev = i-1;prev>=-1;prev--){
                int len = pr[prev+1];
                if(prev == -1 || nums[i]>nums[prev])
                    len = max(len, 1+pr[i+1]);
                cur[prev+1]= len;
                

                }
            pr=cur;
       
        }
         return cur[0];
        
    }
};