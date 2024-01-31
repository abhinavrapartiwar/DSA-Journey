//giving wwrong answer as java fucntion was used  
#include <bits/stdc++.h>
using namespace std;
string skip_a_character(string str, string c)
{
    if (str.length() == 0)
        return "";
    size_t found = str.find(c);
    if (found != string::npos)
    {
        return skip_a_character(str.substr(5), c);
    }
    else
    {
        return (str[0] + skip_a_character(str.substr(1), c));
    }
}
int main()
{
    string str = "wqqwappleddc";
    cout << "ans is" << endl;
    cout << skip_a_character(str, "apple") << endl;

    return 0;
}