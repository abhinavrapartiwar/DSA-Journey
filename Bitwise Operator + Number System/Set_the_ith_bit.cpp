#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num, i;
    cin >> num;
    cin >> i;
    unsigned int ans = num | (1 << i);
    cout << ans;
    return 0;
}