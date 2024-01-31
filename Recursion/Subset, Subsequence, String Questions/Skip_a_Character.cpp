#include <bits/stdc++.h>
using namespace std;
string skip_a_character(string str, char c)
{
    if (str.length() == 0)
        return "";
    if (str[0] == c)
    {
        return skip_a_character(str.substr(1), c);
    }
    else
    {
        return (str[0] + skip_a_character(str.substr(1), c));
    }
}
int main()
{
    string str = "baccad";
    cout << "ans is" << endl;
    cout << skip_a_character(str, 'a') << endl;

    return 0;
}