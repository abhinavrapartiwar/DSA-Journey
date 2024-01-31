#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cin >> num;
    for (int i = 0; i < log10(num) + 1; i++)
    {
        int ans = num >> i;
        ans = ans & 1;
        if (ans == 1)
        {
            cout << i;
            break;
        }
    }
    return 0;
}
