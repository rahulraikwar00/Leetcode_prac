class Solution
{
private:
    bool isCycle(int node, vector<vector<int>> &adj, vector<bool> &vis, vector<bool> &dfsVis)
    {

        vis[node] = true;
        dfsVis[node] = true;

        for (auto it : adj[node])
        {
            if (!vis[it])
            {
                if (isCycle(it, adj, vis, dfsVis))
                    return true;
            }
            else if (dfsVis[it])
                return true;
        }

        dfsVis[node] = false;
        return false;
    }

public:
    bool canFinish(int numCourses, vector<vector<int>> &prerequisites)
    {

        int n = prerequisites.size();

        vector<vector<int>> adj(numCourses);

        for (int i = 0; i < n; i++)
        {
            adj[prerequisites[i][0]].push_back(prerequisites[i][1]);
        }

        vector<bool> vis(numCourses, false);
        vector<bool> dfsVis(numCourses, false);

        for (int i = 0; i < numCourses; i++)
        {
            if (!vis[i])
            {
                if (isCycle(i, adj, vis, dfsVis))
                    return false;
            }
        }

        return true;
    }
};