#include <bits/stdc++.h>
using namespace std;
int ith(int num, int i)
{
    int ans = num & (1 << (i - 1));
    return ans;
}
int main()
{
    int num, i;
    cin >> num >> i;
    cout << ith(num, i);
    return 0;
}