
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num, magic = 0;
    cin >> num;
    int n = log2(num) + 1;
    for (int i = 1; i <= n; i++)
    {
        int ans = num & 1;
        magic = magic + pow(5, i) * ans;
        num = num >> 1;
    }
    cout << magic;
    return 0;
}