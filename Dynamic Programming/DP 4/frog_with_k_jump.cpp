#include <bits/stdc++.h>
using namespace std;
int funmem(int n, int k, vector<int> &h, vector<int> dp)
{
    if (n == 0)
        return 0;
    if (dp[n] != -1)
        return dp[n];
    int fcost = INT_MAX;
    for (int i = 1; i <= k; i++)
    {
        int cost;
        if (n - i < 0)
            cost = INT_MAX;
        else
        {
            cost = abs(h[n] - h[n - i]) + funmem(n - i, k, h, dp);
        }
        fcost = min(fcost, cost);
    }
    dp[n] = fcost;
    return dp[n];
}
int funtab(int n, int k, vector<int> &h)
{
    vector<int> dp(n + 1, -1);
    dp[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        int fcost = INT_MAX;
        for (int j = 1; j <= k; j++)
        {
            int cost;
            if (i - j < 0)
                cost = INT_MAX;
            else
            {
                cost = abs(h[i] - h[i - j]) + dp[i - j];
            }
            fcost = min(fcost, cost);
        }
        dp[i] = fcost;
    }
    return dp[n];
}
int funso(int n, int k, vector<int> &h)// we can reduce space optimised from O(n) to O(k) but if n==k then
{}
int frogJump(int n, int k, vector<int> &h)
{
    // vector<int> dp(n, -1);
    // return funmem(n - 1, k, h, dp);
    return funtab(n - 1, k, h);
}
int main()
{
    int n = 10;
    int k = 4;
    //               0   1   2   3   4
    vector<int> h = {40, 10, 20, 70, 80, 10, 20, 70, 80, 60};
    cout << "ans is: " << frogJump(n, k, h);
    return 0;
}
// int main()
// {
//     int n;
//     int k;
//     vector<int> h;
//     cin >> n >> k;
//     for (int i = 0; i < n; i++)
//     {
//         int t;
//         cin >> t;
//         h.push_back(t);
//     }
//     cout << frogJump(n, k, h);
//     return 0;
// }