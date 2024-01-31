#include <bits/stdc++.h>
using namespace std;
void path_count(vector<vector<bool>> vec, int r, int c, string s)
{
    if (r == vec.size() - 1 && c == vec[0].size() - 1)
    {
        cout << s << endl;
        return;
    }
    if (vec[r][c] == false)
        return;
    if (r < vec.size() - 1)
        path_count(vec, r + 1, c, s + 'D');
    if (c < vec[0].size() - 1)
        path_count(vec, r, c + 1, s + 'R');
}
int main()
{
    vector<vector<bool>> ans{
        {true, true, true}, {true, false, true}, {true, true, true}};
    path_count(ans, 0, 0, "");
    return 0;
}