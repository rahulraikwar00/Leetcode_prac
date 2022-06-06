class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
       vector<vector<int>> arr;

    if (intervals.size() <= 1)
    {
        return intervals;
    }
    else
    {
        sort(intervals.begin(), intervals.end());
        arr.push_back(intervals[0]);
        for (int i = 1; i < intervals.size(); i++)
        {
            if (arr[arr.size() - 1][1] >= intervals[i][0])
            {
                arr[arr.size() - 1][1] = max(arr[arr.size() - 1][1], intervals[i][1]);
            }
            else
            {
                arr.push_back(intervals[i]);
            }
        }
    }
    return arr;
    }
};