#include <bits/stdc++.h>
using namespace std;
void num_pad(string p, string up)
{
    if (up.length() == 0)
    {
        cout << p << endl;
        return;
    }
    int digit = up[0] - '0';
    for (int i = (digit - 1) * 3; i < digit * 3; i++)
    {
        char ch = (char)('a' + i);
        num_pad(p + ch, up.substr(1));
    }
}
int main()
{
    num_pad("", "89");
    return 0;
}