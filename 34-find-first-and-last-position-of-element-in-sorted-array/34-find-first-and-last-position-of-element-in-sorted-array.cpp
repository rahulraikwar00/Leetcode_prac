class Solution {
public:
    int bsf(vector<int> &arr,int target){
        int l= 0,h=arr.size()-1;
        while(l<=h){
            int mid = l+(h-l)/2;
            if(arr[mid]<target){
                l=mid+1;
            }
            else h=mid-1;
        }
        if(l==arr.size()||arr[l]!=target)return -1;
        return l;
        
    }
    int bsl(vector<int> &arr,int target){
        int l= 0,h=arr.size()-1;
        while(l<=h){
            int mid = l+(h-l)/2;
            if(arr[mid]>target){
                h=mid-1;
            }
            else l=mid+1;
        }
        if(h<0||arr[h]!=target)return -1;
        return h;
    }
    
    
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>ans(2);
        ans[0] = bsf(nums, target);
        ans[1] = bsl(nums, target);
        return ans;
    }
};

// class Solution {
// public:
//     int bsf(vector<int>& nums, int target){
//         int l=0, r=nums.size()-1, mid;
//         while(l<=r){
//             mid = (r-l)/2+l;
//             if(nums[mid]<target)l=mid+1;
//             else r=mid-1;
//         }
//         if(l==nums.size() || nums[l]!=target)return -1;
//         return l;
//     }
//     int bsl(vector<int>& nums, int target){
//         int l=0, r=nums.size()-1, mid;
//         while(l<=r){
//             mid = (r-l)/2+l;
//             if(nums[mid]>target)r=mid-1;
//             else l=mid+1;
//         }
//         if(r<0 || nums[r]!=target)return -1;
//         return r;
//     }
//     vector<int> searchRange(vector<int>& nums, int target) {
//         vector<int>ans(2);
//         ans[0] = bsf(nums, target);
//         ans[1] = bsl(nums, target);
//         return ans;
//     }
// };