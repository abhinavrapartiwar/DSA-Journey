#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, j;
    cin >> n >> i >> j;
    int a = -1 << (i + 1);
    int b = (1 << j) - 1;
    int mask = a | b;
    int ans = n & mask;
    cout << "Mask : " << mask << endl;
    cout << "Ans is : " << ans;
    return 0;
}