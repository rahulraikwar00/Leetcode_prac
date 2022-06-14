class Solution {
public:
    vector<int> di = {0, 1, -1, 0};
vector<int> dj = {1, 0, 0, -1};
bool findpath(vector<vector<char>> &board, string &word, int row, int col, int i, vector<vector<int>> &vis)
{
    if (i == word.size())
    {
        // s.pop_back();
        // cout << "found" << s << endl;
        return true;
    }
    if (row < 0 || row >= board.size() || col < 0 || col >= board[0].size())
        return false;
    if (board[row][col] != word[i])
        return false;
    if (vis[row][col] == 1)
        return false;
    vis[row][col] = 1;
    for (int k = 0; k < 4; k++)
    {
        // print the path
        // s += path[k];

        if (findpath(board, word, row + di[k], col + dj[k], i + 1, vis))
            return true;
        // s.pop_back();
    }
    vis[row][col] = 0;
    return false;
}
    
    
    bool exist(vector<vector<char>>& board, string word) {
        
        
         if (word.size() == 0)
        return true;
    if (board.size() == 0)
        return false;
    int m = board.size(), n = board[0].size();
    vector<vector<int>> vis(m, vector<int>(n, 0));
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (findpath(board, word, i, j, 0, vis))
                return true;
        }
    }
    return false;
        
    }
};