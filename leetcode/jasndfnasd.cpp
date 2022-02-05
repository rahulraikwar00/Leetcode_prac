#include <bits/stdc++.h>
#include <iostream>
using namespace std;

// print prime numbers between n and m
int printPrimes()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    int count = 0, maxl = 0;
    int last = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] > last)
        {
            count++;
            last = arr[i];
        }
        else
        {
            maxl = max(maxl, count);
            count = 1;
            last = arr[i];
        }
        // cout << "count: " << count << " maxl: " << maxl << endl;
    }
    // for (auto i : arr)
    //     cout << i << " ";
    return max(count, maxl);
}
int main()
{
    cout << printPrimes() << endl;
    return 0;
}
