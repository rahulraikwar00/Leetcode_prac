class Solution {
public:
    int f(int l, int h,vector<int>&nums){
        if(l>=h) return nums[h];
        int mid = (l+h)/2;
        if(nums[mid]<nums[h]) return f(l,mid,nums);
        return f(mid+1,h,nums);
    }
    int findMin(vector<int>& nums) {
    return f(0,nums.size()-1,nums);
    }
};