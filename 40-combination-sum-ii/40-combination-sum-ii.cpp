class Solution {
public:
    void findcombinations(int idx, int t, vector<int> &arr, vector<vector<int>> &ans, vector<int> &ds)
{
    if (t == 0)
    {
        ans.push_back(ds);
        return;
    }
    for (int i = idx; i < arr.size(); i++)
    {
        if (i > idx && arr[i] == arr[i - 1])
            continue;
        if (arr[i] > t)
            break;
        ds.push_back(arr[i]);
        findcombinations(i + 1, t - arr[i], arr, ans, ds);
        ds.pop_back();
    }
}
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>> ans;
        vector<int> ds;
        findcombinations(0,target,candidates,ans,ds);
        return ans;
    }
};