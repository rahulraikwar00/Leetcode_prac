class Solution {
public:
    int splitArray(vector<int>& nums, int m) {
   int low=0,right=0,n=nums.size();
        for(int i=0;i<n;++i) low=max(low,nums[i]), right+=nums[i];
    
        int ans=0;
        while(low<=right){
            int mid = (low+right)/2;
            int count=0,tempsum=0;
            for(int i=0;i<n;++i){
                if(tempsum+nums[i]<=mid) tempsum+=nums[i];
                else count++,tempsum=nums[i];
            }
            count++; 
            if(count<=m) right=mid-1, ans=mid;
            else low=mid+1;
        }
        return ans;
    }
//     	int splitArray(vector<int>& nums, int m) {
     
        
//         int mid=0,ans=0;
//         while(l<=r){
//             mid=(l+r)/2;

            

//         }  
//         return ans;
//     }
};