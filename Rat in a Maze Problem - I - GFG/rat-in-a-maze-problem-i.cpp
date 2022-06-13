// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function template for C++

class Solution{
    public:
    string dir = "DLRU";
vector<int> di = {1, 0, 0, -1};
vector<int> dj = {0, -1, 1, 0};

    void ratePath(vector<vector<int>> &arr, int i, int j, int n, string &path, vector<vector<int>> &visited,vector<string> &ans)
{
    {
        if (i >= n || j >= n || i < 0 || j < 0 || visited[i][j] == -1 || arr[i][j] == 0)
            return;

        if (i == n - 1 && j == n - 1)
        {
            ans.push_back(path);
            return;
        }
        visited[i][j] = -1;
        // loop for 4 directions
        for (int x = 0; x < 4; x++)
        {
            path += dir[x];
            ratePath(arr, i + di[x], j + dj[x], n, path, visited,ans);
            path.pop_back();
        }
        visited[i][j] = 1;
    }
}
    
    
    vector<string> findPath(vector<vector<int>> &m, int n) {
        vector<string> ans;
        string path="";
        vector<vector<int>> visited(n, vector<int>(n, 0));
        ratePath(m,0,0,n,path,visited,ans);
        return ans;
        // Your code goes here
    }
};

    


// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends