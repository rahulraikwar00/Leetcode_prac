class Solution {
public:
    void subset(vector<int> &nums, int i, vector<int> &curr, vector<vector<int>> &ans){
        if( i==nums.size()){
            ans.push_back(curr);
            return;
            
        }
        curr.push_back(nums[i]);
        subset(nums,i+1,curr,ans);
        curr.pop_back();
        subset(nums,i+1,curr,ans);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> curr;
        vector<vector<int>> ans;
        subset(nums,0,curr,ans);
        return ans;
    }
};