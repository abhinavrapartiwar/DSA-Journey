#include <bits/stdc++.h>
using namespace std;
void print_subsequence(string str)
{
    int n = str.length();
    for (int i = 0; i < (1 << n); i++)
    {
        int t = i;
        string s;
        for (int j = 0; j < n; j++)
        {
            if (t & 1 == 1)
                s = s + str[j];
            t = t >> 1;
        }
        cout << "String is : " << s << endl;
    }
}
int main()
{
    string s = "abc";
    print_subsequence(s);
    return 0;
}