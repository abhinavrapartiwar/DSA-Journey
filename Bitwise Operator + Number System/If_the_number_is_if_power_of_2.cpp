#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cin >> num;
    bool ans = (num & (num - 1)) == 0;
    cout << ans;
    return 0;
}