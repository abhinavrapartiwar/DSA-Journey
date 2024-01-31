#include <bits/stdc++.h>
using namespace std;
void permutation(string p, string u)
{
    if (u.length() == 0)
    {
        cout << p << endl;
        return;
    }
    char ch = u[0];
    for (int i = 0; i <= p.length(); i++)
    {
        string f = p.substr(0, i);
        string s = p.substr(i, p.length());
        permutation(f + ch + s, u.substr(1));
    }
}
int main()
{
    permutation("", "abcd");
    return 0;
}
