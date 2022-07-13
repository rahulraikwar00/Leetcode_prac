class Solution {
public:
    int countHousePlacements(int n) {
        vector<long long> dp(2,0); 
        dp[0] = 2;
        dp[1] = 3;
        if(n<=2)
            return dp[n-1]*dp[n-1];
        int i;
        long long m = (pow(10,9)+7);
        
        for(i=2;i<n;i++){
            dp[i%2] = ((dp[(i-1)%2])%m+(dp[(i-2)%2])%m)%m;
        }
        return (((dp[(i-1)%2])%m)*((dp[(i-1)%2])%m))%m;
    }
};