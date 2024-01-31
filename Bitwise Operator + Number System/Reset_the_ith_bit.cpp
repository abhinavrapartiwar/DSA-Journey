#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num, i;
    cin >> num >> i;
    int ans = num & (~(1 << i));
    cout << ans;
    return 0;
}