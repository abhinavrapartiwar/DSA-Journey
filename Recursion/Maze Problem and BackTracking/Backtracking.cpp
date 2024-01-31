#include <bits/stdc++.h>
using namespace std;
void path_count(vector<vector<bool>> &vec, int r, int c, string s)
{
    if (r == vec.size() - 1 && c == vec[0].size() - 1)
    {
        cout << s << endl;
        return;
    }
    if (vec[r][c] == false)
        return;
    vec[r][c] = false;
    if (r < vec.size() - 1) // down
    {
        path_count(vec, r + 1, c, s + 'D');
    }
    if (r > 0) // Up
    {
        path_count(vec, r - 1, c, s + 'U');
    }
    if (c > 0) // Left
    {
        path_count(vec, r, c - 1, s + 'L');
    }
    if (c < vec[0].size() - 1) // Right
    {
        path_count(vec, r, c + 1, s + 'R');
    }
    vec[r][c] = true;
}
int main()
{
    vector<vector<bool>> ans{
        {true, true, true}, {true, true, true}, {true, true, true}};
    path_count(ans, 0, 0, "");
    return 0;
}