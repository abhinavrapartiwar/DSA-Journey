#include <bits/stdc++.h>
using namespace std;
bool isPalindrome(string s)
{
    string t;
    for (int i = s.length()-1; i >= 0; i--)
    {
        if (isalnum(s[i]))
            t += s[i];
    }
    if (s == t)
        return true;
    return false;
}
int main()
{

    return 0;
}