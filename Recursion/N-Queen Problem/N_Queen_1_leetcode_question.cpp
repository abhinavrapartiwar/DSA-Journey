#include <bits/stdc++.h>
using namespace std;
void display(vector<vector<bool>> vec)
{
    for (auto i : vec)
    {
        for (auto j : i)
        {
            if (j)
                cout << "Q"
                     << "\t";
            else
                cout << "X"
                     << "\t";
        }
        cout << endl;
    }
}
bool issafe(vector<vector<bool>> vec, int r, int c)
{
    // check vertical r
    for (int i = 0; i < r; i++)
    {
        if (vec[i][c])
        {
            return false;
        }
    }

    // diagonal left
    int maxLeft = min(r, c);
    for (int i = 1; i <= maxLeft; i++)
    {
        if (vec[r - i][c - i])
        {
            return false;
        }
    }
    int x = vec.size() - c - 1;
    // diagonal right
    int maxRight = min(r, x);
    for (int i = 1; i <= maxRight; i++)
    {
        if (vec[r - i][c + i])
        {
            return false;
        }
    }
    return true;
}
int n_queen(vector<vector<bool>> vec, int r)
{
    if (r == vec.size())
    {
        display(vec);
        cout << endl;
        return 1;
    }
    int count = 0;
    for (int c = 0; c < vec.size(); c++)
    {
        if (issafe(vec, r, c))
        {
            vec[r][c] = true;
            count += n_queen(vec, r + 1);
            vec[r][c] = false;
        }
    }
    return count;
}
int main()
{
    int n = 4;
    vector<vector<bool>> vec(n, vector<bool>(n, false));
    cout << n_queen(vec, 0) << endl;
    return 0;
}