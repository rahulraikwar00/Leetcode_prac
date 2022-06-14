
class Solution
{

    bool solve(vector<vector<char>> &board, string word, int row, int col, int ind)
    {

        if (ind == word.size())
        {
            return true;
        }
        if (row < 0 || col < 0 || row >= board.size() || col >= board[0].size())
            return false;
        if (board[row][col] != word[ind])
            return false;
        board[row][col] = '0';

        if (solve(board, word, row, col + 1, ind + 1) || solve(board, word, row + 1, col, ind + 1) || solve(board, word, row, col - 1, ind + 1) || solve(board, word, row - 1, col, ind + 1))
            return true;

        board[row][col] = word[ind];
        return false;
    }

public:
    bool exist(vector<vector<char>> &board, string word)
    {
        int n = board.size();
        int m = board[0].size();
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (board[i][j] == word[0])
                {
                    if (solve(board, word, i, j, 0))
                        return true;
                }
            }
        }
        return false;
    }
};
