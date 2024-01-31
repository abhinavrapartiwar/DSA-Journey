#include <bits/stdc++.h>
using namespace std;
bool f(int i, int j, string s)
{
    if (i > j)
        return true;
    if (s[i] != s[j])
        return false;
    return f(i + 1, j - 1, s);
}
int main()
{
    string s="hello";
    cout<<f(0,4,s);
    return 0;
}