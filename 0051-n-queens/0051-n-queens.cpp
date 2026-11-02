class Solution {
public:
    vector<vector<string>> ans;

    bool isSafe(int row, int col, vector<string>& board, int n) {

        // Check upper column
        for(int i = 0; i < row; i++) {
            if(board[i][col] == 'Q')
                return false;
        }

        // Check upper left diagonal
        int i = row;
        int j = col;

        while(i >= 0 && j >= 0) {
            if(board[i][j] == 'Q')
                return false;

            i--;
            j--;
        }

        // Check upper right diagonal
        i = row;
        j = col;

        while(i >= 0 && j < n) {
            if(board[i][j] == 'Q')
                return false;

            i--;
            j++;
        }

        return true;
    }

    void solve(int row, vector<string>& board, int n) {

        // All queens placed
        if(row == n) {
            ans.push_back(board);
            return;
        }

        // Try every column
        for(int col = 0; col < n; col++) {

            if(isSafe(row, col, board, n)) {

                // Place queen
                board[row][col] = 'Q';

                // Move to next row
                solve(row + 1, board, n);

                // Backtrack
                board[row][col] = '.';
            }
        }
    }

    vector<vector<string>> solveNQueens(int n) {

        vector<string> board(n, string(n, '.'));

        solve(0, board, n);

        return ans;
    }
};