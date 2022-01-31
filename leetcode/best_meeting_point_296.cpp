#include <bits/stdc++.h>

using namespace std;

int summ(vector<int> &v, int cor)
{
    int summ = 0;
    for (int i : v)
    {
        summ += abs(cor - i);
    }
    return summ;
}

int meeting(vector<vector<int>> &v)
{
    vector<int> rows;
    vector<int> cols;
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; v[0].size(); j++)
        {
            if (v[i][j] == 1)
            {
                rows.push_back(i);
                cols.push_back(j);
            }
        }
    }
    sort(rows.begin(), rows.end());
    sort(cols.begin(), cols.end());
    int midr = (rows.size() / 2);
    int midc = (cols.size() / 2);

    return summ(rows, midr) + summ(cols, midc);

    // calculate the distance to the V[midr][midc]
};
