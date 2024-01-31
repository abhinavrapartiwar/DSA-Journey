#include <bits/stdc++.h>
using namespace std;
void path_print(vector<vector<int>> &vec, int r, int c, string s, int count, vector<vector<int>> path)
{
    if (r == vec.size() - 1 && c == vec[0].size() - 1)
    {
        path[r][c] = count;
        for (auto i : path)
        {
            for (auto j : i)
                cout << j << "\t";
            cout << endl;
        }
        cout << s << endl;
        cout << endl;
        return;
    }
    if (vec[r][c] == false) // false
        return;
    vec[r][c] = false; // false
    path[r][c] = count;
    if (r < vec.size() - 1) // down
    {
        path_print(vec, r + 1, c, s + 'D', count + 1, path);
    }
    if (r > 0) // Up
    {
        path_print(vec, r - 1, c, s + 'U', count + 1, path);
    }
    if (c > 0) // Left
    {
        path_print(vec, r, c - 1, s + 'L', count + 1, path);
    }
    if (c < vec[0].size() - 1) // Right
    {
        path_print(vec, r, c + 1, s + 'R', count + 1, path);
    }
    vec[r][c] = true; // true==0
    path[r][c] = 0;
}
int main()
{
    vector<vector<int>> ans{
        {true, true, true}, {true, true, true}, {true, true, true}};
    vector<vector<int>> path(ans.size(), vector<int>(ans[0].size())); // specifying size of vector as ans's length
    path_print(ans, 0, 0, "", 1, path);
    return 0;
}