class Solution {
public:
    void findcombinations(int i, int t, vector<int> &arr, vector<vector<int>> &ans, vector<int> &ds)
{

    if (i == arr.size())
    {
        if (t ==0){
            ans.push_back(ds);
        }
        return;
    }

    if(arr[i]<=t){
        ds.push_back(arr[i]);
        findcombinations(i,t-arr[i],arr,ans,ds);
        ds.pop_back();
    }
    findcombinations(i+1,t,arr,ans,ds);
}

    
    
    
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
            vector<vector<int>> ans;
    vector<int> ds;
    findcombinations(0,target,candidates,ans,ds);

    return ans;
        
    }
};