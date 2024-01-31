#include <bits/stdc++.h>
using namespace std;
bool issafe(vector<vector<char>> &board, int r, int c, int num)
{
    // checking for row
    for (int i = 0; i < board.size(); i++)
    {
        int temp = (int)board[r][i] - 48;
        if (temp == num)
            return false;
    }
    // checking for column
    for (int i = 0; i < board.size(); i++)
    {
        int temp = (int)board[i][c] - 48;
        if (temp == num)
            return false;
    }
    int sq = sqrt(board.size());
    int start_row = r - r % sq;
    int start_col = c - c % sq;
    for (int j = start_row; j < start_row + sq; j++)
    {
        for (int k = start_col; k < start_col + sq; k++)
        {
            int x = (int)board[j][k] - 48;
            if (x == num)
                return false;
        }
    }
    return true;
}
bool sudoku_solver(vector<vector<char>> &board)
{
    int n = board.size();
    int r = -1;
    int c = -1;
    bool empty_element_left = true;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (board[i][j] == '.')
            {
                r = i;
                c = j;
                empty_element_left = false;
                break;
            }
        }
        // if we find empty elemnt in row, then break
        if (empty_element_left == false)
            break;
    }
    if (empty_element_left == true)
        return true;
    for (int num = 1; num <= 9; num++)
    {
        if (issafe(board, r, c, num))
        {
            board[r][c] = num + 48;
            if (sudoku_solver(board))
                return true;
            else
                board[r][c] = '.';
        }
    }
    return false;
}

int main()
{
    vector<vector<char>> board{{'5', '3', '.', '.', '7', '.', '.', '.', '.'}, {'6', '.', '.', '1', '9', '5', '.', '.', '.'}, {'.', '9', '8', '.', '.', '.', '.', '6', '.'}, {'8', '.', '.', '.', '6', '.', '.', '.', '3'}, {'4', '.', '.', '8', '.', '3', '.', '.', '1'}, {'7', '.', '.', '.', '2', '.', '.', '.', '6'}, {'.', '6', '.', '.', '.', '.', '2', '8', '.'}, {'.', '.', '.', '4', '1', '9', '.', '.', '5'}, {'.', '.', '.', '.', '8', '.', '.', '7', '9'}};
    if (sudoku_solver(board))
    {
        for (auto i : board)
        {
            for (auto j : i)
                cout << j << " ";
            cout << endl;
        }
    }
    return 0;
}   