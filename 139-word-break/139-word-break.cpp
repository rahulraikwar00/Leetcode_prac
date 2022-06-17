
#include <bits/stdc++.h>

using namespace std;
class Solution
{
public:
    int dp[301];
    bool solve(int i, string s, set<string> &wordDict)
    {
        if (i == s.length())
        {
            return true;
        }
        // cout << endl;
        if (dp[i] != -1)
            return dp[i];
        string temp;
        for (int j = i; j < s.size(); j++)
        {
            temp += s[j];
            if (wordDict.find(temp) != wordDict.end())
            {

                if (solve(j + 1, s, wordDict))
                    return dp[i] = 1;
            }
        }
        return dp[i] = 0;
    }

public:
    bool wordBreak(string s, vector<string> &wordDict)
    {

        set<string> st;
        memset(dp, -1, sizeof(dp));
        for (auto i : wordDict)
            st.insert(i);
        vector<char> dp(wordDict.size(), '0');
        return solve(0, s, st);
    }
};