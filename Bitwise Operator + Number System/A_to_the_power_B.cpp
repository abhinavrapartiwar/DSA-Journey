#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num, pow, ans = 1;
    cin >> num;
    cin >> pow;
    while (pow > 0)
    {
        if (pow & 1 == 1)
            ans = ans * num;
        pow >>= 1;
        num *= num;
    }
    cout << ans;
    return 0;
}