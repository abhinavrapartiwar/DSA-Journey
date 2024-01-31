#include <bits/stdc++.h>
using namespace std;
int permutation(string p, string u)
{
    if (u.length() == 0)
    {
        return 1;
    }
    char ch = u[0];
    int count = 0;
    for (int i = 0; i <= p.length(); i++)
    {
        string f = p.substr(0, i);
        string s = p.substr(i, p.length());
        count += permutation(f + ch + s, u.substr(1));
    }
    return count;
}
int main()
{
    cout << permutation("", "abcd") << endl;
    return 0;
}