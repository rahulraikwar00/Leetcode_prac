#include <bits/stdc++.h>
using namespace std;

// sort the digits of the number in ascending order
// and return the number
int sort(int n)
{
    int sorted = 0;
    while (n)
    {
        int d = n % 10;
        sorted = sorted * 10 + d;
        n /= 10;
    }
    return sorted;
}

int main()
{
    int n;
    cin >> n;
    cout << sortDigits(n);
    return 0;
}
