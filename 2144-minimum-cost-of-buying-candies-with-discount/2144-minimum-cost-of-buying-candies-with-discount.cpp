class Solution {
public:
    int minimumCost(vector<int> &cost)
{
    sort(cost.begin(), cost.end(), greater<int>());
    int len = cost.size();
    int sum = 0;
    for (int i = 0; i < len; i ++)
    { if(i%3==2){
        continue;
    }
        sum += cost[i];
    }
    cout << sum<< endl;
    return sum;
}
};