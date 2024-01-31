#include <bits/stdc++.h>
using namespace std;
void display(vector<vector<bool>> vec)
{
    for (auto i : vec)
    {
        for (auto j : i)
        {
            if (j)
                cout << "K"
                     << "\t";
            else
                cout << "."
                     << "\t";
        }
        cout << endl;
    }
}
bool isvalid(vector<vector<bool>> vec, int r, int c)
{
    if (r >= 0 && r < vec.size() && c >= 0 && c < vec[0].size())
        return true;
    return false;
}
bool issafe(vector<vector<bool>> vec, int r, int c)
{
    if (isvalid(vec, r - 1, c - 2))
    {
        if (vec[r - 1][c - 2])
            return false;
    }
    if (isvalid(vec, r - 2, c - 1))
    {
        if (vec[r - 2][c - 1])
            return false;
    }
    if (isvalid(vec, r - 2, c + 1))
    {
        if (vec[r - 2][c + 1])
            return false;
    }
    if (isvalid(vec, r - 1, c + 2))
    {
        if (vec[r - 1][c + 2])
            return false;
    }
    return true;
}
void n_knight(vector<vector<bool>> vec, int r, int c, int knight)
{
    if (knight == 0)
    {
        display(vec);
        cout << endl;
        return;
    }
    if (r == vec.size() - 1 && c == vec[0].size())
        return;
    if (c == vec[0].size())
    {
        n_knight(vec, r + 1, 0, knight);
        return;
    }
    if (issafe(vec, r, c))
    {
        vec[r][c] = true;
        n_knight(vec, r, c + 1, knight - 1);
        vec[r][c] = false;
    }
    n_knight(vec, r, c + 1, knight);
}
int main()
{
    int n = 4;
    vector<vector<bool>> vec(n, vector<bool>(n, false));
    n_knight(vec, 0, 0, n);
    return 0;
}