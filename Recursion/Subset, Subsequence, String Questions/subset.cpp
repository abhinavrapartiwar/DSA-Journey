//https://leetcode.com/problems/subsets/
#include <bits/stdc++.h>
using namespace std;
void subsequence(string str1, string str2)
{
    if (str2.length() == 0)
    {
        cout << str1 << endl;
        return;
    }
    char ch1 = str2[0];
    subsequence(str1 + ch1, str2.substr(1));
    subsequence(str1, str2.substr(1));
}
int main()
{
    subsequence("", "abc");
    return 0;
}