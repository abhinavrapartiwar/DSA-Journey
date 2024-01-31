#include <bits/stdc++.h>
using namespace std;
vector<string> printing_path(string s, int r, int c)
{
    if (r == 1 && c == 1)
    {
        vector<string> ans;
        ans.push_back(s);
        return ans;
    }
    vector<string> ans1;
    vector<string> left;
    vector<string> right;
    vector<string> diagonal;
    if (r > 1)
        left = printing_path(s + " D", r - 1, c);
    if (c > 1)
        right = printing_path(s + " R", r, c - 1);
    if (r > 1 || c > 1)
        diagonal = printing_path(s + " DIA", r - 1, c - 1);
    left.insert(left.end(), right.begin(), right.end());
    ans1.insert(ans1.end(), left.begin(), left.end());
    ans1.insert(ans1.end(), diagonal.begin(), diagonal.end());
    return ans1;
}
int main()
{
    vector<string> ans = printing_path("", 5, 5);
    cout << ans.size() << endl;
    for (auto value : ans)
        cout << value << endl;
    return 0;
}