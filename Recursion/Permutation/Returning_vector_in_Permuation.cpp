#include <bits/stdc++.h>
using namespace std;
vector<string> permutation(string p, string u)
{
    if (u.length() == 0)
    {
        vector<string> list;
        list.push_back(p);
        return list;
    }
    char ch = u[0];
    vector<string> ans = {};
    for (int i = 0; i <= p.length(); i++)
    {
        string f = p.substr(0, i);
        string s = p.substr(i, p.length());
        vector<string> ans1 = permutation(f + ch + s, u.substr(1));
        ans.insert(ans.end(), ans1.begin(), ans1.end());
    }
    return ans;
}
int main()
{
    vector<string> ans = permutation("", "abc");
    for (auto value : ans)
        cout << value << endl;
    return 0;
}