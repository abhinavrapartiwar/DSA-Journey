#include <bits/stdc++.h>
using namespace std;
// work only if order matters
// using memoisation
int funmem(int n, vector<int> &dp)
{
    if (n == 0)
        return 1;
    if (n < 0)
        return 0;
    if (dp[n] != -1)
        return dp[n];
    dp[n] = funmem(n - 1, dp) + funmem(n - 2, dp);
    return dp[n];
}
// using tabulation
int funtab(int n)
{
    vector<int> dp(n + 1, -1);
    dp[0] = 1;
    dp[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    return dp[n];
}
// using space optimised
int funso(int n)
{
    int prev = 1;
    int curr = 1;
    int ans = -1;
    for (int i = 2; i <= n; i++)
    {
        ans = curr + prev;
        prev = curr;
        curr = ans;
    }
    return ans;
}
int climbStairs(int n)
{
    // vector<int> dp(n + 1, -1);
    return funso(n);
}
int main()
{
    cout << "Ans is:-"
         << " ";
    cout << climbStairs(10);
    return 0;
}