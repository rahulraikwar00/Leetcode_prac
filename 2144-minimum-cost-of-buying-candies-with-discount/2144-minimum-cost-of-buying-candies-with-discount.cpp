class Solution {
public:
    int minimumCost(vector<int> &cost)
{
    sort(cost.begin(), cost.end(), greater<int>());
    int len = cost.size();
    int sum = 0;
    int to = 0;
    for (int i = 2; i < len; i += 3)
    {
        sum += cost[i];
    }
    cout << sum << endl;

    for (auto i : cost)
    {
        to += i;
    }
    cout << to << endl;
    return to - sum;
}
};