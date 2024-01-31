#include <bits/stdc++.h>
using namespace std;
vector<string> num_pad(string p, string up)
{
    if (up.length() == 0)
    {
        vector<string> list;
        list.push_back(p);
        return list;
    }
    int digit = up[0] - '0';
    vector<string> ans;
    for (int i = (digit - 1) * 3; i < digit * 3; i++)
    {
        char ch = (char)('a' + i);
        vector<string> ans1 = num_pad(p + ch, up.substr(1));
        ans.insert(ans.end(), ans1.begin(), ans1.end());
    }
    return ans;
}
int main()
{
    vector<string> ans = num_pad("", "14");
    for (auto value : ans)
        cout << value << endl; 
    return 0;
}