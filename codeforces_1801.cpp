#include <bits/stdc++.h>
using namespace std;

// 2
// 5 5
// 2 2 1 3 2
// 2 3 3
// 2 3 4
// 1 5 5
// 1 4 9
// 2 4 3

void solve()
{
    int t = 0, q = 0, n = 0;
    cin >> t;
    while (t--)
    {
        vector<int> nums;
        int ele = 0;
        cin >> n >> q;
        while (n--)
        {
            cin >> ele;
            nums.push_back(ele);
        }
        int l = 0, r = 0, number = 0;
        while (q--)
        {
            cin >> l >> r >> number;
            int summ = 0;
            for (int i = 0; i < n; i++)
            {
                if (i <= (l - 1) && i >= (r - 1))
                {
                    summ += nums[i];
                }
            }
            
            if (!((summ + ((r - l + 1) * number)) % 2))
            {
                cout << "YES";
            }
            else
            {
                cout << "NO";
            }
        }
    }
}

int main()
{
    solve();
    return 0;
}